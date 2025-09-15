#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n,arr[1001]={0,},ans[1001]={0,},a;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        ans[i]=arr[i];
    }
    a=ans[1];
    for(int i=2;i<=n;i++){
        for(int j=i-1;j>=1;j--){
            if(arr[i]>=arr[j]){
                ans[i]=max(ans[i],arr[i]+ans[j]);
            }
        }
        a = max(ans[i],a);
    }
    cout << a;
    return 0;
}
