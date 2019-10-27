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
#include "ConcreteMediator.h"
#include "MidFuelState.h"
#include "Command.h"
#include "InvadeCommand.h"
#include "Commander.h"
#include "Component.h"
#include "Bridge.h"
#include "SickBay.h"
#include "Decorator.h"
#include "TVDecorator.h"
#include "AirconditioningDecorator.h"

using namespace std;

int main(){
    /*
    //------------------------Creation, Abstract Factory-------------------
    cout<<"\n------------------------Creation, Abstract Factory-------------------\n"<<endl;
   auto* _spaceStationFactory = new SpaceStationFactory();
   Spaceship*_spacestation = _spaceStationFactory->createSpaceship();
   auto spacestation = _spaceStationFactory->createSpaceship();
   cout<<"Well, no proof, but I promise you something was created!"<<endl;
   auto* spaceship = new Frigates();
   //-----------------------Captain's Log, Iterator-----------------------
   cout<<"\n-----------------------Captain's Log, Iterator-----------------------\n"<<endl;
   spaceship->addLogEntry("10 Jan 2019 -- Engine failure.");
   spaceship->addLogEntry("13 Feb 2019 -- Fuel Leak.");
   spaceship->addLogEntry("12 Apr 2019 -- Left FMC Failure.");
   spaceship->addLogEntry("20 Oct 2019 -- AIRAC Update.");

   auto* iterator = spaceship->createIterator();
   while (iterator->hasNext())
       cout<<iterator->next()<<endl;
    //-------------------------Create Crew Members, Use Factories---------------
    cout<<"\n-------------------------Create Crew Members, Use Factories---------------\n"<<endl;
   auto* captain = new Captain(10);
   auto* pax1 = new Passenger();
   auto* pax2 = new Passenger();
   auto* crew1 = new Doctor(0);
   auto* crew2 = new Doctor(1);
   auto* crew3 = new Doctor(2);
   auto* crew4 = new Doctor(3);
   cout<<"Well, no proof, but I promise you something was created!"<<endl;

    //-------------------Simulate handing off problems to higher ranked crew, Chain of Responsibilty ------------
   cout<<"\n-------------------Simulate handing off problems to higher ranked crew, Chain of Responsibilty ------------\n"<<endl;
   auto* doctorHandler = new DoctorHandler(crew1);
   auto* doctorHandler1 = new DoctorHandler(crew2);
   auto* doctorHandler2 = new DoctorHandler(crew3);
   auto* doctorHandler3 = new DoctorHandler(crew4);
   doctorHandler->setNextChain(doctorHandler1);
   doctorHandler1->setNextChain(doctorHandler2);
   doctorHandler2->setNextChain(doctorHandler3);
   doctorHandler->handle(3);
   //----------------- Captain's Announcement, Observer ---------------------
   cout<<"\n----------------- Captain's Announcement, Observer ---------------------\n"<<endl;
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
    //--------------- Intercrew Communications, Send Reports, Mediator -----------------
    cout<<"\n--------------- Intercrew Communications, Send Reports, Mediator -----------------\n"<<endl;
   auto* mediator = new ConcreteMediator();
   mediator->addColleague(crew1);
   mediator->addColleague(crew2);
   mediator->addColleague(crew3);
   crew1->setMediator(mediator);
   crew1->sendReport("Had a weird AF patient last night...");
   //--------------- Sets fuel levels, State -------------------------
   cout<<"\n--------------- Sets fuel levels, State ------------------------\n"<<endl;
   auto state = new MidFuelState(spaceship);
   spaceship->setState(state);
   cout<<spaceship->getState()->getFuelLevel()<<endl;
   spaceship->handleFuel();
   cout<<spaceship->getState()->getFuelLevel()<<endl;
   delete _spaceStationFactory;
   delete _spacestation;
    */

    // Commander design pattern testing

    Spaceship* frigates = new Frigates();  // Receiver
    Command* invadePlanetCommand = new InvadeCommand(frigates);  // Command
    Commander* commanderOrder = new Commander(invadePlanetCommand);  // Invoker
    commanderOrder->proceedWithInvasion();


    // Decorator design pattern testing

    Component* sickbay = new SickBay();
    Component* bridge = new Bridge();

    cout << sickbay->description() << endl;
    cout << bridge->description() << endl;

    Decorator* tv = new TVDecorator(sickbay);
    Decorator* airCon = new AirconditioningDecorator(bridge);

    cout << tv->description() << endl;
    cout << airCon->description() << endl;

   return 0;
}
