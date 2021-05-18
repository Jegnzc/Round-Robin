#include<stdio.h> 


 
 int *obtenerRandom(int *numRandom, int cantProcesos);
 int *obtenerPID(int *numRandom, int cantProcesos);
 int *obtenerTiempoEjecucion(int *numRandom, int cantProcesos);
int main(){ 
 int cantProcesos, cont, tiempoGeneral, limiteRandom, contR,encontradoMayor;
 
 printf("\n\n	  Ingrese la cantidad de procesos con los que inicia: "); 
	scanf("%d",&cantProcesos); 
 
 printf("	    Ingrese el quantum de la calendarizacion (ms): "); 
	scanf("%d",&tiempoGeneral); 

	
	
	
	
	


int *tiempoLlegada;
int numRandom[cantProcesos];

tiempoLlegada = obtenerRandom(numRandom, cantProcesos); //obtenemos tiempo de llegada aleatorio para cada proceso


int quantumFin[cantProcesos];
 
 quantumFin[cantProcesos];
 int p;
 for(p=0;p<cantProcesos;p++){
 	quantumFin[p] = 0;
 }
 
 int tiempoTomadoTotal[cantProcesos];
 
tiempoTomadoTotal[cantProcesos];
 for(p=0;p<cantProcesos;p++){
 	tiempoTomadoTotal[p] = 0;
 }
 
  int tiempoIndividual[cantProcesos];
 
tiempoIndividual[cantProcesos];
 for(p=0;p<cantProcesos;p++){
 	tiempoIndividual[p] = 0;
 }
 //int x;
 //for(x = 0; x<cantProcesos; x++){
 //	 printf("numR[%d] = %d\n",x,tiempoLlegada[x]);

 //}
 

 
 int *PID;
int PIDUNICO[cantProcesos];

PID = obtenerPID(PIDUNICO, cantProcesos); //obtenemos tiempo de llegada aleatorio para cada proceso



 //for(x = 0; x<cantProcesos; x++){
 //	 printf("PID[%d] = %d\n",x,PID[x]);

 //}
 
  int *tiempoEjecucion;
int tiempoE[cantProcesos];

tiempoEjecucion = obtenerTiempoEjecucion(tiempoE, cantProcesos); //obtenemos tiempo de llegada aleatorio para cada proceso



 //for(x = 0; x<cantProcesos; x++){
 //	 printf("Tiempo de Ejecucion [%d] = %d\n",x,tiempoEjecucion[x]);

 //}
 
 
 
 int temp = tiempoLlegada[0];
 int contador;
 int encontrado;
 for(contador=0;contador<cantProcesos;contador++){
 	
 	if(temp<tiempoLlegada[contador]){
 		
	 }else{
	// 	printf("Indice[%d] era el menor\n", contador); //obtengo el índice que tiene el menor
	 	temp = tiempoLlegada[contador];
	 	encontrado = contador;
	 }
 	
 }
 
 
// printf("menor[%d]\n", encontrado); 
 
 
 int i;
    int stringcont;
    char procesonombre[cantProcesos][10];
    
    for(stringcont = 0; stringcont<cantProcesos; stringcont++){

                         
 	printf("		Ingrese el nombre del proceso: "); 
	scanf("%s",&procesonombre[stringcont]);                         

  
        
	}
	
	
	
 	 int temp2 = tiempoEjecucion[0];
 for(contador=0;contador<cantProcesos;contador++){
 	
 	if(temp2>tiempoEjecucion[contador]){
 		
	 }else{
	 //	printf("Indice[%d] era el mayor\n", contador); //obtengo el índice que tiene el menor
	 	temp2 = tiempoEjecucion[contador];
	 	encontradoMayor = contador;
	 }
 	
 }
	
	
	
	

	

	
	printf("\n\n	 ___________________________________________________________________\n");
	printf("        |      PROCESOS           PID             T.L          T.E         |\n");
	printf("	|------------------------------------------------------------------|\n");
	int conts;
	for(conts = 0; conts<cantProcesos; conts++)
	{
		printf("        |       ");
		for(i = 0; procesonombre[conts][i] != '\0'; i++) //Mostrar nombres
		{
   		printf("%c", procesonombre[conts][i]);
		}
			printf("     |       %d       |     %d          |       %d      |\n", PID[conts], tiempoLlegada[conts], tiempoEjecucion[conts]);
	}
	printf("	 ___________________________________________________________________\n");
	printf("                  El proceso[%d] es el primero que debe ejecutarse", encontrado);
 	printf("\n                      Se esta ejecutando ");
 	
 	for(i = 0; procesonombre[encontrado][i] != '\0'; i++) //Mostrar nombres
		{
   		printf("%c", procesonombre[encontrado][i]);
		}
 	printf(" con el PID: %d\n\n", PID[encontrado]);
 	
 	

	int q=0, o=0;
 	int r=0;
 	int qreal;
 	int tiempoTotal=0;
 	int tt=0;
 	int tiempoSobra=0;
 	int flag = 0;
 	int sobras = 0;
 	for(tt=0;tt<cantProcesos;tt++){
 		tiempoTotal = tiempoTotal + tiempoEjecucion[tt];
	 }
	 
 	int v = 0;


	while(tiempoEjecucion[encontradoMayor]>0){
		q = q + 1;
		
		printf("\n\n	 ___________________________________________________________________\n");
		printf("	|                  Quantum = %d ms - Vuelta %d                       |\n", tiempoGeneral, q);
		printf("	|------------------------------------------------------------------|\n");
		
	for(r=0;r<cantProcesos;r++){
		



		tiempoEjecucion[r] = tiempoEjecucion[r]-tiempoGeneral;
		
		
		
		if(tiempoEjecucion[r]>0){
			
			o=o+1;
			printf("	|  Quantum[%d]  - ",o);
			printf("Proceso[%d] | ",r);

				printf("Necesita %dms mas			  |\n", tiempoEjecucion[r]);
			
			v = v + tiempoGeneral;
			
				
		}else if(tiempoEjecucion[r]<=0&&quantumFin[r]==0){
			o=o+1;
			
			
			printf("	|  Quantum[%d]  - ",o);
			printf("Proceso[%d] | ",r);
			if(tiempoEjecucion[r]<0){
				tiempoEjecucion[r] = tiempoEjecucion[r] * -1;
				
			}
			
			if(tiempoEjecucion[r]==0){
				
				v = v + tiempoGeneral;
				
				printf("Finalizado, no sobro nada            |\n");
				
				tiempoIndividual[r] = v;
				tiempoEjecucion[r] = 0;
				flag = 1;
			}else{
				printf("Finalizado sobraron %dms del quantum  |\n", tiempoEjecucion[r]);
				
				
				tiempoSobra = tiempoSobra + tiempoEjecucion[r];
				
				v = v + (tiempoGeneral-tiempoEjecucion[r]);
				tiempoIndividual[r] = v;
				sobras = sobras + tiempoEjecucion[r];
				tiempoEjecucion[r] = 0;
				flag = 0;
			}
			
			
			quantumFin[r] = o; 
			
		}
		
		
	//	if(tiempoEjecucion[r] == 0){
	//		if(flag==1){
	//			tiempoTomadoTotal[r] = tiempoGeneral*(tiempoTomadoTotal[r] + quantumFin[r]);
	//			
	//		}else{
	//			tiempoTomadoTotal[r] = (tiempoGeneral*(tiempoTomadoTotal[r] + (quantumFin[r]-1)))+(tiempoGeneral-sobras);
	////		
	//	}
		
		
		
	}
	printf("	 ___________________________________________________________________\n");
	printf("\n        |                  Tiempo en la vuelta[%d]: %d                      |\n", q, v);
	printf("	 ___________________________________________________________________\n");
	printf("\n");
		
	}
	
	//printf("\nTiempo total tomado: %dms", tiempoTotal);
	//printf("\nTiempo total que sobro de los quantums: %dms\n", tiempoSobra);
	printf("		 _________________________________________\n");
for(r=0;r<cantProcesos;r++){
	printf("		|            Proceso [%d] - ",r);
	for(i = 0; procesonombre[r][i] != '\0'; i++) //Mostrar nombres
		{
   		printf("%c", procesonombre[r][i]);
		}
	printf("\n		|-----------------------------------------|\n");
	printf("		| Tiempo que le tomo finalizarse: %dms    |\n", tiempoIndividual[r]);
	printf("		| Quantum en el que finalizo:     %d      |\n", quantumFin[r]);
	printf("		|_________________________________________|\n");
}

 //	printf("\n\nPROCESOS ");
 	
 //	for(conts = 0; conts<cantProcesos; conts++)
//	{
//		for(i = 0; procesonombre[conts][i] != '\0'; i++) //Mostrar nombres
//		{
//   		printf("%c", procesonombre[conts][i]);
////		}
//		printf("       ");
//	}
	
//	printf("\nPID");
 	
 //	for(conts = 0; conts<cantProcesos; conts++)
//	{
//		printf("        %d", PID[conts]);

//	}	
	
 	
 	
  return 0; 
  
  
  
  
  
  
  
  
  
  
  
  
}


 int *obtenerRandom(int *numRandom, int cantProcesos){
 	
 	 int cont, tiempoGeneral, limiteRandom, contR;
 	limiteRandom = cantProcesos+1;
	
	/*Inicializa generador de números aleatorios utilizando el tiempo de la pc*/
   srand(time(0)); 
 	
 //el quantum en round robin lo elegimos nosotros, así es el algoritmo
 int procesos[cantProcesos];
 
int flag = 0;
 for(cont = 0; cont<cantProcesos; cont++){
 	int pruebaRandom = 1;

	 		int randomAsignar;
	 		pruebaRandom = 1;
	 		while(pruebaRandom!=0){
	 			
				 randomAsignar = rand() % (limiteRandom-1);
			if(randomAsignar==0&&flag==0){
				numRandom[cont] = randomAsignar;
				pruebaRandom=0;
				flag = flag + 1;
			}else{
				for(contR = 0; contR<cantProcesos; contR++){
	 			
	 			if(randomAsignar==numRandom[contR]){
	 				contR = cantProcesos;
	 				pruebaRandom = 1;
				 }else{
				 	pruebaRandom=0;
				 }
			 }
			}
	 		
		}

			 
			 numRandom[cont] = randomAsignar;
//	 printf("numero[%d] = %d\n", cont, numRandom[cont]); 


 }
 return numRandom;
 	
 }



