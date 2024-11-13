#include <iostream>
#include <vector>
using namespace std;
class Car {
private:
    string brand, model;
    int yearModel;
public:
    void printData() {
        cout << brand << endl;
        cout << model << endl;
        cout << yearModel << endl;
        cout << endl;
    }
    Car(string b, string m, int i) {
        brand = b;
        model = m;
        yearModel = i;
    }
};
int main() {
    vector <Car> Carlist;
    Car car0("Volvo", "850R", 1990);
    Car car1("Volkswagen", "Passat", 1995);
    Car car2("Toyota", "Dyna", 2009);
    Carlist.push_back(car0);
    Carlist.push_back(car1);
    Carlist.push_back(car2);
    for (int i = 0; i <= 2; i++) {
        Carlist[i].printData();
    }

}
