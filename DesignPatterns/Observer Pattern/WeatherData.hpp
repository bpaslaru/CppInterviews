#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"

class WeatherData : public Subject {

public:
    void registerObserver(Observer *observer) override;
    void unregisterObserver(Observer *observer) override;
    void notifyObservers() override;

    void setState(float temp, float humidity, float pressure);

private:
    std::vector<Observer *> observers; // observers

    float temp = 0.0f;
    float humidity = 0.0f;
    float pressure = 0.0f;

};

#endif // WEATHERDATA_HPP
