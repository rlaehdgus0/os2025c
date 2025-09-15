#include <iostream>
#include <string>
using namespace std;
string s;
long long int n,sum=0;
int pow(int x,int y){
    int ans=1;
    for(int i=s.length()-x;i>1;i--){
        ans*=y;
    }
    return ans;
}
int main()
{
    cin >> s >> n;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=65)
            sum+=pow(i,n)*(s[i]-55);
        else
            sum+=pow(i,n)*(s[i]);
    }
    cout << sum;
    return 0;
}
