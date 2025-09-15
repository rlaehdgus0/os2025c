#include <iostream>

using namespace std;

int main()
{
    int x,y,cnt=0;
    char Q[50][50],A[2][8][8];
    cin >> y >> x;
    for(int k=0;k<2;k++){
        cnt=k;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(cnt==0){
                    A[k][i][j]='W';
                    cnt=1;
                }
                else{
                    A[k][i][j]='B';
                    cnt=0;
                }
            }
        }
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cin >> Q[i][j];
        }
    }
    return 0;

}
