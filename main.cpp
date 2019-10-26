#include <iostream>
#include "Spaceship.h"
#include "SpaceStation.h"
#include "SpaceStationFactory.h"
using namespace std;

int main(){
  // code goes here, this main is gonna be fat AF
   /*
    * LOL, until we have figured out how to do the interpreter thing for the critters,
    * we might as well just work with this main, I am sure we'll get enough marks without the critters thingy
    * - Lindo
    * */

   // the spacestation
   SpaceStationFactory* _spaceStationFactory = new SpaceStationFactory();
   Spaceship*_spacestation = _spaceStationFactory->createSpaceship();
    cout<<"The end. We do not have credits for this story :-("<<endl;

   // clean up
   delete _spaceStationFactory;
   delete _spacestation;


   return 0;
}
