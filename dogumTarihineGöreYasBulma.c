//Do�um tarihi verilen ki�inin ya��n� bulan program

#include <stdio.h>

int main(){
	
	int dtarih, yil, yas;
	yil = 2023;
	
	printf("Dogum Tarihinizi Giriniz:");
	scanf("%d", &dtarih);
	
	yas = yil - dtarih;
	
	printf("Yasiniz: %d", yas);
	return 0;
			
}
