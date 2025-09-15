#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long long int n,ans[1002][10]={0,};
	cin >> n;
	for(int i=0;i<=9;i++){
        ans[1][i]=1;
	}
	for(int i=2;i<=n+1;i++){
        for(int j=9;j>=0;j--){
            if(j==9){
                ans[i][j]+=ans[i-1][j]%10007;
                continue;
            }
            ans[i][j]+=(ans[i-1][j]+ans[i][j+1])%10007;
        }
	}
    cout << ans[n+1][0];
    return 0;
}
