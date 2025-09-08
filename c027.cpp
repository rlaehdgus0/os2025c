#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{

    stack<int> s,ss;
    int n,m[100001],ca=1,cnt=0;
    bool IR;
    vector<char> cs;
    ss.push(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m[i];
    }
    for(int i=0; i<n;i++){
        ss.push(m[n-i-1]);
    }
    while(ca<=n+1||ss.top()==0){

        if(s.empty()){
            cs.push_back('+');
            cnt++;
            s.push(ca);
            ca++;
        }
        else{
            if(ss.top()==s.top()){
                ss.pop();
                s.pop();
                cs.push_back('-');
                cnt++;

            }
            else if(ss.top()!=s.top()){
                s.push(ca);
                ca++;
                cs.push_back('+');
                cnt++;

            }

        }
        if(ss.top()==0){
            IR=true;
            break;
        }

    }
    if(IR){
        for(int i=0;i<cnt;i++){
            cout << cs[i] << '\n';
        }
    }
    else{
        cout << "NO" << '\n';
    }
    return 0;
}
