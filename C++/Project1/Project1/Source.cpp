//Por Maria Paula Medina Bejarano - 5600113
//Biocampos

#include <iostream>

using namespace std;

int main(){
	double temp[5][5] = { 0 }; //CREAR MATRIZ Y RELLENAR DE 0'S
	for (int i = 1; i <= 3; i++) { //LENAR POSICIONES CON LOS DATOS SUMINISTRADOS 
		temp[i][0] = 75;
		temp[0][i] = 100;
		temp[i][4] = 50;
	}
	
	for (int i = 0; i <= 5; i++) { //Ciclo de repetición para la totalidad de los calculos 3*3 = 9/2 = 4.5 aprox 5
			for (int h = 0; h <= 2; h++) { //Ciclo de calculo columna 1 y columna 3
				for (int j = 1; j <= 3; j++) {
					for (int l = 1; l <= 3; l++) {
						temp[l][j] = (temp[l - 1][j] + temp[l][j - 1] + temp[l + 1][j] + temp[l][j + 1]) / 4;
					}
				}
			}
	}
	//CICLO PARA IMPRESION EN CONSOLA
	for (int i = 0; i <= 4; i++) {
		for (int h = 0; h <= 4; h++) {
			cout << "  " << temp[i][h] << " ";
		}
		cout << ".\n";
	}
}

