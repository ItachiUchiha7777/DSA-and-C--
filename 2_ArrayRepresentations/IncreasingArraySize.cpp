#include <iostream>
int main(){
    int *p, *q;
    int i; 
    
   
    q = new int[10];
    
    
    p = new int[5]{3, 5, 8, 10, 12};

   
    for(i=0; i<5; i++){
        q[i] = p[i];
    }
    
    
    delete[] p;
    
   
    p = q;
    q = NULL;
    
    
    for(i=0; i<5; i++){
        std::cout << p[i] << std::endl;
    }
    
   
    delete[] p;

    return 0;
}
