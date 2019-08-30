#include <iostream>
#include <stdio.h>

using namespace std;


struct direccion {
		char calle [20];
		int cp;
		char cuidad[20];
		
		
};

struct persona{
	char nombre[20];
	int edad;
	float estatura;
	struct direccion dire;
	
};
int main(int argc, char** argv){
	struct persona P1[5];
	struct  persona*apuntador;
	
	apuntador=&P1[0];
	
	for (int i=0; i<1; i++){
		
		cout<<"nombre:";
		cin.getline(P1[i].nombre,20,'\n');
		cout<<"edad:";
		cin>>P1[i].edad;
		cout<<"estatura;";
		cin>>P1[i].estatura;
		cout<<"calle:";
		fflush(stdin);
		cin.getline(P1[i].dire.calle,20,'\n');
		
	}

	cout<<endl<<"nombre guardado"<<  apuntador->  nombre;
	cout<<endl<<"edad guradada;"<<  apuntador-> edad;
	cout<<endl<<"estatura guardada;"<<  apuntador-> estatura;
	cout<<endl<<"calle guardada;"<<  apuntador-> dire.calle;
	
	
	return 0;
}
