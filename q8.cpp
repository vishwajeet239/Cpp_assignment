#include<iostream>
using namespace std;
int main()
{

    cout<<"Enter sales";
    int comm;
    int sales;
    cin>>sales;

    if (sales>=5000 && sales<=7500)
    {
        comm=3;
    }
     if (sales>=7501 && sales<=10500)
    {
        comm=8;
    }
     if (sales>=10501 && sales<=15000)
    {
        comm=11;
    }
     if (sales>=15000 && sales<=1000000)
    {
        comm=15;
    }

    float net_salary;
    net_salary=sales*comm/100+sales;
    // cout<<sales;
    // cout<<comm;

    cout<<net_salary;

    return 0;
}   