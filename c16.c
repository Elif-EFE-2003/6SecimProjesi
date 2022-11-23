#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int sayi1,sayi2,d,secim,sonuc,a,b,c,k,Delta=0,x1,x2;
	char harf,islem;
	
	printf("1- Girilen sayilarla alan bulma\n ");
	printf("2- Girilen sayilarla cevre bulma\n");
	printf("3-Girilen sayiyla ay bulma\n");
	printf("4-Girilen harf ile ders yazdirma\n ");
	printf("5-Girilen islemi uygulama\n");
	printf("6-ax^2+bx+c=0 denkleminin koklerini bulma\n\n");
	printf("Secim: ");
	scanf("%d",&secim);
	if(secim==1 || secim==2 )
	{
		printf("Sayi1: ");
		scanf("%d",&sayi1);
		printf("Sayi2: ");
		scanf("%d",&sayi2);
	    switch(secim)
	   {
		    case 1:
			sonuc=sayi1*sayi2;
			printf("%d",sonuc);
			break;
			case 2:	
		    sonuc=2*(sayi1+sayi2);
		    printf("%d",sonuc);
		    break; 
		    default:
			printf("Hatali giris");
			break;
		}
	}
	else if(secim==3)
	{
		printf("Sayi girin: ");
		scanf("%d",&d);
		switch(d)
		{
		    case 1: 
		    printf("Ocak");
			break;
			case 2:
			printf("Subat");
			break;
			case 3:
			printf("Mart");
			break;
			case 4:
			printf("Nisan");
			break;
			case 5:
			printf("Mayis");
			break;
			case 6:
			printf("Haziran");
			break;
			case 7:
			printf("Temmuz");
			break;
			case 8:
			printf("Agustos");
			break;
			case 9:
			printf("Eylul");
			break;
			case 10:
			printf("Ekim");
		    break;
			case 11:
			printf("Kasim");
			break;
			case 12:
			printf("Aralik");
			break;
			default:
			printf("Hatali giris");
			break;
		}
	}
	else if(secim==4)
	{
		printf("Harf girin: ");
		scanf("%s",&harf);
		switch(harf)
		{
			case 't':
			printf("Turkce");
			break;
			case 'm':
			printf("Matematik");
			break;
			case 's':
			printf("Sosyal");
			break;
			case 'f':
			printf("Fen");
			break;
			default:
			printf("Hatali giris");
			break;	
		}
	}
	else if(secim==5)
	{
		printf("islem girin: ");
		scanf("%s",&islem);
		switch(islem)
		{
		    case '+':
			printf("Sayi1 giriniz:");
			scanf("%d",&sayi1);
			printf("Sayi2 giriniz:");
			scanf("%d",&sayi2);
			sonuc=sayi1+sayi2;
			printf("%d",sonuc);
			break;
			case '-':
			printf("Sayi1 giriniz:");
			scanf("%d",&sayi1);
			printf("Sayi2 giriniz:");
			scanf("%d",&sayi2);
			sonuc=sayi1-sayi2;
			printf("%d",sonuc);
			break;
			case '*':
			printf("Sayi1 giriniz:");
			scanf("%d",&sayi1);
			printf("Sayi2 giriniz:");
			scanf("%d",&sayi2);
			sonuc=sayi1/sayi2;
			printf("%d",sonuc);
			break;		
		   case '/':
		    printf("Sayi1 giriniz:");
			scanf("%d",&sayi1);
			printf("Sayi2 giriniz:");
			scanf("%d",&sayi2);
			printf("%d",sonuc);
			break;
			default:
			printf("Hatali giris");
			break;
		}
	}
	else if(secim==6)
	{
	  printf("x^2 kat sayisini girin ");
	  scanf("%d",&a);
	  printf("x kat sayisini girin ");
	  scanf("%d",&b);
	  printf("sabit sayiyi girin ");
	  scanf("%d",&c);
	  printf("Denklem: %dx^2+%dx+%d \n",a,b,c);
	  k=pow(b,2);
	  Delta=k-(4*(a*c));
	  printf("Delta: %d\n",Delta);
	  if(Delta>0)
	  {
	  	x1=(-b+sqrt(Delta))/2*a;
	  	x2=(-b-sqrt(Delta))/2*a;
	  	printf("x1: %d x2: %d",x1,x2);
	  }
	  else if(Delta==0)
	  {
	  	x1=x2=-b/2*a;
	  	printf("x1=x2= %d",x1);
	  }
	  else
	  {
	  	printf("Reel kok yoktur");
	  }	
	}
	else
	{
		printf("Hatali giris");
	}
 
	return 0;
}
