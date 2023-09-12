#include <stdio.h>
#include <stdlib.h>

int main(){
	float c_derece;
	float f_derece;
	
	
	printf("Celciusa donusturulecek sicaklik degerini F olarak girin:\n");
	scanf("%f",&f_derece);
	
	c_derece = (f_derece - 32)/1.80;
	printf("girdiginiz %f F = %f Celciusa esittir.",f_derece,c_derece);
    

	
	
	
	return 0;
}
