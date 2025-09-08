#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	stack<char> st,sta;
	string n;
	cin >> n;
	for(int i=n.length()-1;i>=0;i--){
        int a=n[i]-48;
        if(a>=4){
            st.push('1');
            a-=4;
        }
        else{
            st.push('0');
        }
        if(a>=2){
            st.push('1');
            a-=2;
        }
        else{
            st.push('0');
        }
        if(a>=1){
            st.push('1');
            a-=1;
        }
        else{
            st.push('0');
        }
        while(!st.empty()){
            sta.push(st.top());
            st.pop();
        }
	}
	while(sta.top()=='0'){
        if(sta.size()==1){
            break;
        }
        sta.pop();
    }
	while(!sta.empty()){
        cout << sta.top();
        sta.pop();
    }
    return 0;
}
