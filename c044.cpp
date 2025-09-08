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
    int n,m,ans=1;
    int a,arr[100000];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a;
        arr[i]=max(a,m)-min(a,m);
    }
    for(int i=0;i<n;i++){
        if(i==0){
            ans=arr[i];
            continue;
        }
        ans=gcd(ans,arr[i]);
    }
    cout << ans;
    return 0;
}
