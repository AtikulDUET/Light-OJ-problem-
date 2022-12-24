#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,rem1,rem2,t,cas=1;
    int area;
    cin>>t;
    while(t--){
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        rem1 = Bx - Ax, rem2 = By - Ay;
        Dx = Cx - rem1, Dy = Cy - rem2;
        area = 0.5*( ((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay)) -( (Bx*Ay)+(Cx*By) + (Dx*Cy)+(Ax*Dy) ) );
        cout<<"Case "<<cas++<<": "<<Dx<<" "<<Dy<<" "<<abs(area)<<endl;
    }
    return 0;
}


