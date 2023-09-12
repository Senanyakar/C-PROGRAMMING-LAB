#include <stdio.h>
#include <stdlib.h>

int main(){
	float feet;
	float cm;
	
	
	printf("Cm ye donusturulecek uzunluk degerini feet olarak girin:\n");
	scanf("%f",&feet);
	
	cm = 30.48 * feet;
	printf("girdiginiz %f feet = %f Cm ye esittir.",feet,cm);
    

	
	
	
	return 0;
}
