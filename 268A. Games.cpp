//#include<iostream>
//using namespace std;
//int main()
//{
//    int n, cnt = 0;
//    cin>>n;
//    int h[n], g[n];
//    for(int i = 0; i<n; i++)
//    {
//        cin>>h[i]>>g[i];
//    }
//    for(int i = 0; i<n; i++)
//    {
//        for(int j = 0; j<n; j++)
//        {
//            if(h[i]==g[j])cnt++;
//        }
//    }
//    cout<<cnt<<endl;
//}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n], a[n], sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>h[i]>>a[i];
    }
    int ar1[101] = {0}, ar2[101] = {0};
    for(int i = 0; i<n; i++)
    {
        ar1[h[i]]+=1;
        ar2[a[i]]+=1;
    }
    for(int i = 1; i<=100; i++)
    {
        sum = sum+ar1[i]*ar2[i];
    }
    cout<<sum<<endl;
}
