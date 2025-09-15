#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;
stack<double> S;
string str;
int n;
double m,cnt=0,num[27]={0,};
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> n;
    cin >> str;
    for(int i=1;i<=n;i++){
        cin >> m;
        num[i]=m;
    }
    for(int i=0;i<str.length();i++){
        if(str[i]>=65&&str[i]<=90){
            S.push(num[str[i]-64]);
        }
        else if(!S.empty()){
            cnt = S.top();
            S.pop();
            if(str[i]==42){//*
                cnt=cnt*S.top();
            }
            else if(str[i]==43){//+
                cnt=cnt+S.top();
            }
            else if(str[i]==47){// /
                cnt=S.top()/cnt;
            }
            else if(str[i]==45){//-
               cnt=S.top()-cnt;

            }
            S.pop();
            S.push(cnt);
        }

    }
    printf("%0.2f",cnt);
    return 0;
}
