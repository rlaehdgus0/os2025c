#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	string s1,s2;
	int ans=0,sum=0;
	cin >> s1 >> s2;
	for(int i=0;i<s1.length();i++){
        int r=i;
        for(int j=0;j<=s2.length();j++){
            if(s1[r]==s2[j]){
                r+=1;
            }
        }
        ans = max(sum , ans);
        sum=0;
	}
	cout << ans;
    return 0;
}
