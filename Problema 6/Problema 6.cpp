#include <iostream>

#include <windows.h>

using namespace std ;
//***********************************************************************************************************************************************************************************************


//	Problema 6 de Justo Alfredo Perez Choque

//***********************************************************************************************************************************************************************************************

void escaleraDoble(int altura ,int pos) // Funcion que recibe dos variables
{
	
	for ( int i = altura; i > -1 ; i--) 				// La iteracion va en descenso, para mi conveniencia(para el segundo for).
	
	{
		if (-altura == pos and i == altura)				// por si la persona esta en el primer guion superior izquierdo.
		{
			cout<<" _P_";
		}
		
		
		else if (i == 0)				// este es el ultimo guion vertical izquierdo(a lado izquierdo de la casilla 0). 
		{
			cout<<"|";
		}
		
		
		else if ( -i == pos)			// Para poner la posicion de la persona en la izquierda de acuerdo a la variable pos 
		{
			cout<<"|_P_";
		}
		
		
		else if (i == altura)			// el primer guion superior izquierdo para que no salga con el palo ( |___ ) 
		{
			cout<<" ___";
		}
		
		
		else							// Todos los demas |___ de bajada
		{
			cout<<"|___";
		}
		
		
	
	
//***********************************************************************************************************************************************************************************************	
		for (int j = 0; j <(8*i)-3 ; j++)	//Este for calcula y pone los espacios(" ") entre cada guion de extremo a extremo, (8xi)-3 es lo comun que halle para cada uno.
		{
			cout<<" ";
		}
//***********************************************************************************************************************************************************************************************		
		
		
		if (pos == altura and i == altura )		// Por si la persona esta en el primer guion superior derecho.
		{
			cout<<"_P_"<<endl;
		}
		
		
		else if (i == altura)					// Para poner el primer guion superior derecho y que no aparezca con el palo(   ___|  )
		{
			cout<<"___"<<endl;
		}
		
		
		else if(i == pos)						// Para poner la posicion de la persona en la derecha de acuerdo a la variable pos
		{
			cout<<"_P_|"<<endl;
		}
		
		
		else{									// para rellenar los escalones de subida.
			cout<<"___|"<<endl;
		}
		
		
		
		
//***********************************************************************************************************************************************************************************************		
				
		for (int h = 0; h < altura+1 - i ; h++)		// Este for pone los espacios iniciales,al iniciar una linea nueva 
		{
			cout<<"    ";
		}
		
		
	}
}
//***********************************************************************************************************************************************************************************************
int main ()

{	
	int x = 0;
	
//***********************************************************************************************************************************************************************************************	
	int altura = 5;
	
	for (int i = -altura ; i <= altura ; i++){   // For de izquierda a derecha para la animacion de ida.
		escaleraDoble(altura ,i);
		
		Sleep(500);								//Funcion de la libreria windos.h (la encontre por internet jeje)
		system("cls");
		
	}
		
		
		
	for (int i = altura ; i >= -altura ; i--)	// For de izquierda a derecha para la animacion de regreso.
	{
		escaleraDoble(altura ,i);
		
		Sleep(500);								//Funcion de la libreria windos.h (la encontre por internet jeje)
						
		system("cls");	
		
	}
	
	
	
		
}
