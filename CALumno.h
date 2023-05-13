#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class CAlumno : public CPersona 
{
private:
	string codAlumno;
	string carrera;
public:
	CAlumno() :CPersona() {
		this->codAlumno = "";
		this->carrera = "";
	}
		
	CAlumno(string codAl, string dni, string nom, string ape,
		string dir, string tel, string email, string cel, string gen, string carr)
		:CPersona(dni, nom, ape, dir, tel, email, cel, gen)
	{
		this->codAlumno = codAl;
		this->carrera = carr;
	}

	//METODOS SETTER / GETTER
	void setCodAlumno(string codAlumno) { this->codAlumno = codAlumno; }
	string getCodAlumno() { return this->codAlumno; }
	void setCarrera(string carrera) { this->carrera = carrera; }
	string getCarrera() { return this->carrera; }
	
	//METODOS DE SERVICIO
	void MostrarAlumno()
	{
		cout << "";
		cout << "==============DATOS DE ALUMNO=============" << endl;
		cout << "CODIGO: " << this->codAlumno<<endl;
		MostrarPersona();
		cout << "CARRERA: " << this->carrera << endl;
	}
};