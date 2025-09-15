#include <iostream>
#include <stack>

using namespace std;
int n,arr[1000001],arr2[1000001]={0,},cnt[1000001];
int main()
{
    stack<int> S1,S2,S_ans;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        arr2[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        cnt[i]=arr2[arr[i]];
    }
    for(int i=n;i>=1;i--){
        if(i==n){
            S1.push(arr[i]);
            S2.push(cnt[i]);
            S_ans.push(-1);
            continue;
        }
        while(!S2.empty()){
            if(S2.top()>cnt[i]){
                break;
            }
            else{
               S2.pop();
               S1.pop();
            }

        }
        if(!S2.empty()){
            S_ans.push(S1.top());
        }
        else{
            S_ans.push(-1);
        }
        S2.push(cnt[i]);
        S1.push(arr[i]);
    }
    while (!S_ans.empty()) {
        cout << S_ans.top() << " ";
        S_ans.pop();
    }
    return 0;
}
