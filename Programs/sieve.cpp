//returns all the prime numbers in the range 1 and n using sieve of eratosthenes algorithm
#include <stdio.h>
#include <string.h>
int main(){
	unsigned long long int n;
	scanf("%llu",&n);
	bool a[n+1];
	memset(a,true,sizeof(a));
	unsigned long long int i,j;
	for(i=2; i*i <= n; i++)
		if(a[i])
			for(j = i*2; j<=n; j += i)
				a[j] = false;
	for(i=2;i<=n;i++)
		if(a[i])
			printf("%llu ",i );
	printf("\n");
	return 0;
}
