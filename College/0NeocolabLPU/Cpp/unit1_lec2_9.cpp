// You are using GCC
#include <iostream>
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int c=(y-5*x)/13;
    int a=c+x;
    int s=2*c;
    printf("Number of children tickets sold: %d\n",c);
    printf("Number of adult tickets sold: %d\n",a);
    printf("Number of senior tickets sold: %d",s);
    return 0;
}