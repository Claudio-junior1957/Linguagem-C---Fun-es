#include<stdio.h>
#include<locale.h>
#include<math.h>
#define Pi 3.14

float areacircunferencia(float r);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, a;
	printf(">>>C�lculo da �rea da circunferencia<<<");
	printf("\n\nDigite o valor do raio: ");
	scanf("%f", &r);
	
	printf("\nA �rea da circunferencia �: %.1f", areacircunferencia(r));
	
	return(0);
}

float areacircunferencia(float r){
	return(Pi * pow(r,2));
}
