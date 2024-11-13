#include <iostream>
using namespace std;

class Chef {
protected:
    string name;
public:
    Chef();
    Chef(string s) {
        name = s;
        cout << "Chef " << name << " konstruktori" << endl;

    }
    void makeSalad() {
        cout << "Chef " << name << " makes salad" << endl;
    }
    void makeSoup() {
        cout << "Chef " << name << " makes soup" << endl;
    }
    ~Chef() {
        cout << "Chef " << name << " destruktori" << endl;
    }
};
class ItalianChef : public Chef {
public:
    ItalianChef(string s){
        name = s;
        Chef temp(name);
        cout << "ItalianChef " << name << " konstruktori" << endl;

    }
    string getName() {
        string s = name;
        return s;
    }
    void makePasta() {
        cout << "Chef " << name << " makes pasta" << endl;
    }
};
Chef::Chef(){
}

int main() {
    ItalianChef i("Anthony Bourdain");
    i.makeSalad();
    i.makeSoup();
    cout << "Name of the italian chef is " << i.getName() << endl;
    i.makePasta();
}
