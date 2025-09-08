#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n,arr[1001]={0,},ans[1001]={0,},a=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        ans[i]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(arr[j]>arr[i]){
                ans[i]=max(ans[j]+1,ans[i]);
            }
        }
        a=max(a,ans[i]);
    }
    cout << a;
    return 0;
}
