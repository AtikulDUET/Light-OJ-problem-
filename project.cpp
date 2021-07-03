#include<bits/stdc++.h>
using namespace std;

map<string,bool>mp;
int ContactCnt=0,FamilyCnt=0,FriendCnt=0,OtherCnt=0;

class Contact{
public:
    int ID,phn,type;
    string FirstName,LastName,SurName,address,email;

    Contact(){ };

    Contact(int id,int phn,string Fname,string add,string email,string Lname,string Snam){
        this->ID = id;
        this->phn = phn,
        this->FirstName = Fname,
        this->address = add,
        this->email = email;
        this->LastName = Lname;
        this->SurName = Snam;
    }

    ~Contact(){   };
    void set(int id,int phn,string Fname,string add,string email,string Lname,string Sname){
        this->ID = id;
        this->phn = phn,
        this->FirstName = Fname,
        this->address = add,
        this->email = email;
        this->LastName = Lname;
        this->SurName =  Sname;
    }


    void Assign(Contact ob){
        ID = ob.ID,   phn = ob.phn,  FirstName = ob.FirstName,
        LastName = ob.LastName,  SurName = ob.SurName,
        address = ob.address,  email = ob.email;
    }

    void NewContact();

    friend void print(Contact ob[],int cnt);

    void FindContact(Contact ob[],int cnt);

    void DeleteContact(Contact ob[],int id);

    void EditContact(Contact ob[],int cnt);

    void SortContact(Contact ob[],int cnt);
    friend ostream& operator << (ostream& stream, Contact &ob);
    friend istream& operator >>(istream &stream, Contact &ob);
    bool operator ==(Contact &ob);

};


bool Contact::operator==(Contact &ob){

    return ((FirstName==ob.FirstName)&&(LastName==ob.LastName)&&(SurName==ob.SurName));
}

class FamilyMemeber : public Contact{
public:
    void FamilyPrint(FamilyMemeber ob[],int n){
    cout<<"\n\t\t==================================="<<endl;
    cout<<"\t\t\t FAMILY MEMBER CONTACTS LIST."<<endl;
    cout<<"\t\t==================================="<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t Person ID:            "<<ob[i].ID<<endl;
        cout<<"\t Person First Name:    "<<ob[i].FirstName<<endl;
        cout<<"\t Person Last Name:     "<<ob[i].LastName<<endl;
        cout<<"\t Person Sur Name:      "<<ob[i].SurName<<endl;
        cout<<"\t Email Address:        "<<ob[i].email<<endl;
        cout<<"\t Address:              "<<ob[i].address<<endl;
        cout<<"\t Phone Number:         "<<ob[i].phn<<endl<<endl;
    }
    }

    void DeleteFamilyMember(FamilyMemeber Familyob[],int id){
            int ck = 0;

    for(int i=0;i<FamilyCnt;i++){
        if(Familyob[i].ID == id || ck==1){
                ck = 1;
            Familyob[i].FirstName = Familyob[i+1].FirstName;
            Familyob[i].LastName = Familyob[i+1].LastName;
            Familyob[i].SurName = Familyob[i+1].SurName;
            Familyob[i].email = Familyob[i+1].email;
            Familyob[i].phn = Familyob[i+1].phn;
            Familyob[i].ID = Familyob[i+1].ID;
        }
    }
    if(ck==1)
    --FamilyCnt;

    }


};

class Friend : public Contact{
public:
    void FriendPrint(Friend ob[],int n){
    cout<<"\n\t\t==================================="<<endl;
    cout<<"\t\t\t FRIEND CONTACTS LIST."<<endl;
    cout<<"\t\t==================================="<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t Person ID:            "<<ob[i].ID<<endl;
        cout<<"\t Person First Name:    "<<ob[i].FirstName<<endl;
        cout<<"\t Person Last Name:     "<<ob[i].LastName<<endl;
        cout<<"\t Person Sur Name:      "<<ob[i].SurName<<endl;
        cout<<"\t Email Address:        "<<ob[i].email<<endl;
        cout<<"\t Address:              "<<ob[i].address<<endl;
        cout<<"\t Phone Number:         "<<ob[i].phn<<endl<<endl;
    }
    }
    void DeleteFriend(Friend Friendob[],int id){
           int   ck = 0;
       for(int i=0;i<FriendCnt;i++){
        if(Friendob[i].ID == id || ck==1){
                ck = 1;
            Friendob[i].FirstName = Friendob[i+1].FirstName;
            Friendob[i].LastName = Friendob[i+1].LastName;
            Friendob[i].SurName = Friendob[i+1].SurName;
            Friendob[i].email = Friendob[i+1].email;
            Friendob[i].phn = Friendob[i+1].phn;
            Friendob[i].ID = Friendob[i+1].ID;
        }
    }
    if(ck==1)
    --FriendCnt;
    }
};


