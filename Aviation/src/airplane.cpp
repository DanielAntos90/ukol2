//
// Created by Daniel Antoš
//

#include "../include/airplane.h"

namespace Aviation {

    /**
     * @brief The default constructor
     *
     * @param type Airplane type
     * @param imatriculation Airplane imatriculation
     * @param maxSeats Number of seats
     * @param currentSeats Number of used seats
     * @param captain Crew member captain
     * @param pilot Crew member pilot
     * @param stewardess Crew member stewardess
     */
    Airplane::Airplane(std::string type, std::string imatriculation, int maxSeats, int currentSeats, CrewMember &captain, CrewMember &pilot, CrewMember &stewardess) :_type(type),_imatriculation(imatriculation),_maxSeats(maxSeats),_currentSeats(currentSeats){
        _crew.emplace(CrewPosition::CAPTAIN, captain);
        _crew.emplace(CrewPosition::PILOT, pilot);
        _crew.emplace(CrewPosition::STEWARDESS, stewardess);
    }
    /**
     * @brief Operrator overload
     */
    CrewMember &Airplane::operator [](const CrewPosition position) {
        return _crew.at(position);
    }

    /**
     * @brief Print out information about all crew members
     */
    void Airplane::printCrewInfo() const {
        for (const auto &[position, crew]: _crew){
            std::cout << "Position: ";
            printCrewPosition(position);
            std::cout << std::endl;
            std::cout << crew <<std::endl;
        }
    }

    /**
     * @return String represenatation of Airplane
     */
    std::string Airplane::crewInfoToString() const {
        std::ostringstream oss;
        auto cout_buff = std::cout.rdbuf(oss.rdbuf());
        printCrewInfo();
        std::cout.rdbuf(cout_buff);
        std::string n = oss.str();
        return n;
    }

    /**
     * @brief Print out position based on provided parameter
     * @param position CrewPosition position
     */
    void Airplane::printCrewPosition(const CrewPosition position) const {
        switch (position) {
            case CrewPosition::CAPTAIN:
                std::cout << "Captain";
                break;
            case CrewPosition::PILOT:
                std::cout << "Pilot";
                break;
            case CrewPosition::STEWARDESS:
                std::cout << "Stewardess";
                break;
        }
    }

    /**
     * @brief > operator overload
     * @param plane the Airplane object
     * @return true if the current object has higher number of used seats
     */
    bool Airplane::operator>(const Airplane &plane) const {
        return this->getCurrentSeats() > plane.getCurrentSeats();
    }
    /**
     * @brief < operator overload
     * @param plane the Airplane object
     * @return true if the current object has lesser number of used seats
     */
    bool Airplane::operator<(const Airplane &plane) const {
        return this->getCurrentSeats() <  plane.getCurrentSeats();
    }


    /**
     * @brief Stream operator for the Airplane class
     * @param stream output stream
     * @param Airplane the Airplane object to be printed out
     * @return the original airplane
     */
    std::ostream &operator<<(std::ostream &stream, const Airplane &airplane) {
        stream << "Type: " << airplane.getType() << std::endl;
        stream << "Imatriculation: " << airplane.getImatriculation() << std::endl;
        stream << "Max seats: " << airplane.getMaxSeats() << std::endl;
        stream << "Current seats: " << airplane.getCurrentSeats() << std::endl;
        stream << std::endl;
        stream << airplane.crewInfoToString() << std::endl;
        return stream;
    }
    /**
     * @brief Stream operator for the Airplane class
     * @param stream output stream
     * @param Airplane the Airplane object to be printed out
     * @return the original airplane
     */
   std::ostream &operator<<(std::ostream &stream, const Airplane *airplane) {
        stream << airplane->getType();
        return stream;
    }
}
