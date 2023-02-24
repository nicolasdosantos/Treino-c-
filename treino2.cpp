#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL,"Portuguese");
	double valor;
	string tamanho, sabor,acrescimo,recheio,presente,entrega,pagamento,qnt;
	float result;

cout<<"Qual o tamanho do ovo desejado\n*Pequeno (P)\n*Médio (M)\n*Grande (G)\n\n(Responder com a inicial.)";
	cin >> tamanho;
	
	if(tamanho=="P"){
		valor = 7.80;
	}else if(tamanho=="M"){
		valor = 12.90;
	}else if(tamanho =="G"){
		valor = 23.95;
	}else{
		valor = 0;
	}
	
	system("pause");
	system("cls");
	
	cout<<"Qual é o sabor desejado:\n*Chocolate preto (P)\n*Chocolate branco (B)\n*Chocolate Ao-Leite (L)\n\n(Responder com a inicial.)";
	cin>> sabor;
	
	if(sabor=="P"){
		valor= valor+9.67;
	}
	else if(sabor == "B"){
		valor= valor+4.50;
	}
	else if (sabor == "L")
		valor= valor+9.32;
		
	system("pause");
	system("cls");
	
	cout<<"Qual é o recheio desejado(Você pode escolher os dois recheios caso queira):\n*Chocolate preto (CP)\n*Chocolate branco (CB)\n*(Responder com a inicial.)";
	cin>> recheio;
	
	
		if(recheio =="CP"){
		valor = valor +4.83;
	}
	else if(recheio == "CB"){
		valor= valor+2.25;
	}
	else if(recheio == "CB e CP" or "CP e CB"){
		valor= valor+3.54;
	}
		
	system("pause");
	system("cls");
	
	cout << "Você ira querer adicionar acrescimo?Sim ou Não \n* (responder com sim e não)";
	cin >> acrescimo;
	
	if (acrescimo == "sim"){
		cout << "\n*Qual será o acrescimo (Você pode adicionar mais da uma coisa): \n* MM'S (M) \n*KitKat (K) \n*(responder cm a inicial suguerida.)";
		cin >> acrescimo;
		
		if(acrescimo =="M"){
		valor= valor+4.67;
	}
	else if(acrescimo == "K"){
		valor= valor+5.43;
	}
	} 
	
	else if(acrescimo == "K e M"){
		valor= valor+10.1;
	}
	
	else if(acrescimo == "não"){
		valor= valor+0;
	}
	
	system("pause");
	system("cls");
	
	cout << "Sua compra sera presente?sim ou não(Responda seguindo a alternativa";
	cin >> presente;
	
	if (presente == "sim"){
		valor = valor +2.50;
	}
	else if (presente == "não"){
		valor = valor + 0;
	}
	
	system("pause");
	system("cls");
	
	cout << "Sua compra sera entrega?sim ou não(Responda seguindo a alternativa";
	cin >> entrega;
	
	if (entrega == "sim"){
		valor = valor +5;
	}
	else if (entrega == "não"){
		valor = valor + 0;
	}
	
	system("pause");
	system("cls");
	
	cout << "\n*Qual será a forma de pagamento: \n* Cartão (C) \n* PIX(P) \n* Dinheiro(D)\n*(responder cm a inicial suguerida.)";
	cin >> pagamento;
	
	if (pagamento == "C"){
		valor = valor +3.30;
	}
	else if (pagamento == "P" or pagamento == "D"){
		valor = valor /1.10;
	}
	
	system("pause");
	system("cls");
	
	cout << "Qual sera a quantidade de produtos que você irá comprar?\n";
	cin >> qnt;
	
	system("pause");
	system("cls");
	
	cout << "Sua compra total ficou de " <<valor<< " no total";
	cin >> valor;
	
	
}
