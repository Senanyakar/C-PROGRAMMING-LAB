#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float dizi[8];
	int i;
	float toplam=0;
	float ortalama;
	
	
	printf("8 elemanli dizi elemanlarini giriniz:\n");
	for(i=0; i<8; i++){
		printf("deger gir %d:\n",i);
		scanf("%f",&dizi[i]);
		toplam+=dizi[i];
	}
	
	
	ortalama=toplam/8;
	printf("dizinin ortalamasi: %.2f\n",ortalama);
	
	
	
	
	
	
	return 0;
}
