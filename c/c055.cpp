#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int n,ans[100000]={1,3};
	cin >> n;
	for(int i=2;i<=n;i++){
        ans[i]=3*(ans[i-2])+2*(ans[i-1]-ans[i-2]);
	}
	cout << ans[n];
    return 0;
}
