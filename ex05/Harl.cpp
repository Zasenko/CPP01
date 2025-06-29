#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my  7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int get_level(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int lev = -1;
    for (int i = 0; i < 4 && lev == -1; i++)
    {
        level == levels[i] ? lev = i : lev = -1;
    }
    return lev;
}

void Harl::complain(std::string level) {

    void (Harl::*fptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    switch (get_level(level)) {
        case 0:
            (this->*fptr[0])();
            break;
        case 1:
            (this->*fptr[1])();
            break;
        case 2:
            (this->*fptr[2])();
            break;
        case 3:
            (this->*fptr[3])();
            break;
        default:
            break;
    }
}
