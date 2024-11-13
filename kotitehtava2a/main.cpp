#include <iostream>
#include <memory>
using namespace std;
class Rectangle {
private:
    double width, height;
public:
    double getArea() {
        double temp = width * height;
        return temp;
    }
    double getCircum() {
        double temp = 2 * (width + height);
        return temp;
    }
    void setWidth(double d) {
        width = d;
    }
    void setHeight(double d) {
        height = d;
    }
    ~Rectangle() {

    }

};

class Car {
private:
    string brand, model;
    int yearModel;
public:
    void printData() {
        cout << brand << endl;
        cout << model << endl;
        cout << yearModel << endl;
    }
    void setBrand(string s) {
        brand = s;
    }
    void setModel(string s) {
        model = s;
    }
    void setYearModel(int i) {
        yearModel = i;
    }
    ~Car() {
        cout << "Olio poistettu" << endl;
    }
};
class Student {
private:
    string name;
    int studentNumber;
    double average;
public:
    void setName(string s) {
        name = s;
    }
    void setStudentNumber(int i) {
        studentNumber = i;
    }
    void setAverage(double d) {
        average = d;
    }
    void getName() {
        cout << name << endl;
    }
    void getStudentNumber() {
        cout << studentNumber << endl;
    }
    void getAverage() {
        cout << average << endl;
    }
};
int main() {
    Rectangle p;
    p.setWidth(9.6);
    p.setHeight(6.1);
    cout << p.getArea() << endl;
    cout << p.getCircum() << endl;
    p.~Rectangle();
    auto* c1 = new Car;
    c1->setBrand("Volvo");
    c1->setModel("850R");
    c1->setYearModel(1990);
    c1->printData();
    delete c1;
    //En ole saanut Qt-Creatoria toimimaan vielä joten en voinut käyttää sen refactor toimintoa.
    auto s = make_unique<Student>();
    s->setName("John Smith");
    s->setStudentNumber(192293);
    s->setAverage(8.32);
    s->getAverage();
    s->getName();
    s->getStudentNumber();

}
