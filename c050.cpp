#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long long int arr[101][10]={0,};
	for(int i=1;i<=9;i++){
        arr[1][i]++;
	}
	for(int i=2;i<=100;i++){
        for(int j=0;j<=9;j++){
            if(j==0){
                arr[i][j]=arr[i-1][j+1];
            }
            else if(j==9){
                arr[i][j]=arr[i-1][j-1];
            }
            else if(j!=0&&j!=9){
                arr[i][j]=arr[i-1][j+1]+arr[i-1][j-1];
            }
            arr[i][j]%=1000000000;
        }
	}
    long long int a,sum=0;
    cin >> a;
    for(int i=0;i<=9;i++){
        sum+=arr[a][i];
    }
    cout << sum%1000000000 << endl;
    return 0;
}
