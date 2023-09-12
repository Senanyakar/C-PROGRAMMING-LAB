#include <stdio.h>

int main()
{
	float x,toplam,terim_no;
	int i,n;
	printf("x degerini giriniz :");
	scanf("%f",&x);
	printf("terim sayisini giriniz : ");
	scanf("%d",&n);
	toplam =1; terim_no = 1;
	for (i=1;i<n;i++)
	{
	  terim_no = terim_no*x/i;
	  toplam =toplam + terim_no;
	}
	printf("\n TOPLAM: %f\n",toplam);
	
	return 0;
} 
