#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string str;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin, str);
	for(int i=0;i<str.length();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            if(str[i]+13>'Z'){
                printf("%c",str[i]-13);

            }
            else{
                printf("%c",str[i]+13);

            }
            continue;
        }
        else if(str[i]>='a'&&str[i]<='z'){
            if(str[i]+13>'z'){
                printf("%c",str[i]-13);

            }
            else{
                printf("%c",str[i]+13);

            }
            continue;
        }
        printf("%c",str[i]);
	}
    return 0;
}
