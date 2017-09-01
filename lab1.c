#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/**|  Estructura de datos |********/
/**|  Pamela Landero      |********/
/**********************************/
/**|---[Integrantes]---   |********/
/**|  Valentina Miranda   |********/
/**|  Piero Figueroa      |********/
/**|  Natalia Rojas       |********/
/**********************************/

/*----------------------------------------------------------------------------*/

void pregunta1(){
	printf("Ingrese el largo del arreglo\n");
	int largo;
	scanf("%i",&largo);
	int array[largo];
	int llenado=0;
	int i;
	for(i=0 ; i<largo ; i++){
		printf("Ingrese el numero %i del arreglo\n",i+1);
		scanf("%d",&llenado);
		array[i]=llenado;
	}
	printf("Numeros pares del arreglo son :\n");
	for(i=0 ; i<largo ; i++){
		if(array[i]%2==0){
			printf("%d, ",array[i]);
		}
	}
	printf("\n");
}
/*----------------------------------------------------------------------------*/
void pregunta2(){
	printf("Ingrese un numero N, para crear una matriz NxN.(Max. 5x5)\n");
	int tam;
	scanf("%i",&tam);
	while(tam>5){
		printf("Tamano invalido. Reingrese");
		scanf("%i",&tam);
	}
	int matriz[tam][tam];
	int i,j;
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			printf("Ingrese un numero para la posicion (%i,%i)\n",i+1,j+1);
			int llenado;
			scanf("%i",&llenado);
			matriz[i][j]=llenado;
		}
	}
	printf("Numeros impares de la matriz son :\n");
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			if(matriz[i][j]%2!=0){
				printf("%i \n",matriz[i][j]);
			}
		}
	}
}
/*----------------------------------------------------------------------------*/
void pregunta3(){
	printf("Ingrese un numero N, para crear 2 matrices NxN.(Max. 5x5)\n");
	int tam,sum,k;
	srand(time(NULL));
	scanf("%i",&tam);
	while(tam>5){
		printf("Tamano invalido. Reingrese");
		scanf("%i",&tam);
	}
	int matriz[tam][tam];
	int matriz2[tam][tam];
	int matmul[tam][tam];
	int i,j;
	printf("Llenando matrices de manera aleatoria...\n");
	printf("Matriz numero 1:\n");
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			matriz[i][j]=rand()%21;
			printf("%i ",matriz[i][j]);	
		}
		printf("\n");
	}
	printf("Matriz numero 2:\n");
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			matriz2[i][j]=rand()%21;
			printf("%i ",matriz2[i][j]);	
		}
		printf("\n");
	}
	
	for(i = 0; i<tam; i++){
		k=0;
		while(k<tam){
			for(j=0; j<tam; j++){
				sum = sum + matriz[i][j]*matriz2[j][k]; 
			}
			matmul[i][k] = sum;
			printf("\n Suma [%i,%i] es : %i \n",i+1,k+1,matmul[i][k]);
			sum=0;
			k++;
		}
	}
	printf("\n\n");
}

/*----------------------------------------------------------------------------*/
void pregunta4(){
	printf("Ingrese un numero N, para crear una matriz NxN.(Max. 5x5)\n");
	int tam;
	scanf("%i",&tam);
	while(tam>5){
		printf("Tamano invalido. Reingrese");
		scanf("%i",&tam);
	}
	int matriz[tam][tam];
	int i,j,k;
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			printf("Ingrese un numero para la posicion (%i,%i)\n",i+1,j+1);
			int llenado;
			scanf("%i",&llenado);
			matriz[i][j]=llenado;
			
		}
	}
	int acum=0;
	int cont=0;
	printf("Numeros primos en la matriz:\n");
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			for(k=0 ; k<matriz[i][j] ; k++){
				if(matriz[i][j]%(k+1)==0){
					cont=cont+1;
				}
			}
			if(cont==2){
				printf("%d, ",matriz[i][j]);
				acum=acum+matriz[i][j];
			}
			cont=0;
		}
	}
	printf("\n");
	printf("La suma de los numeros primos es: %i\n\n\n",acum);
}
/*----------------------------------------------------------------------------*/
void pregunta5(float num1, float num2){
	printf("Numero 1(%f). Numero 2(%f)\n",num1,num2);
	printf("Invirtiendo...\n");
	float aux=num1;
	num1=num2;
	num2=aux;
	printf("Numero 1(%f). Numero 2(%f)\n",num1,num2);
}
/*----------------------------------------------------------------------------*/
int main(int argc, const char * argv[]){
	int opc=-1;	
	while(opc!=0){
		printf("Seleccione una opcion\n");
		printf("(1)Recorrer un arreglo y mostrar pares\n");
		printf("(2)Recorrer una matriz y mostrar impares\n");
		printf("(3)Multiplicar 2 matrices\n");
		printf("(4)Recorrer una matriz, encontrar primos y sumarlos\n");
		printf("(5)Invertir dos numeros\n");
		printf("(0)Salir\n");
		scanf("%i",&opc);
		if(opc==1){
			pregunta1();
		}
		if(opc==2){
			pregunta2();
		}
		if(opc==3){
			pregunta3();
		}
		if(opc==4){
			pregunta4();
		}
		if(opc==5){
			printf("Ingrese el numero 1\n");
			float num1;
			scanf("%f",&num1);
			printf("Ingrese el numero 2\n");
			float num2;
			scanf("%f",&num2);
			pregunta5(num1,num2);
		}
		if(opc!=1 && opc!=2 && opc!=3 && opc!=4 && opc!=5 && opc!=0){
			printf("________________________________\n");
			printf("¡¡¡Opcion invalida. Reingrese!!!\n");
			printf("________________________________\n");
		}
	}
}
/*----------------------------------------------------------------------------*/