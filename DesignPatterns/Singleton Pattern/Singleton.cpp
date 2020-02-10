#include <iostream>

using namespace std;

class Singleton {

private:
    static Singleton *instance;
    int data;

public:
    static Singleton *getInstance() {
        if(!instance)
        {
            instance = new Singleton();
            cout << "Create the SIngleton instance" << endl;
        }

        return instance;
    }

    int getData() {
        return this->data;
    }

    void setData(int data) {
        this->data = data;
    }
};

Singleton *Singleton::instance = 0;

int main() {
    Singleton *s1 = Singleton::getInstance();

    Singleton *s2 = Singleton::getInstance();

    cout << s1->getData() << endl;

    s2->setData(100);

    cout << s1->getData() << endl;

    return 0;
}
