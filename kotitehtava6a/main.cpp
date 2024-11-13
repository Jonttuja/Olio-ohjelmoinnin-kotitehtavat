#include <iostream>
#include <myclass.h>
using namespace std;
int main()
{
    MyClass c;
    c.raiseMySignal();
    cout << "Hello World!" << endl;
    return 0;
}