class Other : public Contact{
public:
    void OtherPrint(Other ob[],int n){
    cout<<"\n\t\t==================================="<<endl;
    cout<<"\t\t\t OTHER CONTACTS LIST."<<endl;
    cout<<"\t\t==================================="<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t Person ID:            "<<ob[i].ID<<endl;
        cout<<"\t Person First Name:    "<<ob[i].FirstName<<endl;
        cout<<"\t Person Last Name:     "<<ob[i].LastName<<endl;
        cout<<"\t Person Sur Name:      "<<ob[i].SurName<<endl;
        cout<<"\t Email Address:        "<<ob[i].email<<endl;
        cout<<"\t Address:              "<<ob[i].address<<endl;
        cout<<"\t Phone Number:         "<<ob[i].phn<<endl<<endl;
    }
    }


    void DeleteOther(Other Otherob[],int id){

        int ck = 0;
       for(int i=0;i<OtherCnt;i++){
        if(Otherob[i].ID == id || ck==1){
                ck = 1;
            Otherob[i].FirstName = Otherob[i+1].FirstName;
            Otherob[i].LastName = Otherob[i+1].LastName;
            Otherob[i].SurName = Otherob[i+1].SurName;
            Otherob[i].email = Otherob[i+1].email;
            Otherob[i].phn = Otherob[i+1].phn;
            Otherob[i].ID = Otherob[i+1].ID;
        }
    }


    --OtherCnt;
    }
};



void Contact::SortContact(Contact ob[],int cnt){
    int n,ck = 0;
    while(1){
        if(ck==1)
            break;

    cout<<"\n\t\t [1]: Sort By ID: ";
    cout<<"\n\t\t [2]: Sort By First Name: ";
    cout<<"\n\n\t\t Enter your choice: ";
    cin>>n;
    if(n==2){
            ck = 1;
        for(int i=0;i<cnt;i++){
            for(int j=i+1;j<cnt;j++){
                if(ob[i].FirstName > ob[j].FirstName){
                    swap(ob[i].FirstName,ob[j].FirstName);
                    swap(ob[i].LastName,ob[j].LastName);
                    swap(ob[i].SurName,ob[j].SurName);
                    swap(ob[i].ID,ob[j].ID);
                    swap(ob[i].address,ob[j].address);
                    swap(ob[i].phn,ob[j].phn);
                    swap(ob[i].email,ob[j].email);
                }
            }
        }
    }

    else if(n==1){
            ck = 1;
        for(int i=0;i<cnt;i++){
            for(int j=i+1;j<cnt;j++){
                if(ob[i].ID > ob[j].ID){
                    swap(ob[i].FirstName,ob[j].FirstName);
                    swap(ob[i].LastName,ob[j].LastName);
                    swap(ob[i].SurName,ob[j].SurName);
                    swap(ob[i].ID,ob[j].ID);
                    swap(ob[i].address,ob[j].address);
                    swap(ob[i].phn,ob[j].phn);
                    swap(ob[i].email,ob[j].email);
                }
            }
        }
    }
    else
        cout<<"\n\t\tOpps!!! Invalid Choice. Please Enter the correct choice."<<endl;
    }

    cout<<"After Sorting: "<<endl;
     for(int i=0;i<cnt;i++){
        cout<<"\t Person ID:            "<<ob[i].ID<<endl;
        cout<<"\t Person First Name:    "<<ob[i].FirstName<<endl;
        cout<<"\t Person Last Name:     "<<ob[i].LastName<<endl;
        cout<<"\t Person Sur Name:      "<<ob[i].SurName<<endl;
        cout<<"\t Email Address:        "<<ob[i].email<<endl;
        cout<<"\t Address:              "<<ob[i].address<<endl;
        cout<<"\t Phone Number:         "<<ob[i].phn<<endl<<endl;
    }
}



