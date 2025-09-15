#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    int a;
    cin >> n;
    for(int i=0;i<n;i++){
        string w;
        a=0;
        cin >> w;
        stack<char> s;
        for(int j=0;j<w.length(); j++){
            if(s.empty()&&w[j]==')'){
                cout << "NO" << endl;
                a=1;
                break;
            }
            else{
                if(w[j]=='('){
                    s.push(w[j]);
                }
                else{
                    s.pop();
                }
            }

        }
        if(s.empty()&&a!=1){
            cout << "YES" << endl;
        }
        else if(!s.empty()&&a!=1){
            cout << "NO" << endl;
        }
    }
    return 0;
}
