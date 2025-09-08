#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    string s;
    stack<int> st;
    int cnt=0,cn=0;
    cin >> s;
    for(int i=s.length()-1;i>=0;i--){
        if(cn>2){
            st.push(cnt);
            cnt=0;
            cn=0;
        }
        if(s[i]=='1'){
            cnt+=pow(2,cn);
        }
        cn++;
        if(i==0){
            st.push(cnt);
        }
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}
