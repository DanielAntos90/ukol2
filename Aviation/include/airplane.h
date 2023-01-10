//
// Created by Daniel Antoš
//

#ifndef AIRPLANE
#define AIRPLANE

#include <iostream>
#include <string>
#include <array>
#include <unordered_map>
#include "crew_member.h"
#include <sstream>

namespace Aviation {
    enum class CrewPosition{
        /**
         * Enum representing crew position
         */
        CAPTAIN = 0,
        PILOT,
        STEWARDESS
    };

    class Airplane {
    /**
     * Class representing one airplane
     */

    public:
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
        Airplane(std::string type, std::string imatriculation, int maxSeats, int currentSeats, CrewMember &captain, CrewMember &pilot, CrewMember &stewardess);
        /**
         * @brief Setter for airplane type
         *
         * @param newType Type of airplane
         */
        std::string setType(std::string newType)  {
            _type = newType;
        }
        /**
         * @brief Setter for airplane imatriculation
         *
         * @param newImatriculation Imatriculation of airplane
         */
        std::string setImatriculation(std::string newImatriculation)  {
            _imatriculation = newImatriculation;
        }
        /**
         * @brief Setter for airplane maximum seats
         *
         * @param newMaxSeats Maximum seats of airplane
         */
        unsigned int setMaxSeats(int newMaxSeats) {
            _maxSeats = newMaxSeats;
        }
        /**
         * @brief Setter for airplane used seats
         *
         * @param newCurentSeats Used seats of airplane
         */
        unsigned int setCurrentSeats(int newCurentSeats) {
            _currentSeats = newCurentSeats;
        }
        /**
         * @brief Getter for airplane type
         *
         * @return airplane type
         */
        std::string getType() const  {
            return _type;
        }
        /**
         * @brief Getter for airplane imatriculation
         *
         * @return airplane imatriculation
         */
        std::string getImatriculation() const  {
            return _imatriculation;
        }
        /**
         * @brief Getter for airplane maximum seats
         *
         * @return airplane  maximum seats
         */
        unsigned int getMaxSeats() const {
            return _maxSeats;
        }
        /**
         * @brief Getter for airplane used seats
         *
         * @return airplane used seats
         */
        unsigned int getCurrentSeats() const {
            return _currentSeats;
        }
        /**
         * @brief Operrators overload
         */
        CrewMember &operator[](const CrewPosition position);
        bool operator>(const Airplane& plane) const;
        bool operator<(const Airplane& plane) const;

        /**
         * @brief prints crew info
         */
        void printCrewInfo() const;
        /**
         * @return crew info string representation
         */
        std::string crewInfoToString() const;

    protected:
        /**
         * @brief prints crew position
         */
        void printCrewPosition(const CrewPosition position) const;

    private:
        std::string _type; /**< @brief Type of plane */
        std::string _imatriculation; /**< @brief Imatriculation of plane */
        unsigned int _maxSeats; /**< @brief Maximum number of plane seats */
        unsigned int _currentSeats; /**< @brief Current number of plane seats */
        std::unordered_map<CrewPosition, CrewMember> _crew; /**< @brief Crew numbers */

    };
        std::ostream &operator<<(std::ostream& stream, const Airplane &airplane);

        std::ostream &operator<<(std::ostream &stream, const Airplane *airplane);
}

#endif //AIRPLANE
