#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <locale.h>
#include <vector>
using namespace std;

string carrera, departamento, semestres;
int opcioningreso;
int opciones;
int opcionimpresion;
int opcionesI;
int opcionesD;
int opcionesN;


int inscripcion=800;


int numeroFichas=0;
int numeroFichasboleta=0;
int numeroFichasC=0;
int numeroFichasM=0;
int numeroFichasS=0;
int numeroFichasNotas=0;

int i, k, l;


char textoTemporal[50];
int numeroTemporal;

string banc,cse1;
//Datos
struct boleta{
	string fecha;
	string carnet;
	string nombre;
	int semestre;
	string campus;
	string banco;
	int total;
};
boleta insc;
struct catedratico
{
	string cod,nomc1, apellido1, direc,  prof, email;
	int telefono1;
}; catedratico cat;
struct curso{
	string nomc,horario;
	int codc, prerreq, credito;
	int semestre;
}; curso cur1;

struct estudiantes
{
	string nombre, apellido, fechaNac,  direccion, email, pd, carrera;
	int edad, promo, telefono, carnet, ao;
};

struct DatosVarios
{
	
	string nombrec, apellidoc, direccionc, emailc, profesion;
	string codc;
	int fechaNac , telefonoc;
	
	string nombrem;
	int codm, horario, prerreq, creditos;
	int semestre;
	int carnet;
};
struct notas{
	
	int parcial1, parcial2, zona, exf,retrasado,total;
}; notas nota;

