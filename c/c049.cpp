#include <iostream>
#include <cmath>
#include <stack>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int A,B;
    int n,m,sum=0;
    stack<int> s;
    cin >> A >> B >> m;
    for(int i=pow(A,m-1);i>=1;i/=A){
        cin >> n;
        sum+=n*i;
    }
    while(sum!=0){
        s.push(sum%B);
        sum-=sum%B;
        sum/=B;
    }
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}
