#include <iostream>
#include <string>

using namespace std;
bool guk=false;
int main()
{
    string s;
    getline(cin, s);
    int cnt=0;
    for(int j=0;j<=s.length();j++){
        if(s[j]=='>'){
            for(int i=cnt;i<=j;i++){
                cout << s[i];
                guk=false;
            }
            cnt=j+1;
        }
        else if((s[j]=='<'||s[j]==' '||s[j]=='\0')&&!guk){
            for(int i=j-1;i>=cnt;i--){
                cout << s[i];
            }
            if(s[j]==' '||s[j]=='\0'){
                cout << ' ';
            }
            else if(s[j]=='<'){
                cout << '<';
                guk=true;
            }
            cnt=j+1;
        }
    }
    return 0;
}
