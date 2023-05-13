#include <iostream>
#include <string>
#include "CLista.h"
using namespace std;

CAlumno* alumno;
Lista<CAlumno*> pListaA;
//Lista<CDocente*> pListaD;
int menu()
{
	cout << "============MENU DE OPCIONES==========" << endl;
	cout << "";
	cout << "<1> Ingresar un Alumno." <<endl;
	cout << "<2> Ingresar un Docente." << endl;
	cout << "<3> Listar Alumnos." << endl;
	cout << "<4> Listar Docentes." << endl;
	cout << "<5> Salir." << endl;
	cout << "Ingrese una opcion:";
	int op;
		do {
			cin >> op;
			if (op < 1 || op>5)
				cout << "Ingrese una opci�n V�lida...";
		} while (op < 1 || op>5);
		
	return op;
}
void IngresarAlumno(){
	string codAl, dni, nom, ape, dir, tel, corr, cel, gen, carr;
	cout << "";
	cout << "===============INGRESAR DATOS DE ALLUMNO=============="<<endl;
	cout << "INGRESAR CODIGO: "; cin >> codAl;
	cout << "INGRESAR DNI: "; cin >> dni;
	cout << "INGRESAR NOMBRES: "; cin >> nom;
	cout << "INGRESAR APELLIDOS: "; cin >> ape;
	cout << "INGRESAR DIRECCION: "; cin >> dir;
	cout << "INGRESAR TELEFONO: "; cin >> tel;
	cout << "INGRESAR EMAIL: "; cin >> corr;
	cout << "INGRESAR CELULAR: "; cin >> cel;
	cout << "INGRESAR GENERO: "; cin >> gen;
	cout << "INGRESAR CARRERA: "; cin >> carr;
	alumno = new CAlumno(codAl, dni, nom, ape, dir, tel, corr, cel, gen, carr);
	pListaA.insertarInicio(alumno);
}
void IngresarDocente() {
	string codDoc, dni, nom, ape, dir, tel, corr, cel, gen, area, fac;
	cout << "";
	cout << "===============INGRESAR DATOS DE DOCENTE==============" << endl;
	cout << "INGRESAR CODIGO: "; cin >> codDoc;
	cout << "INGRESAR DNI: "; cin >> dni;
	cout << "INGRESAR NOMBRES: "; cin >> nom;
	cout << "INGRESAR APELLIDOS: "; cin >> ape;
	cout << "INGRESAR DIRECCION: "; cin >> dir;
	cout << "INGRESAR TELEFONO: "; cin >> tel;
	cout << "INGRESAR EMAIL: "; cin >> corr;
	cout << "INGRESAR CELULAR: "; cin >> cel;
	cout << "INGRESAR GENERO: "; cin >> gen;
	cout << "INGRESAR AREA: "; cin >> area;
	cout << "INGRESAR FACULTAD: "; cin >> fac;
	//docente = new CDocente(codDoc, dni, nom, ape, dir, tel, corr, cel, gen, area,fac);
	//pListaA.insertarInicio(alumno);
}


int main()
{
	while (true)
	{
		int op = menu();
		if (op == 5)
		{
			cout << "Programa Terminado";
			break;
		}

		switch (op)
		{
		case 1: IngresarAlumno(); break;
		case 2:	IngresarDocente(); break;
		case 3:	pListaA.mostrar(); break;
		case 4:	break;
		case 5:	break;
		}
	}

	return 0;
}