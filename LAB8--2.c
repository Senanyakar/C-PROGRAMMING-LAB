#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	
	printf("n sayisi girin:\n");
	scanf("%d",&n);
	
	if(abs(n % 2==0)){
		printf("%d cift sayidir.\n",n);
	}else{
		printf("%d tek sayidir.\n",n);
	}
	
	
	
	return 0;
}
