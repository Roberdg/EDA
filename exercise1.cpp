#include <iostream>
using namespace std;

//int ascensor(int arrayAscensor[], int longitud);

int main() {

	int n;
	cin >> n;
	while (n!=-1) {
		int numAntiguo=0, numActual=0, cont=0, contAscensor=0;
		do{
			numActual = n;
			if (cont > 0) {
				if (numAntiguo < numActual) {
					contAscensor += numActual - numAntiguo;
				}
				else if (numAntiguo > numActual) {
					contAscensor += numAntiguo - numActual;
				}
			}
			cont++;
			numAntiguo = numActual;
			cin >> n;
		}while (n != -1);
		cont = 0;
		cout << contAscensor << endl;
		cin >> n;
	}
}

/*int ascensor(int arrayAscensor[], int longitud) {
	int contAscensor = 0;
	for (int i = 0; i < longitud - 1; i++) {
		if (arrayAscensor[i] < arrayAscensor[i + 1]) {
			contAscensor += arrayAscensor[i + 1] - arrayAscensor[i];
		}else if (arrayAscensor[i] > arrayAscensor[i + 1]) {
			contAscensor += arrayAscensor[i] - arrayAscensor[i+1];
		}
	}
	return contAscensor;
}*/