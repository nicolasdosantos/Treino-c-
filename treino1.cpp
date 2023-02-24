#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	string c, bagagem;
	int pessoas, porta;
	float g, a;  
	
	cout << "Informe qual sera o carro da compra \n\n";
	cin >> c;
	
	
	if ( c == "audi" or c == "Audi" ){
		g=12.8;
		a=10.9;
	}
	else if (c == "bmw" or c == "BMW" or c == "Bmw"){
		g=9.8;
		a=8.9;
	}
	else if ( c == "FIAT" or c == "fiat" or c == "Fiat"){
		g=26.8;
		a=24.9;
	}
	else if ( c== "Ferrari" or c == "ferrari"){
		g=13.8;
		a=12.9;
	}
	else{
		g=0;
		a=0;
	}

		system ("pause");
	system ("cls");
	
	cout<<"o modelo escolhido terá quantas portas?\n\n";
	cin>> porta;
	
	if(porta >=4){
		g = g - 0.5;
		a = a - 0.5;	
	}
	
	system("pause");
	system("cls");
	
	cout<<"Quantos passsageiros o carro ira levar?\n\n";
	cin>>pessoas;
	
	if(pessoas>2){
		g = g - 1.2;
		a = a - 1.2;
	}
	
	system("pause");
	system("cls");
	
	cout<<"Pretende levar coisas no bagageiro?\nResponda com \"sim\" ou \"não\"\n\n";
	cin>> bagagem;
	
	if(bagagem == "sim"){
		g = g - 0.2;
		a = a - 0.2;
	}
	
	system("pause");
	system("cls");
	
	if(bagagem == "sim" && g > 0){
		cout<<"O carro escolhido é da marca "<<c<<" no modelo contem "<<porta<<" portas com "<<pessoas<<" de passageiros e com\nitens no bagageiro tem uma economia de: \n"<<g<<" L/Km usando gasolina.\n"<<a<<" L/Km usando etanol.";		
	}else if (g >0){
		cout<<"O carro escolhido é da marca "<<c<<" no modelo contem "<<porta<<" portas com "<<pessoas<<" de passageiros e com\no bagageiro vazio tem uma economia de: \n"<<g<<" L/Km usando gasolina.\n"<<a<<" L/Km usando etanol.";	
	
	}else{
		cout<<"Não contemos a marca do carro que voce preferiza .\nTente novamente. ";
	}
	
}

