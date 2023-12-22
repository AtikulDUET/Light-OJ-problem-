#include<bits/stdc++.h>
using namespace std;

double Distance(double x1,double y1,double x2,double y2){
    x1 = (x1-x2), y1 = (y1-y2);
    x1 = x1*x1;   y1 = y1*y1;
    x1 = sqrt(x1+y1);
    return x1;
}

int main()
{
    int t,cas=1;
    double Ox,Oy,Ax,Ay,Bx,By,dis1,dis2,temp,temp1;
    cin>>t;
    while(t--){
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        dis1 = Distance(Ox,Oy,Ax,Ay);
        dis2 = Distance(Ax,Ay,Bx,By);
        temp1 = dis1;

        dis1 = dis1*dis1, dis2 = dis2*dis2;

        temp = ((dis1+dis1) - dis2)/(2*dis1);

         printf("Case %d: %.8lf\n",cas++,acos(temp)*temp1);
    }
    return 0;
}

