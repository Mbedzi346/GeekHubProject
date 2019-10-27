#include <iostream>
#include "Spaceship.h"
#include "SpaceStation.h"
#include "SpaceStationFactory.h"
#include "Frigates.h"
#include "Captain.h"
#include "Passenger.h"
#include "Fighter.h"
#include "Doctor.h"
#include "DoctorHandler.h"
#include "Engineers.h"
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

   auto* captain = new Captain(10);
   auto* pax1 = new Passenger();
   auto* pax2 = new Passenger();
    auto* crew1 = new Doctor(0);
    auto* crew2 = new Doctor(1);
    auto* crew3 = new Doctor(2);
    auto* crew4 = new Doctor(3);
    auto* doctorHandler = new DoctorHandler(crew1);
    auto* doctorHandler1 = new DoctorHandler(crew2);
    auto* doctorHandler2 = new DoctorHandler(crew3);
    auto* doctorHandler3 = new DoctorHandler(crew4);
    doctorHandler->setNextChain(doctorHandler1);
    doctorHandler1->setNextChain(doctorHandler2);
    doctorHandler2->setNextChain(doctorHandler3);
    doctorHandler->handle(3);
   captain->attach(pax1);
   captain->attach(pax2);
   captain->attach(crew1);
   captain->attach(crew2);
   pax1->setCaptain(captain);
   pax2->setCaptain(captain);
   crew1->setCaptain(captain);
   crew2->setCaptain(captain);
   captain->setPaxAnnouncement("We're going to have to make a diversion, hit some astroid or something, space stuff.");
   captain->notify();
   captain->setCrewAnnouncement("All stations, report to main deck immediately.");
   captain->notify();
   captain->setGeneralAnnouncement("Brace For Impact! Kidding, should've seen your faces, lol. Hope yall good.");
   captain->notify();
   delete _spaceStationFactory;
   delete _spacestation;


   return 0;
}
