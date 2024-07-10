#include <iostream>
int main(){
    char s[]="welcome";
    int i;
    for(i=0; s[i]!='\0'; i++){
        printf("%C ", s[i]);
    }
    printf("\nLength is %d\n",i);
    return 0;
}