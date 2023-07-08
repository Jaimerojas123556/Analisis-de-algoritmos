//Busqueda_Secuencial modificada.

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
    
    double tiempoEnSegundos;
    	int pos=0,aux=0;
    long tiempoEnMicrosegundos;
   	int vector[200000]={0};
   	int vector_ordenado[200000]={0};
   	int numero=31289;
   	char band='V';
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

long inicio = obtenerTiempo(); // instancia inicial
	
	//mostrando vector
	for(int i=0;i<200000;i++)
	{
	cout<<vector_ordenado[i]<<"\n";
	}	
	

for(int i=0;i<200000;i++)
{	
	
	if(numero==vector_ordenado[i])
	{
		band='V';
	}

     }
     
     cout<<"numero buscado: "<<numero<<endl;
     	if(band=='V')
	{
		cout<<"numero encontrado ";
	}
	else
	{
		cout<<"numero no encontrados";
	}
   
    // fin de operación random
    long final = obtenerTiempo(); // instancia final
    // restamos el tiempo total final menos el tiempo de incio 
    tiempoEnMicrosegundos = final - inicio;
    // transformamos a segundos
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<endl<<endl;
    // impresion del tiempo en microsegundos y segundos
  
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl;
    return 0;
}


