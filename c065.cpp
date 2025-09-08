#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int arr[46]={0,1};
	cin >> n;
	for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
	}
	cout << arr[n] << endl;
    return 0;
}
