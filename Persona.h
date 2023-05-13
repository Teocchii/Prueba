#include <iostream>
#include <string>
using namespace std;

class CPersona {
private:
	string dni;
	string nombres;
	string apellidos;
	string direccion;
	string telefono;
	string email;
	string celular;
	string genero;

public:
	//Constructores y destructores
	CPersona() {
		this->dni = "";
		this->nombres = "";
		this->apellidos = "";
		this->direccion = "";
		this->telefono = "";
		this->email = "";
		this->celular = "";
		this->genero = "";
	}
	CPersona(string dni, string nom, string ape, string dir, string tel, string corr, string cel, string gen) {
		this->dni = dni;
		this->nombres = nom;
		this->apellidos = ape;
		this->direccion = dir;
		this->telefono = tel;
		this->email = corr;
		this->celular = cel;
		this->genero = gen;
	}

	//METODOS SETTER / GETTER
	void setDni(string dni) { this->dni = dni; }
	string getDni() { return this->dni; }
	void setNombres(string nombres) { this->nombres = nombres; }
	string getNombres() { return this->nombres; }
	void setApellidos(string apellidos) { this->apellidos = apellidos; }
	string getApellidos() { return this->apellidos; }
	void setDireccion(string direccion) { this->direccion = direccion; }
	string getDireccion() { return this->direccion; }
	void setTelefono(string telefono) { this->telefono = telefono; }
	string getTelefono() { return this->telefono; }
	void setEmail(string email) { this->email = email; }
	string getEmail() { return this->email; }
	void setCelular(string celular) { this->celular = celular; }
	string getCelular() { return this->celular; }
	void setGenero(string genero) { this->genero = genero; }
	string getGenero() { return this->genero; }

	//METODOS DE SERVICIO
	void MostrarPersona() {
		cout << "DNI: " << this->dni << endl;
		cout << "NOMBRES: " << this->nombres << endl;
		cout << "APELLIDOS: " << this->apellidos << endl;
		cout << "DIRECCION: " << this->direccion << endl;
		cout << "TELEFONO: " << this->telefono << endl;
		cout << "EMAIL: " << this->email << endl;
		cout << "CELULAR: " << this->celular << endl;
		cout << "GENERO: " << this->genero << endl;
	}

};

