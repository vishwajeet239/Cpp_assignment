#include <iostream>
#include<string.h>

using namespace std;


int main() {
    cout<<"enter the string:";
    string s;
    cin>>s;
    int n=s.length();
    string ts=s;
    int index=0;

    for (int i = n-1; i >= 0; i--)
    {
        s[index]=ts[i];
        index++;
    }

    cout<<s;
    

}