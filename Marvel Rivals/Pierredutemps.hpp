#ifndef PIERREDUTEMPS_HPP
#define PIERREDUTEMPS_HPP

#include "Artifact.hpp"
#include "SuperHero.hpp"

class Pierredutemps : public Artifact {
public:
    void applyEffect(SuperHero& hero) override;
};

#endif