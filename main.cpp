#include <iostream>
#include "Spaceship.h"
#include "SpaceStation.h"
#include "SpaceStationFactory.h"
#include "Frigates.h"

using namespace std;

int main(){
  // code goes here, this main is gonna be fat AF
  /*
    * LOL, until we have figured out how to do the interpreter thing for the critters,
    * we might as well just work with this main, I am sure we'll get enough marks without the critters thingy
    * - Lindo
    * */
   // the spacestation
   auto* _spaceStationFactory = new SpaceStationFactory();
   Spaceship*_spacestation = _spaceStationFactory->createSpaceship();
   auto spacestation = _spaceStationFactory->createSpaceship();
   cout<<"The end. We do not have credits for this story :-("<<endl;
   auto* spaceship = new Frigates();
   spaceship->addLogEntry("10 Jan 2019 -- Engine failure.");
   spaceship->addLogEntry("13 Feb 2019 -- Fuel Leak.");
   spaceship->addLogEntry("12 Apr 2019 -- Left FMC Failure.");
   spaceship->addLogEntry("20 Oct 2019 -- AIRAC Update.");

   auto* iterator = spaceship->createIterator();
   while (iterator->hasNext())
       cout<<iterator->next()<<endl;

   delete _spaceStationFactory;
   delete _spacestation;


   return 0;
}
