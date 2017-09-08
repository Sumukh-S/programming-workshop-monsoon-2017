//outputs the nth fibonacci number
#include <stdio.h>

int main(){
	unsigned long long int i,n;
	scanf("%llu",&n);
	unsigned long long int arr[n+1];
	arr[0] = 0;
	arr[1] = 1;
	if(n>=2){
		for(i=2;i<=n;i++){
			arr[i] = arr[i-1] + arr[i-2];
		}
	}
	printf("%llu\n",arr[n]);
}