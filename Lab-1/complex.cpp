#include<iostream>
#include<string.h>
using namespace std;

class complex{
    float real,imag;
public:
    void enterData();
    void displayData();
    void addData(complex,complex);
    void subData(complex,complex);


};

void complex :: displayData(){
if(imag>0)
    cout<<real<<"+"<<imag<<"i"<<endl;
 else
    cout<<real<<" "<<imag<<"i"<<endl;
}

void complex :: enterData(){
       cout<<" Enter real"<<endl;
    cin>>real;
    cout<<" Enter Imaginary"<<endl;
    cin>>imag;

}

void complex :: addData(complex c1,complex c2){

 real=c1.real+c2.real;
 imag=c1.imag+c2.imag;

}

void complex :: subData(complex c1,complex c2){
 real=c1.real-c2.real;
 imag=c1.imag-c2.imag;

}



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


int main(){
    complex c1,c2,c3,c4;
    cout<<"Enter First Complex number: ";
    c1.enterData();
    cout<<"Enter Second Complex Number: ";
    c2.enterData();
    c3.addData(c1,c2);
    c4.subData(c1,c2);
    cout<<"\nAddition: ";
    c3.displayData();
    cout<<"\nSubtraction: ";
    c4.displayData();


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


