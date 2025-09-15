#include <iostream>
#include <string>
#include <stack>
using namespace std;
string str;
stack<char> S;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i]>=65&&str[i]<=90){
            cout << str[i];
        }
        else{
            if(str[i]=='('){
                S.push(str[i]);
            }
            else if(str[i]==')'){
                while(!S.empty()&&S.top()!='('){
                    cout << S.top();
                    S.pop();
                }
                S.pop();
            }
            else if(str[i]=='*'||str[i]=='/'){
                while(!S.empty()&&(S.top()=='*'||S.top()=='/')){
                    cout << S.top();
                    S.pop();
                }
                S.push(str[i]);
            }
            else if(str[i]=='+'||str[i]=='-'){
                while(!S.empty() && S.top() != '('){
                    cout << S.top();
                    S.pop();
                }
                S.push(str[i]);
            }
        }
    }
    while (!S.empty())
    {
        cout << S.top();
        S.pop();
    }
    //스택 문제의 경우엔 행동을 pop,push,top,empty로만 생각하자

    return 0;
}
