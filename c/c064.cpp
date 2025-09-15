#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int arr[20][3]={0,},ans[20]={0,};
	cin >> n;
	for(int i=1;i<=n;i++){
        cin >> arr[i][1] >> arr[i][2];

        if(i-1+arr[i][1]>n){
            arr[i][2]=0;
        }
        ans[i]=arr[i][2];
	}
	for(int i=1;i<=n;i++){
       for(int j=i+arr[i][1];j<=n;j++){
            ans[j]=max(ans[i]+arr[j][2],ans[j]);
       }
    }
    for(int i=1;i<=n;i++){
       cout << ans[i] << endl;
    }
    return 0;
}
