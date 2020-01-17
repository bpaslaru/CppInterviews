#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

class Subject {

public:
    /**
     * @brief registerObserver
     * @param observer
     */
    virtual void registerObserver(Observer *observer) = 0;


    /**
     * @brief unregisterObserver
     * @param observer
     */
    virtual void unregisterObserver(Observer *observer) = 0;


    /**
     * Notify all the registered observers when a change happens
     * @brief notifyObservers
     */
    virtual void notifyObservers() = 0;
};

#endif // SUBJECT_HPP
