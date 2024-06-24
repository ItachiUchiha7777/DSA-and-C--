#include <iostream>
using namespace std;
// ------------------------------------------syntax------------------------------------

// template <class Ttype>
// class mongo{

// }




// -------------------------------------------single---------------------------------


// template <class T>
// class mongo{
//     public:
//     T n1=5;
//     T n2=6;

//     void add()
//     {
//         cout<<"addition "<<n1+n2<<endl;
//     }
// };


// int main(){
//     mongo<int> d;
//     d.add();
//     return 0;
// }


// -----------------------------------Multi variable--------------------------------------


template <class T1,class T2>
class mongo{
    public:
    T1 n1=5;
    T2 n2=6;
    public:
      mongo(T1 x,T2 y)  
       {  
           n1 = x;  
           n2 = y;  
        }  
    void add()
    {
        cout<<"values "<<n1<<" and"<<n2<<endl;
    }
};


int main(){
    mongo<int,float> d(5,5.5);
    d.add();
    return 0;
}