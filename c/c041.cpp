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
    long long int n=1;
    cin >> n;
    while(n!=0){
        for(int i=3;i<=n;i++){
            if(!arr[n-i]&&!arr[i]){
                cout << n << ' ' << "=" << ' ' << i << ' ' << "+" << ' ' << n-i << '\n';
                break;
            }
            else if(i==n){
                cout << "\"Goldbach's conjecture is wrong.\"" << '\n';
            }
        }
        cin >> n;
    }
    return 0;
}
