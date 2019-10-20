
using namespace std;

Commander::Commander(Command* cmd) {
    this->invadeCommand = cmd;
}

void Commander::proceedWithInvasion() {
    invadeCommand->invade();
}

