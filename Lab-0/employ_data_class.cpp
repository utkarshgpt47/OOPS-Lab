#include<iostream>
#include<cstring>
using namespace std;

class employee{
public:
	char empid[10];
	char name[20];
	int age;
	float salary;
	char address[30];
    void enterData(employee[],int n);
    void displayData(employee[],int n);
    void searchData(employee[],int n);
    void updateData(employee[],int n);
};
void enterData(employee e[],int n){

    for(int i=0;i<n;i++){
        cout<<"\n ******* Enter the Data of "<<i+1<<" Employee *******"<<endl<<endl;
        cout<<"\n Employee ID: ";
        cin>>e[i].empid;
        cin.ignore();
        cout<<"\n Name: ";
        cin.get(e[i].name,20);
        cout<<"\n Age: ";
        cin>>e[i].age;
        cout<<"\n Salary: ";
        cin>>e[i].salary;
        cin.ignore();
        cout<<"\n Address: ";
        cin.get(e[i].address,30);

    }
return;
}

void displayData(employee e[],int n){
cout<<"Details of Employees"<<endl;
for(int i=0;i<n;i++){
    cout<<i+1<<" Employee"<<endl;
    cout<<"Employee ID : "<<e[i].empid<<endl;
    cout<<"Name : "<<e[i].name<<endl;
    cout<<"Age : "<<e[i].age<<endl;
    cout<<"Salary : "<<e[i].salary<<endl;
    cout<<"Address : "<<e[i].address<<endl;
}
cout<<endl;
}

void searchData(employee e[],int n){
	char key[20];
	int a=0;
	cout<<"Enter the Name of employee to be search."<<endl;
	cin.ignore();
	cin.getline(key,20);
	for(int i=0;i<n;i++){
		if(strcmp(e[i].name,key)==0){
			cout<<"Details of "<<key<<" is."<<endl;
			cout<<"Employee ID : "<<e[i].empid<<endl;
   			cout<<"Name : "<<e[i].name<<endl;
    		cout<<"Age : "<<e[i].age<<endl;
    		cout<<"Salary : "<<e[i].salary<<endl;
    		cout<<"Address : "<<e[i].address<<endl;

		}

	}

}

void updateData(employee e[],int n){
    char key[20];
    cout<<"Enter the employee Id which you want to update"<<endl;
    cin.ignore();
    cin.getline(key,20);
    for(int i=0;i<n;i++){
        if(strcmp(e[i].empid,key)==0){
            cout<<"Update Salary: "<<endl;
            cin>>e[i].salary;
            cout<<"Employee ID : "<<e[i].empid<<endl;
   			cout<<"Name : "<<e[i].name<<endl;
    		cout<<"Age : "<<e[i].age<<endl;
    		cout<<"Salary : "<<e[i].salary<<endl;
    		cout<<"Address : "<<e[i].address<<endl;
            break;
        }
    }
}




int main(){
    int ch;
    int n;
    cout<<"Enter the Number of Employee: ";
    cin>>n;
    employee *e = new employee[n];
    do{
    cout<<"Enter What you want to do"<<endl;
    cout<<"1.Enter Data"<<endl;
    cout<<"2.Display Data"<<endl;
    cout<<"3.Search"<<endl;
    cout<<"4.Update"<<endl;
    cout<<"5.Exit"<<endl;
    cin>>ch;

    switch(ch){
        case 1:{
            enterData(e,n);
            break;
        }
        case 2:{
            displayData(e,n);
            break;
        }
        case 3:{
            searchData(e,n);
            break;
        }
        case 4:{
            updateData(e,n);
            break;
        }
        default:{
            cout<<"Thank You"<<endl;
            break;
        }

    }
    }while(ch<=4);
return 0;
}


