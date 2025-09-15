#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int n,c;
string s;
char ss;
int main()
{
    list<int> list1 = { 1,2,3,4,5 };

	//cout << list1[1] << ' '; //에러 발생

	list<int>::iterator iter = next(list1.end());


	cout << *iter << endl;
    return 0;
}
