#include<iostream>
using namespace std;
class Wheel {
private:
    int size;
    string type;
public:
    Wheel() {
    }
    Wheel(int a, string s) {
        setSize(a);
        setType(s);
    }
    void setSize(int i) {
        size = i;
        cout << size;
    }
    void setType(string s) {
        type = s;
        cout << type;
    }
    string getType() {
        return type;
    }
    int getSize() {
        return size;
    }
};
class Engine {
private:
    int horsepower;
    double displacement;
public:
    Engine() {
    }
    Engine(int i, double d) {
        setHorsepower(i);
        setDisplacement(d);
    }
    void setHorsepower(int a) {
            horsepower = a;
            cout << horsepower;
    }
    void setDisplacement(double d) {
            displacement = d;
            cout << displacement;
    }

    int getHorsepower() {
        return horsepower;
    }
    double getDisplacement() {
        return displacement;
    }


};
class Car : public Engine {
private:
    Engine objEngine;
    Wheel wheel1, wheel2, wheel3, wheel4;
    string model, brand;
public:
    Car(string s1, string s2) {
        setModel(s1);
        setBrand(s2);

    }
    void setEngine() {

        objEngine.setDisplacement(2.0);
        objEngine.setHorsepower(150);
    }
    void setWheels() {
        wheel1.setSize(17);
        wheel1.setType("kesarengas");
        wheel2.setSize(17);
        wheel2.setType("kesarengas");
        wheel3.setSize(17);
        wheel3.setType("kesarengas");
        wheel4.setSize(17);
        wheel4.setType("kesarengas");
    }
    void setModel(string s) {
        model = s;
    }
    void setBrand(string s) {
        brand = s;
    }
    void printDetails() {
        cout << "Auto : " << model << " " << brand << endl;
        cout << "Moottori : " <<objEngine.getHorsepower() << " HP " << objEngine.getDisplacement() << " L" << endl;
        cout << "Rengas 1: " << wheel1.getSize() << " Tuumaa";
        cout << ", " << wheel1.getType() << endl;
        cout << "Rengas 2: " << wheel2.getSize() << " Tuumaa";
        cout << ", " << wheel2.getType() << endl;
        cout << "Rengas 3: " << wheel3.getSize() << " Tuumaa";
        cout << ", " << wheel3.getType() << endl;
        cout << "Rengas 4: " << wheel4.getSize() << " Tuumaa";
        cout << ", " << wheel4.getType() << endl;
    }

};

int main() {
    Car c = Car("Volvo","850R");
    c.setEngine();
    c.setWheels();
    c.printDetails();
}
