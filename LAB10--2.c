#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

int i;
int dizi[10];
int kare;
int n;


printf("max 10 elemanli dizi degerlerini giriniz:\n");
for(i=0; i<10;i++){
scanf("%d",&n);
if(n==-1){
 printf("dizi sonlandirilmistir!\n");
 break;
    }
    dizi[i]=n;
}
	printf("girilen elemanlarin kareleri:\n");
	for(i=0;i<10;i++){
		kare = dizi[i]*dizi[i];
		printf("%d nin karesi: %d\n",dizi[i],kare);
	}
	return 0;
}

