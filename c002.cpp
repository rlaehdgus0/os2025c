#include <iostream>
using namespace std;

int main()
{
    int a,cnt=0;
    cin >> a;
    for(int i=1;i<=a;i++){
        cnt+=i;
    }
    cout << cnt;
    return 0;
}
