#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n,arr[100001];
	cin >> n;
	for(int i=1;i<=316;i++){
        arr[i*i]=1;
	}
	for(int i=2;i<=n;i++){
        arr[i]=i;
        for(int j=1;j*j<=i;j++){
            arr[i]=min(arr[i],1+arr[i-j*j]);
        }
    }
    cout << arr[n] << '\n';
    return 0;
}
