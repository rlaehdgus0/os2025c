#include <iostream>

using namespace std;

int main()
{
    int a[10][10],ans=0,x,y;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(ans<a[i][j]){
                ans=a[i][j];
                y=i;
                x=j;
            }
        }
    }
    cout << ans << '\n' << y << ' ' << x;
    return 0;
}
