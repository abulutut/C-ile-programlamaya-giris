#include <stdio.h>

int main(){
	int a,b;
	
	printf("birinci sayiyi giriniz: ");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	if(a == b) printf("iki sayi esittir.");
	else printf("sayilar farklidir.");
	if (a < b) printf("ilk girdiniginiz sayi daha kucuktur.");
	else printf("ilk girdiginiz sayi daha buyuktur.");
	
	return 0;
}