int *obtenerPID(int *numRandom, int cantProcesos){
 	
 	 int cont, tiempoGeneral, limiteRandom, contR;
 	limiteRandom = 200;
	
	/*Inicializa generador de números aleatorios utilizando el tiempo de la pc*/
   srand(time(0)); 
 	
 //el quantum en round robin lo elegimos nosotros, así es el algoritmo
 int procesos[cantProcesos];
 
int flag = 0;
 for(cont = 0; cont<cantProcesos; cont++){
 	int pruebaRandom = 1;

	 		int randomAsignar;
	 		pruebaRandom = 1;
	 		while(pruebaRandom!=0){
	 			
				 randomAsignar = rand() % (limiteRandom-1);
			if(randomAsignar==0&&flag==0){
				numRandom[cont] = randomAsignar;
				pruebaRandom=0;
				flag = flag + 1;
			}else{
				for(contR = 0; contR<cantProcesos; contR++){
	 			
	 			if(randomAsignar==numRandom[contR]){
	 				contR = cantProcesos;
	 				pruebaRandom = 1;
				 }else{
				 	pruebaRandom=0;
				 }
			 }
			}
	 		
		}

			 
			 numRandom[cont] = randomAsignar;
	// printf("numero[%d] = %d\n", cont, numRandom[cont]); 


 }
 return numRandom;
 	
 }
 
 int *obtenerTiempoEjecucion(int *numRandom, int cantProcesos){
 	
 	 int cont, tiempoGeneral, limiteRandom, contR;
 	limiteRandom = 20;
	
	/*Inicializa generador de números aleatorios utilizando el tiempo de la pc*/
   srand(time(0)); 
 	
 //el quantum en round robin lo elegimos nosotros, así es el algoritmo
 int procesos[cantProcesos];
 
int flag = 0;
 for(cont = 0; cont<cantProcesos; cont++){
 	int pruebaRandom = 1;

	 		int randomAsignar;
	 		pruebaRandom = 1;
	 		while(pruebaRandom!=0){
	 			
				 randomAsignar = rand() % (limiteRandom)+1;
			if(randomAsignar==0&&flag==0){
				numRandom[cont] = randomAsignar;
				pruebaRandom=0;
				flag = flag + 1;
			}else{
				for(contR = 0; contR<cantProcesos; contR++){
	 			
	 			if(randomAsignar==numRandom[contR]){
	 				contR = cantProcesos;
	 				pruebaRandom = 1;
				 }else{
				 	pruebaRandom=0;
				 }
			 }
			}
	 		
		}

			 
			 numRandom[cont] = randomAsignar;
//	 printf("numero[%d] = %d\n", cont, numRandom[cont]); 


 }
 
 return numRandom;
 	
 	
 	
 	
 }

