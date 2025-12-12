#include "SuperHero.hpp"
#include <cstdlib>
#include <ctime>

class DocteurStrange : public SuperHero {
private:
    int healUses;
public:
    DocteurStrange();    
    DocteurStrange(const std::string& name);
    void displayInfo() const;
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target);
};