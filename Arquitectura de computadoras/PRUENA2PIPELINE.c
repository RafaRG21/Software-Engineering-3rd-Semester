#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	char vector1[6],vector2[6],vector3[6],v1[6],v2[6],v3[6],v4[6],vr3[6],vr4[6],vr5[6];
	int i, size, latencias[6],laten2[6],laten3[6],laten4[6],laten5[6],p1,p2,p3,p4,p5,p6; //el vector que se va a ingresar a desarrollar
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
					if(strcmp(vector1,vector3)==0) break;
					strcpy(v1,vector3);
					int a=0;
					int b=0;
						for(i=size;i>=0;i--){
                     		if(v1[i]=='0'){
			                laten2[b] = a;
			                a++;
			                b++;
		               } else{ a++;} } 
		               int j1;
		               for(j1=0;j1<b;j1++){
		               	switch(laten2[j1]){ //////////////////////segundo switch
		               		case 1: printf("\nP(1,1) ");
		               			for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
						        vector2[i]= '0';} 
			             		for(i=1;i<size;i++){ //se llena con el vector restante
				         		vector2[i] = v1[i-1];	}
				             	for(i=0;i<size;i++){ //Se aplica OR
				         		if(v1[i]=='1'&&vector2[i]=='1'){
				    			vector3[i]= '1';
				        		}else if(v1[i]=='1'&&vector2[i]=='0'){
				     			vector3[i]= '1';
					        	}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
					         	} else if(v1[i]=='0'&&vector2[i]=='0'){
					    		vector3[i]= '0';}
			             		}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	int c=0;
					                    int d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 int j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(1,1,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	 	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,1,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
					             	                 	if(strcmp(v3,vr3)==0) break;
				                             	strcpy(v4,vr3);
				                             	int h=0;
					                            int l=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v4[i]=='0'){
			                                         laten5[l] = h;
			                                         h++;
			                                         l++; } else{ h++;} }
										            int j4; 
		                                         for(j4=0;j4<l;j4++){
		                                    	switch(laten5[j4]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,1,1,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v4[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v4[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr5[i]= '1';}else if(v4[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr5[i]= '1';}else if(v4[i]=='0'&&vector2[i]=='1'){
					             	                  	vr5[i]= '1';} else if(v4[i]=='0'&&vector2[i]=='0'){
					             	                 	vr5[i]= '0';}}printf("%s",vr5);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,1,1,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v4[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v4[i]=='1'&&vector2[i]=='1'){vr5[i]= '1';
					                                 	}else if(v4[i]=='1'&&vector2[i]=='0'){vr5[i]= '1';
				         	                         	}else if(v4[i]=='0'&&vector2[i]=='1'){vr5[i]= '1';
				         	                         	} else if(v4[i]=='0'&&vector2[i]=='0'){vr5[i]= '0';	}}printf("%s",vr5);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,1,1,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v4[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v4[i]=='1'&&vector2[i]=='1'){vr5[i]= '1';
					                                  	}else if(v4[i]=='1'&&vector2[i]=='0'){vr5[i]= '1';
				         	                        	}else if(v4[i]=='0'&&vector2[i]=='1'){vr5[i]= '1';
				         	                        	} else if(v4[i]=='0'&&vector2[i]=='0'){vr5[i]= '0';	}
				                                     	}printf("%s",vr5);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,1,1,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v4[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v4[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v4[i]=='1'&&vector2[i]=='0'){vr5[i]= '1';
				                     		            }else if(v4[i]=='0'&&vector2[i]=='1'){vr5[i]= '1';
				         	                         	} else if(v4[i]=='0'&&vector2[i]=='0'){vr5[i]= '0';	}
				                                     	}printf("%s",vr5);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,1,1,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v4[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v4[i]=='1'&&vector2[i]=='1'){vr5[i]= '1';
					                     	            }else if(v4[i]=='1'&&vector2[i]=='0'){vr5[i]= '1';
				         	                         	}else if(v4[i]=='0'&&vector2[i]=='1'){vr5[i]= '1';
				         	                           	} else if(v4[i]=='0'&&vector2[i]=='0'){vr5[i]= '0';	}
				                          	            }printf("%s",vr5);		               		
		               		                        break;
		               	             	            default: break;} }
		               	                        	break;
		               	                        	case 2: printf("\nP(1,1,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,1,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,1,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,1,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	             	case 2: printf("\nP(1,1,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          		if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										             j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,1,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,1,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,1,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,1,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,1,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               		            break;
    	               	             	case 3:printf("\nP(1,1,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           				                       	    	 	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										             j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,1,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,1,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,1,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,1,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,1,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	            	case 4:printf("\nP(1,1,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
									    	 	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                            f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										             j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,1,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,1,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,1,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,1,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,1,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }	               		
		               		            break;
		               	              	case 5:printf("\nP(1,1,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 			                       	    	 	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										             j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,1,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,1,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,1,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,1,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,1,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }	               		
		               		            break;
		               	             	default: break;} }
		               		break;
		               		case 2: printf("\nP(1,2) ");
		          		     	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=2;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-2];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(vector3,v1)==0) break;
				                    	strcpy(v2,vector3);
				                    	c=0;
					                    d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} } 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(1,2,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                      	    	 	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,2,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,2,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,2,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,2,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,2,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	             	case 2: printf("\nP(1,2,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	 	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,2,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,2,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,2,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,2,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,2,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               		            break;
    	               	             	case 3:printf("\nP(1,2,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           		if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,2,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,2,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,2,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,2,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,2,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	            	case 4:printf("\nP(1,2,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
												if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,2,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,2,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,2,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,2,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,2,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }	               		
		               		            break;
		               	              	case 5:printf("\nP(1,2,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		    
												if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,2,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,2,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,2,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,2,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,2,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }            		
		               		            break;
		               	             	default: break;} }				             	
		               		break;
    	               		case 3:printf("\nP(1,3) ");
    	               	    	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=3;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-3];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	c=0;
					                    d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} } 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(1,3,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    		if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,3,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,3,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,3,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,3,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,3,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	             	case 2: printf("\nP(1,3,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          		if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,3,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,3,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,3,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,3,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,3,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               		            break;
    	               	             	case 3:printf("\nP(1,3,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,3,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,3,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,3,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,3,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,3,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	            	case 4:printf("\nP(1,3,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		  
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,3,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,3,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,3,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,3,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,3,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }             		
		               		            break;
		               	              	case 5:printf("\nP(1,3,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,3,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,3,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,3,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,3,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,3,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }	               		
		               		            break;
		               	             	default: break;} }				             	
		               		break;
		               		case 4:printf("\nP(1,4) ");
    	               	    	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=4;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-4];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);		
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	c=0;
					                    d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} } 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(1,4,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										          int  j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,4,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,4,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,4,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,4,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,4,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	             	case 2: printf("\nP(1,4,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,4,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,4,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,4,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,4,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,4,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               		            break;
    	               	             	case 3:printf("\nP(1,4,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,4,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,4,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,4,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,4,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,4,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	            	case 4:printf("\nP(1,4,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,4,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,4,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,4,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,4,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,4,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }	               		
		               		            break;
		               	              	case 5:printf("\nP(1,4,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,4,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,4,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,4,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,4,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,4,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }	               		
		               		            break;
		               	             	default: break;} }								                		
		               		break;
		               		case 5:printf("\nP(1,5) ");
    	               	    	for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=5;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-5];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
								     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	c=0;
					                    d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} } 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(1,5,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,5,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,5,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,5,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,5,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,5,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	             	case 2: printf("\nP(1,5,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vector3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,5,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,5,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,5,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,5,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,5,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               		            break;
    	               	             	case 3:printf("\nP(1,5,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vector3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,5,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,5,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,5,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,5,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,5,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }
		               	            	break;
		               	            	case 4:printf("\nP(1,5,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		   
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,5,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,5,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,5,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,5,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,5,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }            		
		               		            break;
		               	              	case 5:printf("\nP(1,5,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		     
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(1,5,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(1,5,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(1,5,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(1,5,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(1,5,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }          		
		               		            break;
		               	             	default: break;} }		               		
		               		break;
		               		default: break;
						   }
		               	
					   }
					
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
				    if(strcmp(vector3,vector1)==0) break;
                    strcpy(v1,vector3);
					 a=0;
					 b=0;
						for(i=size;i>=0;i--){
                     		if(v1[i]=='0'){
			                laten2[b] = a;
			                a++;
			                b++;
		               } else{ a++;} } 
		               j1;
		               for(j1=0;j1<b;j1++){
		               	switch(laten2[j1]){ //////////////////////segundo switch
		               		case 1: printf("\nP(2,1) ");
		               			for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
						        vector2[i]= '0';} 
			             		for(i=1;i<size;i++){ //se llena con el vector restante
				         		vector2[i] = v1[i-1];	}
				             	for(i=0;i<size;i++){ //Se aplica OR
				         		if(v1[i]=='1'&&vector2[i]=='1'){
				    			vector3[i]= '1';
				        		}else if(v1[i]=='1'&&vector2[i]=='0'){
				     			vector3[i]= '1';
					        	}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
					         	} else if(v1[i]=='0'&&vector2[i]=='0'){
					    		vector3[i]= '0';}
			             		}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	int c=0;
					                    int d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 int j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(2,1,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,1,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,1,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,1,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,1,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,1,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	             	case 2: printf("\nP(2,1,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,1,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,1,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,1,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,1,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,1,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               		            break;
    	               	             	case 3:printf("\nP(2,1,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,1,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,1,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,1,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,1,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,1,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	            	case 4:printf("\nP(2,1,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		       
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,1,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,1,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,1,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,1,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,1,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }          		
		               		            break;
		               	              	case 5:printf("\nP(2,1,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		        
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,1,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,1,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,1,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,1,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,1,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }         		
		               		            break;
		               	             	default: break;} }			             		
		               		break;
		               		case 2: printf("\nP(2,2) ");
		          		     	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=2;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-2];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(2,2,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                          e++;
			                                          f++; } else{ e++;} }
										             int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,2,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,2,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,2,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,2,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,2,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	             	case 2: printf("\nP(2,2,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,2,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,2,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,2,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,2,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,2,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               		            break;
    	               	             	case 3:printf("\nP(2,2,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,2,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,2,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,2,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,2,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,2,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	            	case 4:printf("\nP(2,2,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,2,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,2,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,2,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,2,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,2,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  	               		
		               		            break;
		               	              	case 5:printf("\nP(2,2,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		      
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,2,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,2,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,2,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,2,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,2,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }           		
		               		            break;
		               	             	default: break;} }					             	
		               		break;
    	               		case 3:printf("\nP(2,3) ");
    	               	    	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=3;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-3];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(2,3,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,3,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,3,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,3,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,3,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,3,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	             	case 2: printf("\nP(2,3,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,3,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,3,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,3,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,3,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,3,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               		            break;
    	               	             	case 3:printf("\nP(2,3,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,3,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,3,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,3,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,3,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,3,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	            	case 4:printf("\nP(2,3,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		  
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,3,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,3,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,3,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,3,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,3,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }               		
		               		            break;
		               	              	case 5:printf("\nP(2,3,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,3,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,3,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,3,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,3,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,3,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  	               		
		               		            break;
		               	             	default: break;} }				             	
		               		break;
		               		case 4:printf("\nP(2,4) ");
    	               	    	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=4;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-4];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(2,4,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,4,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,4,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,4,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,4,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,4,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	             	case 2: printf("\nP(2,4,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,4,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,4,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,4,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,4,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,4,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               		            break;
    	               	             	case 3:printf("\nP(2,4,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,4,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,4,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,4,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,4,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,4,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	            	case 4:printf("\nP(2,4,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		   
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,4,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,4,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,4,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,4,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,4,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }              		
		               		            break;
		               	              	case 5:printf("\nP(2,4,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,4,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,4,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,4,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,4,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,4,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  	               		
		               		            break;
		               	             	default: break;} }								 	               		
		               		break;
		               		case 5:printf("\nP(2,5) ");
    	               	    	for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=5;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-5];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(2,5,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,5,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,5,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,5,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,5,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,5,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	             	case 2: printf("\nP(2,5,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,5,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,5,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,5,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,5,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,5,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               		            break;
    	               	             	case 3:printf("\nP(2,5,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,5,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,5,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,5,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,5,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,5,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  
		               	            	break;
		               	            	case 4:printf("\nP(2,5,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,5,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,5,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,5,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,5,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,5,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  	               		
		               		            break;
		               	              	case 5:printf("\nP(2,5,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		 
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(2,5,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(2,5,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(2,5,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(2,5,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(2,5,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }                		
		               		            break;
		               	             	default: break;} }								 	
								 break;
								 default: break;
							}}					
					
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
					if(strcmp(vector3,vector1)==0) break;		
                    strcpy(v1,vector3);
					 a=0;
					 b=0;
						for(i=size;i>=0;i--){
                     		if(v1[i]=='0'){
			                laten2[b] = a;
			                a++;
			                b++;
		               } else{ a++;} } 
		               j1;
		               for(j1=0;j1<b;j1++){
		               	switch(laten2[j1]){ //////////////////////segundo switch
		               		case 1: printf("\nP(3,1) ");
		               			for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
						        vector2[i]= '0';} 
			             		for(i=1;i<size;i++){ //se llena con el vector restante
				         		vector2[i] = v1[i-1];	}
				             	for(i=0;i<size;i++){ //Se aplica OR
				         		if(v1[i]=='1'&&vector2[i]=='1'){
				    			vector3[i]= '1';
				        		}else if(v1[i]=='1'&&vector2[i]=='0'){
				     			vector3[i]= '1';
					        	}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
					         	} else if(v1[i]=='0'&&vector2[i]=='0'){
					    		vector3[i]= '0';}
			             		}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 int c=0;
					                     int d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 int j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(3,1,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,1,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,1,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,1,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,1,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,1,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(3,1,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);
											  if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,1,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,1,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,1,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,1,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,1,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  	
		               		            break;
    	               	             	case 3:printf("\nP(3,1,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,1,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,1,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,1,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,1,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,1,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(3,1,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,1,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,1,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,1,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,1,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,1,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 		               		
		               		            break;
		               	              	case 5:printf("\nP(3,1,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,1,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,1,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,1,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,1,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,1,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	             	default: break;} }								             		
		               		break;
		               		case 2: printf("\nP(3,2) ");
		          		     	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=2;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-2];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]  = '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(3,2,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,2,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,2,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,2,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,2,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,2,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(3,2,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,2,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,2,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,2,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,2,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,2,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(3,2,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,2,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,2,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,2,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,2,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,2,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(3,2,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		  
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,2,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,2,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,2,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,2,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,2,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }              		
		               		            break;
		               	              	case 5:printf("\nP(3,2,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		 
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,2,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,2,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,2,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,2,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,2,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }               		
		               		            break;
		               	             	default: break;} }									             	
		               		break;
    	               		case 3:printf("\nP(3,3) ");
    	               	    	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=3;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-3];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(3,3,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,3,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,3,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,3,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,3,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,3,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(3,3,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,3,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,3,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,3,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,3,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,3,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(3,3,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,3,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,3,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,3,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,3,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,3,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(3,3,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		   
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,3,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,3,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,3,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,3,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,3,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }             		
		               		            break;
		               	              	case 5:printf("\nP(3,3,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,3,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,3,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,3,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,3,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,3,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 		               		
		               		            break;
		               	             	default: break;} }								             	
		               		break;
		               		case 4:printf("\nP(3,4) ");
    	               	    	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=4;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-4];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(3,4,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,4,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,4,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,4,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,4,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,4,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(3,4,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,4,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,4,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,4,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,4,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,4,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(3,4,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,4,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,4,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,4,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,4,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,4,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(3,4,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		     
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,4,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,4,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,4,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,4,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,4,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }           		
		               		            break;
		               	              	case 5:printf("\nP(3,4,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		   
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,4,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,4,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,4,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,4,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,4,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }             		
		               		            break;
		               	             	default: break;} }												 		               		
		               		break;
		               		case 5:printf("\nP(3,5) ");
    	               	    	for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=5;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-5];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 c=0;
					                     d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(3,5,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,5,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,5,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,5,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,5,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,5,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(3,5,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,5,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,5,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,5,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,5,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,5,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(3,5,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,5,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,5,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,5,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,5,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,5,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(3,5,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		        
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,5,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,5,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,5,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,5,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,5,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }        		
		               		            break;
		               	              	case 5:printf("\nP(3,5,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		     
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(3,5,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(3,5,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(3,5,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(3,5,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(3,5,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }           		
		               		            break;
		               	             	default: break;} }								             	
								 break;
								 default: break;
							}}
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
					if(strcmp(vector3,vector1)==0) break;			
					 strcpy(v1,vector3);
					 a=0;
					 b=0;
						for(i=size;i>=0;i--){
                     		if(v1[i]=='0'){
			                laten2[b] = a;
			                a++;
			                b++;
		               } else{ a++;} } 
		               j1;
		               for(j1=0;j1<b;j1++){
		               	switch(laten2[j1]){ //////////////////////segundo switch
		               		case 1: printf("\nP(4,1) ");
		               			for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
						        vector2[i]= '0';} 
			             		for(i=1;i<size;i++){ //se llena con el vector restante
				         		vector2[i] = v1[i-1];	}
				             	for(i=0;i<size;i++){ //Se aplica OR
				         		if(v1[i]=='1'&&vector2[i]=='1'){
				    			vector3[i]= '1';
				        		}else if(v1[i]=='1'&&vector2[i]=='0'){
				     			vector3[i]= '1';
					        	}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
					         	} else if(v1[i]=='0'&&vector2[i]=='0'){
					    		vector3[i]= '0';}
			             		}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	 int c=0;
					                     int d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 int j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(4,1,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,1,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,1,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,1,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,1,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,1,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(4,1,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,1,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,1,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,1,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,1,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,1,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(4,1,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,1,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,1,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,1,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,1,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,1,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(4,1,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,1,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,1,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,1,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,1,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,1,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	              	case 5:printf("\nP(4,1,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,1,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,1,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,1,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,1,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,1,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }                		
		               		            break;
		               	             	default: break;} }							             		
		               		break;
		               		case 2: printf("\nP(4,2) ");
		          		     	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=2;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-2];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	  c=0;
					                      d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(4,2,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,2,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,2,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,2,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,2,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,2,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(4,2,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,2,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,2,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,2,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,2,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,2,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(4,2,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,2,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,2,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,2,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,2,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,2,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(4,2,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,2,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,2,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,2,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,2,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,2,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	              	case 5:printf("\nP(4,2,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,2,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,2,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,2,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,2,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,2,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	             	default: break;} }									             	
		               		break;
    	               		case 3:printf("\nP(4,3) ");
    	               	    	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=3;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-3];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	  c=0;
					                      d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(4,3,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,3,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,3,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,3,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,3,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,3,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(4,3,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,3,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,3,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,3,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,3,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,3,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(4,3,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,3,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,3,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,3,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,3,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,3,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(4,3,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,3,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,3,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,3,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,3,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,3,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	              	case 5:printf("\nP(4,3,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,3,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,3,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,3,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,3,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,3,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }                		
		               		            break;
		               	             	default: break;} }							             	
		               		break;
		               		case 4:printf("\nP(4,4) ");
    	               	    	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=4;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-4];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);		
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	   c=0;
					                       d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(4,4,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,4,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,4,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,4,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,4,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,4,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(4,4,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);
											  if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,4,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,4,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,4,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,4,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,4,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	
		               		            break;
    	               	             	case 3:printf("\nP(4,4,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,4,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,4,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,4,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,4,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,4,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(4,4,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,4,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,4,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,4,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,4,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,4,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }                		
		               		            break;
		               	              	case 5:printf("\nP(4,4,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,4,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,4,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,4,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,4,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,4,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	             	default: break;} }											                		
		               		break;
		               		case 5:printf("\nP(4,5) ");
    	               	    	for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=5;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-5];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
			             		     	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	   c=0;
					                       d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(4,5,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,5,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,5,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,5,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,5,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,5,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(4,5,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,5,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,5,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,5,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,5,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,5,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(4,5,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,5,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,5,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,5,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,5,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,5,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(4,5,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		 
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,5,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,5,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,5,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,5,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,5,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }               		
		               		            break;
		               	              	case 5:printf("\nP(4,5,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		     
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(4,5,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(4,5,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(4,5,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(4,5,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(4,5,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }           		
		               		            break;
		               	             	default: break;} }										 	     
								 break;
								 default: break;
							}}
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
					if(strcmp(vector3,vector1)==0) break;	
					 strcpy(v1,vector3);
					 a=0;
					 b=0;
						for(i=size;i>=0;i--){
                     		if(v1[i]=='0'){
			                laten2[b] = a;
			                a++;
			                b++;
		               } else{ a++;} } 
		               j1;
		               for(j1=0;j1<b;j1++){
		               	switch(laten2[j1]){ //////////////////////segundo switch
		               		case 1: printf("\nP(5,1) ");
		               			for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
						        vector2[i]= '0';} 
			             		for(i=1;i<size;i++){ //se llena con el vector restante
				         		vector2[i] = v1[i-1];	}
				             	for(i=0;i<size;i++){ //Se aplica OR
				         		if(v1[i]=='1'&&vector2[i]=='1'){
				    			vector3[i]= '1';
				        		}else if(v1[i]=='1'&&vector2[i]=='0'){
				     			vector3[i]= '1';
					        	}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
					         	} else if(v1[i]=='0'&&vector2[i]=='0'){
					    		vector3[i]= '0';}
			             		}printf("%s",vector3);
			             	         	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	   int c=0;
					                       int d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										 int j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(5,1,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										          int  j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,1,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,1,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,1,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,1,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,1,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(5,1,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,1,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,1,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,1,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,1,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,1,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(5,1,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,1,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,1,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,1,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,1,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,1,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(5,1,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		               	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,1,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,1,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,1,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,1,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,1,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	
		               		            break;
		               	              	case 5:printf("\nP(5,1,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		              
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,1,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,1,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,1,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,1,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,1,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }  		
		               		            break;
		               	             	default: break;} }	
			             		
		               		break;
		               		case 2: printf("\nP(5,2) ");
		          		     	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=2;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-2];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);	
				           	         	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	    c=0;
					                        d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										  j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(5,2,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,2,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,2,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,2,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,2,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,2,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(5,2,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,2,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,2,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,2,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,2,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,2,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(5,2,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,2,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,2,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,2,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,2,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,2,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(5,2,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		     
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,2,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,2,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,2,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,2,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,2,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }           		
		               		            break;
		               	              	case 5:printf("\nP(5,2,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		   
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,2,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,2,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,2,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,2,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,2,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }             		
		               		            break;
		               	             	default: break;} }	
		               		break;
    	               		case 3:printf("\nP(5,3) ");
    	               	    	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=3;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-3];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);
				             	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	    c=0;
					                        d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										  j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(5,3,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                            int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										           int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,3,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,3,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,3,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,3,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,3,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(5,3,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,3,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,3,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,3,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,3,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,3,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               		            break;
    	               	             	case 3:printf("\nP(5,3,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,3,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,3,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,3,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,3,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,3,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(5,3,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);		
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,3,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,3,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,3,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,3,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,3,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }                		
		               		            break;
		               	              	case 5:printf("\nP(5,3,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);		 
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,3,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,3,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,3,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,3,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,3,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} }               		
		               		            break;
		               	             	default: break;} }	
		               		break;
		               		case 4:printf("\nP(5,4) ");
    	               	    	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=4;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-4];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);		    
								 if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	    c=0;
					                        d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                            d++;
		                                 } else{ c++;} }
										  j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(5,4,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										          int  j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,4,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,4,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,4,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,4,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,4,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	             	case 2: printf("\nP(5,4,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);
											  if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,4,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,4,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,4,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,4,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,4,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	
		               		            break;
    	               	             	case 3:printf("\nP(5,4,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                           	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,4,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,4,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,4,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,4,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,4,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 
		               	            	break;
		               	            	case 4:printf("\nP(5,4,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,4,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,4,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,4,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,4,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,4,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	              	case 5:printf("\nP(5,4,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,4,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr3[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr3[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr3[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr3[i]= '0';}}printf("%s",vr3);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,4,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                 	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}}printf("%s",vr3);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,4,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                                  	}else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                        	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                        	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,4,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                                     	}printf("%s",vr3);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,4,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr3[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr3[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr3[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr3[i]= '0';	}
				                          	            }printf("%s",vr3);		               		
		               		                        break;
		               	             	            default: break;} } 		               		
		               		            break;
		               	             	default: break;} }	           		
		               		break;
		               		case 5:printf("\nP(5,5) ");
    	               	    	for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					          	vector2[i]= '0';	} 
				              	for(i=5;i<size;i++){ //se llena con el vector restante
					          	vector2[i] = v1[i-5];}
				               	for(i=0;i<size;i++){ //Se aplica OR
					          	if(v1[i]=='1'&&vector2[i]=='1'){
				      			vector3[i]= '1';
					         	}else if(v1[i]=='1'&&vector2[i]=='0'){
				    			vector3[i]= '1';
				         		}else if(v1[i]=='0'&&vector2[i]=='1'){
					     		vector3[i]= '1';
				         		} else if(v1[i]=='0'&&vector2[i]=='0'){
				       			vector3[i]= '0';	}
				             	}printf("%s",vector3);		 
				             	if(strcmp(v1,vector3)==0) break;
				                    	strcpy(v2,vector3);
				                    	    c=0;
					                        d=0;
					                   	for(i=size;i>=0;i--){
                     	              	if(v2[i]=='0'){
			                           laten3[d] = c;
			                            c++;
			                             d++;
		                                 } else{ c++;} }
										  j2; 
		                                for(j2=0;j2<d;j2++){
		                           	switch(laten3[j2]){ //////////////////////TERCER   switch
		                           		case 1: printf("\nP(5,5,1) ");
		                     		    	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	            vector2[i]= '0';} 
			                    	     	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	    	vector2[i] = v2[i-1];	}
				                         	for(i=0;i<size;i++){ //Se aplica OR
				                 	    	if(v2[i]=='1'&&vector2[i]=='1'){
				    	         	     	vr3[i]= '1';
				                 	    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				     	         	     	vr3[i]= '1';
					                     	}else if(v2[i]=='0'&&vector2[i]=='1'){
					             	    	vr3[i]= '1';
					                     	} else if(v2[i]=='0'&&vector2[i]=='0'){
					             	     	vr3[i]= '0';}
			                       	    	}printf("%s",vr3);
			                       	    	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 int e=0;
					                             int f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            int j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,5,1,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,5,1,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){
					          	                        vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,5,1,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){
					                     	            	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,5,1,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){
														 vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,5,1,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){
														vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);  		               		
		               		                        break;
		               	             	            default: break;} } 	               	
		               	            	break;
		               	             	case 2: printf("\nP(5,5,2) ");
		          		                 	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                        	for(i=2;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-2];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					          	            if(v2[i]=='1'&&vector2[i]=='1'){
				      		               	vr3[i]= '1';
					                      	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		               	vr3[i]= '1';
				         	              	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	               	vr3[i]= '1';
				         	               	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		              	vr3[i]= '0';	}
				                          	}printf("%s",vr3);	
				                          	if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,5,2,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,5,2,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){
					          	                        vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,5,2,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){
					                     	            	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,5,2,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){
														 vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,5,2,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){
														vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);  		               		
		               		                        break;
		               	             	            default: break;} } 	               	
		               		            break;
    	               	             	case 3:printf("\nP(5,5,3) ");
    	               	                  	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                     	vector2[i]= '0';	} 
				                          	for(i=3;i<size;i++){ //se llena con el vector restante
					                       	vector2[i] = v2[i-3];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      		            	vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	            	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		             	vr3[i]= '0';	}
				                           	}printf("%s",vr3);
				                          if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,5,3,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,5,3,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){
					          	                        vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,5,3,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){
					                     	            	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,5,3,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){
														 vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,5,3,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){
														vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);  		               		
		               		                        break;
		               	             	            default: break;} } 	               	
		               	            	break;
		               	            	case 4:printf("\nP(5,5,4) ");
    	               	                   	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                       	vector2[i]= '0';	} 
				                         	for(i=4;i<size;i++){ //se llena con el vector restante
					                     	vector2[i] = v2[i-4];}
				                        	for(i=0;i<size;i++){ //Se aplica OR
					                      	if(v2[i]=='1'&&vector2[i]=='1'){
				      	            		vr3[i]= '1';
					                    	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    	            		vr3[i]= '1';
				                     		}else if(v2[i]=='0'&&vector2[i]=='1'){
					                		vr3[i]= '1';
				         	            	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       		            	vr3[i]= '0';	}
				                        	}printf("%s",vr3);	
											if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,5,4,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,5,4,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){
					          	                        vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);	
		               		                        break;
    	               	             	            case 3:printf("\nP(5,5,4,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){
					                     	            	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,5,4,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){
														 vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,5,4,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){
														vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);  		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	              	case 5:printf("\nP(5,5,5) ");
    	               	    	            for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                      	vector2[i]= '0';	} 
				                         	for(i=5;i<size;i++){ //se llena con el vector restante
					                    	vector2[i] = v2[i-5];}
				                         	for(i=0;i<size;i++){ //Se aplica OR
					                     	if(v2[i]=='1'&&vector2[i]=='1'){
				      			            vr3[i]= '1';
					                     	}else if(v2[i]=='1'&&vector2[i]=='0'){
				    		             	vr3[i]= '1';
				         	             	}else if(v2[i]=='0'&&vector2[i]=='1'){
					     	             	vr3[i]= '1';
				         	              	} else if(v2[i]=='0'&&vector2[i]=='0'){
				       			            vr3[i]= '0';	}
				             	            }printf("%s",vr3);	
											 if(strcmp(v2,vr3)==0) break;
				                             	strcpy(v3,vr3);
				                             	 e=0;
					                             f=0;
					                           	for(i=size;i>=0;i--){
                     	                         	if(v3[i]=='0'){
			                                         laten4[f] = e;
			                                         e++;
			                                         f++; } else{ e++;} }
										            j3; 
		                                         for(j3=0;j3<f;j3++){
		                                    	switch(laten4[j3]){ //////////////////////CUARTO   switch
		                           	            	case 1: printf("\nP(5,5,5,1) ");
		                     		                	for(i=0;i<1;i++){ //Se rellena de ceros segun la posicion
					          	                        vector2[i]= '0';} 
			                    	                   	for(i=1;i<size;i++){ //se llena con el vector restante
				                  	                  	vector2[i] = v3[i-1];	}
				                                      	for(i=0;i<size;i++){ //Se aplica OR
				                 	                 	if(v3[i]=='1'&&vector2[i]=='1'){
				    	         	                 	vr4[i]= '1';}else if(v3[i]=='1'&&vector2[i]=='0'){
				     	         	     	            vr4[i]= '1';}else if(v3[i]=='0'&&vector2[i]=='1'){
					             	                  	vr4[i]= '1';} else if(v3[i]=='0'&&vector2[i]=='0'){
					             	                 	vr4[i]= '0';}}printf("%s",vr4);
		               	                        	break;
		               	                        	case 2: printf("\nP(5,5,5,2) ");
		          		                            	for(i=0;i<2;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                                     	for(i=2;i<size;i++){ //se llena con el vector restante
					                                   	vector2[i] = v3[i-2];}for(i=0;i<size;i++){ //Se aplica OR
					          	                        if(v3[i]=='1'&&vector2[i]=='1'){vr4[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr4[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr4[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr4[i]= '0';	}
				                                     	}printf("%s",vr4);
		               		                        break;
    	               	             	            case 3:printf("\nP(5,5,5,3) ");
    	               	                               	for(i=0;i<3;i++){ //Se rellena de ceros segun la posicion
					                                	vector2[i]= '0';} 
				                          	            for(i=3;i<size;i++){ //se llena con el vector restante
					                       	            vector2[i] = v3[i-3];} for(i=0;i<size;i++){ //Se aplica OR
					                     	            if(v3[i]=='1'&&vector2[i]=='1'){vr4[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr4[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr4[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr4[i]= '0';	}
				                                     	}printf("%s",vr4);
		               	                         	break;
		               	                          	case 4:printf("\nP(5,5,5,4) ");
    	               	                            	for(i=0;i<4;i++){ //Se rellena de ceros segun la posicion
					                                 	vector2[i]= '0';	} 
				                         	            for(i=4;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-4];}
				                                     	for(i=0;i<size;i++){ //Se aplica OR
					                                 	if(v3[i]=='1'&&vector2[i]=='1'){vr4[i]= '1';
					                    	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr4[i]= '1';
				                     		            }else if(v3[i]=='0'&&vector2[i]=='1'){vr4[i]= '1';
				         	                         	} else if(v3[i]=='0'&&vector2[i]=='0'){vr4[i]= '0';	}
				                                     	}printf("%s",vr4);		               		
		               		                        break;
		               	                           	case 5:printf("\nP(5,5,5,5) ");
    	               	    	                        for(i=0;i<5;i++){ //Se rellena de ceros segun la posicion
					                                   	vector2[i]= '0';	} 
				                                     	for(i=5;i<size;i++){ //se llena con el vector restante
					                                 	vector2[i] = v3[i-5];}
				                                    	for(i=0;i<size;i++){ //Se aplica OR
					                                  	if(v3[i]=='1'&&vector2[i]=='1'){vr4[i]= '1';
					                     	            }else if(v3[i]=='1'&&vector2[i]=='0'){vr4[i]= '1';
				         	                         	}else if(v3[i]=='0'&&vector2[i]=='1'){vr4[i]= '1';
				         	                           	} else if(v3[i]=='0'&&vector2[i]=='0'){vr4[i]= '0';	}
				                          	            }printf("%s",vr4);		               		
		               		                        break;
		               	             	            default: break;} } 	               		
		               		            break;
		               	             	default: break;} }	
								 break;
								 default: break;
							}}
				break;	
				default: break;	
			}
	}
	
	
	return 0;
}
