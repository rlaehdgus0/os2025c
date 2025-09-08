#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n; i++){
        int a,xs,ys,xf,yf,cnt=0;
        int px,py,pr;
        cin >> xs >> ys >> xf >> yf;
        cin >> a;
        for(int j=0;j<a;j++){
            cin >> px >> py >> pr;
            if(pow(max(px,xs)-min(px,xs),2)+pow(max(py,ys)-min(py,ys),2)<=pow(pr,2)){
                if(pow(max(px,xf)-min(px,xf),2)+pow(max(py,yf)-min(py,yf),2)<=pow(pr,2)){
                    continue;
                }
                else{
                    cnt++;
                }
            }
            else if(pow(max(px,xf)-min(px,xf),2)+pow(max(py,yf)-min(py,yf),2)<=pow(pr,2)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;

}
