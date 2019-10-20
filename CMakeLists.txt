cmake_minimum_required(VERSION 3.15)
project(GeekHubProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GeekHubProject
        Battleship.h
        BattleshipsFactory.cpp
        BattleshipsFactory.h
        Captain.h
        CaptainFactory.cpp
        CaptainFactory.h
        "Chief Engineer.h"
        ChiefEngineerFactory.cpp
        ChiefEngineerFactory.h
        Command.h
        Commander.h
        CommanderFactory.cpp
        CommanderFactory.h
        Comms.h
        CommsFactory.cpp
        CommsFactory.h
        CrewFactory.cpp
        CrewFactory.h
        CrewMember.h
        Doctor.h
        DoctorFactory.cpp
        DoctorFactory.h
        Engineers.h
        EngineersFactory.cpp
        EngineersFactory.h
        Exploration.h
        ExplorationFactory.cpp
        ExplorationFactory.h
        Fighter.h
        FighterTransporter.cpp
        FighterTransporter.h
        Frigates.h
        FrigatesFactory.cpp
        FrigatesFactory.h
        main.cpp
        Navigator.h
        NavigatorFactory.cpp
        NavigatorFactory.h
        Passenger.h
        PassengerFactory.cpp
        PassengerFactory.h
        Person.h
        PersonFactory.h
        PFighterFactory.cpp
        PFighterFactory.h
        Spaceship.h
        SpaceshipCreator.cpp
        SpaceshipCreator.h
        SpaceshipFactory.h
        SpaceshipTransporter.h
        SpaceStation.cpp
        SpaceStation.h
        SpaceStationFactory.cpp
        SpaceStationFactory.h
        SPFighterFactory.h
        SPTransporterFactory.cpp
        SPTransporterFactory.h)
