//
// Created by Daniel Antoš
//

#ifndef CREWMEMBER
#define CREWMEMBER
#include <iostream>

namespace Aviation {

    class CrewMember {
    /**
     * Class representing one airplaine crew member
     */

    public:
        /**
         * @brief The default constructor
         *
         * @param name Name of the crew member
         * @param age Age of the crew member
         * @param flightHours Number of flight hours
         */
        CrewMember(std::string name, unsigned int age, unsigned int flightHours) : name(name),age(age),flightHours(flightHours)  {}

        /**
         * @brief Setter for crew member name
         *
         * @param newName Name of the crew member
         */
        void setName(std::string newName)  {
            name = newName;
        }        /**
        * @brief Setter for crew member age
        *
        * @param newAge Age of the crew member
        */
        void setAge(int newAge) {
            age = newAge;
        }
        /**
         * @brief Setter for crew member flight hours
         *
         * @param newFlightHours Flight hours of the crew member
         */
        void setFlightHours(int newFlightHours) {
            flightHours = newFlightHours;
        }
        /**
         * @brief Getter for crew member name
         *
         * @return crew member name
         */
        std::string getName() const  {
            return name;
        }
        /**
         * @brief Getter for crew member age
         *
         * @return crew member age
         */
        unsigned int getAge() const {
            return age;
        }
        /**
         * @brief Getter for crew member flight hours
         *
         * @return crew member flight hours
         */
        unsigned int getFlightHours() const {
            return flightHours;
        }
        /**
         * @return string representation of crew member
         */
        std::string toString() const  {
            return name;
        }

    protected:

        std::string name; /**< @brief Name of crew mamber */
        unsigned int age; /**< @brief Age of crew mamber */
        unsigned int flightHours; /**< @brief Flight hours of crew mamber */

    };
        std::ostream &operator<<(std::ostream& stream, const CrewMember &crewMember);
}

#endif //CREWMEMBER
