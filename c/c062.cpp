#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    long long int n,arr[100004],ans[100004][2]={0,},t=0,rans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << arr[n];
        return 0;
    }
    rans = arr[1];
    ans[1][0]=arr[1];
    ans[n][1]=arr[n];
    for(int i=2;i<=n;i++){
        if(ans[i-1][0]+arr[i]>arr[i]){
            ans[i][0]+=ans[i-1][0]+arr[i];
        }
        else{
            ans[i][0]=arr[i];
        }
        rans=max(rans,ans[i][0]);
    }
    for(int i=n-1;i>=1;i--){
        if(ans[i+1][1]+arr[i]>arr[i]){
            ans[i][1]+=ans[i+1][1]+arr[i];
        }
        else{
            ans[i][1]=arr[i];
        }
    }
    rans = max(max(ans[1][1],ans[2][1]),rans);
    for(int i=2;i<=n-1;i++){
        rans = max(rans,ans[i-1][0]+ans[i+1][1]);
    }
    cout << rans;
    return 0;
}
