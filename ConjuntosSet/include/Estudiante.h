#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;


class Estudiante
{
	public:
		Estudiante(string n, string a, int e, int s, unsigned int m);
		virtual ~Estudiante();
		string getNombre()const,getApellido()const;
		int getEdad()const, getSemestre()const;
		unsigned int getMatricula() const;
		bool operator<(const Estudiante &e)const{
			return datos.matricula<e.datos.matricula;
		}

	protected:

	private:
		struct estructura{
			string nombre,apellido;
			int edad,semestre;
			unsigned int matricula;
		}datos;

};
#endif // ESTUDIANTE_H
