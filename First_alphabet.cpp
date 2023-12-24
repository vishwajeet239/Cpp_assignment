#include <iostream>
#include<string.h>

using namespace std;


int main() {
    cout<<"enter the string:";
    string s;
    getline(cin,s);
    int ch;
    int n=s.length();
    

    for (int i = 0; i <= n; i++)
    {
        ch=int(s[i]);
        if(i==0) {
            if(ch>=97 && ch<=122) {
                ch=ch-32;
                s[i]=ch;
            }
        }
        if (ch==' ')
        {
            ch=s[i+1];
            if (ch>=97 && ch<=122)
            {
                ch=ch-32;
                s[i+1]=ch;
            }
            
        }
        
    }

    cout<<s;
    

}