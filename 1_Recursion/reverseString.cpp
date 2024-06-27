#include <iostream>

using namespace std;

void rev(char* str,int len){
    if(len<0){
        return ;
    }cout<<str[len];
    rev(str,len-1);
}


int main(){
char str[]="HEllo World";
int len=sizeof(str)/sizeof(str[0])-2;
cout<<"Reversed string: ";
rev(str,len);
return 0;
}