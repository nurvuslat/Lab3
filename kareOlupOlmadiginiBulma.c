//Kenarlarý verilen (A,B,C,D) dörtgenin kare olup olmadýðýný bulan program

#include <stdio.h>

int main(){
	
	int A,B,C,D;
	
	printf("1. Kenar Uzunlugunu Giriniz:");
	scanf("%d",&A);
	printf("2. Kenar Uzunlugunu Giriniz:");
	scanf("%d",&B);
	printf("3. Kenar Uzunlugunu Giriniz:");
	scanf("%d",&C);
	printf("4. Kenar Uzunlugunu Giriniz:");
	scanf("%d",&D);
	
	if (A+A==B+C){
		printf("Karedir");		
	}
	else{
		printf("Kare Degildir");
	}
	
	return 0;
	
}
