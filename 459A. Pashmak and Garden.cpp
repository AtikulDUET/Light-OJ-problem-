#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //while(1){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin>>x1>>y1>>x2>>y2;
    if(x1!=x2 && y1!=y2 && abs(x1-x2)!=abs(y1-y2))cout<<-1<<endl;
    else
    {
        if(x1==x2)
        {
            x3 = abs(y1-y2)+x1;
            y3 = y1;
            x4 = x3;
            y4 = y2;
        }
        else if(y1==y2)
        {
            x3 = x1;
            y3 = abs(x1-x2)+y1;
            x4 = x2;
            y4 = y3;
        }
        else
        {
            x3 = x2;
            y3 = y1;
            x4 = x1;
            y4 = y2;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    //}
}
