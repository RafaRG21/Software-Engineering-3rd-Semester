#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char vector1[100],vector2[100],vector3[100];
	int i, size, latencias[50],latencia,p1,p2,p3,p4,p5,p6; //el vector que se va a ingresar a desarrollar
	printf("Ingrese el vector colisional:");
    scanf("%s",&vector1);
    size  = strlen(vector1);
	for(i=0;i<size;i++){
		printf("%c",vector1[i]);
	}
	printf("\nLatencias permitidas en: ");
	int j=0;
	int k=0;
	for(i=size;i>=0;i--){
		if(vector1[i]=='0'){
			printf("%d, ",j);
			latencias[k] = j;
			k++;
			j++;
		} else j++;
	}
	printf("\n");

	for (j=0;j<k;j++){  
	
			   switch(latencias[j]){ //se usa un swtich para recibir la posision de cada latencia
				case 1: printf("\nP(1):");
					for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
						vector2[i]= '0';
					} 
					for(i=1;i<size;i++){ //se llena con el vector restante
						vector2[i] = vector1[i-1];
					}
					for(i=0;i<size;i++){ //Se aplica OR
						if(vector1[i]=='1'&&vector2[i]=='1'){
							vector3[i]= '1';
						}else if(vector1[i]=='1'&&vector2[i]=='0'){
							vector3[i]= '1';
						}else if(vector1[i]=='0'&&vector2[i]=='1'){
							vector3[i]= '1';
						} else if(vector1[i]=='0'&&vector2[i]=='0'){
							vector3[i]= '0';
						}
					}printf("%s",vector3);
				break;	
				case 2: printf("\nP(2):");
					for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
						vector2[i]= '0';
					} 
					for(i=2;i<size;i++){ //se llena con el vector restante
						vector2[i] = vector1[i-2];
					}
					for(i=0;i<size;i++){ //Se aplica OR
						if(vector1[i]=='1'&&vector2[i]=='1'){
							vector3[i]= '1';
						}else if(vector1[i]=='1'&&vector2[i]=='0'){
							vector3[i]= '1';
						}else if(vector1[i]=='0'&&vector2[i]=='1'){
							vector3[i]= '1';
						} else if(vector1[i]=='0'&&vector2[i]=='0'){
							vector3[i]= '0';
						}
					}printf("%s",vector3);
					
				break;
				case 3:printf("\nP(3):");
					for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
						vector2[i]= '0';
					} 
					for(i=3;i<size;i++){ //se llena con el vector restante
						vector2[i] = vector1[i-3];
					}
					for(i=0;i<size;i++){ //Se aplica OR
						if(vector1[i]=='1'&&vector2[i]=='1'){
							vector3[i]= '1';
						}else if(vector1[i]=='1'&&vector2[i]=='0'){
							vector3[i]= '1';
						}else if(vector1[i]=='0'&&vector2[i]=='1'){
							vector3[i]= '1';
						} else if(vector1[i]=='0'&&vector2[i]=='0'){
							vector3[i]= '0';
						}
					}printf("%s",vector3);				
				break;
				case 4: printf("\nP(4):"); // se le llena con 4 ceros 
					for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
						vector2[i]= '0';
					} 
					for(i=4;i<size;i++){ //se llena con el vector restante
						vector2[i] = vector1[i-4];
					}
					for(i=0;i<size;i++){ //Se aplica OR
						if(vector1[i]=='1'&&vector2[i]=='1'){
							vector3[i]= '1';
						}else if(vector1[i]=='1'&&vector2[i]=='0'){
							vector3[i]= '1';
						}else if(vector1[i]=='0'&&vector2[i]=='1'){
							vector3[i]= '1';
						} else if(vector1[i]=='0'&&vector2[i]=='0'){
							vector3[i]= '0';
						}
					}printf("%s",vector3);					
				break;
				case 5:printf("\nP(5):");
					for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
						vector2[i]= '0';
					} 
					for(i=5;i<size;i++){ //se llena con el vector restante
						vector2[i] = vector1[i-5];
					}
					for(i=0;i<size;i++){ //Se aplica OR
						if(vector1[i]=='1'&&vector2[i]=='1'){
							vector3[i]= '1';
						}else if(vector1[i]=='1'&&vector2[i]=='0'){
							vector3[i]= '1';
						}else if(vector1[i]=='0'&&vector2[i]=='1'){
							vector3[i]= '1';
						} else if(vector1[i]=='0'&&vector2[i]=='0'){
							vector3[i]= '0';
						}
					}printf("%s",vector3);					
				break;	
				default: break;	
			}
	}
	
	
	return 0;
}
