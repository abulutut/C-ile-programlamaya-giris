#include <stdio.h>

int main() {
    int sayi1 = 5;
    int sayi2 = 2;
	
	printf("Sayı 1: %d\n", sayi1);
	printf("Sayı 2: %d\n\n", sayi2);
	printf("Toplama: %d\n", sayi1+sayi2);
	printf("Çıkarma: %d\n", sayi1-sayi2);
	printf("Çarpma: %d\n", sayi1*sayi2);
	printf("Bölme: %f\n", (float)sayi1/sayi2);
	printf("Mod: %d", sayi1%sayi2);
	
    return 0;
}
