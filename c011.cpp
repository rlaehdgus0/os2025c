#include <iostream>

using namespace std;

int main()
{
    int n,x=1,y=1,ans=1;
    cin >> n;
    for(int i=1;i<=10000000;i++){
        if(n<=i){
            break;
        }
        n-=i;
        ans++;
    }
    if(ans%2==0){
        x=1;
        y=ans;
    }
    else{
        x=ans;
        y=1;
    }
    for(int i=1;i<n;i++){
        if(ans%2==0){
            x++;
            y--;
        }
        else{
            x--;
            y++;
        }
    }
    cout << x << '/' << y;
    return 0;
}
