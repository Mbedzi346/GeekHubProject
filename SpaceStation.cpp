
#include "SpaceStation.h"

SpaceStation* SpaceStation::_instance = nullptr;

SpaceStation::SpaceStation() {

}

SpaceStation *SpaceStation::instance() {
    if(_instance == nullptr)
        _instance = new  SpaceStation();
    return _instance;
}
