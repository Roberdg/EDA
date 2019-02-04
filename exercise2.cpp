#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int numBloques(int,int);

int main() {

	int i = 0, numCasos, clave;
	int secuencia;
	cin >> numCasos;
	while (i < numCasos) {

		cin >> clave;
		cin >> secuencia;
		cout << numBloques(clave, secuencia) << endl;
		i++;
	}
}

int numBloques(int clave, int secuencia) {

	int key=0, valorKey=0, contBloques = 0;
	while ((secuencia / 10) != 0) {
		key = secuencia % 10;
		valorKey = valorKey + key;
		if (clave == valorKey) {
			contBloques++;
			valorKey = key;
		}
		else if (clave < valorKey)
			valorKey = key;
		secuencia = secuencia / 10;
	}
	if ((valorKey + key) == clave)
		contBloques++;
	else if((key + secuencia) == clave)
		contBloques++;

	return contBloques;
}