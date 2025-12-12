#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <memory>
#include "SuperHero.hpp"

class Team {
private:
    std::string teamName;
    std::vector<std::shared_ptr<SuperHero>> members;

public:
    Team(const std::string& name);

    void addMember(std::shared_ptr<SuperHero> hero);
    bool hasAliveMembers() const;
    std::shared_ptr<SuperHero> getRandomAliveMember();
    const std::string& getName() const;
};

#endif