void Contact::EditContact(Contact ob[],int cnt){

    string str,Fname,Lname,Sname;
    int ID,ch;
    cout<<"\n\t\t[1] To change Name: "<<endl;
    cout<<"\t\t[2] To Change Email: "<<endl;
    cout<<"\t\t[3] To Change Address: "<<endl;

    cout<<"Enter your choice: ";
    cin>>ch;

    cout<<"Enter ID for change: ";
    cin>>ID;

    getchar();

    if(ch==1){
        cout<<"Enter your New First Name: ";
        getline(cin,Fname);

        cout<<"Enter your New Last Name: ";
        getline(cin,Lname);

        cout<<"Enter your New Sur Name: ";
        getline(cin,Sname);
    }

    else if(ch==2){
        cout<<"Enter your New Email Address: ";
        getline(cin,str);
    }

    else if(ch==3){
        cout<<"Enter your New Address: ";
        getline(cin,str);
    }

    for(int i=0;i<cnt;i++){
        if(ob[i].ID==ID){
            if(ch==1){
                ob[i].FirstName = Fname;
                ob[i].LastName = Lname;
                ob[i].SurName = Sname;
            }
            else if(ch==2)
                ob[i].email = str;
            else if(ch==3)
                ob[i].address = str;
            break;
        }
    }

}


void Contact::DeleteContact(Contact ob[],int id){
    int ck=0;

    for(int i=0;i<ContactCnt;i++){
        if(ob[i].ID == id || ck==1){
                ck = 1;
            ob[i].FirstName = ob[i+1].FirstName;
            ob[i].LastName = ob[i+1].LastName;
            ob[i].SurName = ob[i+1].SurName;
            ob[i].email = ob[i+1].email;
            ob[i].phn = ob[i+1].phn;
            ob[i].ID = ob[i+1].ID;
        }
    }

    if(ck==1)
      --ContactCnt;
}


void Contact::FindContact(Contact ob[],int cnt){
    int id,ck = 0,temp;
    cout<<"Enter your Student ID for search: ";
    cin>>id;

    for(int i=0;i<cnt;i++){
        if(ob[i].ID==id){
            ck = 1;
            temp = i;
            break;
        }
    }

    if(ck==1){
        cout<<"\t\tYes, Found the SID in the contact list"<<endl;

        cout<<"\t Person ID:            "<<ob[temp].ID<<endl;
        cout<<"\t Person First Name:    "<<ob[temp].FirstName<<endl;
        cout<<"\t Person Last Name:     "<<ob[temp].LastName<<endl;
        cout<<"\t Person Sur Name:      "<<ob[temp].SurName<<endl;
        cout<<"\t Email Address:        "<<ob[temp].email<<endl;
        cout<<"\t Address:              "<<ob[temp].address<<endl;
        cout<<"\t Phone Number:         "<<ob[temp].phn<<endl<<endl;
    }

    else
        cout<<"\t\tOpps!! Your ID is not Found in the contact list"<<endl;
}



void  Contact::NewContact(){
    int phn,id,ck = 0;
    string Fname,add,email,Lname,Sname;

    cout<<"Enter your Person ID: ";
    cin>>id;
    getchar();
    while(1)
    {
        if(ck==1)
            break;
        cout<<"Enter your New First Name: ";
        getline(cin,Fname);
        if(mp[Fname]==0)
        {
            mp[Fname] = 1;
            ck = 1;
        }
        else
        {
            cout<<"\nOpps!!!Please Insert another name. "<<endl;
        }
    }

    cout<<"Enter your New Last Name: ";
    getline(cin,Lname);

    cout<<"Enter your New Sur Name: ";
    getline(cin,Sname);

    cout<<"Enter your email: ";
    cin>>email;

    getchar();
    cout<<"Enter your address: ";
    getline(cin,add,'\n');

    cout<<"Enter your phone number: ";
    cin>>phn;
    set(id,phn,Fname,add,email,Lname,Sname);

}



