#include <iostream>

using namespace std;

main (){
	int numero,qtd;	
	
	cout << "informe o numero para tabuada";
	cin >> numero;
	
	cout << "informeat� quantos numeros � pra ir";
	cin >> qtd;
	
	for (int x = 0; x <= numero; x++){
		cout << numero << "x" << x << "=" << numero * x << endl;
}
}
