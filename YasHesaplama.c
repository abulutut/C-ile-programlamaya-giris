#include <stdio.h>

int main() {
  int buYil;
  int doYil;
	int artYil =0;
	
	printf("Bulunduğumuz yılı giriniz: ");
	scanf("%d", &buYil);
	printf("Doğum yılınızı giriniz: ");
	scanf("%d", &doYil);
	
	printf("Yaşınız: %d\n", buYil-doYil);
	
	while(doYil % 4 !=0){
		doYil++;
	}
	
	artYil++;
	
	while(doYil < buYil){
		doYil += 4;
		artYil++;
	}
	
	printf("%d kere artık yıl gördünüz", artYil);
	
    return 0;
}
