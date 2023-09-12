#include <stdio.h>
#include <stdlib.h>

int main(){
  int vize;
  int final;
  int ort;
  int no;
  
  printf("ogrenci no giriniz:\n");
  scanf("%d",&no);
  printf("vize notunu giriniz:\n");
  scanf("%d",&vize);
  printf("final notunu giriniz:\n");
  scanf("%d",&final);
  
  ort=(vize*40)/100 + (final*60)/100;
  
  if(ort>=60){
  	printf("tebrikler, %d nolu ogrenci %d ortalama ile gecti.\n ",no,ort);
  }
  else{
  	printf("maalesef %d nolu ogrenci %d ortalama ile kaldi.",no,ort);
  }
   return 0;
}
