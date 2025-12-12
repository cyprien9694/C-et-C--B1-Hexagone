#include <iostream>
#include <vector>
#include <memory>
#include "Team.hpp"
#include "SpiderMan.hpp"
#include "IronMan.hpp"
#include "Hulk.hpp"
#include "DocteurStrange.hpp"

void fight(const std::vector<std::shared_ptr<Team>>& teams) {
    int currentRound = 1;
    while (teams[0]->hasAliveMembers() && teams[1]->hasAliveMembers()) {
        std::cout << "\n------ ROUND " << currentRound << " ------" << std::endl;
        for (const auto& team : teams) {
            auto attacker = team->getRandomAliveMember();
            if (!attacker) continue;

            auto opponentTeam = (team == teams[0]) ? teams[1] : teams[0];
            auto target = opponentTeam->getRandomAliveMember();
            if (!target) continue;

            std::cout << team->getName() << " | " << attacker->getName()
                      << " attacks " << target->getName() << "!" << std::endl;
            attacker->attack(*target);
        }
        currentRound++;
    }

    if (teams[0]->hasAliveMembers()) {
        std::cout << "Team " << teams[0]->getName() << " wins!" << std::endl;
    } else {
        std::cout << "Team " << teams[1]->getName() << " wins!" << std::endl;
    }
}

int main() {
    auto spiderman = std::make_shared<SpiderMan>("Spider-Man");
    auto ironman = std::make_shared<IronMan>("Iron Man");
    auto hulk = std::make_shared<Hulk>("Hulk");
    auto docteurstrange = std::make_shared<DocteurStrange>("Doctor Strange");

    auto team1 = std::make_shared<Team>("Avengers");
    team1->addMember(spiderman);
    team1->addMember(ironman);

    auto team2 = std::make_shared<Team>("Defenders");
    team2->addMember(hulk);
    team2->addMember(docteurstrange);

    std::vector<std::shared_ptr<Team>> teams = {team1, team2};
    fight(teams);

    return 0;
}