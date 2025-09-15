#include <iostream>
using namespace std;
int sam(){
    int n,arr[100002][2]={0,};
        cin >> n;
        for(int i=0;i<=1;i++){
            for(int j=1;j<=n;j++){
                cin >> arr[j][i];
            }
        }
        for(int j=2;j<=n;j++){
            arr[j][1]+=max(arr[j-1][0],arr[j-2][0]);
            arr[j][0]+=max(arr[j-1][1],arr[j-2][1]);
        }
        return max(arr[n][1],arr[n][0]);
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << sam() << '\n';
    }
    return 0;
}
