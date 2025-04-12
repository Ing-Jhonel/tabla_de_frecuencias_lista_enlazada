#include <iostream>

using namespace std;

int main(){
	
	char opcion;
	do{
		system("cls");
		cout << "MENU PRINCIPAL\n"
			<< "==============\n\n"
			<< "A) Crear tabla con datos dados.\n"
			<< "B) Salir\n"
			<< "\n= "; cin >> opcion;
		
		system("cls");
		switch(opcion){
			case 'A':
				break;
			case 'B':
				cout << "Saliendo...";
				break;
			default:
				cout << "Opcion no valida. Intente de nuevo.";
				break;
		}
		cout << "\n\n";
		system("pause");
	} while(opcion!='B');
	
	return 0;
}