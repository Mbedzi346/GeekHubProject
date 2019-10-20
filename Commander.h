#ifndef COMMANDER_H
#define COMMANDER_H

#include "Command.h"

class Commander : public CrewMember {
    public:
        Commander(Command*);
        void proceedWithInvasion();
    private:
        Command* invadeCommand;
};

#endif
