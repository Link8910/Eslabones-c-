#include <iostream>

using namespace std ;

/*Problema 4 de Justo Alfredo Perez Choque


Buenas profesor, primero trate de hacerlo con puras cadenas y full condicionales(no usar el for), pero por alguna razon mi 
ide se bugeaba(uso devc++,me mostraba espacios que no deberian estar), lo probe igual en replit y me lanzaba lo mismo y a veces error, asi que
lo hice con for :c.


*/







void escaleraDoble(int pos)   //La funcion
{
//***********************************************************************************************************************************************************************************************


	for ( int i = 3; i > -1 ; i--)	// La iteracion va en descenso, para mi conveniencia(para el segundo for).
	{
	
		if (-3 == pos and i == 3)		// por si la persona esta en el primer guion superior izquierdo.
		{
			cout<<" _P_";
		}
	
	
		else if (i == 0)			// este es el ultimo guion vertical izquierdo(a lado izquierdo de la casilla 0). 
		{
			cout<<"|";
		}
	

		else if ( -i == pos)		// Para poner la posicion de la persona en la izquierda de acuerdo a la variable pos 
		{
			cout<<"|_P_";
		}
	
	
		else if (i == 3)			// el primer guion superior izquierdo para que no salga con el palo ( |___ ) 
		{
			cout<<" ___";
		}
		
		
		else						// Todos los demas |___ de bajada
		{
			cout<<"|___";
		}
		
		
	
	
//***********************************************************************************************************************************************************************************************
		for (int j = 0; j <(8*i)-3 ; j++)	//Este for calcula y pone los espacios(" ") entre cada guion de extremo a extremo, (8xi)-3 es lo comun que halle para cada uno.
		{
			cout<<" ";
		}
//***********************************************************************************************************************************************************************************************
		
		
		if (pos == 3 and i == 3 )	// Por si la persona esta en el primer guion superior derecho.
		{
			cout<<"_P_"<<endl;
		}
		
		
		else if (i == 3)			// Para poner el primer guion superior derecho y que no aparezca con el palo(   ___|  )
		{
			cout<<"___"<<endl;
		}
		
		
		else if(i == pos)			// Para poner la posicion de la persona en la derecha de acuerdo a la variable pos
		{
			cout<<"_P_|"<<endl;
		}
		
		
		
		else{						// para rellenar los escalones de subida.
			cout<<"___|"<<endl;
		}
		
		
//***********************************************************************************************************************************************************************************************		
	
		
		for (int h = 0; h < 3+1 - i ; h++)   // Este for pone los espacios iniciales,al iniciar una linea nueva 
		{
			cout<<"    ";
		}	
	}
	
//***********************************************************************************************************************************************************************************************

}
	
int main ()

{		


	escaleraDoble(-2);  //Llamada a la funcion 
	
	
		
}
