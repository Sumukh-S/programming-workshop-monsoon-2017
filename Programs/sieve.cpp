//returns all the prime numbers in the range 1 and n using sieve of eratosthenes algorithm
#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	bool a[n] = { true };
	memset(a,true,sizeof(a));
	for(int i=2; i*i <= n; i++)
		if(a[i])
			for(int j = i*i; j<=n; j += i)
				a[j] = false;
	for(int i=2;i<=n;i++)
		if(a[i])
			printf("%d ",i );
	printf("\n");
	return 0;
}
