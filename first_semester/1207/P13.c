#include <stdio.h>
#include <string.h>

int main(){

    char a[20];
	int i, j;
	gets(a);
	j = strlen(a) - 1;
	for (i = 0; i < j; i++, j--)
		if (a[i] != a[j]) 
            break;

	if (a[i] == a[j])
		printf("True\n");
	else 
        printf("False\n");

	return 0;
}