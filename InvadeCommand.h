#ifndef INVADECOMMAND_H
#define INVADECOMMAND_H

#include "Command.h"
#include "Spaceship.h"

class InvadeCommand: public Command {
    public:
        InvadeCommand(Spaceship*);
        virtual void invade();
    private:
        Spaceship* spaceship;
};
#endif

