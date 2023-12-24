#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public :
        void setid() {
            cout<<"enter id of employee"<<endl;
            cin>>id;
        }
        void getid() {
            cout<<"id of employee is "<<id<<endl;
        }
};
int main()
{
    employee arr[4];
    for (int i = 0; i < 4; i++)
    {
        arr[i].setid();
        arr[i].getid();
        
    }
    

    return 0;
}