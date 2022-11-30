/*Bir uçak 15 dakika boyunca düzgün hýzlanarak hýzý 480 km/dk oluyor. Sonra 20 dk. sabit hýzla
gidiyor ve 15 dk. boyunca düzgün yavaþlayarak hýzý sýfýr oluyor. Herhangi bir t anýnda hýzý
*/

#include <stdio.h>

int main(){
	
	int t,v;
	
	printf("Zaman Giriniz:");
	scanf("%d", &t);
	
	if(t<15){
		v = 32 * t;
		printf("Hizi: %d", v);	
	}
	else if(t>35){
		t = 50 - t;
		v = 32 * t;
		printf("Hizi: %d", v);
	}
	
	 return 0;				
	
}
