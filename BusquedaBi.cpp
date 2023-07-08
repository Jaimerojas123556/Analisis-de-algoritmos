//Busqueda_Binaria modificada.

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sys/time.h>

using namespace std;


long obtenerTiempo(){
    struct timeval inicio;
    // gettimeofdat devuelve el tiempo del reloj de la computadora
    gettimeofday(&inicio, NULL);
    // Retornamos el tiempo en segundo multiplicado por un millon que será 00:00:00 + el tiempo en microsegundos
    return inicio.tv_sec*1000000+inicio.tv_usec;
}

int main(){
    
    
    int mitad=0;
    int primero = 0;
    int ultimo = 200000;
	int contador=0;
   	int vector[200000]={0};
 	int numero=31289;
   	int vector_ordenado[200000]={0};
	int pos=0,aux=0;
	char band ='V';
	
	//creando el vector
	
	for(int i=0;i<200000;i++)
	{
		vector [i]=0+rand()%(20000000-0);
	}
	
	//ordenando el vector	
	for(int i=0;i<200000;i++){
		pos = i; 
		aux = vector[i];
		
		while((pos>0) && (vector_ordenado[pos-1] > aux)){
			vector_ordenado[pos] = vector_ordenado[pos-1];
			pos--;
		}
		vector_ordenado[pos] = aux;
	}
	//creando las busquedas
		double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
    
	long inicio = obtenerTiempo(); // instancia inicial
	
	
	
	//mostrando vector
	for(int i=0;i<200000;i++)
	{
	cout<<vector_ordenado [i]<<"\n";
	}	

	 //cout<<"inicio: "<<inicio<<endl;
 	for(int i=0;i<200000;i++){
 


        mitad = (primero + ultimo) / 2;

        if (numero == vector_ordenado[mitad])

		  	band='V';
		   

        if (numero < vector_ordenado[mitad])

            ultimo = mitad -1;

        if (numero> vector_ordenado[mitad])

            primero = mitad + 1;

    
	
	}
	
	long final = obtenerTiempo(); // instancia final
	
	cout<<"numero buscado: "<<numero<<endl;
    if (band== 'V')	
 
	{	
       cout <<"numero encontrado";
}
    else{
	
      cout<<"numero no encontrado";
		}
     
   
    // fin de operación random
   
    // restamos el tiempo total final menos el tiempo de incio 
    tiempoEnMicrosegundos = final - inicio;
    // transformamos a segundos
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<endl<<endl;
    // impresion del tiempo en microsegundos y segundos
  
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl;
    return 0;
}

