//factorial of a number 'n'
#include <stdio.h>

int main(){
	unsigned long long int i, n;
	scanf("%llu",&n);
	unsigned long long int fact = 1;
	for(i=1;i<=n;i++){
		fact *= i;
	}
	printf("%llu\n", fact);
}