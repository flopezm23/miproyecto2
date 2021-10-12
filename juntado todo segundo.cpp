#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

	typedef struct{
	string ident;
	string nome;
	string email;
	string secao;
	int periodo;
	string status;
	float porcentagem;
			
}holis;

void revisar();
void agregar();
void buscaralu();
void alterar();

int main(){
	string opts;
	string mopts;
	
	revisar();
	
	si:
	cout<<"Elige tu opcion "<<"\n";
	cout<<"buscar"<<"\n";
	cout<<"alterar"<<"\n";
	cout<<"agregar"<<"\n";
	cin>> opts;
	
if (opts=="alterar"){
	alterar();
	}
	if (opts=="buscar"){
	buscaralu();
	}
	if(opts=="agregar"){
	agregar();
	}
	cout<<"Si quieres continuar usando el programa escribe si: ";
	cin>>mopts;
	if(mopts=="si"){
		goto si;
	}
	return 0;
}


void buscaralu(){
	string buscando;
string textocarnet;
int contador;


otrointento: //ETIQUETA PARA REINICIAR ESTA SECCION
cout<<"Escribe el carnet del alumno que estas buscando con un - ";
cin.ignore();
getline(cin,buscando);
textocarnet="Carnet del alumno: ";

textocarnet.append(buscando); //append sirve para concatenar o juntar 2 strings

	
fstream encontraralumn("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");
string encontra;


while(getline(encontraralumn,encontra)){
	
	if (contador>0){
		cout<<encontra;
		cout<<"\n";
		contador=contador+1;
	}
	
	if(textocarnet==encontra){
	cout<<encontra;
	cout<<"\n";
	contador=1;
	}

	if (contador==7){
		break;
	}
}

if(contador==0){
	cout<<"No fue posible encontrar este carnet";
	cout<<"\n";
	encontraralumn.close();
	goto otrointento;
	}
	
	
}



void alterar(){
string buscando;
string textocarnet;
int contador;

//if(menu==4){

//nuevas variables
string novostatus;
string textoestado;
string textopromedio;

string novopro;

otrointento: //ETIQUETA PARA REINICIAR ESTA SECCION
cout<<"Escribe el carnet del alumno que estas buscando con un - ";
cin.ignore();
getline(cin,buscando);
textocarnet="Carnet del alumno: ";

textoestado="Estado: ";
textopromedio="Promedio: ";

textocarnet.append(buscando); //append sirve para concatenar o juntar 2 strings

	
fstream encontraralumno("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");
string encontrar;

ofstream mudancas("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnosss.txt");

while(getline(encontraralumno,encontrar)){
	
	if (contador==5){
		textoestado.append(novostatus);
		encontrar=textoestado;
		
	}
	if (contador==6){
		textopromedio.append(novopro);
		encontrar=textopromedio;
	}
	
	
	if (contador>0){
		cout<<encontrar;
		cout<<"\n";
		contador=contador+1;
	}
	
	if(textocarnet==encontrar){
	cout<<"Ingrese el nuevo estado: "	;
	cin>>novostatus;
	cout<<"Ingrese el nuevo promedio: "	;
	cin>>novopro;
	cout<<"\n";
	cout<<encontrar;
	cout<<"\n";
	contador=1;
	}
	
	mudancas<<encontrar;
	mudancas<<"\n";
	
}

if(contador==0){
	cout<<"No fue posible encontrar este carnet";
	cout<<"\n";
	encontraralumno.close();
	goto otrointento;
	}
mudancas.close();



//PARA PODER ACTUALIZAR EL ARCHIVO ORIGINAL


fstream encontraralumnos("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnosss.txt");
string encontrarr;

ofstream mudancass("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");

while(getline(encontraralumnos,encontrarr)){

		mudancass<<encontrarr;
		mudancass<<"\n";

}
mudancass.close();
encontraralumnos.close();
}


void agregar(){
	

	int repete;
	int numalumno;
	holis enlistado[10];
	holis masenlistados[10];
	int repitento;

	int numfulanos;
	int numalumnos;
	int repeticion;
	int repeticiones;
	
numalumno=0;
numfulanos=0;



cout<<"\n";
cout<<"Cuantos alumnos quieres adicionar?";  //Escribir en el nuevo archivo
cin>>numalumnos;

fstream arquivoalumnos("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");

for (repeticiones=0;repeticiones<numalumnos;repeticiones++){ 
	
	masintento:	
	cout<<"Carnet del alumno: ";
	holis entao;
	cin.ignore();
	getline(cin,entao.ident);
	
	//No dejar que se use el mismo carnet
	if(repeticiones>0){
	
	for(numfulanos=0;numfulanos<numalumno;numfulanos++){
		
		if(entao.ident==masenlistados[numfulanos].ident){
			cout<<"Lo lamento, este carnet ya esta registrado, por favor ingresa uno nuevo ";
			cout<<"\n";
			goto masintento;
		}
	}
	}
	
	cout<<"Nombre del alumno: ";
	getline(cin, entao.nome);
	cout<<"Correo electronico: ";
	getline(cin, entao.email);
	cout<<"Seccion: ";
	getline(cin, entao.secao);
	cout<<"Ciclo escolar: ";
	cin>>entao.periodo;
	cout<<"Estado: ";
	getline(cin, entao.status);
	getline(cin, entao.status);
	cout<<"Promedio: ";
	cin>>entao.porcentagem;
	cout<<"\n";
	masenlistados[repeticiones]=entao;
	//masenlistados[repeticiones+numalumnos]=entao;
	

}
arquivoalumnos.close();

//PARA PODER ACTUALIZAR EL ARCHIVO ORIGINAL

fstream contraralumnos("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");
string contrarr;

ofstream udancass("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnosss.txt");


while(getline(contraralumnos,contrarr)){
		udancass<<contrarr;
		udancass<<"\n";
}

for(repeticion=0;repeticion<numalumnos;repeticion++){   //escribiendo en el archivo creado

udancass<<"\n";
udancass<<"Carnet del alumno: ";	
udancass<<masenlistados[repeticion].ident<<"\n";  //aqui esta el problema
cout<<"si esta funcionando";
udancass<<"Nombre del alumno: ";
udancass<<masenlistados[repeticion].nome<<"\n";
udancass<<"Correo electronico: ";
udancass<<masenlistados[repeticion].email<<"\n";
udancass<<"Seccion: ";
udancass<<masenlistados[repeticion].secao<<"\n";
udancass<<"Ciclo escolar: ";
udancass<<masenlistados[repeticion].periodo<<"\n";
udancass<<"Estado: ";
udancass<<masenlistados[repeticion].status<<"\n";
udancass<<"Promedio: ";
udancass<<masenlistados[repeticion].porcentagem;
udancass<<"\n";

}

udancass.close();
contraralumnos.close();
//regresar todo para el archivo original alumnoss
fstream encontrarralumnos("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnosss.txt");
string encontrarrr;

ofstream mudanccass("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");

while(getline(encontrarralumnos,encontrarrr)){
		mudanccass<<encontrarrr;
		mudanccass<<"\n";

}
mudanccass.close();
encontrarralumnos.close();
cout<<"listo";
}
//PARTE PARA CREAR O UTILIZAR EL ARCHIVO EXISTENTE
void revisar(){
	int falta;
	ifstream revisando("C:/Users/Elder/Desktop/examenes Universidad 2/examen algoritmos/Proyecto2/alumnoss.txt");
	string aunrevisando;
	
	while(getline(revisando,aunrevisando)){
		if(aunrevisando!="  "){
			falta=falta+1;
		}
	}
	if (falta==0){
		agregar();
	}
	revisando.close();
}


