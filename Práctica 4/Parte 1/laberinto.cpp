#include <iostream>
#include <fstream>

using namespace std;

//LABERINTO 1
/*
const int FILAS = 15;
const int COLUMNAS = 15;

int laberinto[FILAS][COLUMNAS]={{ 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
     							{ 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0 },
     							{ 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0 },
     							{ 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 },
					    		{ 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1 },
     							{ 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0 },
     							{ 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
     							{ 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1 },
     							{ 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1 },
     							{ 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
     							{ 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1 },
     							{ 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0 },
     							{ 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0 },
     							{ 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
     							{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }};

int x_entrada = 0;
int y_entrada = 0;
int x_salida = 14;
int y_salida = 14;
*/

//LABERINTO 2

const int FILAS = 13;
const int COLUMNAS = 21;

int laberinto[FILAS][COLUMNAS]={{ 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
     							{ 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
     							{ 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1 },
     							{ 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 },
					    		{ 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1 },
     							{ 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1 },
     							{ 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1 },
     							{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1 },
     							{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
     							{ 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1 },
     							{ 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1 },
     							{ 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1 },
     							{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }};

int x_entrada = 0;
int y_entrada = 0;
int x_salida = 12;
int y_salida = 20;


//LABERINTO 3
/*
const int FILAS = 12;
const int COLUMNAS = 12;

int laberinto[FILAS][COLUMNAS]={{ 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
     							{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
     							{ 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1 },
     							{ 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1 },
					    		{ 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1 },
     							{ 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
     							{ 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
     							{ 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
     							{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
     							{ 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1 },
     							{ 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
     							{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }};

int x_entrada = 0;
int y_entrada = 0;
int x_salida = 11;
int y_salida = 11;
*/


void mostrar() {
   	int i, j;

   	for (i=0; i<FILAS; i++) {
      	for (j=0; j<COLUMNAS; j++) {
         	cout << laberinto[i][j];
      	}
      	cout << endl;
   	}
    cout << endl;
}


void reiniciar() {
   	int i, j;

   	for (i=0; i<FILAS; i++) {
      	for (j=0; j<COLUMNAS; j++) {
         	if(laberinto[i][j] == 2 || laberinto[i][j] == 3)
                laberinto[i][j] = 0;
      	}
    }

}

int factible(int f, int c) {
   bool resultado = true;

   // Posicion que no pertenece al laberinto
   if ((f<0) || (f>=FILAS) || (c<0) || (c>=COLUMNAS))
      resultado = false;

   // Ya hemos pasado o no hay camino
   if (laberinto[f][c] == 2 || laberinto[f][c] == 1)
      resultado = false;

   return resultado;
}

bool recorrer_completo(int fil, int col, int & coste, int & menor_coste){
    bool listo = false;
    coste++;

    laberinto[fil][col] = 2;

    //cout << fil << ", " << col << endl;

    if (fil == x_salida && col == y_salida){
      	if (coste < menor_coste)
            menor_coste = coste;
    }

    if( laberinto[x_entrada][y_entrada] == 3 )
        listo = true;
    else{
        if (!listo && factible(fil,col-1))   // Continuamos para abajo
            listo = recorrer_completo(fil,col-1, coste, menor_coste);
        if (!listo && factible(fil,col+1))   // Continuamos para arriba
            listo = recorrer_completo(fil,col+1, coste, menor_coste);
        if (!listo && factible(fil-1,col))   // Continuamos para la izquierda
            listo = recorrer_completo(fil-1,col, coste, menor_coste);
        if (!listo && factible(fil+1,col))   // Continuamos para la derecha
            listo = recorrer_completo(fil+1,col, coste, menor_coste);

        // Si el laberinto no puede recorrerse por la casilla actual
        // se quita a dicha casilla la señal que indica que era parte
        // de la solucion.
        if (!listo){
            laberinto[fil][col] = 3;
            coste--;
        }
    }
    // Devuelve true si se recorre con exito y false en caso contrario
    return listo;

}

bool recorrer(int fil, int col, int & coste, int coste_busqueda) {
    bool listo = false;

    coste++;

    // Casilla visitada
    laberinto[fil][col] = 2;

    // Esta condicion nos indica si la casilla actual es la salida o no.
    if (fil == x_salida && col == y_salida && (coste_busqueda == coste || coste_busqueda == 0)){
      	listo = true;
    }
    else{
        if (!listo && factible(fil,col-1))   // Continuamos para abajo
            listo = recorrer(fil,col-1, coste, coste_busqueda);
        if (!listo && factible(fil,col+1))   // Continuamos para arriba
            listo = recorrer(fil,col+1, coste, coste_busqueda);
        if (!listo && factible(fil-1,col))   // Continuamos para la izquierda
            listo = recorrer(fil-1,col, coste, coste_busqueda);
        if (!listo && factible(fil+1,col))   // Continuamos para la derecha
            listo = recorrer(fil+1,col, coste, coste_busqueda);

        // Si el laberinto no puede recorrerse por la casilla actual
        // se quita a dicha casilla la señal que indica que era parte
        // de la solucion.
        if (!listo){
            laberinto[fil][col] = 0;
            coste--;
        }
    }
    // Devuelve true si se recorre con exito y false en caso contrario
    return listo;
}



int main() {
   bool solucion;   //Resultado del recorrido
   int coste, coste_minimo = 10000;


   mostrar();   // Laberinto sin resolver

   solucion = recorrer(x_entrada,y_entrada, coste, 0);

   cout << "\nCoste: \n" << coste <<"\nSolucion: \n" ;
   if (!solucion)   // No tiene solucion el laberinto
      cout << "\nLaberinto sin solucion\n";

   mostrar();   // Laberinto resuelto

   reiniciar();
   coste = 0;

   recorrer_completo(x_entrada, y_entrada, coste, coste_minimo);

   reiniciar();
   coste = 0;

   solucion = recorrer(x_entrada,y_entrada, coste, coste_minimo);

   cout << "\nCoste Minimo: \n" << coste-2 <<"\nSolucion: \n" ;

   mostrar();
}
