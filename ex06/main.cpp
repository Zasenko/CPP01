#include "Harl.hpp"

int get_level(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int lev = -1;
    for (int i = 0; i < 4 && lev == -1; i++)
    {
        level == levels[i] ? lev = i : lev = -1;
    }
    return lev;
}

void print_level(int level) {
    switch (level)
    {
    case 0:
        std::cout << "[ DEBUG ]\n";
        break;
    case 1:
        std::cout << "[ INFO ]\n";
        break;
    case 2:
        std::cout << "[ WARNING ]\n";
        break;
    case 3:
        std::cout << "[ ERROR ]\n";
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
}

int main(int ac, char *av[]) {
    if (ac != 2) {
        std::cout << "Wrong number of arguments!\n";
        return 0;
    }
    std::string arg = av[1];
    Harl harl = Harl();
    int level = get_level(arg);
    if (level == -1) {
        print_level(-1);
        std::cout << "\n";
        return 0;
    }
    for (int i = level; i < 4; i++) {
        print_level(i);
        harl.complain(i);
        std::cout << "\n";
    }
    return 0;
}