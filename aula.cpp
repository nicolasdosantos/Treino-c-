#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	
	

	do {
		
			cout << "Informe o digito do m�s: ";
	cin >> mes;
	
		switch(mes){
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "Janeiro\n";
			break;
			
			case 2: cout << "Fevereiro\n";
			break;
			
			case 3: cout << "Mar�o\n";
			break;
			
			default: cout <<"Informe um m�s valido\n";
			break;
		}
	}while(mes !=0);
}
