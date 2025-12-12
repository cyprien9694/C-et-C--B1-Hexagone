#include "Team.hpp"
#include <cstdlib> // For rand()

Team::Team(const std::string& name) : teamName(name) {}

void Team::addMember(std::shared_ptr<SuperHero> hero) {
    members.push_back(hero);
}

bool Team::hasAliveMembers() const {
    for (const auto& member : members) {
        if (member->isAlive()) {
            return true;
        }
    }
    return false;
}

std::shared_ptr<SuperHero> Team::getRandomAliveMember() {
    std::vector<std::shared_ptr<SuperHero>> aliveMembers;
    for (const auto& member : members) {
        if (member->isAlive()) {
            aliveMembers.push_back(member);
        }
    }
    if (aliveMembers.empty()) {
        return nullptr;
    }
    int randomIndex = rand() % aliveMembers.size();
    return aliveMembers[randomIndex];
}

const std::string& Team::getName() const {
    return teamName;
}