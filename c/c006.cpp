#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int sum=0;
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='c'&&(a[i+1]=='='||a[i+1]=='-')){
            sum++;
            i++;
            continue;
        }
        else if(a[i]=='d'&&a[i+1]=='z'&&a[i+2]=='='){
            sum++;
            i+=2;
            continue;
        }
        else if(a[i]=='d'&&a[i+1]=='-'){
            sum++;
            i++;
            continue;
        }
        else if(a[i]=='l'&&a[i+1]=='j'){
            sum++;
            i++;
            continue;
        }
        else if(a[i]=='n'&&a[i+1]=='j'){
            sum++;
            i++;
            continue;
        }
        else if(a[i]=='s'&&a[i+1]=='='){
            sum++;
            i++;
            continue;
        }
        else if(a[i]=='z'&&a[i+1]=='='){
            sum++;
            i++;
            continue;
        }
        else
            sum++;
    }
    cout << sum;
    return 0;
}
