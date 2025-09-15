#include <iostream>
#include <deque>
#include <string>
using namespace std;
deque<int> dq;
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
        if(s=="push_front"){
            cin >> m;
            dq.push_front(m);
        }
        else if(s=="push_back"){
            cin >> m;
            dq.push_back(m);
        }
        else if(s=="pop_front"){
            if(dq.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(s=="pop_back"){
            if(dq.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(s=="size"){
            cout << dq.size() << '\n';
        }
        else if(s=="empty"){
            if(dq.empty()){
                cout << "1" << '\n';
            }
            else{
                cout << "0" << '\n';
            }
        }
        else if(s=="front"){
            if(dq.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.front() << '\n';
            }
        }
        else if(s=="back"){
            if(dq.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.back() << '\n';
            }
        }
    }
    return 0;
}
