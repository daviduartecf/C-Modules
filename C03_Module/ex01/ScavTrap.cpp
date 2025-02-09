#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "Default ScavTrap constructor called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDmg = 20;
    _guard_state = false;
}
ScavTrap::~ScavTrap() {
    std::cout << "Default ScavTrap destructor called." << std::endl;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        _guard_state = other._guard_state;
    }
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    _guard_state = other._guard_state;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "Name ScavTrap constructor called." << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDmg = 20;
    _guard_state = false;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_energyPoints == 0)
        std::cout << "ScavTrap " << this->_name << " doesn't have energy points!" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " can't attack, it is dead!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    if (_guard_state == false) {
        std::cout << "ScavTrap " << _name << " is now in guard keeper mode." << std::endl;
        _guard_state = true;
    }
    else
        std::cout << "ScavTrap " << _name << " is already in guard keeper mode." << std::endl;
}
