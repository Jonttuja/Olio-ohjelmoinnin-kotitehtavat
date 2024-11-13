#include <iostream>
using namespace std;

class Animal {
public:
    virtual void callOut() {
        cout << "Eläin aantelee" <<endl;
    }
    ~Animal() {
        cout << "animal destr." << endl;
    }
};
class Dog : public Animal {
public:
    void callOut() {
        cout << "Koira haukkuu!" << endl;
    }
    ~Dog() {
        cout << "Dog destr." << endl;
    }
};
int main() {
    auto a = new Animal();
    auto d = new Dog();
    a->callOut();
    d->callOut();
    delete a;
    delete d;

}
