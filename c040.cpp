#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string str;
string str_arr[1001];
bool S(string s1,string s2){
    return s1 < s2;
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> str;
	for(int i=0;i<str.length();i++){
        str_arr[i]=str.substr(i,str.length()-i);
	}
    sort(str_arr,str_arr+str.length(),S);
    for(int i=0;i<str.length();i++){
        cout << str_arr[i] << '\n';
    }
    return 0;
}
