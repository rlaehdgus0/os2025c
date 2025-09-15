#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	stack<int> s,s_ans;
	long long int n,cnt=0;
	cin >> n;
	while(n!=0){
        if(n%2==0){
            s.push(0);
            n/=-2;
        }
        else{
            n-=1;
            s.push(1);
            n/=-2;
        }

	}
	while(!s.empty()){
        cout << s.top();
        s.pop();
	}
    return 0;
}
