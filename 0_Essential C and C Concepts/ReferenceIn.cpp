/*

A refrence is just an alisa , it uses the same memory of a its just another name its not like a pointer
-----------dont mistake refrence as a pointer-----------------
*/

#include <iostream>
using namespace std;
int main(){
    int a=10;
//its we put * its a pointer ,,,      if & its a refrence
//*******************************you must initialize refrence that time only****************************

    int &r=a;
    int b=30;
    r=b;
    cout<<a<<endl<<r<<endl;
    return 0;
}