#include <iostream>
#include <string>

using namespace std;
int word(int a,int b,string s){
    for(int i=b-1;i>=a;i--){
        cout << s[i];
    }
    cout << ' ';
}
int main()
{
    long long int n;
    string s;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, s);
        int cnt=0;
        int cnt2=0;
        for(int j=0;j<=s.length();j++){
            if(s[j]==' '||s[j]=='\0'){
                word(cnt2,cnt,s);
                cnt2=cnt+1;
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}
