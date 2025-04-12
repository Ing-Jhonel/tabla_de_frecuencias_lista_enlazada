#include <iostream>
using namespace std;

int main(){
	
	system("cls");
	char opcion;
	cout << "MENU PRINCIPAL\n"
		<< "==============\n\n"
		<< "A) Crear tabla con datos dados.\n"
		<< "B) Salir\n"
		<< "\n= "; cin >> opcion;
	
	switch(opcion){
		case 'A':
			break;
		case 'B':
			break;
		default:
			cout << "Opcion no valida. Intente de nuevo.\n\n";
			break;
	}
	return 0;
}