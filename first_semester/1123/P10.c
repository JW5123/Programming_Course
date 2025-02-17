// implementation
#include <stdio.h>
#include <string.h>
#define MAXBUFFER 1024

const char* HexTable = "0123456789abcdef";

int reverse(char *str){
        int i, j;
        char temp;

        j = strlen(str) - 1;
        for(i=0; i < j; i++){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                j--;
        }
        return 0;
}

void DecToHex(char* BinBfr, int n, int sys){

	int a = n, b = sys, c = 0;
	unsigned int f = 0;
	while ( a != 0 )
	{
		c = a % b;
		a /= b;
		BinBfr[f++] = HexTable[c];
	}
	BinBfr[f] = '\0';

	reverse(BinBfr);
}

int main(int argc, char** argv)
{
	char buffer[MAXBUFFER];
	int nbr, n, t;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &nbr, &n);
        DecToHex(buffer, nbr, n);
        printf("%s\n", buffer);   
    }
	return (0);
}