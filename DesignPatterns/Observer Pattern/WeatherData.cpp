#include "WeatherData.hpp"

void WeatherData::registerObserver(Observer* observer) {
    observers.push_back(observer);
}

void WeatherData::unregisterObserver(Observer* observer) {
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    //if the observer is found, remove it
    if(iterator != observers.end()) {
        observers.erase(iterator);
    }
}

void WeatherData::notifyObservers() {
    for(Observer *observer : observers)
    {
        observer->update(temp, humidity, pressure);
    }
}

void WeatherData::setState(float temp, float humidity, float pressure) {
    this->temp = temp;
    this->humidity = humidity;
    this->pressure = pressure;

    notifyObservers();
}
