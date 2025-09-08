#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int m,arr[10]={0,},sum=0;
	for(int i=1;i<=9;i++){
        cin >> m;
        sum+=m;
        arr[i]=m;
	}
	sort(arr+1,arr+10);
	for(int i=1;i<=8;i++){
        for(int j=i;j<=9;j++){
            if(100+arr[i]+arr[j]==sum){
                arr[i]=0;
                arr[j]=0;
                for(int k=1;k<=9;k++){
                    if(arr[k]!=0){
                        cout << arr[k] << '\n';
                    }
                }
                return 0
                ;
            }
        }
	}
    return 0;
}
