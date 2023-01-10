//
// Created by Daniel Antoš
//

#include <iostream>
#include "crew_member.h"

namespace Aviation {

    /**
     * @brief Stream operator for the CrewMember class
     * @param stream output stream
     * @param crewMember the CrewMember object to be printed out
     * @return the original stream
     */
    std::ostream &operator<<(std::ostream &stream, const CrewMember &crewMember) {
        stream << "Name: " << crewMember.getName() << std::endl;
        stream << "Age: " << crewMember.getAge() << std::endl;
        stream << "Flight hours: " << crewMember.getFlightHours() << std::endl;
        return stream;
    }
}
