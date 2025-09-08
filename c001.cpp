#include <iostream>

using namespace std;

int main()
{
    float n;
    float sum=0,b=-1;
    float a[1001];
    cout.precision(10);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(b<=a[i]){
            b=a[i];
        }
    }
    for(int i=1;i<=n;i++){
        a[i]=a[i]/b*100;
        sum += a[i];
    }
    cout << sum/n;
    return 0;
}
