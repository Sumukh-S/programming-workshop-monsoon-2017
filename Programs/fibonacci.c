//outputs the nth fibonacci number
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i,arr[n+1];
	arr[0] = 0;
	arr[1] = 1;
	for(i=2;i<n;i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	printf("%d\n",arr[n]);
}