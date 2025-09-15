#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a=1;
    string b;
    getline(cin, b);
    if(b[0]==' ')
        a--;
    for(int i=0;i< b.length();i++){
        if(b[i] == ' ') {
            a++;
        }
    }

    cout << a;
    return 0;
}
