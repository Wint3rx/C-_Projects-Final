#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <locale.h>
using namespace std;


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
//Datos
struct boleta
{
   //Boleta
   int fechab;
   string bancos, solvencia, campus, semestreb;
   int carnet;
   //Pagos
   int codp, ctapago;
   string nombrep, facultad;
};

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

    int ppp, psp, pp, zona, exf;
    int total;
    int promedio;
};

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
    estudiantes * fichas = new estudiantes[100];
	boleta * fichasboleta = new boleta[1000];
    DatosVarios * fichasC = new DatosVarios[100];
    notas * fichasM= new notas[100];
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

if (op >= 1 && op <= 10) {
switch (op) {
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
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
                     if (numeroFichas < 1000){
                    cout<<"======Introducir Estudiantes======"<<endl;
                    system("cls");
                    cout << "Introduce el carnet del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].carnet;
                    cout << "Introduce el nombre del Estudiante: "<<endl;;
                    cin >> fichas[numeroFichas].nombre;
                    cout << "Introduce el apellido del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].apellido;
                    cout << "Introduce fecha de nacimiento del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].fechaNac;
                    cout << "Introduce la edad del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].edad;
                    cout << "Introduce la direccion del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].direccion;
                    cout << "Introduce el telefono del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].telefono;
                    cout << "Introduce el email del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].email;
                    cout << "Introduce la profesion de diversificado del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].pd;
                    cout << "Introduce la aÃ±o de graduacion de diversificado del Estudiante: "<<endl;
                    cin >> fichas[numeroFichas].promo;
                    numeroFichas++;
                    }else
                cout << "Maximo de estudiantes alcanzado (1000)!" << endl;
                system("pause");
                break;
            case 2: // Ingreso de la boleta de inscripcion
            system ("cls");
                if (numeroFichasboleta < 100){
                 cout<<"======Datos boleta inscripcion======"<<endl;
                    cout << "Introduce el nombre del Estudiante: "<<endl;
                    cin >> textoTemporal;
                    for (i=0; i<numeroFichas; i++){
                    if(fichas[i].nombre == textoTemporal){
                    cout<<"=="<<fichas[i].nombre<<"=="<<endl;
                    cout << "Introduce el carnet del Estudiante: "<<endl;
                    cin >> fichasboleta[numeroFichasboleta].carnet;
                    cout << "Introduce la fecha (07102022): "<<endl;
                    cin >> fichasboleta[numeroFichasboleta].fechab;
                    cout << "Introduce el semestre: "<<endl;
                    cin >> fichasboleta[numeroFichasboleta].semestreb;
                    cout << "Introduce el Campus: "<<endl;
                    cin >> fichasboleta[numeroFichasboleta].campus;
                    cout<<"Codigo de pago: "<<endl;
                    cin>>fichasboleta[numeroFichasboleta].codp;
                    cout << "Bancos disponibles"<<endl;
                    cout << "1.Banco Industrial"<<endl;
                    cout << "2.Banrural"<<endl;
                    cout << "3.Bantrab"<<endl;
                    cout << "4.Bac"<<endl;
                    cout << "5.G&T continental"<<endl;
                    cin >> numeroTemporal;
                    if( numeroTemporal == 1){
                        fichasboleta[numeroFichasboleta].bancos="Banco Industrial";
                    }
                    if( numeroTemporal == 2){
                        fichasboleta[numeroFichasboleta].bancos="Banrural";
                    }
                    if( numeroTemporal == 3){
                        fichasboleta[numeroFichasboleta].bancos="Bantrab";
                    }
                    if( numeroTemporal == 4){
                        fichasboleta[numeroFichasboleta].bancos="Bac";
                    }
                    if( numeroTemporal == 5){
                        fichasboleta[numeroFichasboleta].bancos="G&T continental";
                    }
                    cout<<"Total a pagar: Q800.00"<<endl;
                    cout<<"y/n"<<endl;
                    cin>>textoTemporal;
                    if(textoTemporal == "y"){
                        fichasboleta[numeroFichasboleta].solvencia="SOLVENTE";
                    }
                    if(textoTemporal == "n"){
                        fichasboleta[numeroFichasboleta].solvencia="INSOLVENTE";
                    }
                    cout<<"Su boleta ha sido procesada..."<<endl;
                   numeroFichasboleta++; }  }
                    }else
                cout << "Maximo de estudiantes alcanzado (1000)!" << endl;
                system("pause");
                break;

             case 3: // Ingreso de los cursos a los alumnos (Colocar manualmente los cursos)
             if (numeroFichasC < 100){
                 system("cls");
                 cout<<"======Introducir cursos para el estudiante======"<<endl;
                    cout<<"Ingresa el nombre del estudiante"<<endl;
                    cin >> textoTemporal;
                    for (i=0; i<numeroFichas; i++){
                    if(fichas[i].nombre == textoTemporal){
                    cout<<"ingrese el carnet del estudiante: "<<endl;
                    cin >> fichasC[numeroFichasC].carnet;
                    cout<<"ingrese el semestre del curso: "<<endl;
                    cin >> fichasC[numeroFichasC].semestre;
                    cout<<"ingrese codigo de curso: "<<endl;
                    cin >> fichasC[numeroFichasC].codm;
                    cout<<"ingrese nombre del curso: ";
                    cin>>fichasC[numeroFichasC].nombrem;
                    cout<<"ingrese prerrequisitos del curso: ";
                    cin>>fichasC[numeroFichasC].prerreq;
                    cout<<"ingrese creditos del curso: ";
                    cin>>fichasC[numeroFichasC].creditos;
                    cout<<"ingrese horario del curso: ";
                    cin>>fichasC[numeroFichasC].horario;
                    numeroFichasC++;
                    }
                    }
                    }else
                        cout << "Maximo de cursos alcanzado" <<endl;
                system("pause");
                break;

           case 4: // Ingreso de los catedrÃ¡ticos
                    if (numeroFichasC < 1000){
               cout<<"======Introducir catedrÃ¡ticos====="<<endl;
                    system("cls");
                    cout<<"Ingresar codigo de catedraticos: "<<endl;
                    cin>>fichasC[numeroFichasC].codc;
                    cout<<"Ingresar nombre de catedratico: ";
                    cin>>fichasC[numeroFichasC].nombrec;
                    cout<<"ingrese apellido de catedratico: ";
                    cin>>fichasC[numeroFichasC].apellidoc;
                    cout <<"Direccion del catedratico: ";
                    cin>>fichasC[numeroFichasC].direccionc;
                    cout <<"Profesion del catedratico: ";
                    cin >>fichasC[numeroFichasC].profesion;
                    cout <<"ingrese el numero telefonico: ";
                    cin >>fichasC[numeroFichasC].telefonoc;
                    cout <<"Ingrese el correo electronico: ";
                    cin >>fichasC[numeroFichasC].emailc;
                    numeroFichasC++;

                    } else
                    cout <<"Maximo de catedraticos almacenados"<<endl;
                system("pause");
                break;

            case 5: //ingreso de notas para el estudiante
                if (numeroFichasC < 100){
                 system("cls");
                 cout<<"======Introducir notas======"<<endl;
                    cout<<"Ingresa el nombre del estudiante"<<endl;
                    cin >> textoTemporal;
                    for (i=0; i<numeroFichas; i++){
                    if(fichas[i].nombre == textoTemporal){
                    cout<<"ingrese el carnet del estudiante: "<<endl;
                    cin >> fichasC[numeroFichasC].carnet;
                    cout<<"ingrese codigo de curso: "<<endl;
                    cin >> fichasC[numeroFichasC].codm;
                    cout<<"Primer parcial: ";
                    cin>>fichasM[numeroFichasM].ppp;
                    cout<<"Segundo Parcial: ";
                    cin>>fichasM[numeroFichasM].psp;
                    cout<<"Laboratorio: ";
                    cin>>fichasM[numeroFichasM].pp;
                    cout<<"Zona: ";
                    cin>>fichasM[numeroFichasM].zona;
                    cout<<"Examen final: ";
                    cin>>fichasM[numeroFichasM].exf;
                    cout<<"Punteo total: ";
                    cin>>fichasM[numeroFichasM].total;
                    numeroFichasM++;
                    }
                    }
                    }else
                        cout << "Maximo de cursos alcanzado" <<endl;
                system("pause");
                break;

            case 6: //Pagos
            system ("cls");
            cout <<"\t\t\t Ingrese los datos de los pagos"<<endl;
            cout <<"\t\t Ingrese ingrese el carnet del alumno"<<endl;
            cin >>numeroTemporal;
            for (i=0; i<numeroFichas; i++){
                    if(fichasC[i].carnet == numeroTemporal)
            cout<<"Ingrese el codigo de pago";
            cin >>fichasboleta[numeroFichasboleta].codp;
            cout <<"Ingrese el nombre de pago";
            cin>>fichasboleta[numeroFichasboleta].nombrep;
            cout <<"Ingrese la facultad";
            cin>>fichasboleta[numeroFichasboleta].facultad;
            cout <<"Ingrese la cuota de pago";
            cin>>fichasboleta[numeroFichasboleta].ctapago;
            numeroFichasboleta++;
            }

            break;

            case 7: //Regresar al menÃº principal

            goto menu;

            break; }
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

}}getch();}