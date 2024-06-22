#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};



// void fun( struct Rectangle *r){
//       r->length=20;
//       printf("Length: %d\nBreadth: %d", r->length,r->breadth);

// }




// this modifies the actual value
// void fun( struct Rectangle *r){
//       r.length=20;
//       printf("Length: %d\nBreadth: %d", r.length,r.breadth);

// }

struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle;
    p->length=20;
    p->breadth=20;
    return p;
}






int main(){
   struct Rectangle *ptr=fun();

    cout<<"Length: "<<ptr->length<<endl<<"Breadth: "<<ptr->breadth<<endl;
   return 0;
}