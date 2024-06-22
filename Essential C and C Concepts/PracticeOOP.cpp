#include <iostream>
using namespace std;

class Rectangle{
    int len,bred;
    public:
    Rectangle()
    {
        len=0;
        bred=0;
    }
     Rectangle(int l,int b)
    {
        len=l;
        bred=b;
    }
    int area(){
        return len*bred;
    } 
    int peri(){
        return 2*(len+bred);
    }
    void setlen(int l)
    {
        len=l;        
    }
};


int main(){
    Rectangle r(10,5);
    cout<<"AReA "<<r.area()<<endl;
    cout<<"Peri "<<r.peri()<<endl;


}