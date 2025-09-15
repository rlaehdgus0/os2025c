#include <iostream>

using namespace std;
int arr[1000001]={0,1};
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    for(int i=2;i<=1000000;i++){
        for(int j=2;i*j<=1000000;j++){
            arr[i*j] = 1;
        }
    }
    int n,m,cnt;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        cnt=0;
        for(int j=3;j<=m/2;j++){
            if(!arr[m-j]&&!arr[j]){
                cnt++;
            }
        }
        cout << cnt << '\n';

    }
    return 0;
}
