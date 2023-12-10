#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int IsPrime(int n) {
	if(n == 1){
		return 0;
	}else{
		for(int i = 2; i < n; i++){
			if(n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int GeneratePublicKey_N(int n) {
    int arr[n];
    int cnt = 0;
    int M1, M2;
    for(int i = 2; i < n; i++){
        if(IsPrime(i) == 1){
            arr[cnt++] = i;
        }
    }
    M1 = arr[cnt - 1];
    M2 = arr[cnt - 2];
    return M1 * M2;
}

int Power(int x, int b) {
    return pow(x, b);
}
int RSAEncrypt(int m, int n) {
	return Power(m, 5) % GeneratePublicKey_N(n);
}

int main(){

    int m, n;
    scanf("%d %d", &m, &n);

    int res = RSAEncrypt(m, n);
    printf("%d\n", res);

    return 0;
}