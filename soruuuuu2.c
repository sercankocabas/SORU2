#include <stdio.h>
#include <stdlib.h>

int f,x,y;
int toplam,cozum;
int fark;
int sonuc(int x){
	for(y=1;y<=100;y++){
		cozum+=y;
		toplam=toplam+y*y;
	}
	printf("toplamin karesi: %d",cozum*cozum);
    printf("kareleri toplami: %d",toplam);
    
}
int main(){
	
	printf("girin: ");
	scanf("%d",&x);
	sonuc(x);
	fark=cozum*cozum-toplam;
	printf("fark: %d",fark);
		
	return 0;
}