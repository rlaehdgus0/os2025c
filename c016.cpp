#include <iostream>
#include <cmath>
using namespace std;

double p(double a){
    double b=a*a;
    return b;
}
//많은 조건 분기는 if 존나 많
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        double x1,x2,y1,y2,r1,r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1==x2&&y1==y2){
            if(r1==r2){
                cout << "-1" << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
        else if(sqrt(p(x1-x2)+p(y1-y2))>r1+r2){
            cout << "0" << endl;
        }
        else if(sqrt(p(x1-x2)+p(y1-y2))==r1+r2){
            cout << "1" << endl;
        }
        else if(sqrt(p(x1-x2)+p(y1-y2))<r1+r2){
            if(sqrt(p(x1-x2)+p(y1-y2))+min(r1,r2)>max(r1,r2)){
                cout << "2" << endl;
            }
            else if(sqrt(p(x1-x2)+p(y1-y2))+min(r1,r2)==max(r1,r2)){
                cout << "1" << endl;
            }
            else if(sqrt(p(x1-x2)+p(y1-y2))+min(r1,r2)<max(r1,r2)){
                cout << "0" << endl;
            }
        }
    }
    return 0;

}
