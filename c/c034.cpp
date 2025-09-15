#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sum=0,cnt=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            cnt++;
        }
        else{
            if(s[i-1]=='('){
                cnt-=1;
                sum+=cnt;
            }
            else{
                cnt-=1;
                sum+=1;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
