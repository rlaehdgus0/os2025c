#include <iostream>

using namespace std;

int main()
{
    char a[9][9];
    int cnt=1;
    char c[51][51];
    int x=0,y=0,ans1=64,ans2=64,s=64;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<=8;i++){
        for(int j=0;j<=8;j++){
            if(cnt==1){
                a[i][j]='W';
                cnt=0;
            }
            else{
                a[i][j]='B';
                cnt=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> c[i][j];
        }
    }
    while(true){
        for(int i=y;i<8+y;i++){
            for(int j=x;j<8+x;j++){
                if(c[i][j]==a[i-y][j-x]){
                    ans1--;
                }
                if(c[i][j]==a[i-y+1][j-x]){
                    ans2--;
                }
            }
        }
        s=min(s,min(ans1,ans2));
        if(m-8==x){
            if(n-8==y){
                break;
            }
            y++;
            x=0;
        }
        else{
            x++;
        }
        ans1=64;
        ans2=64;

    }

    cout << s;
    return 0;

}
