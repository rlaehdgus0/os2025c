#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int h(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    else{
        return a.length() < b.length();
    }
}
int main()
{
    int n;
    string S[20000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> S[i];
    }
    sort(S, S+n, h);
    for(int i=0; i < n; i++){
        if(S[i] == S[i-1]){
            continue;
        }
        cout << S[i] << '\n';
    }
    return 0;
}
