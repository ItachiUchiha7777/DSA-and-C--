#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char str[100] = "aahaa";
    bool ok = true;
	printf("Original String: %s\n", str);
	int len = strlen(str);
	for (int i = 0, j = len - 1; i <= j; i++, j--) {
		if(str[i] != str[j]){
            ok=false;
            break;
        }
       
	}
	if(ok){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

	return 0;
}
