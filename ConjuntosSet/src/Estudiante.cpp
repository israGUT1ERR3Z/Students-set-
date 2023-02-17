#include "Estudiante.h"
#include <string>
using namespace std;

Estudiante::Estudiante(string n, string a, int e, int s, unsigned int m)
{
	datos.nombre=n;
	datos.apellido=a;
	datos.edad=e;
	datos.semestre=s;
	datos.matricula=m;
}

string Estudiante::getNombre()const{
	return datos.nombre;
}

string Estudiante::getApellido()const{
	return datos.apellido;
}

int Estudiante::getEdad()const{
	return datos.edad;
}

int Estudiante::getSemestre()const{
	return datos.semestre;
}

unsigned int Estudiante::getMatricula()const{
	return datos.matricula;
}

Estudiante::~Estudiante()
{
	//dtor
}
