#include "Client.hpp"

Client::Client(int id) {
    this->id = id;
}

void Client::update(float temp, float humidity, float pressure) {
    std::cout << "---Client (" << id << ") Data---\tTemperature: " << temp
                  << "\tHumidity: " << humidity
                  << "\tPressure: " << pressure
                  << std::endl;
}
