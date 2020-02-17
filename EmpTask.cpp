#include<iostream>
 using namespace std;
char E[5][4];
class Employee
{
private:
char EmpID[10],EmpName[50],Task[100],status;
static int ind;
public:
void ReadData();
void DisplayData();
};
int Employee::ind;

void Employee::ReadData()
{
cout<<endl<<"Employee ID:";
cin>>EmpID;
cout<<"Employee Name:";
cin>>EmpName;
cout<<"Employee's Task Details:";
cin>>Task;
cout<<"Completion Status";
cin>>status;

}
void Employee::DisplayData()
{
cout<<endl<<"\nEmployee ID:  " << EmpID;
cout<<"\nEmployee Name: " <<EmpName;
cout<<"\nEmployee's Task Details: " << Task;
cout<<"\n Completion Status" << status;
}
int main()
 {
    Employee emp;
    int ch;

    cout<< "Employee Task App";
    cout<< "1. Add Employee Data";
    cout<< "2. Modify Employee Data";
    cout<< "3. Delete Employee Data";
    cout<< "4. View All Employee Data";
    cout<< "5. View Single Employee Data";
    cout<< "6. Exit";

    cout << "Enter Option : ";
    cin >> ch;

    switch(ch)
      {
          case 1 : emp.ReadData(); break;
        //  case 2 : emp.Modify(); break;
        //  case 3 : emp.ReadData(); break;
          case 4 : emp.DisplayData(); break;
          default : cout << "Entered wrong choice";
      }
    return 0;
 }
