#ifndef COMMANDER_H
#define COMMANDER_H

#include "Command.h"
#include "CrewMember.h"

class Commander : public CrewMember {
    public:
        Commander(){};
        Commander(Command*);
        void proceedWithInvasion();
        void setCommand(Command*);
    private:
        Command* invadeCommand;
};

#endif
