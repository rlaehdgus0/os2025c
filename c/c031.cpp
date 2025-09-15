#include <iostream>
#include <queue>
#include <string>
using namespace std;
queue<int> q,q2,ans;
int n,m;
int cnt=1;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=0;i<q.size();i++){
            if(cnt%m==0){
                ans.push(q.front());
                q.pop();
                cnt++;
                continue;
            }
            q2.push(q.front());
            q.pop();
            cnt++;
        }
        for(int i=0;i<q2.size();i++){

            q.push(q2.front());
            q2.pop();
        }
    }
    cout << "<";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout << ans.front() << ">";
            ans.pop();
            continue;
        }
        cout << ans.front() << ", ";
        ans.pop();
    }
    return 0;
}
