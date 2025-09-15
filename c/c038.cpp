#include <iostream>
#include <string>
using namespace std;
string str;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	while(getline(cin, str)){
        int arr[4]={0,};
        for(int i=0;i<str.length();i++){
            if(str[i]>=97&&str[i]<=122){
                arr[0]++;
                continue;
            }
            else if(str[i]>=65&&str[i]<=90){
                arr[1]++;
                continue;
            }
            else if(str[i]==' '){
                arr[3]++;
                continue;
            }
            arr[2]++;
        }
        for(int i=0;i<=3;i++){
            cout << arr[i] << ' ';
        }
        cout << endl;
	}
    return 0;
}