void print(Contact Contactob[],int ContactCnt, FamilyMemeber Familyob[], int Familycnt, Friend Friendob[],int FriendCnt,Other Otherob[],int OtherCnt){
    int ch;
    while(1){

        cout<<"\t\t=============================================="<<endl;
        cout<<"\t\t [1] To Show All Contact"<<endl;
        cout<<"\t\t [2] To Show Family Member Contact"<<endl;
        cout<<"\t\t [3] To Show Friend Contact"<<endl;
        cout<<"\t\t [4] To Show Other Contact"<<endl;
        cout<<"\t\t [0] Exit"<<endl;
        cout<<"\t\t====================================="<<endl;

        cout<<"\nEnter your choice: ";
        cin>>ch;
        if(ch==0)
            break;
        switch(ch){

            case 1:
                cout<<"\n\t\t==================================="<<endl;
                cout<<"\t\t\t LIST OF All CONTACTS"<<endl;
                cout<<"\t\t==================================="<<endl<<endl;
                for(int i=0;i<ContactCnt;i++){
                    cout<<"\t Person ID:            "<<Contactob[i].ID<<endl;
                    cout<<"\t Person First Name:    "<<Contactob[i].FirstName<<endl;
                    cout<<"\t Person Last Name:     "<<Contactob[i].LastName<<endl;
                    cout<<"\t Person Sur Name:      "<<Contactob[i].SurName<<endl;
                    cout<<"\t Email Address:        "<<Contactob[i].email<<endl;
                    cout<<"\t Address:              "<<Contactob[i].address<<endl;
                    cout<<"\t Phone Number:         "<<Contactob[i].phn<<endl<<endl;
                }
            break;

            case 2:
                cout<<"\n\t\t==================================="<<endl;
                cout<<"\t\t\t LIST OF FAMILY MEMBER CONTACTS"<<endl;
                cout<<"\t\t==================================="<<endl<<endl;
                for(int i=0;i<Familycnt;i++){
                    cout<<"\t Person ID:            "<<Familyob[i].ID<<endl;
                    cout<<"\t Person First Name:    "<<Familyob[i].FirstName<<endl;
                    cout<<"\t Person Last Name:     "<<Familyob[i].LastName<<endl;
                    cout<<"\t Person Sur Name:      "<<Familyob[i].SurName<<endl;
                    cout<<"\t Email Address:        "<<Familyob[i].email<<endl;
                    cout<<"\t Address:              "<<Familyob[i].address<<endl;
                    cout<<"\t Phone Number:         "<<Familyob[i].phn<<endl<<endl;
                }

                break;

            case 3:

                cout<<"\n\t\t==================================="<<endl;
                cout<<"\t\t\t LIST OF FRIEND CONTACTS"<<endl;
                cout<<"\t\t==================================="<<endl<<endl;
                for(int i=0;i<FriendCnt;i++){
                    cout<<"\t Person ID:            "<<Friendob[i].ID<<endl;
                    cout<<"\t Person First Name:    "<<Friendob[i].FirstName<<endl;
                    cout<<"\t Person Last Name:     "<<Friendob[i].LastName<<endl;
                    cout<<"\t Person Sur Name:      "<<Friendob[i].SurName<<endl;
                    cout<<"\t Email Address:        "<<Friendob[i].email<<endl;
                    cout<<"\t Address:              "<<Friendob[i].address<<endl;
                    cout<<"\t Phone Number:         "<<Friendob[i].phn<<endl<<endl;
                }
            break;

            case 4:

                cout<<"\n\t\t==================================="<<endl;
                cout<<"\t\t\t LIST OF OTHER CONTACTS"<<endl;
                cout<<"\t\t==================================="<<endl<<endl;
                for(int i=0;i<OtherCnt;i++){
                    cout<<"\t Person ID:            "<<Otherob[i].ID<<endl;
                    cout<<"\t Person First Name:    "<<Otherob[i].FirstName<<endl;
                    cout<<"\t Person Last Name:     "<<Otherob[i].LastName<<endl;
                    cout<<"\t Person Sur Name:      "<<Otherob[i].SurName<<endl;
                    cout<<"\t Email Address:        "<<Otherob[i].email<<endl;
                    cout<<"\t Address:              "<<Otherob[i].address<<endl;
                    cout<<"\t Phone Number:         "<<Otherob[i].phn<<endl<<endl;
                }
            break;

            default:
                cout<<"\n\tOpps!!! Please Insert Valid choice."<<endl;

        }
    }
}




