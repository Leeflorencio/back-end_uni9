#include<stdio.h>

int main(){
	
	float av1, av2, m;
	
	printf("Digite a AV1 do aluno\n");
	scanf("%f", &av1);
	
	printf("Digite a AV2 do aluno\n");
	scanf("%f", &av2);
	
	m = (av1 + av2) / 2;
	printf("%.1f", m);
	
	system("pause");
	
	return 0; 
}
