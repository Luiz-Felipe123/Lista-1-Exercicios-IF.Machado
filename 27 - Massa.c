#include <stdio.h>

int main(){
	float massa;
	int seg=0;
	printf("Entre com a massa do material:");
	scanf("%f",&massa);
	while(massa>=1.45){
		massa = massa - (massa*0.13); // massa -= massa*0.13;
		seg+=20; // seg = seg+20;
		printf("Passado %d seg a massa e de %.2f\n",seg,massa);
		_sleep(500); // pausa de 500 mls
	}// fim while
	printf("Foram necessarios %d seg para massa decair\n",seg);
	return 0;
}
