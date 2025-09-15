#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
    Counter c;
    int a;
    cin >> a;
    c.set(a);
    c.count();
    c.count();
    cout << c.getvalue() << endl;
    c.set(0);
    cout << c.getvalue();
    return 0;

}
