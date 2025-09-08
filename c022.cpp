#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct user{
    int a;
    string n;
    int T;
};
bool h(user c,user b){
    if(c.a==b.a){
        return c.T<b.T;
    }
    else{
        return c.a<b.a;
    }
}
int main()
{
    vector<user> V;
    int A;
    string S;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A >> S;
        V.push_back({A,S,i});
    }
    sort(V.begin(),V.begin()+N,h);
    for(int i=0;i<N;i++){
        cout << V[i].a << " " << V[i].n << '\n';
    }
    return 0;
}
