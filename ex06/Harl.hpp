#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain(int level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif