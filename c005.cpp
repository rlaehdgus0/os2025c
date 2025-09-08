#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ac[30]={0,},ans=0;
    string a,b;
    cin >> a;
    for(int i=0;i<a.length();i++){
        for(int j=65;j<=90;j++){
            if(a[i]==j||a[i]==j+32){
                ac[j-64]++;
                break;
            }

        }
    }
    for(int i=1;i<=26;i++){
        cout << ac[i] << ' ';
    }
    cout << endl;
    for(int i=1;i<=26;i++){
        if(ac[i]>ans){
            b=i+64;
            ans=ac[i];
            continue;
        }
        else if(ac[i]==ans){
            b=63;
        }

    }
    cout << b;
    return 0;
}
