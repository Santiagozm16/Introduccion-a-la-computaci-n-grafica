//Por Maria Paula Medina Bejarano - 5600113
//Biocampos

#include <iostream>

using namespace std;

int main() {
	double temp[10][9] = { 0 }; //CREAR MATRIZ Y RELLENAR DE 0'S
	temp[8][3] = 100;
	for (int i = 1; i <= 8; i++) { //LENAR POSICIONES CON LOS DATOS SUMINISTRADOS 
		temp[i][0] = 20;
		temp[i][8] = 20;
		if (i <= 7) {
			temp[0][i] = 20;
			temp[9][i] = 20;
		}
	}

	for (int i = 0; i <= 28; i++) { //Ciclo para hacer las repeticiones necesarias para el calculo commpleto de datos 8*7=56/2=28

			for (int h = 0; h <= 2; h++) { //Ciclo de calculo columna 1 hasta la columna 7
				for (int j = 1; j <= 7; j++) {
					for (int l = 1; l <= 8; l++) {
						if (l == 8 && j == 3) {
							break;
						}
						temp[l][j] = (temp[l - 1][j] + temp[l][j - 1] + temp[l + 1][j] + temp[l][j + 1]) / 4;
					}
				}
			}
	}
	//CICLO PARA IMPRESION EN CONSOLA
	for (int i = 0; i <= 9; i++) {
		for (int h = 0; h <= 8; h++) {
			cout << "  " << temp[i][h] << " ";
		}
		cout << ".\n";
	}
}