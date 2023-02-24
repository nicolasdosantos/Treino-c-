#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	int dia;
	
	

	do {
		
			cout << "Informe o digito do mês: ";
			cin >> dia;
	
		switch(dia){
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "Domingo\n";
			break;
			
			case 2: cout << "Segunda\n";
			break;
			
			case 3: cout << "Terça\n";
			break;
			
			case 4: cout << "Quarta\n";
			break;
			
			case 5: cout << "Quinta\n";
			break;
			
			case 6: cout << "Sexta\n";
			break;
			
			case 7: cout << "Sabado\n";
			break;
			
			default: cout <<"Informe um mês valido\n";
			break;
		}
	}while(dia !=0);
}
