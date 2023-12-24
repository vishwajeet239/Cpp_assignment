#include<iostream>
using namespace std;
class BigInt{
    int num;
    public: 
    BigInt(int num2):num(num2){
    }
    BigInt (){

    }
    BigInt operator +(BigInt obj) {
        BigInt temp= num + obj.num;
        return temp;
    }

    BigInt operator ++(){

    }
    void display(){
        cout<<num;
    }
   
    

};

int main(){
    BigInt obj1(30), obj2(20),obj3;
    obj3=obj1+obj2;
    obj3.display();
    
    return 0;
}