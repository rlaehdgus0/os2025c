#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a[4]={0,};
        cin >> m;
        a[0]=m/25;
        m%=25;
        a[1]=m/10;
        m%=10;
        a[2]=m/5;
        m%=5;
        a[3]=m/1;
        for(int j=0;j<4;j++){
            cout << a[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
