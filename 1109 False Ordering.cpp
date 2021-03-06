#include<bits/stdc++.h>
#define Size 1000
using namespace std;
struct Person{
    int num,div;
};
int cnt[Size+2];
bool Compare(struct Person x,struct Person y){
    if(x.div < y.div)
        return x.div < y.div;
    else if(x.div==y.div){
        return x.num > y.num;
    }
    else
        return x.div < y.div;
}

void Divisor(){
    for(int i=1;i<=Size;i++){
        for(int j=i;j<=Size;j+=i){
            cnt[j]++;
        }
    }
}
int main()
{
    struct Person p;
    vector<Person>vec;
    Divisor();
    for(int i=1;i<=Size;i++){
            p.num = i, p.div = cnt[i];
        vec.push_back(p);

    }

    sort(vec.begin(),vec.end(),Compare);

    int t,n,cas=1;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<"Case "<<cas++<<": "<<vec[n-1].num<<endl;
    }
    return 0;
}

