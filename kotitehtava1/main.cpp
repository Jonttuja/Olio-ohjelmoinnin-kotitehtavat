#include <iostream>

using namespace std;
#include <iostream>
int a, b;
int ao, bo;

void calcSum(int aa, int bb) {
    int total = aa + bb;
    cout << "Summa on : " << total << endl;
}

void calcDiv(float a0, float a1) {
    if (a1 == 0|| a0 ==0) {
        cout << "Jakaja ei voi olla 0";
        return;
    }
    else {
        float total = a0 / a1;
        cout << "Osamaara on : " << total << endl;
    }

}
int retSum(int i1,int i2) {
    int total = i1 + i2;
    return total;
}
float retDiv(float f1, float f2) {
    if (f2 == 0||f1 == 0) {
        cout << "Jakaja ei voi olla 0";
        exit;
    }
    else {
        float total = f1 / f2;
        return total;
    }
}
int main() {
    cout << "A:"<<endl;
    cin >> a;
    cout << "B:"<<endl;
    cin >> b;
    calcSum(a, b);
    calcDiv(a, b);
    cout << "A:" << endl;
    cin >> ao;
    cout << "B:" << endl;
    cin >> bo;
    int retsum = retSum(ao, bo);
    cout << "retSum palautti : " << retsum << endl;
    float retdiv = retDiv(ao, bo);
    cout << "retDiv palautti : " << retdiv << endl;
    return 0;
}
