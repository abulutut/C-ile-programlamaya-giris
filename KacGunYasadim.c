#include <stdio.h>

int main() {
  int bgun;
  int bay;
	int byil;
	int dgun;
  int day;
	int dyil;
	int aygunleri[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int artgun = 0;
	int sonuc = 0;
	
	printf("Bu günün tarihini giriniz: ");
	scanf("%d", &bgun);
	scanf("%d", &bay);
	scanf("%d", &byil);
	
	printf("Doğum tarihinizi giriniz: ");
	scanf("%d", &dgun);
	scanf("%d", &day);
	scanf("%d", &dyil);
	
	//doğduğu ayda kaç gün yaşamış
	sonuc = aygunleri[day-1] - dgun;
	
	//doğduğu yıl kaç gün yaşamış
	for(int i= day; i<12; i++){
		sonuc += aygunleri[i];
	}
	
	//bu yıla kadar kaç gün yaşamış
	sonuc += (byil - dyil -1)*365;
	
	//bu aya kadar kaç gün yaşamış
	for(int i= 0; i<bay -1; i++){
		sonuc += aygunleri[i];
	}
	
	//bu gune kadar kaç gün yaşamış
	sonuc += bgun;
	
	//artık günleri ekliyoruz
	while(dyil % 4 !=0){
		dyil++;
	}
	
	artgun++;
	
	while(dyil < byil){
		dyil += 4;
		artgun++;
	}
	
	sonuc += artgun;
	
	//
	printf("%d gündür yaşıyorsunuz.", sonuc);
	
	
  return 0;
}
