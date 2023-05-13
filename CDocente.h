#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class CDocente : public CPersona
{
private:
	string codDocente;
	string area;
	string facultad;
public:
	CDocente() :CPersona() {
		this->codDocente = "";
		this->area = "";
		this->facultad = "";
	}

	CDocente(string codDoc, string dni, string nom, string ape,
		string dir, string tel, string email, string cel, string gen, string area, string fac)
		:CPersona(dni, nom, ape, dir, tel, email, cel, gen)
	{
		this->codDocente = codDoc;
		this->area = area;
		this->facultad = fac;
	}

	//METODOS SETTER / GETTER
	void setCodDocente(string codDocente) { this->codDocente = codDocente; }
	string getCodDocente() { return this->codDocente; }
	void setArea(string area) { this->area = area; }
	string getArea() { return this->area; }

	//METODOS DE SERVICIO
	void MostrarAlumno()
	{
		cout << "";
		cout << "==============DATOS DE DOCENTE=============";
		cout << "CODIGO: " << this->codDocente << endl;
		MostrarPersona();
		cout << "AREA: " << this->area << endl;
		cout << "FACULTAD: " << this->facultad << endl;
	}
};