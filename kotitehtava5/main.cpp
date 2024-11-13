#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;



class ClassB {
private:
    string info;
public:
    string getInfo() {
        return info;
    }
    void setInfo(string s) {
        info = s;
    }
};

class AggregationA {
private:
    ClassB& refB;
public:
    AggregationA(ClassB&);
    string getinfo();
    void setinfo(string);
};

AggregationA::AggregationA(ClassB& value) : refB(value) {
}

string AggregationA::getinfo() {
    return refB.getInfo();
}

void AggregationA::setinfo(string value) {
    refB.setInfo(value);
}

class assosiationA
{
private:
    ClassB objectB;
public:
    assosiationA(ClassB);
    string getInfo();
    void setInfo(string s);
};
assosiationA::assosiationA(ClassB value) :objectB(value) {
}
string assosiationA::getInfo() {
        return objectB.getInfo();
}
void assosiationA::setInfo(string value) {
    objectB.setInfo(value);
}

int main()
{
    //A
    int a = 5;
    int b = 10;

    auto mypointerA = &a;
    auto mypointerB = &b;
    auto &refA = b;
    cout << "a osoite: " << &a << endl;
    cout << "a Arvo: " << a <<endl;

    cout << "b osoite: " << &b << endl;
    cout << "b Arvo: " << b << endl;

    cout << "osoite: " << mypointerA << endl;
    cout << "Arvo: " << *mypointerA << endl;

    cout << "osoite: " << mypointerB << endl;
    cout << "Arvo: " << &mypointerB << endl;

    cout << "osoite: " << refA << endl;
    cout << "Arvo: " << &refA << endl;
    cout << endl;
    cout << "*******************************" << endl;
    cout << endl;
    //B
    ClassB objb;
    objb.setInfo("Olion B asettama info");
    assosiationA objAss(objb);
    objAss.setInfo("Olion objAss asettama info");

    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objb.getInfo() << endl;
    cout << "objAss: " << objAss.getInfo() << endl;

    cout << endl;
    //C
    cout << "Aggregaatio esimerkki:" << endl;
    ClassB& refB = objb;
    AggregationA objAggr(refB);
    objAggr.setinfo("Olion Agr asettama info");
    cout << "objB: " << objb.getInfo() << endl;
    cout << "objAggr " << objAggr.getinfo() << endl;
    cout << endl;

}
