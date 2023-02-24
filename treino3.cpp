#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	string andares,nome,acesso;
	
	cout << "Digite seu nome";
	cin >> nome;

	cout << "Selecione o andar desejado";
	cin >> andares;
	
	if (nome == "João"){
		cout << "Acesso permitido pode acessar o andar 2";
		cin >> acesso;
	}
	
}
