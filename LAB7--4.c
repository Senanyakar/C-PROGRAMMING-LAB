#include <stdio.h>
#include <stdlib.h>

int main(){
  int r;
  float alan;
  float cevre;
  int secim;
  float pi=3.14;
  
  printf("dairenin yaricap bilgisini giriniz:\n");
  scanf("%d",&r);
  printf("cevre hesabi icin 1, alan hesab� icin 2 ye bas�n�z.\n");
  scanf("%d",&secim);
  
  if(secim==1){
    cevre=2*pi*r;
    printf("cevre hesabi sonucu:%f\n",cevre);
  }else if(secim==2){
  	alan=pi*r*r;
  	printf("alan hesabi sonucu:%f\n",alan);
  }else{
  	printf("HATALI SECIM YAPTINIZ!\n");
  }
  
  
   return 0;
}
