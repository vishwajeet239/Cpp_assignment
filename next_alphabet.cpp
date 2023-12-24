#include <iostream>
#include<string.h>

using namespace std;


int main() {
    cout<<"enter the string:";
    string s;
    cin>>s;
    int n=s.length();
    int ch;
    

    for (int i = 0; i <= n; i++)
    {
        ch=int(s[i]);

		if (ch == 122)
		{
			s[i] = char(97);
		}
		else if (ch == 90)
		{
			s[i] = char(65);
		}
		else if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
		{
			s[i] = char(ch + 1);
		}
    }

    cout<<s;
    

}