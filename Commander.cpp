#include "Commander.h"
using namespace std;

Commander::Commander(Command* cmd) : CrewMember(15) {
    this->invadeCommand = cmd;
}

void Commander::proceedWithInvasion() {
    invadeCommand->invade();
}

void Commander::setCommand(Command *_command) {
    invadeCommand = _command;
}
