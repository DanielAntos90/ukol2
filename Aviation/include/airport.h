//
// Created by Daniel Antoš
//

#ifndef AIRPORT
#define AIRPORT

#include <iostream>
#include <list>
#include <memory>
#include <stdexcept>
#include "airplane.h"

namespace Aviation {

    template<typename T>
    class Airport {
    /**
     * @brief Template class for airport
     */
    public:
        /**
         * @brief Store airplane to airport class
         * @param plane Airplane
         */
        void parkAPlane(std::shared_ptr<T> plane);
        /**
         * @brief Prints out stored airplanes
         */
        void printParkedPlanes();
        /**
         * @brief Sorts planes according to used seats
         */
        void sortAirplanes();
        /**
         * @return total number of passanges
         */
        int getTotalPassangers() const;
    private:
        std::list<std::shared_ptr<T>> _airport;
    };

    template<typename T>
    void Airport<T>::parkAPlane(std::shared_ptr<T> plane) {
        _airport.push_back(plane);
    }

    template<typename T>
    void Airport<T>::printParkedPlanes() {
        for(const auto & plane:_airport){
            std::cout << plane << std::endl;
        }
    }

    template<typename T>
    int Airport<T>::getTotalPassangers() const {
        int count = 0;
        for(const auto &plane:_airport){
            count += plane->getCurrentSeats();
        }
        return count;
    }
    template<typename T>
    void Airport<T>::sortAirplanes() {
        _airport.sort([](const auto &f, const auto &s) { return f->getCurrentSeats() < s->getCurrentSeats(); });
    }

}

#endif //AIRPORT
