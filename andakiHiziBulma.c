/*Bir u�ak 15 dakika boyunca d�zg�n h�zlanarak h�z� 480 km/dk oluyor. Sonra 20 dk. sabit h�zla
gidiyor ve 15 dk. boyunca d�zg�n yava�layarak h�z� s�f�r oluyor. Herhangi bir t an�nda h�z�
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
