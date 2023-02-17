#include <iostream>
#include <set>
#include <cstdlib>
#include <string>
#include "Estudiante.h"
using namespace std;

int main()
{
	int ed,sem,i=1;
	char opc;
	string nom,ape;
	unsigned int mat;
	set<Estudiante*>conjunto;
	set<Estudiante*>::iterator iteEst;
	//set<Estudiante>conjunto;
	//set<Estudiante>::iterator iteEst;
    do{
		cout<<"\n\nElige la opcion deseada para el conjunto \"Estudiantes\":\n\ta) Agregar estudiante al conjunto\n\t";
		cout<<"b) Eliminar estudiante\n\tc) Ver conjunto\n\td) Salir\n\n\tOpcion: ";
		cin>>opc;
		system("cls");
		switch(opc){
			case 'a':
				{
					cout<<"\n\nIngresa nombre: "; cin>>nom;
					cout<<"Ingresa apellido: "; cin>>ape;
					cout<<"Ingresa edad: "; cin>>ed;
					cout<<"Ingresa el semestre en curso: "; cin>>sem;
					cout<<"Ingresa matricula: "; cin>>mat;
					if(conjunto.size()==0){
						conjunto.insert(new Estudiante(nom,ape,ed,sem,mat));
						cout<<"\n\n\nESTUDIANTE INGRESADO EXITOSAMENTE\n";
					}else{
						for(iteEst=conjunto.begin(); iteEst!=conjunto.end(); iteEst++){
							if((*iteEst)->getMatricula()==mat&&(*iteEst)->getNombre()==nom&&conjunto.size()>=1){
								cout<<"\n\n\nESTUDIANTE NO INGRESADO PORQUE YA EXISTE\n";
								break;
							}
						}
						if(iteEst==conjunto.end()){
							conjunto.insert(new Estudiante(nom,ape,ed,sem,mat));
							cout<<"\n\n\nESTUDIANTE INGRESADO EXITOSAMENTE\n";
						}

					//Estudiante alumno(nom,ape,ed,sem,mat);
					//conjunto.insert(alumno);
					cout<<"\n\n\nESTUDIANTE INGRESADO EXITOSAMENTE\n";
					system("pause");
					system("cls");

					}
			break;

			case 'b':
				cout<<"\n\nPara cancelar accion, escriba \"0\"\n\nMatricula del estudiante a eliminar: "; cin>>mat;
				if(mat==0){
					cout<<"ACCION CANCELADA\n\n";
				}else{
					for(iteEst=conjunto.begin(); iteEst!=conjunto.end(); iteEst++){
						if(iteEst->getMatricula()==mat){
							conjunto.erase(*iteEst);
							cout<<"ESTUDIANTE ELIMINADO EXITOSAMENTE\n\n";
							break;
						}
					}
					if(iteEst==conjunto.end()){
						cout<<"ESTUDIANTE NO ELIMINADO. NO SE HAYO LA MATRICULA REQUERIDA\n\n";
					}
				}
				system("pause");
				system("cls");

			break;

			case 'c':
				cout<<endl<<endl;
				for(iteEst=conjunto.begin(); iteEst!=conjunto.end(); iteEst++,i++){
					cout<<"ESTUDIANTE "<<i<<":\nNombre y apellido: "<<iteEst->getNombre()<<" "<<iteEst->getApellido();
					cout<<"\nEdad: "<<iteEst->getEdad()<<"\nSemestre en curso: "<<iteEst->getSemestre()<<"\nMatricula: ";
					cout<<iteEst->getMatricula()<<"\n\n";
				}
				i=1;
				cout<<endl<<endl;
				system("pause");
				system("cls");
			break;

			case 'd':
				system("cls");
			break;

			default:
				cout<<"OPCION INVALIDA *.*\n";
				system("pause");
				system("cls");
			break;

 		}
    }while(opc!='d');
    return 0;
}
