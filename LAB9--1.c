#include <stdio.h>
#include <stdlib.h>

int main(){
	int A,B,C;
	
	
	printf("A,B,C degerlerini girin:");
	scanf("%d%d%d",&A,&B,&C);
	
	if(A>B && A>C){
	printf("%d en buyuktur",A);	
	}else if(B>A && B>C){
	printf("%d en buyuktur",B);	
	}else{
	printf("%d en buyuktur",C);	
	}
    

	
	
	
	return 0;
}
