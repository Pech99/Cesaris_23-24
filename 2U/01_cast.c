#include<stdio.h>

int main(){
	int a, b = 0;
	float ris;	
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	ris = a / (float)b;
	
	printf("La somma e': %d/%d=%f", a, b, ris);

}
