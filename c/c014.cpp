#include <iostream>
#include <stack>

using namespace std;

int main()
{
    long long int n,a[1000]={0,};
    stack<int> st,st_ans;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            st.push(a[i]);
            st_ans.push(-1);
            continue;
        }
        while(!st.empty()){

            if(st.top()>a[i]){
                break;
            }
            else{
               st.pop();
            }

        }
        if(!st.empty()){
            st_ans.push(st.top());
        }
        else{
            st_ans.push(-1);
        }
        st.push(a[i]);
    }
    while (!st_ans.empty()) {
        cout << st_ans.top() << " ";
        st_ans.pop();
    }
    return 0;

}
