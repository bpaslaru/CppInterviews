#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Observer {

public:
    /**
     * Update the state of this observer
     * @brief update
     * @param temp
     * @param humidity
     * @param pressure
     */
    virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif // OBSERVER_HPP
