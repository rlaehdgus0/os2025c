#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct num{
    int number;
    int L;
    int small;
};
vector<num> V;

bool h2(num a,num b){
    return a.number < b.number;
}
bool h1(num a,num b){
    return a.L < b.L;
}
int main()
{

    int n,m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        V.push_back({m,i,0});
    }
    sort(V.begin(),V.begin()+n,h2);
    for(int i=1;i<n;i++){
        if(V[i-1].number==V[i].number){
            V[i].small=V[i-1].small;
        }
        else{
            V[i].small=V[i-1].small+1;
        }
    }
    sort(V.begin(),V.begin()+n,h1);
    for(int i=0;i<n;i++){
        cout << V[i].small << " ";
    }
    return 0;
}
