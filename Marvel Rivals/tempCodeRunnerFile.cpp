<< std::endl;
        for (const auto& team : teams) {
            auto attacker = team->getRandomAliveMember();
            if (!attacker) continue;
