// A ve B 50'den büyük ise C=A+B iþlemini yapan program

#include <stdio.h>

int main(){
	
	int A,B,C;
	
	printf("1. Sayiyi Giriniz:");
	scanf("%d", &A);
	printf("2. Sayiyi Giriniz:");
	scanf("%d", &B);
	
	if (A>50 && B>50){
		C=A+B;
		printf("Toplam: %d", C);
	}
	else{
		printf("Yanlis Giris");
	}
		return 0;
	           	 	
}
