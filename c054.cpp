#include <iostream>

using namespace std;
long long int n,ans[1000001]={0,1,2,4};
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
    cin >> n;
    for(int i=4;i<=1000000;i++){
        ans[i]=(ans[i-1]+ans[i-2]+ans[i-3])%1000000009;

    }
    for(int i=1;i<=n;i++){
        cin >> k;
        cout << ans[k] << '\n';
    }
    return 0;
}