ostream& operator << (ostream& stream, Contact &ob){
    stream<<"\t Person ID:            "<<ob.ID<<endl;
    stream<<"\t Person First Name:    "<<ob.FirstName<<endl;
    stream<<"\t Person Last Name:     "<<ob.LastName<<endl;
    stream<<"\t Person Sur Name:      "<<ob.SurName<<endl;
    stream<<"\t Email Address:        "<<ob.email<<endl;
    stream<<"\t Address:              "<<ob.address<<endl;
    stream<<"\t Phone Number:         "<<ob.phn<<endl<<endl;
    return stream;
}



istream& operator >>(istream &stream, Contact &ob){
    cout<<"Enter your Person ID: ";
    stream>>ob.ID;
    getchar();
    cout<<"Enter your First Name: ";
    getline(cin,ob.FirstName,'\n');

    cout<<"Enter your Last Name: ";
    getline(cin,ob.LastName,'\n');

    cout<<"Enter your SurName Name: ";
    getline(cin,ob.SurName,'\n');


    cout<<"Enter your email: ";
    stream>>ob.email;

    getchar();
    cout<<"Enter your address: ";
    getline(cin,ob.address,'\n');

    cout<<"Enter your phone number: ";
    stream>>ob.phn;
    return stream;
}


int  RelationType(){
    int ty=0;

     while(1){
            int ch;
            if(ty!=0)
                break;
        cout<<"\n\t**********Relation Type.********"<<endl;
        cout<<"\n\t\t  [1] Family Memeber."<<endl;
        cout<<"\t\t  [2] Friend."<<endl;
        cout<<"\t\t  [3] Other."<<endl;
        cout<<" Enter your Choice:  ";
        cin>>ch;
        if(ch==1)
            ty = 1;
        else if(ch==2)
            ty = 2;
        else if(ch==3)
            ty = 3;
        else
            cout<<"\t\tOpps!!! Please Insert Valid Choice."<<endl;
    }
    return ty;
}

int main()
{
    int ch,temp,id;
    Contact ContactArray[1000], Contactob;
    FamilyMemeber FamilyArray[1000],Familyob;
    Friend FriendArray[1000],Friendob;
    Other OtherArray[1000],Otherob;


    while(1){
        cout<<"\n\n\t\t***Welcome to Contact Management System******"<<endl<<endl;
        cout<<"\t\t\t\t MAIN MANU"<<endl;
        cout<<"\t\t=============================================="<<endl;
        cout<<"\t\t [1] Add a new Contact"<<endl;
        cout<<"\t\t [2] List all Contact"<<endl;
        cout<<"\t\t [3] Search for contact"<<endl;
        cout<<"\t\t [4] Edit a Contact"<<endl;
        cout<<"\t\t [5] Delete a Contact"<<endl;
        cout<<"\t\t [6] Sorting Contact"<<endl;
        cout<<"\t\t [0] Exit"<<endl;
        cout<<"\t\t====================================="<<endl;

        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch){

        case 1:
            Contactob.NewContact();
             ContactArray[ContactCnt++].Assign(Contactob);
             temp = RelationType();
            if(temp==1)
                FamilyArray[FamilyCnt++].Assign(Contactob);

            else if(temp==2)
                FriendArray[FriendCnt++].Assign(Contactob);
            else
                OtherArray[OtherCnt++].Assign(Contactob);
            break;


        case 2:
            print(ContactArray,ContactCnt,FamilyArray,FamilyCnt,FriendArray,FriendCnt,OtherArray,OtherCnt);
            break;

        case 3:
            Contactob.FindContact(ContactArray,ContactCnt);
            break;
        case 4:
            Contactob.EditContact(ContactArray,ContactCnt);
            break;
        case 5:
             cout<<"Enter the Student ID that your delete: ";
             cin>>id;

            Contactob.DeleteContact(ContactArray,id);
            Familyob.DeleteFamilyMember(FamilyArray,id);
            Friendob.DeleteFriend(FriendArray,id);
            Otherob.DeleteOther(OtherArray,id);
            break;
        case 6:
           Contactob.SortContact(ContactArray,ContactCnt);
            break;
        case 0:
            return 0;
        default:
            cout<<"Opps!! Please enter the right choice."<<endl;
        }

    }
    return 0;
}
