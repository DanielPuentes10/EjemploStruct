//Explicacion funcionamiento del struct (Estructuras)

#include<iostream>

using namespace std;

struct personas{
	int codigo;
	string nombre;
	string apellido;
};

personas clientes[2];

int main (){
	
	for(int i=0; i<=1;i++){
		cout<<" digite el codigo del cliente "<<endl;
		cin>>clientes[i].codigo;
		cout<<" digite el Nombre del cliente "<<endl;
		cin>>clientes[i].nombre;
		cout<<" digite el Apellido del cliente "<<endl;
		cin>>clientes[i].apellido;
		system("cls");
		
	}
	for(int i=0; i<=1;i++){
		cout<<"Codigo cliente: "<<clientes[i].codigo<<endl;
		cout<<"Nombre Cliente: "<<clientes[i].nombre<<endl;
		cout<<"Apellido Cliente: "<<clientes[i].apellido<<endl;
		cout<<"////////////////////////////////////"<<endl;
	}
	
	
	
	
	
}
