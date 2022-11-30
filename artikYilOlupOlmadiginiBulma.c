// Verilen yýlýn artýk yýl olup olmadýðýný bulan program

#include <stdio.h>

int main(){	
	
	int yil;
	
	printf("Yili Giriniz:");
	scanf("%d", &yil);
	
	if (yil % 4==0){
		printf("Artik Yil");
	}
  	else{
		printf("Artik Yil Degil");
	}
	
		return 0;
	
	
	
}
