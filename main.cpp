#include <iostream>
#include <list>
#include <memory>
#include <stdexcept>

#include "crew_member.h"
#include "airplane.h"
#include "airport.h"

template<class T1, class T2 >
T1 minValue(T1 a, T2 b){
    return (a < b)?a:b;
}

int main() {

    Aviation::CrewMember captain("Morgan", 40, 400);
    Aviation::CrewMember pilot("Dezo", 30, 500);
    Aviation::CrewMember stewardess("Jolanda", 50, 600);

    auto plane = std::make_shared<Aviation::Airplane>("Airbus A320","OK-1234", 200, 50,captain,pilot,stewardess);
   // std::cout << plane;
    auto plane2 = std::make_shared<Aviation::Airplane>("Airbus A300","OK-1234", 200, 20,captain,pilot,stewardess);


    //std::cout << "Less occupied plane is: " << minValue(plane,plane2) << std::endl;
    //plane.printCrewInfo();
    //std::cout << plane[Aviation::CrewPosition::PILOT];

    Aviation::Airport<Aviation::Airplane> airport;
    airport.parkAPlane(plane);
    airport.parkAPlane(plane2);

    std::cout <<"Before sorting: " << std::endl;
    airport.printParkedPlanes();
    airport.sortAirplanes();
    std::cout <<"After sorting: " << std::endl;
    airport.printParkedPlanes();

    std::cout <<"Total passanger count is: " <<airport.getTotalPassangers() << std::endl;


    return 0;
}
