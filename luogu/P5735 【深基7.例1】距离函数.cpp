#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

double len(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2)*(x1 - x2) + (y1-y2)*(y1-y2));
}
int main(){
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;

    double ans = len(x1,y1,x2,y2) + len(x1,y1,x3,y3) + len(x2,y2,x3,y3);

    cout<<fixed<<setprecision(2)<<ans;

    return 0;
}