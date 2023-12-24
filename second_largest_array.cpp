#include <iostream>
using namespace std;

int main() {
    int arr[4]={1,2,5,4};

    for (int i = 0; i < 4; i++)
    {
       for (int j =i+1; j < 4; j++)
       {
          if(arr[i]<arr[j]) {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }
       }
    }

    cout<<arr[1];
    
}