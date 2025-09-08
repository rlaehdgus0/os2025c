#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,sum=1;
        cin >> a >> b;
        b=b%4;
        b = b==0 ? 4 : b;
        a %=10;
        a = a==0 ? 10 : a;
        for(int j=0;j<b;j++){
            sum*=a;
        }
        sum%=10;
        if(sum==0){
            cout << "10" << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}
