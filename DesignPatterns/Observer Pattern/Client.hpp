#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include "Observer.hpp"

class Client : public Observer {

public:
    Client(int id);
    virtual void update(float temp, float humidity, float pressure) override;

private:
    int id;

};

#endif // CLIENT_HPP
