#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1,x,sz,cmd,value,ck;
    string str;
    cin>>t;
    deque<int>q;
    while(t--){
            q.clear();
        cin>>sz>>cmd;
        cout<<"Case "<<cas++<<":"<<endl;
        for(int i=0;i<cmd;i++){
            cin>>str;
            if(str=="pushLeft"){
                cin>>x;
                ck = q.size();
                if((ck+1)>sz)
                    cout<<"The queue is full"<<endl;
                else{
                cout<<"Pushed in left: "<<x<<endl;
                q.push_front(x);
                }
            }
            else if(str=="pushRight"){
                cin>>x;
                ck = q.size();
                if((ck+1)>sz)
                    cout<<"The queue is full"<<endl;
                else{
                cout<<"Pushed in right: "<<x<<endl;
                q.push_back(x);
                }
            }
            else if(str=="popLeft"){
                    value = q.front();
                    ck = q.size();
                    if(ck<=0)
                        cout<<"The queue is empty"<<endl;
                    else{
                cout<<"Popped from left: "<<value<<endl;
                    q.pop_front();
                    }
            }
            else if(str=="popRight"){
                value = q.back();
                ck = q.size();
                    if(ck<=0)
                        cout<<"The queue is empty"<<endl;
                    else{
                cout<<"Popped from right: "<<value<<endl;
                q.pop_back();
                    }
            }
        }
    }
    return 0;
}

