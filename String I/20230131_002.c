#include <stdio.h>
#include <string.h>

int main(){
    char carros[5][30];
    int i;
    
    for(i=0;i<5;i++){
    	printf("\nDigite o modelo de carro %d: ", i+1);
        scanf("%s", carros[i]);
    }

    float consumo[5];

    for (i=0; i<5; i++){
    	printf("\nDigite o consumo do modelo %d (km/l): ", i+1);
        scanf("%f", &consumo[i]);
    }

    printf("\n\nO mais econ�mico �: ");
    
    int economico = 0;
    
	for (i=1; i<5; i++){
        if (consumo[i]>consumo[economico]){
            economico = i;
        }
    }
    printf("%s\n\n", carros[economico]);

    float litros;
    
    for (i=0;i<5;i++){
        litros = 1000.0/consumo[i];
        printf("O modelo %s consome %.2f litros ao percorrer 1.000km\n\n", carros[i], litros);
    }

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
