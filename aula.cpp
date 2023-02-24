#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	
	

	do {
		
			cout << "Informe o digito do mês: ";
	cin >> mes;
	
		switch(mes){
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "Janeiro\n";
			break;
			
			case 2: cout << "Fevereiro\n";
			break;
			
			case 3: cout << "Março\n";
			break;
			
			default: cout <<"Informe um mês valido\n";
			break;
		}
	}while(mes !=0);
}
