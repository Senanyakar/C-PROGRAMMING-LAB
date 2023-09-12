#include <stdio.h>
#include <stdlib.h>

int main(){
	float sicaklik;
	
	printf("sicaklik degeri girin:\n");
	scanf("%f",&sicaklik);
	
	if(sicaklik==0){
		printf("donma noktasi degeri.");
	} else if(sicaklik<0){
		printf("donma noktasindan dusuk deger.");
	} else{
		printf("donma noktasindan buyuk deger.");
	}
	
	
	
	return 0;
}
