#include <iostream>

using namespace std;
long long int gcd(long long int a, long long int b){
    int cnt1=a,cnt2=b,na;
    while(cnt1%cnt2!=0){
        na=cnt1%cnt2;
        cnt1=cnt2;
        cnt2=na;
    }
    return cnt2;
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int n;

	cin >> n;
	for(int i=0;i<n;i++){
        int m,arr[101];
        cin >> m;
        long long int sum=0;
        for(int j=0;j<m;j++){
            cin >> arr[j];
        }
        for(int j=0;j<m-1;j++){
            for(int k=j+1;k<m;k++){
                sum+=gcd(arr[j],arr[k]);
            }
        }
        cout << sum << '\n';
	}
    return 0;
}
