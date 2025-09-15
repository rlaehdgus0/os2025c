#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n,m,ans=0,si=0;
    cin >> n;
    ans=n;
    for(int i=1;i<=n;i++){
        cin >> s;
        for(int j=0;j<s.length();j++){
            m=j;
            si=0;
            for(int k=j+1;k<s.length();k++){
                if(s[j]==s[k]){
                    if(m+1==k){
                        m=k;
                    }
                    else{
                        ans--;
                        si=1;
                        break;
                    }
                    continue;
                }
                else{
                    continue;
                }

            }
            if(si==1){
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
