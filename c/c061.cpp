#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n,arr[1001],U[1001],D[1001],ans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        U[i]=1;
        D[i]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            if(arr[i]>arr[j]){
                U[i]=max(U[i],U[j]+1);
            }

        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n;j>=i;j--){
            if(arr[i]>arr[j]){
                D[i]=max(D[i],D[j]+1);
            }
        }
    }
    for(int i=1;i<=n;i++){
        ans=max(ans,D[i]+U[i]-1);
    }
    cout << ans << '\n';
    return 0;
}
