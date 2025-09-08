#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n,m;
    stack<int> S;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="push"){
            cin >> m;
            S.push(m);
        }
        else if(s=="pop"){
            if(S.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << S.top() << '\n';
                S.pop();
            }
        }
        else if(s=="size"){
            cout << S.size() << '\n';
        }
        else if(s=="empty"){
            if(S.empty()){
                cout << "1" << '\n';
            }
            else{
                cout << "0" << '\n';
            }
        }
        else if(s=="top"){
            if(S.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << S.top() << '\n';
            }
        }
    }
    return 0;
}
