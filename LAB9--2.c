#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int n;
	int fac=1;
	
	printf("faktoriyeli alinacak sayiyi giriniz:\n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		fac*=i;
		fac=fac;
	}
	printf("faktoriyel islemi sonucunuz=%d",fac);
	return 0;
}
