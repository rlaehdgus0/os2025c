#include <iostream>
#include <list>
#include <string>
using namespace std;

int n,c;
string s;
char ss;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> s;
    cin >> n;
    list<char> vec(s.begin(), s.end());
    list<char>::iterator it = vec.end();

    for(int i=0;i<n;i++){

        char m;
        cin >> m;
        if(m=='L'){
            if(it!=vec.begin()){
                it--;
            }
        }
        else if(m=='D'){
            if(it!=vec.end()){
                it++;
            }
        }
        else if(m=='B'){
            if(it!=vec.begin()){
                vec.erase(prev(it));

            }
        }
        else if(m=='P'){
            cin >> ss;
            vec.insert(it,ss);

        }

    }
    for(char m : vec){
        cout << m;
    }

    return 0;
}
