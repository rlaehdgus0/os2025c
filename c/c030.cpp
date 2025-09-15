#include <iostream>
#include <queue>
#include <string>
using namespace std;
queue<int> q;
int n;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        string s;
        cin >> s;
        if(s=="push"){
            cin >> m;
            q.push(m);
        }
        else if(s=="front"){
            if(q.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << q.front() << '\n';
            }

        }
        else if(s=="back"){
            if(q.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << q.back() << '\n';
            }

        }
        else if(s=="empty"){
            if(q.empty()){
                cout << "1" << '\n';
            }
            else{
                cout << "0" << '\n';
            }

        }
        else if(s=="pop"){
            if(q.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(s=="size"){
            cout << q.size() << '\n';
        }
    }
    return 0;
}
