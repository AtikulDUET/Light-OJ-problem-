#include<iostream>
using namespace std;
int main()
{
    int bal = 6500,total = 0, price[7],i;

    for(i=0;i<7;i++){
        cout<<"Enter "<<i+1<<" books price: ";
        cin>>price[i];
        total = total +  price[i];
    }

    for(i=0;i<7;i++){
        cout<<i+1<<" Book price: "<<price[i]<<endl;
    }

    cout<<"Total price of the books: "<<total<<endl;
    cout<<"Remaining amount: "<<bal-total<<endl;
    return 0;
}