struct datos{
	string carnet,nombre,apellido,fecha,direccion,correo,profesion;
	int edad1,telefono1,año1;
}; datos alum;
void clasesporcarrera(vector<vector<vector<string>>> clasesPorCarrera);
void mostrarClases(const vector<string>& clases) {
	cout << "Clases:" << endl;
	for (int i = 0; i < clases.size(); i++) {
		cout << i + 1 << ". " << clases[i] << endl;
	}
	cout << "Presione 0 para volver a seleccionar otro ciclo." << endl;
}
int main() {
	int op, op2, opdatos;
	menu:
		system("cls");
	
	cout<<"----REGISTRO Y CONTROL ACADEMICO----"<<endl;
	cout<<"--UNIVERSIDAD MARINO GALVEZ DE GUATEMALA--"<<endl;
	cout<<"-CAMPOS CENTRAL-"<<endl;
	cout<<"Elija la carrera de la cual perteneces:"<<endl;
	cout<<"1.Ingenieria en sistemas"<<endl;
	cout<<"2.Ingenieria industrial"<<endl;
	cout<<"3.Ingenieria civil"<<endl;
	cout<<"4.Arquitectura"<<endl;
	cout<<"5.Medicina"<<endl;
	cout<<"6.Psicología"<<endl;
	cout<<"7.Derecho"<<endl;
	cout<<"8.Auditoria"<<endl;
	cout<<"9.Criminología"<<endl;
	cout<<"10.Trabajo social"<<endl;
	cout<<"11.Salir"<<endl;
	cin>>op;
	switch(op){
	case 1:
		carrera="Ingenieria en sistemas";
		cout<<carrera;
		break;
	case 2:
		carrera="Ingenieria Industrial";
		cout<<carrera;
		break;
	case 3:
		carrera="Ingenieria Civil";
		cout<<carrera;
		break;
	case 4:
		carrera="Arquitectura";
		cout<<carrera;
		break;
	case 5:
		carrera="Medicina";
		cout<<carrera;
		break;
	case 6:
		carrera="Psicologia";
		cout<<carrera;
		break;
	case 7:
		carrera="Derecho";
		cout<<carrera;
		break;
	case 8:
		carrera="Auditoria";
		cout<<carrera;
		break;
	case 9:
		carrera="Criminologia";
		cout<<carrera;
		break;
	case 10:
		carrera="Trabajo social";
		cout<<carrera;
		break;
		system("cls");
		
		cout << "Elige tu departamento" <<endl;
		cout<<"1. Alta Verapaz"<<endl;
		cout<<"2. Baja Verapaz"<<endl;
		cout<<"3. Chimaltenango"<<endl;
		cout<<"4. Chiquimula"<<endl;
		cout<<"5. El Progreso"<<endl;
		cout<<"6. Escuintla"<<endl;
		cout<<"7. Guatemala"<<endl;
		cout<<"8. Huehuetenango"<<endl;
		cout<<"9. Izabal"<<endl;
		cout<<"10. Jalapa"<<endl;
		cout<<"11. Jutiapa"<<endl;
		cout<<"12. Peten"<<endl;
		cout<<"13. Quetzaltenango"<<endl;
		cout<<"14. Quiche"<<endl;
		cout<<"15. Retalhuleu"<<endl;
		cout<<"16. Sacatepequez"<<endl;
		cout<<"17. San Marcos"<<endl;
		cout<<"18. Santa Rosa"<<endl;
		cout<<"19. Solola"<<endl;
		cout<<"20. Suchitepequez"<<endl;
		cout<<"21. Totonicapen"<<endl;
		cout<<"22. Zacapa"<<endl;
		cin>>op2;
		switch(op2){
		case 1:
			departamento="Alta verapaz";
			cout<<departamento;
			break;
		case 2:
			departamento="Baja verapaz";
			cout<<departamento;
			break;
		case 3:
			departamento="Chimaltenango";
			cout<<departamento;
			break;
		case 4:
			departamento="Chiquimula";
			cout<<departamento;
			break;
		case 5:
			departamento="El progreso";
			cout<<departamento;
			break;
		case 6:
			departamento="Escuintla";
			cout<<departamento;
			break;
		case 7:
			departamento="Guatemala";
			cout<<departamento;
			break;
		case 8:
			departamento="Huehuetenango";
			cout<<departamento;
			break;
		case 9:
			departamento="Izabal";
			cout<<departamento;
			break;
		case 10:
			departamento="Jalapa";
			cout<<departamento;
			break;
		case 11:
			departamento="Jutiapa";
			cout<<departamento;
		case 12:
			departamento="PetÃ©?n";
			cout<<departamento;
			break;
		case 13: 
			departamento="Quetzaltenango";
			cout<<departamento;
			break;
		case 14: 
			departamento="QuichÃ©?";
			cout<<departamento;
			break;
		case 15:
			departamento="Retalhuleu";
			cout<<departamento;
			break;
		case 16:
			departamento="SacatepÃ©?quez";
			cout<<departamento;
			break;
		case 17: 
			departamento="San Marcos";
			cout<<departamento;
			break;
		case 18:
			departamento="Santa Rosa";
			cout<<departamento;
			break;
		case 19: 
			departamento="SololÃ¡";
			cout<<departamento;
			break;
		case 20: 
			departamento="SuchitepÃ©?quez";
			cout<<departamento;
			break;
		case 21:
			departamento="TotonicapÃ¡n";
			cout<<departamento;
			break;
		case 22:
			departamento="Zacapa";
			cout<<departamento;
			break;
			
			system("cls");
			cout<<"Bievenido al sistema de ingreso de datos"<<endl;
			cout<<"Elige lo que deseas hacer"<<endl;
			cout << "\n\t1. Ingreso de datos" << endl;
			cout << "\t2. Impresion de datos" << endl;
			cout << "\t3. Salir del programa" << endl;
			cin>>opdatos;
			
			switch(opdatos){
			case 1:
			{system("cls");
			cout<<"======Ingreso de datos======"<<endl;
			cout<<"1. Ingreso de alumnos"<<endl;
			cout<<"2. Ingrese datos de boleta de inscripcion"<<endl;
			cout<<"3. Ingreso de cursos"<<endl;
			cout<<"4. Ingreso de catedraticos"<<endl;
			cout<<"5. Ingreso de notas"<<endl;
			cout<<"6. Pagos"<<endl;
			cout<<"7. Regresar al Menu"<<endl;
			cin>>opcioningreso;
			switch(opcioningreso)
			{
			case 1:
				cout<<"======Introducir Estudiantes======"<<endl;
				system("cls");
				cout << "Introduce el carnet del Estudiante: "<<endl;
				cin >> alum.carnet;
				cout << "Introduce el nombre del Estudiante: "<<endl;;
				cin >> alum.nombre;
				cout << "Introduce el apellido del Estudiante: "<<endl;
				cin >> alum.apellido;
				cout << "Introduce fecha de nacimiento del Estudiante: "<<endl;
				cin >> alum.fecha;
				cout << "Introduce la edad del Estudiante: "<<endl;
				cin >> alum.edad1;
				cout << "Introduce la direccion del Estudiante: "<<endl;
				cin >> alum.direccion;
				cout << "Introduce el telefono del Estudiante: "<<endl;
				cin >> alum.telefono1;
				cout << "Introduce el email del Estudiante: "<<endl;
				cin >> alum.correo;
				cout << "Introduce la profesion de diversificado del Estudiante: "<<endl;
				cin >> alum.profesion;
				cout << "Introduce la anio de graduacion de diversificado del Estudiante: "<<endl;
				cin >> alum.año1;
				getch();
				break;
				
			case 2: // Ingreso de la boleta de inscripcion
				system ("cls");
				
				int cont;
				cout<<"Ingrese la fecha:"<<endl;
				cin>>insc.fecha;
				cout<<"Ingrese el Numero de Carnet:"<<endl;
				cin>>insc.carnet;
				cout<<"Ingrese el nombre del alumno:"<<endl;
				cin>>insc.nombre;
				cout<<"Ingrese el semestre:"<<endl;
				cin>>insc.semestre;
				cout<<"Ingrese el campus:"<<endl;
				cin>>insc.campus;
				cout<<"Ingrese el banco en el que realizara el deposito"<<endl;
				cout<<"1.Banrural\n2.Banco Industrial\n3.BAC"<<endl;
				cin>>cse1;
				if(cse1=="1" || cse1=="Banrural"){
					banc="Banrural";}
				else if(cse1=="2" || cse1=="Banco Industrial"){
					banc="Banco Industrial";}
				else if(cse1=="3" || cse1=="BAC"){
					banc="BAC";}
				else{
					cout<<"Esa no es una opcion valida"<<endl;}
				insc.banco=banc;
				cout<<"El total de la inscripcion es de: Q.800.00\n"<<endl;
				cout<<"¿Desea continuar?\n1.SI\t2.NO"<<endl;
				cin>>cont;
				if(cont!=1){
					cout<<"Ah bueno adios"<<endl;}
				insc.total=800;
				system("pause");
				break;
			
			case 3:
				struct Clase {
					string nombre;
					string ciclo;
				};
				
			
					// Crear un mapa que relaciona carreras con ciclos y clases
					map<string, map<string, vector<Clase>>> semestres;
					
					// Agregar ciclos y clases para Ingeniería en Sistemas
					semestres["Ingeniería en Sistemas"]["Primer Ciclo"].push_back({"001 DESARROLLO HUMANO Y PROFESIONAL", "Primer Ciclo"});
					semestres["Ingeniería en Sistemas"]["Primer Ciclo"].push_back({"002 METODOLOGÍA DE LA INVESTIGACIÓN", "Primer Ciclo"});
					semestres["Ingeniería en Sistemas"]["Primer Ciclo"].push_back({"003 CONTABILIDAD I", "Primer Ciclo"});
					semestres["Ingeniería en Sistemas"]["Primer Ciclo"].push_back({"004 INTRODUCCION A LOS SISTEMAS DE COMPUTO", "Primer Ciclo"});
					semestres["Ingeniería en Sistemas"]["Primer Ciclo"].push_back({"005 LOGICA DE SISTEMAS", "Primer Ciclo"});
					
					
					
					
					
					
					
					int opcionCarrera;
					int opcionCiclo;
					
					do {
						
						cout << "MENU DE CARRERAS:" << endl;
						cout << "1. Ingeniería en Sistemas" << endl;
						
						cout << "11. Salir" << endl;
						cout << "Seleccione una carrera (1-11): ";
						
						cin >> opcionCarrera;
						
						if (opcionCarrera >= 1 && opcionCarrera <= 10) {
							
							string seleccionCarrera;
							switch (opcionCarrera) {
							case 1:
								seleccionCarrera = "Ingeniería en Sistemas";
								break;
								
							}
							
							do {
								
								cout << "Seleccione su Ciclo Universitario para " << seleccionCarrera << ":" << endl;
								int cicloCounter = 1;
								for (const auto& ciclo : semestres[seleccionCarrera]) {
									cout << cicloCounter << ". " << ciclo.first << endl;
									cicloCounter++;
								}
								cout << "0. Cambiar de Carrera" << endl;
								cout << "Seleccione un ciclo (0 para cambiar de carrera): ";
								cin >> opcionCiclo;
								
								if (opcionCiclo >= 1 && opcionCiclo < cicloCounter) {
									
									auto cicloIt = semestres[seleccionCarrera].begin();
									advance(cicloIt, opcionCiclo - 1);
									string seleccionCiclo = cicloIt->first;
									
									
									cout << "Clases del " << seleccionCiclo << " de " << seleccionCarrera << ":" << endl;
									for (const auto& clase : semestres[seleccionCarrera][seleccionCiclo]) {
										cout << "- " << clase.nombre << endl;
									}
								} else if (opcionCiclo == 0) {
									break;
								} else {
									cout << "Opción no válida." << endl;
								}
							} while (true);
						} else if (opcionCarrera != 11) {
							cout << "Opción no válida." << endl;
						}
						
					} while (opcionCarrera != 11);
					
					cout << "Saliendo del programa." << endl;
					
					return 0;
				}
				
				
			case 4: // Ingreso de los cursos a los alumnos (Colocar manualmente los cursos)
				system("cls");
				cout<<"======Introducir cursos para el estudiante======"<<endl;
				cout<<"ingrese codigo de curso: "<<endl;
				cin >> cur1.codc;
				cout<<"ingrese nombre del curso: ";
				cin>>cur1.nomc;
				cout<<"ingrese prerrequisitos del curso: ";
				cin>>cur1.prerreq;
				cout<<"ingrese creditos del curso: ";
				cin>>cur1.credito;
				cout<<"ingrese horario del curso: ";
				cin>>cur1.horario;
				getch();
				break;
				
			case 5: // Ingreso de los catedrÃ¡ticos
				system("cls");
				cout<<"======Introducir catedraticos====="<<endl;
				cout<<"Ingresar codigo de catedraticos: "<<endl;
				cin>>cat.cod;
				cout<<"Ingresar nombre de catedratico: ";
				cin>>cat.nomc1;
				cout<<"ingrese apellido de catedratico: ";
				cin>>cat.apellido1;
				cout <<"Direccion del catedratico: ";
				cin>>cat.direc;
				cout <<"Profesion del catedratico: ";
				cin >>cat.prof;
				cout <<"ingrese el numero telefonico: ";
				cin >>cat.telefono1;
				cout <<"Ingrese el correo electronico: ";
				cin >>cat.email;
				getch();
				break;
				
			case 6: //ingreso de notas para el estudiante
				system("cls");
				int suma, parcial1, parcial2, zona, retrasado;
				cout<<"======Introducir notas======"<<endl;
				cout<<"ingrese el carnet del estudiante: "<<endl;
				
				cout<<"ingrese codigo de curso: "<<endl;
				
				cout<<"ingrese codigo de catedratico: "<<endl;
				
				cout<<"Primer parcial: ";
				cin>>nota.parcial1;
				cout<<"Segundo Parcial: ";
				cin>>nota.parcial2;
				cout<<"Zona: ";
				cin>>nota.zona;
				cout<<"Examen final: ";
				cin>>nota.exf;
				suma=parcial1+parcial2+zona;
				if(suma<61)
					cout<<"Examen de retrasasda"<<endl;
				cin>>retrasado;
				getch();
				break;
				
			case 7: //Pagos
				system ("cls");
				cout <<"\t\t\t Ingrese los datos de los pagos"<<endl;
				cout<<"Ingrese el codigo de pago";
				
				cout <<"Ingrese el nombre de pago";
				
				cout <<"Ingrese el codigo de alumno";
				
				cout <<"Ingrese la facultad";
				
				cout <<"Ingrese el semestre";
				
				cout <<"Ingrese la cuota de pago";
				getch();
				break;
			}
			case 8: //Regresar al menu principal
				   cout<<"Presione una tecla para regresar al menu principal"<<endl;
				   getch();
				   goto menu;
				   break; }
			
			default:
				system("cls");
				cout << "ERROR: SELECCIONE UNA OPCION VALIDA" <<endl;
				getch();
				goto menu;
				break;
			}
		}if (op == 11) {
			system("cls");
			cout<< "Nos vemos" <<endl;
			system("PAUSE");
		} else {
			system("cls");
			cout << "ERROR: SELECCIONE UNA OPCION VALIDA" <<endl;
			getch();
			goto menu;}
		getch();
	} 