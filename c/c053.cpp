#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n,k;
    cin >> n >> k;
    long long int ans[201][201];
    for(int i=0;i<=n;i++){
        ans[i][1]=1;
    }
    for(int i=2;i<=k;i++){
        for(int j=0;j<=n;j++){
            if(j==0){
                ans[j][i]=1;

                continue;
            }
            ans[j][i]=(ans[j-1][i]+ans[j][i-1])%1000000000;
        }

    }
    cout << ans[n][k];
    return 0;
}
