#include<iostream>
#include<string.h>
using namespace std;

class bank{
    char name[30];
    long ac_no;
    char type[10];
    float bal;

public:

    void enterData(){
    cout<<"\nName: ";
    cin.ignore();
    cin.getline(name,30);
    cout<<"\nAccount Number: ";
    cin>>ac_no;
    cout<<"\nAccount type: ";
    cin.ignore();
    cin.getline(type,10);
    cout<<"\nBalance: ";
    cin>>bal;


    }


    void deposit(){
    float amt;
    cout<<"Enter Amount to deposit"<<endl;
    cin>>amt;
    bal+=amt;
    cout<<"Balance in Account: "<<bal<<endl;
    }

    void withdraw(){
    float amt;
    cout<<"Enter Amount to Withdraw"<<endl;
    cin>>amt;
    if(bal>=amt)
    bal-=amt;
    cout<<"Balance in Account: "<<bal;
    }


    void display(){
    cout<<"\nName: "<<name;
    cout<<"\nAccount Number: "<<ac_no;
    cout<<"\nAccount type: "<<type;
    cout<<"\nBalance: "<<bal;

    }
};

int  main(){
int n;
    cout<<"\n\n Enter Number of bank Customers: ";
    cin>>n;
    bank b[n];
    for(int i=0;i<n;i++){
    b[i].enterData();
    b[i].deposit();
    b[i].withdraw();
    b[i].display();
    }

    return 0;
}
