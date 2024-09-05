#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "MMSystem.h"

using namespace std;

string usuario, password;
int contador = 0;
bool ingresar = false;
char caracter;

struct Boleta {
    string fecha;
    string carnet;
    string nombre;
    int semestre;
    string campus;
    string banco;
    int total;
}; Boleta insc;

struct Catedratico {
    string cod;
    string nomc1;
    string apellido1;
    string direc;
    string prof;
    string email;
    int telefono1;
};Catedratico cat;

struct Curso {
	string nomc;
    string horario;
    int codc;
    int prereq;
    int creditos;
    int semestre;
};Curso cur;

struct Estudiante {
    string nombre;
    string apellido;
    string fecha;
    string direccion;
    string correo;
    string pd;
    string carrera;
    int edad;
    int promo;
    int telefono;
    int carnet;
    int ao;
}; Estudiante alum;

struct DatosVarios {
    string nombrec;
    string apellidoc;
    string direccionc;
    string emailc;
    string profesion;
    string codc;
    int fechaNac;
    int telefonoc;
    string nombrem;
    int codm;
    int horario;
    int prereq;
    int creditos;
    int semestre;
    int carnet;
};

struct Notas {
    int parcial1;
    int parcial2;
    int zona;
    int exf;
    int retrasado;
    int total;
    string carnet,codecat,codecur;
};Notas nota;

struct Datos {
    string carnet;
    string nombre;
    string apellido;
    string fecha;
    string direccion;
    string correo;
    string profesion;
    int edad1;
    int telefono1;
    int ano1;
};

int main() {
	system("color D0");
do{

system ("cls"); //Sistema de inicio de sesion con contraseÃ±a
cout <<"\t\tINICIO DE SESION"<<endl;
cout <<"\tIngresa tus datos para utilizar nuestra app\n";
cout <<""<<endl;
cout <<"----Usuario----"<<endl;
cin>>usuario;
cout <<"----contrasenia----"<<endl;
cin>>password;
if( (usuario == "user" && password == "pass")||(usuario=="Joseline"&&password==":3")||(usuario=="ayuda"&&password=="porfavor")) {
ingresar = true;

				} else {
					system ("cls");
					cout <<"\t\tEl usuario y/o contrasenia son incorrectos"<<endl;
					getch();
					contador ++;

				}
			}while (ingresar == false && contador < 3); //Esto limita a poder intentar acceder al programa un maximo de 3 veces seguidas.

		if (ingresar == false){

			cout <<"\t\tMaximo de intentos permitidos, intente mas tarde."<<endl; //Impresion en caso de acceder incorrectamente
		}


            system("cls");
            system("cls");
    int op, op2, opdatos;
    string carrera, departamento;

    
    system("cls");
system("color C0");
    cout << "---- REGISTRO Y CONTROL ACADEMICO ----" << endl;
    cout << "-- UNIVERSIDAD MARINO GALVEZ DE GUATEMALA --" << endl;
    cout << "- CAMPUS CENTRAL -" << endl;
    cout << "Elija la carrera de la cual perteneces:" << endl;
    cout << "1. Ingenieria en sistemas" << endl;
    cout << "2. Ingenieria industrial" << endl;
    cout << "3. Ingenieria civil" << endl;
    cout << "4. Arquitectura" << endl;
    cout << "5. Medicina" << endl;
    cout << "6. Psicologia" << endl;
    cout << "7. Derecho" << endl;
    cout << "8. Auditoria" << endl;
    cout << "9. Criminologia" << endl;
    cout << "10. Trabajo social" << endl;
    cout << "11. Salir" << endl;
    cin >> op;

    switch (op) {
    case 1:
        carrera = "Ingenieria en sistemas";
        cout << carrera;
        break;
    case 2:
        carrera = "Ingenieria Industrial";
        cout << carrera;
        break;
    case 3:
        carrera = "Ingenieria Civil";
        cout << carrera;
        break;
    case 4:
        carrera = "Arquitectura";
        cout << carrera;
        break;
    case 5:
        carrera = "Medicina";
        cout << carrera;
        break;
    case 6:
        carrera = "Psicologia";
        cout << carrera;
        break;
    case 7:
        carrera = "Derecho";
        cout << carrera;
        break;
    case 8:
        carrera = "Auditoria";
        cout << carrera;
        break;
    case 9:
        carrera = "Criminologia";
        cout << carrera;
        break;
    case 10:
        carrera = "Trabajo social";
        cout << carrera;
        break;
    case 11:
        cout << "Saliendo del programa..." << endl;
        return 0; 
    default:
        cout << "Opción no válida. Por favor, elija una opción válida." << endl;
        break;
    }

    if (op >= 1 && op <= 10) {
    	system("color A0");
        system("cls");
        cout << "Elige tu departamento" << endl;
        cout << "1. Alta Verapaz" << endl;
        cout << "2. Baja Verapaz" << endl;
        cout << "3. Chimaltenango" << endl;
        cout << "4. Chiquimula" << endl;
        cout << "5. El Progreso" << endl;
        cout << "6. Escuintla" << endl;
        cout << "7. Guatemala" << endl;
        cout << "8. Huehuetenango" << endl;
        cout << "9. Izabal" << endl;
        cout << "10. Jalapa" << endl;
        cout << "11. Jutiapa" << endl;
        cout << "12. Peten" << endl;
        cout << "13. Quetzaltenango" << endl;
        cout << "14. Quiche" << endl;
        cout << "15. Retalhuleu" << endl;
        cout << "16. Sacatepequez" << endl;
        cout << "17. San Marcos" << endl;
        cout << "18. Santa Rosa" << endl;
        cout << "19. Solola" << endl;
        cout << "20. Suchitepequez" << endl;
        cout << "21. Totonicapan" << endl;
        cout << "22. Zacapa" << endl;
        cin >> op2;

        switch (op2) {
        case 1:
            departamento = "Alta verapaz";
            cout << departamento;
            break;
        case 2:
            departamento = "Baja verapaz";
            cout << departamento;
            break;
        case 3:
            departamento = "Chimaltenango";
            cout << departamento;
            break;
        case 4:
            departamento = "Chiquimula";
            cout << departamento;
            break;
        case 5:
            departamento = "El progreso";
            cout << departamento;
            break;
        case 6:
            departamento = "Escuintla";
            cout << departamento;
            break;
        case 7:
            departamento = "Guatemala";
            cout << departamento;
            break;
        case 8:
            departamento = "Huehuetenango";
            cout << departamento;
            break;
        case 9:
            departamento = "Izabal";
            cout << departamento;
            break;
        case 10:
            departamento = "Jalapa";
            cout << departamento;
            break;
        case 11:
            departamento = "Jutiapa";
            cout << departamento;
            break;
        case 12:
            departamento = "Petén";
            cout << departamento;
            break;
        case 13:
            departamento = "Quetzaltenango";
            cout << departamento;
            break;
        case 14:
            departamento = "Quiche";
            cout << departamento;
            break;
        case 15:
            departamento = "Retalhuleu";
            cout << departamento;
            break;
        case 16:
            departamento = "Sacatepequez";
            cout << departamento;
            break;
        case 17:
            departamento = "San Marcos";
            cout << departamento;
            break;
        case 18:
            departamento = "Santa Rosa";
            cout << departamento;
            break;
        case 19:
            departamento = "Sololá";
            cout << departamento;
            break;
        case 20:
            departamento = "Suchitepequez";
            cout << departamento;
            break;
        case 21:
            departamento = "Totonicapán";
            cout << departamento;
            break;
        case 22:
            departamento = "Zacapa";
            cout << departamento;
            break;
        default:
            cout << "Opción no válida. Por favor, elija una opción válida." << endl;
            break;
        }
        menu:
        	system("color F0");
        system("cls");
        cout << "Bienvenido al sistema de ingreso de datos" << endl;
        cout << "Elige lo que deseas hacer" << endl;
        cout << "\n\t1. Ingreso de datos" << endl;
        cout << "\t2. Impresión de datos" << endl;
        cout << "\t3. Salir del programa" << endl;
        cin >> opdatos;

        switch (opdatos) {
        case 1:
        	system("color E0");
            system("cls");
            cout << "====== Ingreso de datos ======" << endl;
            cout << "1. Ingreso de alumnos" << endl;
            cout << "2. Ingrese datos de boleta de inscripción" << endl;
            cout << "3. Ingreso de cursos" << endl;
            cout << "4. Ingreso de catedráticos" << endl;
            cout << "5. Ingreso de notas" << endl;
            cout << "6. Pagos" << endl;
            cout << "7. Regresar al Menú" << endl;
            cin >> opdatos;

            switch (opdatos) {
            case 1:
            { 
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
                    cin >> alum.edad;
                    cout << "Introduce la direccion del Estudiante: "<<endl;
                    cin >> alum.direccion;
                    cout << "Introduce el telefono del Estudiante: "<<endl;
                    cin >> alum.telefono;
                    cout << "Introduce el email del Estudiante: "<<endl;
                    cin >> alum.correo;
                    cout << "Introduce la profesion de diversificado del Estudiante: "<<endl;
                    cin >> alum.carrera;
                    cout << "Introduce la anio de graduacion de diversificado del Estudiante: "<<endl;
                    cin >> alum.ao;
                getch();
                goto menu;
                break;
            }
            case 2:
            {
                string cse1,banc;
            	system("cls");
                cout << "====== Introducir boleta de inscripción ======" << endl;
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
					if(cse1=="1"){
					banc="Banrural";}
					else if(cse1=="2"){
					banc="Banco Industrial";}
					else if(cse1=="3"){
					banc="BAC";}
					else{
					cout<<"Esa no es una opcion valida"<<endl;}
					insc.banco=banc;
					getch();
					goto menu;
                break;
            }
            case 3:
            {
            	system("cls");
                 cout<<"======Introducir cursos para el estudiante======"<<endl;
                    cout<<"ingrese codigo de curso: "<<endl;
                    cin >> cur.codc;
                    cout<<"ingrese nombre del curso: ";
                    cin>>cur.nomc;
                    cout<<"ingrese prerrequisitos del curso: ";
                    cin>>cur.prereq;
                    cout<<"ingrese creditos del curso: ";
                    cin>>cur.creditos;
                    cout<<"ingrese horario del curso: ";
                    cin>>cur.horario;
					getch();	
					goto menu;
                break;
            }
            case 4:
            {
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
                goto menu;
				break;
            }
            case 5:
{
    system("cls");
                 int suma;
                 cout<<"======Introducir notas======"<<endl;
                    cout<<"ingrese el carnet del estudiante: "<<endl;
                    cin>>nota.carnet;
                    cout<<"ingrese codigo de curso: "<<endl;
                    cin>>nota.codecur;
                    cout<<"ingrese codigo de catedratico: "<<endl;
                    cin>>nota.codecat;
                    cout<<"Primer parcial: ";
                    cin>>nota.parcial1;
                    cout<<"Segundo Parcial: ";
                    cin>>nota.parcial2;
                    cout<<"Zona: ";
                    cin>>nota.zona;
                    cout<<"Examen final: ";
                    cin>>nota.exf;
                    suma=nota.parcial1+nota.parcial2+nota.zona;
                    if(suma<61){
                    cout<<"Examen de retrasada"<<endl;
                    cin>>nota.retrasado;}
                    getch();
                    goto menu;
    break;
}

            case 6:
{
    cout << "====== Realizar pagos ======" << endl;
    int opcionBanco;
    string bancoElegido;
    
    cout << "Elija un banco:" << endl;
    cout << "1. Banco G&T Continental" << endl;
    cout << "2. Banco Industrial" << endl;
    cout << "3. Banco Agromercantil" << endl;
    cout << "4. Volver al menú anterior" << endl;
    cin >> opcionBanco;

    switch (opcionBanco) {
        case 1:
            bancoElegido = "Banco G&T Continental";
            break;
        case 2:
            bancoElegido = "Banco Industrial";
            break;
        case 3:
            bancoElegido = "Banco Agromercantil";
            break;
        case 4:
            goto menu; // Volver al menú anterior
        default:
            cout << "Opción no válida. Volviendo al menú anterior..." << endl;
            break;
    }

    int opcionPago;

    // Mostrar las opciones de pago
    cout << "Elija el tipo de pago:" << endl;
    cout << "1. Pago de colegiatura" << endl;
    cout << "2. Pago de extraordinario" << endl;
    cout << "3. Certificado de estudios" << endl;
    cout << "4. Volver al menú anterior" << endl;
    cin >> opcionPago;

    switch (opcionPago) {
        case 1:
            cout << "Procesando pago de colegiatura en " << bancoElegido << "..." << endl;
        
            break;
        case 2:
            cout << "Procesando pago de extraordinario en " << bancoElegido << "..." << endl;
           
            break;
        case 3:
            cout << "Solicitando certificado de estudios en " << bancoElegido << "..." << endl;
        
            break;
        case 4:
            goto menu; // Volver al menú anterior
        default:
            cout << "Opción no válida. Volviendo al menú anterior..." << endl;
            goto menu;
            break;
    }
    break;
}
            case 7:
                goto menu;
                break;
            default:
                cout << "Opción no válida. Por favor, elija una opción válida." << endl;
                break;
            }
            break;
        case 2:{
        	system("color B0");
        	system("cls");
            cout << "====== Impresión de datos ======" << endl;//ayuda por favor son las 3 de la mañana y esto no parece terminar
            getch();
            cout<<"Impresion de boleta de inscripcion"<<endl;
			cout<<"Numero de carnet de estudiante"<<alum.carnet<<endl;
			cout<<"La fecha de su pago es: "<<insc.fecha<<endl;
			cout<<"Semestre"<<insc.semestre<<endl;
			cout<<"Banco"<<insc.banco<<endl;
			cout<<"El total de la inscripcion es de: Q.800.00"<<endl;
			getch();
			system("cls");
			cout<<"Impresion de pemsun de estudio"<<endl;
			cout<<"Pemsun Ingenieria en Sistemas"<<endl;
			cout<<"PRIMER SEMESTRE"<<endl;
			cout<<"001 DESARROLLO HUMANO Y PROFESIONAL"<<endl;
			cout<<"002 METODOLOGÍA DE LA INVESTIGACIÓN"<<endl;
			cout<<"003 CONTABILIDAD I"<<endl;
			cout<<"004 INTRODUCCION A LOS SISTEMAS DE COMPUTO"<<endl;
			cout<<"005 LOGICA DE SISTEMAS"<<endl;
			cout<<"SEGUNDO SEMESTRE"<<endl;
			cout<<"006 PRECALCULO"<<endl;
			cout<<"007 ALGEBRA LINEAL" <<endl;
			cout<<"008 ALGORITMOS"<<endl;
			cout<<"009 CONTABILIDAD II"<<endl;
			cout<<"010 MATEMATICA DISCRETA"<<endl;
			cout<<"TERCER SEMESTRE"<<endl;
			cout<<"011 FISICA I"<<endl;
			cout<<"012 PROGRAMACION I"<<endl;
			cout<<"013 CALCULO I"<<endl;
			cout<<"014 PROCESO ADMINISTRATIVO"<<endl;
			cout<<"015 DERECHO INFORMATICO"<<endl;
			cout<<"CUARTO SEMESTRE"<<endl;
			cout<<"016 MICROECONOMÍA"<<endl;
			cout<<"017 PROGRAMACIÓN II"<<endl;
			cout<<"018 CÁLCULO II"<<endl;
			cout<<"019 ESTADÍSTICA I"<<endl;
			cout<<"020 FÍSICA II"<<endl;
			cout<<"QUINTO SEMESTRE"<<endl;
			cout<<"021 MÉTODOS NUMÉRICOS"<<endl;
			cout<<"022 PROGRAMACIÓN III"<<endl;
			cout<<"023 EMPRENDEDORES DE NEGOCIOS"<<endl;
			cout<<"024 ELECTRÓNICA ANALÓGICA"<<endl;
			cout<<"025 ESTADÍSTICA II"<<endl;
			cout<<"SEXTO SEMESTRE"<<endl;
			cout<<"026 INVESTIGACIÓN DE OPERACIONES"<<endl;
			cout<<"027 BASES DE DATOS I"<<endl;
			cout<<"028 AUTÓMATAS Y LENGUAJES FORMALES"<<endl;
			cout<<"029 SISTEMAS OPERATIVOS I"<<endl;
			cout<<"030 ELECTRÓNICA DIGITAL"<<endl;
			cout<<"SEPTIMO SEMESTRE"<<endl;
			cout<<"031 BASES DE DATOS II"<<endl;
			cout<<"032 ANÁLISIS DE SISTEMAS I"<<endl;
			cout<<"033 SISTEMAS OPERATIVOS II"<<endl;
			cout<<"034 ARQUITECTURA DE COMPUTADORAS I"<<endl;
			cout<<"035 COMPILADORES"<<endl;
			cout<<"OCTAVO SEMESTRE"<<endl;
			cout<<"036 DESARROLLO WEB"<<endl;
			cout<<"037 ANÁLISIS DE SISTEMAS II"<<endl;
			cout<<"038 REDES DE COMPUTADORAS I"<<endl;
			cout<<"039 ÉTICA PROFESIONAL"<<endl;
			cout<<"040 ARQUITECTURA DE COMPUTADORAS II"<<endl;
			cout<<"NOVENO SEMESTRE"<<endl;
			cout<<"041 ADMINISTRACIÓN DE TECNOLOGÍAS DE INFORMACIÓN"<<endl;
			cout<<"042 INGENIERÍA DE SOFTWARE"<<endl;
			cout<<"042 INGENIERÍA DE SOFTWARE"<<endl;
			cout<<"042 INGENIERÍA DE SOFTWARE"<<endl;
			cout<<"043 PROYECTO DE GRADUACIÓN I"<<endl;
			cout<<"044 REDES DE COMPUTADORAS II"<<endl;
			cout<<"045 INTELIGENCIA ARTIFICIAL"<<endl;
			cout<<"DECIMO SEMESTRE"<<endl;
			cout<<"046 TELECOMUNICACIONES"<<endl;
			cout<<"047 SEMINARIO DE TECNOLOGÍAS DE INFORMACIÓN"<<endl;
			cout<<"048 ASEGURAMIENTO DE LA CALIDAD DE SOFTWARE"<<endl;
			cout<<"049 PROYECTO DE GRADUACIÓN II"<<endl;
			cout<<"050 SEGURIDAD Y AUDITORÍA DE SISTEMAS"<<endl;
			getch();
			system("cls");
			cout<<"Impresion de cursos por semestre"<<endl;
			cout<<"SEGUNDO SEMESTRE de la carrera Ingenieria en Sistemas"<<endl;
			cout<<"006 PRECALCULO"<<endl;
			cout<<"007 ALGEBRA LINEAL" <<endl;
			cout<<"008 ALGORITMOS"<<endl;
			cout<<"009 CONTABILIDAD II"<<endl;
			cout<<"010 MATEMATICA DISCRETA"<<endl;
			getch();
			system("cls");
			cout<<"Impresion de notas"<<endl;
			cout<<"Numero de carnet"<<nota.carnet<<endl;
			cout<<"Codigo de curso"<<nota.codecur<<endl;
			cout<<"Nota Primer Parcial: "<<nota.parcial1<<endl;
			cout<<"Nota Segundo Parcial: "<<nota.parcial2<<endl;
			cout<<"Zona: "<<nota.zona<<endl;
			cout<<"Examen final: "<<nota.exf<<endl;
			nota.total=nota.parcial1+nota.parcial2+nota.zona+nota.exf+nota.retrasado;
			cout<<"Su nota del semestre es: "<<nota.total<<endl;
			cout<<"Impresion promedio"<<endl;
			int promedio=nota.total/5;
			cout<<"Su promedio es: "<<promedio<<endl;
			getch();
			system("cls");
			goto menu;
            break;}
        case 3:
        	system("color C0");
        	system("cls");
            cout << "Saliendo del programa..." << endl;
            getch();
cout<<"                                       *&@@@@@@@@@@@% /@@@@#"<<endl;                                        
 cout<<"                                  %@@@@(,                  (@@@@@,"<<endl;                                  
 cout<<"                              ,@@@&          (/////////////,    /@@@"<<endl;                                
 cout<<"                            ,@@&           ///////////////////     @@@"<<endl;                              
 cout<<"                                          //////////////////////    ,@@* "<<endl;                           
 cout<<"                          @@#            *//////////////////////,     @@%"<<endl;                           
 cout<<"                         @@               //////////////////////*    //@@&"<<endl;                          
 cout<<"                        @@@(////(//,      */////////////////////     ///@@*"<<endl;                         
 cout<<"                        @@///////////       //////////////////(      ///%@@ "<<endl;                        
 cout<<"                        @@/////////(//         (/////////(///        ///#@@"<<endl;                         
 cout<<"                        @@%/(/////////                               ,//%@@"<<endl;                         
 cout<<"                        %@@///////////         ,@@@@@@@@@@@@@@,        (@@*"<<endl;                         
 cout<<"                         @@&//////////       @@@*            *@@&      @@("<<endl;                         
 cout<<"       %@@@@@,            @@&///////*     *@@,      @@@  @@@   *@@,   @@("<<endl;                           
 cout<<"            /@@@@          %@@            @@        ,@@*  @@    /@@#@@@ "<<endl;                            
 cout<<" @@@@@                       @@@@        ,@@         @@*  @@     @@%    "<<endl;                            
 cout<<"     *@@@@                      &@@@@#    @@(       @@#          @@#    "<<endl;                            
 cout<<"                          (#@@@@@@@@@@@@@@@@@/      @@@@@@@,   *(((*    "<<endl;                            
 cout<<"                *@@@@@@@@&&#/////%@@@@@&###@@@@&          &@@@@&%%&@@@@@@@@@@"<<endl;                       
 cout<<"             /@@@(//////(@@@@@@@@@@#######@@/ #@@@@@@@@%@@@############@@% ,@@(@@@/"<<endl;                 
 cout<<"            (@&/////////////@@@@@@@(######@@@&         *@@@##&@@@@@@@##(@@%@@@@(/#@@@@@"<<endl;             
 cout<<"          %@@////////////////////(&@@@@@&#@@((#@@@@     ,/@@@@@@@@@@@@@@@@&((/(//////(@@@#"<<endl;          
 cout<<"  #@@@@@@@@@(////////////@@@@@@@%//////(&@@@@@%(((%@@@@@@@@@@@@%(/(/////////////////////#@@&"<<endl;        
 cout<<"  @@%####@@/////////////(@@%####&@@@&////////(%@@@@%#(////////////////////////////////////(@@&"<<endl;      
 cout<<"   &@@@@@@@///(@@#(@@&////(@@@@@%##@@(///////////////////////////////////////////#@@@@@@&//(&@@"<<endl;     
 cout<<"        @@@(#@@@(####@@@//(/////&@@(//////////////////////////////////////////((@@/    *@@(//@@&"<<endl;    
 cout<<"         &@@@@########%@@(//////////////////////////////%@@@@(/////////////////@@/      &@@///@@ "<<endl;   
 cout<<"          ,@@###%@@@@(#@@@///////%@@@@@%////////////(#@@@   ,@@#///////////////@@%      &@&///@@"<<endl;    
 cout<<"          ,@@###@@,@@&#&@@////(@@@#(###@@@//////////(@@       @@(///////////////@@%    (@@//(@@%"<<endl;    
 cout<<"       #@@@@@%##&@@@@%#%@@///&@@########&@@/////////(@@       @@(////////////////(#/#@@@#//%@@/"<<endl;     
 cout<<"      @@@@@@@@%#(#(#(#((@@@@@@@####@@@@##@@@/////////@@@     %@@////////////////////(/#@@@@@*"<<endl;       
 cout<<"         &@@@@@@#(#######@@@@@@###@@/@@&#&@@/////////(#@@/@@@@@//////////////(@@@@@@@@@@*"<<endl;           
 cout<<"             ,@@@@@@@@@@@@@@@@@%##&@@@@%#%@@////////////////////////&@@@@@@@@@@@@@@@@@@@@("<<endl;          
 cout<<"                  (@@@@@@@@@@@@@#(########@@@@%//(///////#&@@@@@@@@@@@@@@@@@@@@@@@@@@("<<endl;              
 cout<<"                       (@@@@@@@@@@#######(#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*"<<endl;                      
 cout<<"                            ,&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@("<<endl;                                
 cout<<"                                  (@@@@@@@@@@@@@@@@@@@@@@%*"<<endl;                                         
 cout<<"                                        ,@@@@@@@/\n"<<endl;
 getch(); 
  
cout<<"                      222222222222222    DDDDDDDDDDDDD                                                  SSSSSSSSSSSSSSS                  lllllll                          tttt            iiii"<<endl;                                                                           
cout<<"                     2:::::::::::::::22  D::::::::::::DDD                                             SS:::::::::::::::S                 l:::::l                       ttt:::t           i::::i"<<endl;                                                                          
cout<<"                     2::::::222222:::::2 D:::::::::::::::DD                                          S:::::SSSSSS::::::S                 l:::::l                       t:::::t            iiii "<<endl;                                                                          
cout<<"******         ******2222222     2:::::2 DDD:::::DDDDD:::::D                                         S:::::S     SSSSSSS                 l:::::l                       t:::::t                                                                      ******         ******"<<endl;
cout<<"*:::::*       *:::::*            2:::::2   D:::::D    D:::::D  aaaaaaaaaaaaayyyyyyy           yyyyyyyS:::::S               ooooooooooo    l::::l uuuuuu    uuuuuuttttttt:::::ttttttt    iiiiiii    ooooooooooo   nnnn  nnnnnnnn        ssssssssss   *:::::*       *:::::*"<<endl;
cout<<"***::::*******::::***            2:::::2   D:::::D     D:::::D a::::::::::::ay:::::y         y:::::y S:::::S             oo:::::::::::oo  l::::l u::::u    u::::ut:::::::::::::::::t    i:::::i  oo:::::::::::oo n:::nn::::::::nn    ss::::::::::s  ***::::*******::::***"<<endl;
cout<<"   **:::::::::::**            2222::::2    D:::::D     D:::::D aaaaaaaaa:::::ay:::::y       y:::::y   S::::SSSS         o:::::::::::::::o l::::l u::::u    u::::ut:::::::::::::::::t     i::::i o:::::::::::::::on::::::::::::::nn ss:::::::::::::s    **:::::::::::**"<<endl;   
cout<<"******:::::::::******    22222::::::22     D:::::D     D:::::D          a::::a y:::::y     y:::::y     SS::::::SSSSS    o:::::ooooo:::::o l::::l u::::u    u::::utttttt:::::::tttttt     i::::i o:::::ooooo:::::onn:::::::::::::::ns::::::ssss:::::s******:::::::::******"<<endl;
cout<<"*:::::::::::::::::::*  22::::::::222       D:::::D     D:::::D   aaaaaaa:::::a  y:::::y   y:::::y        SSS::::::::SS  o::::o     o::::o l::::l u::::u    u::::u      t:::::t           i::::i o::::o     o::::o  n:::::nnnn:::::n s:::::s  ssssss *:::::::::::::::::::*"<<endl;
cout<<"******:::::::::****** 2:::::22222          D:::::D     D:::::D aa::::::::::::a   y:::::y y:::::y            SSSSSS::::S o::::o     o::::o l::::l u::::u    u::::u      t:::::t           i::::i o::::o     o::::o  n::::n    n::::n   s::::::s      ******:::::::::******"<<endl;
cout<<"   **:::::::::::**   2:::::2               D:::::D     D:::::Da::::aaaa::::::a    y:::::y:::::y                  S:::::So::::o     o::::o l::::l u::::u    u::::u      t:::::t           i::::i o::::o     o::::o  n::::n    n::::n      s::::::s      **:::::::::::**"<<endl;   
cout<<"***::::*******::::***2:::::2               D:::::D    D:::::Da::::a    a:::::a     y:::::::::y                   S:::::So::::o     o::::o l::::l u:::::uuuu:::::u      t:::::t    tttttt i::::i o::::o     o::::o  n::::n    n::::nssssss   s:::::s ***::::*******::::***"<<endl;
cout<<"*:::::*       *:::::*2:::::2       222222DDD:::::DDDDD:::::D a::::a    a:::::a      y:::::::y        SSSSSSS     S:::::So:::::ooooo:::::ol::::::lu:::::::::::::::uu    t::::::tttt:::::ti::::::io:::::ooooo:::::o  n::::n    n::::ns:::::ssss::::::s*:::::*       *:::::*"<<endl;
cout<<"******         ******2::::::2222222:::::2D:::::::::::::::DD  a:::::aaaa::::::a       y:::::y         S::::::SSSSSS:::::So:::::::::::::::ol::::::l u:::::::::::::::u    tt::::::::::::::ti::::::io:::::::::::::::o  n::::n    n::::ns::::::::::::::s ******         ******"<<endl;
cout<<"                     2::::::::::::::::::2D::::::::::::DDD     a::::::::::aa:::a     y:::::y          S:::::::::::::::SS  oo:::::::::::oo l::::::l  uu::::::::uu:::u      tt:::::::::::tti::::::i oo:::::::::::oo   n::::n    n::::n s:::::::::::ss"<<endl;                       
cout<<"                     22222222222222222222DDDDDDDDDDDDD         aaaaaaaaaa  aaaa    y:::::y            SSSSSSSSSSSSSSS      ooooooooooo   llllllll    uuuuuuuu  uuuu        ttttttttttt  iiiiiiii   ooooooooooo     nnnnnn    nnnnnn  sssssssssss"<<endl;                         
cout<<"                                                                                  y:::::y                                                                                                                                                        "<<endl;                        
cout<<"                                                                                 y:::::y                                                                                                                                                          "<<endl;                       
cout<<"                                                                                y:::::y                                                                                                                                                           "<<endl;                       
cout<<"                                                                               y:::::y                                                                                                                                                            "<<endl;                       
cout<<"                                                                              yyyyyyy                                                                                                                                                             "<<endl; 
getch();

    cout << "PPPPPPPPPPPPPPPPP                                                                                                           tttt                                                     " << endl;
    cout << "P::::::::::::::::P                                                                                                       ttt:::t                                                     " << endl;
    cout << "P::::::PPPP:::::P                                                                                                      t:::::t                                                     " << endl;
    cout << "PP:::::P     P:::::P                                                                                                     t:::::t                                                     " << endl;
    cout << "  P::::P     P:::::Prrrrr   rrrrrrrrr       eeeeeeeeeeee        ssssssssss       eeeeeeeeeeee    nnnn  nnnnnnnn    ttttttt:::::ttttttt      aaaaaaaaaaaaa         " << endl;
    cout << "  P::::P     P:::::Pr::::rrr:::::::::r    ee::::::::::::ee    ss::::::::::s    ee::::::::::::ee  n:::nn::::::::nn  t:::::::::::::::::t      a::::::::::::a        " << endl;
    cout << "  P::::PPPPPP:::::P r:::::::::::::::::r  e::::::eeeee:::::eess:::::::::::::s  e::::::eeeee:::::een::::::::::::::nn t:::::::::::::::::t      aaaaaaaaa:::::a       " << endl;
    cout << "  P:::::::::::::PP  rr::::::rrrrr::::::re::::::e     e:::::es::::::ssss:::::se::::::e     e:::::enn:::::::::::::::ntttttt:::::::tttttt               a::::a       " << endl;
    cout << "  P::::PPPPPPPPP     r:::::r     r:::::re:::::::eeeee::::::e s:::::s  ssssss e:::::::eeeee::::::e  n:::::nnnn:::::n      t:::::t              aaaaaaa:::::a       " << endl;
    cout << "  P::::P             r:::::r     rrrrrrre:::::::::::::::::e    s::::::s      e:::::::::::::::::e   n::::n    n::::n      t:::::t            aa::::::::::::a       " << endl;
    cout << "  P::::P             r:::::r            e::::::eeeeeeeeeee        s::::::s   e::::::eeeeeeeeeee    n::::n    n::::n      t:::::t           a::::aaaa::::::a       " << endl;
    cout << "  P::::P             r:::::r            e:::::::e           ssssss   s:::::s e:::::::e             n::::n    n::::n      t:::::t    tttttta::::a    a:::::a       " << endl;
    cout << "PP::::::PP           r:::::r            e::::::::e          s:::::ssss::::::se::::::::e            n::::n    n::::n      t::::::tttt:::::ta::::a    a:::::a       " << endl;
    cout << "P::::::::P           r:::::r             e::::::::eeeeeeee  s::::::::::::::s  e::::::::eeeeeeee    n::::n    n::::n      tt::::::::::::::ta:::::aaaa::::::a  ......  ......  ...... " << endl;
    cout << "P::::::::P           r:::::r              ee:::::::::::::e   s:::::::::::ss    ee:::::::::::::e    n::::n    n::::n        tt:::::::::::tt a::::::::::aa:::a .::::.  .::::.  .::::. " << endl;
    cout << "PPPPPPPPPP           rrrrrrr                eeeeeeeeeeeeee    sssssssssss        eeeeeeeeeeeeee    nnnnnn    nnnnnn          ttttttttttt    aaaaaaaaaa  aaaa ......  ......  ...... " << endl;
    getch();
    
	   cout << "                                                                                                                                                                                                                                                                                                                                                   dddddddd                                                                                                            " << endl;
    cout << "PPPPPPPPPPPPPPPPP                                                                                                                                                        tttt            iiii          tttt                            lllllll                              d::::::d                                                                                                            " << endl;
    cout << "P::::::::::::::::P                                                                                                                                                    ttt:::t           i::::i      ttt:::t                            l:::::l                              d::::::d                                                                                                            " << endl;
    cout << "P::::::PPPPPP:::::P                                                                                                                                                   t:::::t            iiii       t:::::t                            l:::::l                              d::::::d                                                                                                            " << endl;
    cout << "PP:::::P     P:::::P                                                                                                                                                  t:::::t                       t:::::t                            l:::::l                              d:::::d                                                                                                            " << endl;
    cout << "  P::::P     P:::::Prrrrr   rrrrrrrrr      ooooooooooo      ggggggggg   gggggrrrrr   rrrrrrrrr   aaaaaaaaaaaaa      mmmmmmm    mmmmmmm     aaaaaaaaaaaaa        ttttttt:::::ttttttt    iiiiiiittttttt:::::ttttttt    uuuuuu    uuuuuu   l::::l   aaaaaaaaaaaaa      ddddddddd:::::d    ooooooooooo            cccccccccccccccc   ooooooooooo      mmmmmmm    mmmmmmm      ooooooooooo           " << endl;
    cout << "  P::::P     P:::::Pr::::rrr:::::::::r   oo:::::::::::oo   g:::::::::ggg::::gr::::rrr:::::::::r  a::::::::::::a   mm:::::::m  m:::::::mm   a::::::::::::a       t:::::::::::::::::t    i:::::it:::::::::::::::::t    u::::u    u::::u   l::::l   a::::::::::::a   dd::::::::::::::d  oo:::::::::::oo        cc:::::::::::::::c oo:::::::::::oo  mm:::::::m  m:::::::mm  oo:::::::::::oo  ::::::  " << endl;
    cout << "  P::::PPPPPP:::::P r:::::::::::::::::r o:::::::::::::::o g:::::::::::::::::gr:::::::::::::::::r aaaaaaaaa:::::a m::::::::::mm::::::::::m  aaaaaaaaa:::::a      t:::::::::::::::::t     i::::it:::::::::::::::::t    u::::u    u::::u   l::::l   aaaaaaaaa:::::a d::::::::::::::::d o:::::::::::::::o      c:::::::::::::::::co:::::::::::::::om::::::::::mm::::::::::mo:::::::::::::::o ::::::   " << endl;
    cout << "  P:::::::::::::PP  rr::::::rrrrr::::::ro:::::ooooo:::::og::::::ggggg::::::ggrr::::::rrrrr::::::r         a::::a m::::::::::::::::::::::m           a::::a      tttttt:::::::tttttt     i::::itttttt:::::::tttttt    u::::u    u::::u   l::::l            a::::ad:::::::ddddd:::::d o:::::ooooo:::::o     c:::::::cccccc:::::co:::::ooooo:::::om::::::::::::::::::::::mo:::::ooooo:::::o ::::::    " << endl;
    cout << "  P::::PPPPPPPPP     r:::::r     r:::::ro::::o     o::::og:::::g     g:::::g  r:::::r     r:::::r  aaaaaaa:::::a m:::::mmm::::::mmm:::::m    aaaaaaa:::::a            t:::::t           i::::i      t:::::t          u::::u    u::::u   l::::l     aaaaaaa:::::ad::::::d    d:::::d o::::o     o::::o     c:::::c             o::::o     o::::om::::::::::mm::::::::::mo::::o     o::::o         " << endl;
    cout << "  P::::P             r:::::r     rrrrrrro::::o     o::::og:::::g     g:::::g  r:::::r     rrrrrrraa::::::::::::a m::::m   m::::m   m::::m  aa::::::::::::a            t:::::t           i::::i      t:::::t          u::::u    u::::u   l::::l  a::::aaaa::::::ad:::::d     d:::::d o::::o     o::::o     c:::::c             o::::o     o::::om::::::::::mm::::::::::mo::::o     o::::o          " << endl;
    cout << "  P::::P             r:::::r            o::::o     o::::og::::::g    g:::::g  r:::::r          a::::a    a:::::a m::::m   m::::m   m::::ma::::a    a:::::a            t:::::t    tttttt i::::i      t:::::t    ttttttu:::::uuuu:::::u   l::::l a::::a    a:::::ad:::::d     d:::::d o::::o     o::::o     c::::::c     ccccccco::::o     o::::om::::m   m::::m   m::::mo::::o     o::::o  ::::::  " << endl;
    cout << "PP::::::PP           r:::::r            o:::::ooooo:::::og:::::::ggggg:::::g  r:::::r          a::::a    a:::::a m::::m   m::::m   m::::ma::::a    a:::::a            t::::::tttt:::::ti::::::i     t::::::tttt:::::tu:::::::::::::::uul::::::la::::a    a:::::ad::::::ddddd::::::ddo:::::ooooo:::::o     c:::::::cccccc:::::co:::::ooooo:::::om::::m   m::::m   m::::mo:::::ooooo:::::o  ::::::   " << endl;
    cout << "P::::::::P           r:::::r             oo:::::::::::oo   gg::::::::::::::g  r:::::r           a::::::::::aa:::am::::m   m::::m   m::::ma:::::aaaa::::::a             tt::::::::::::::ti::::::i     tt::::::::::::::t u:::::::::::::::ul::::::la:::::aaaa::::::a d:::::::::::::::::do:::::::::::::::o      c:::::::::::::::::co:::::::::::::::om::::m   m::::m   m::::mo:::::::::::::::o ::::::    " << endl;
    cout << "P::::::::P           r:::::r              oo:::::::::::oo     gg:::::::::::::g  r:::::r           a:::::::::::a:::am::::m   m::::m   m::::ma::::::::::aa:::a               tt:::::::::::tti::::::i       tt:::::::::::tt  uu::::::::uu:::ul::::::l a::::::::::aa:::a d:::::::::ddd::::d oo:::::::::::oo        cc:::::::::::::::c oo:::::::::::oo m::::m   m::::m   m::::m oo:::::::::::oo           " << endl;
    cout << "PPPPPPPPPP           rrrrrrr               ooooooooooo       gggggggg::::::g  rrrrrrr            aaaaaaaaaa  aaaammmmmm   mmmmmm   mmmmmm  aaaaaaaaaa  aaaa               ttttttttttt  iiiiiiii         ttttttttttt      uuuuuuuu  uuuullllllll  aaaaaaaaaa  aaaa  ddddddddd   ddddd   ooooooooooo            cccccccccccccccc   ooooooooooo   mmmmmm   mmmmmm   mmmmmm   ooooooooooo               " << endl;
    cout << "                                                                     g:::::g                                                                                                                                                                                                                                                                                                                     " << endl;
    cout << "                                                         gggggg      g:::::g                                                                                                                                                                                                                                                                                                                     " << endl;
    cout << "                                                         g:::::gg   gg:::::g                                                                                                                                                                                                                                                                                                                     " << endl;
    cout << "                                                          g::::::ggg:::::::g                                                                                                                                                                                                                                                                                                                     " << endl;
    cout << "                                                           gg:::::::::::::g                                                                                                                                                                                                                                                                                                                      " << endl;
    cout << "                                                             ggg::::::ggg                                                                                                                                                                                                                                                                                                                        " << endl;
    cout << "                                                                gggggg                                                                                                                                                                                                                                                                                                                           " << endl;
    getch();
    system("cls");
    cout << "\"\"\"\"\"\"   \"\"\"\"\"\"                                                                                                                                                                                                                                                              \"\"\"\"\"\"   \"\"\"\"\"\"                                                                                                    " << endl;
    cout << "\"::::\"   \"::::\"                                                                                                                                                                                                                                                              \"::::\"   \"::::\"                                                                                                    " << endl;
    cout << "\"::::\"   \"::::\"       444444444       888888888          hhhhhhh                                                                                                                                                                                                             \"::::\"   \"::::\"                                                                                                    " << endl;
    cout << " \":::\"   \":::\"       4::::::::4     88:::::::::88        h:::::h                                                                                                                                                                                                              \":::\"   \":::\"                                                                                                     " << endl;
    cout << "  \"::\"   \"::\"       4:::::::::4   88:::::::::::::88      h:::::h                                                                                                                                                                                                               \"::\"   \"::\"                                                                                                      " << endl;
    cout << "   \"\"   \"\"       4::::44::::4  8::::::88888::::::8     h:::::h                                                                                                                                                                                                                \"\"   \"\"                                                                                                        " << endl;
    cout << "                  4::::4 4::::4  8:::::8     8:::::8      h::::h hhhhh          ooooooooooo   rrrrr   rrrrrrrrr   aaaaaaaaaaaaa      ssssssssss           ooooooooooo           mmmmmmm    mmmmmmm       eeeeeeeeeeee    nnnn  nnnnnnnn       ooooooooooo       ssssssssss                                                                                                                       " << endl;
    cout << "                 4::::4  4::::4  8:::::8     8:::::8      h::::hh:::::hhh     oo:::::::::::oo r::::rrr:::::::::r  a::::::::::::a   ss::::::::::s        oo:::::::::::oo       mm:::::::m  m:::::::mm   ee::::::::::::ee  n:::nn::::::::nn   oo:::::::::::oo   ss::::::::::s                                                                                                                      " << endl;
    cout << "                4::::4   4::::4   8:::::88888:::::8       h::::::::::::::hh  o:::::::::::::::or:::::::::::::::::r aaaaaaaaa:::::ass:::::::::::::s      o:::::::::::::::o     m::::::::::mm::::::::::m e::::::eeeee:::::een::::::::::::::nn o:::::::::::::::oss:::::::::::::s                                                                                                                    " << endl;
    cout << "                4::::444444::::4448:::::::::::::8        h:::::::hhh::::::h o:::::ooooo:::::orr::::::rrrrr::::::r         a::::as::::::ssss:::::s     o:::::ooooo:::::o     m::::::::::::::::::::::me::::::e     e:::::enn:::::::::::::::no:::::ooooo:::::os::::::ssss:::::s                                                                                                                    " << endl;
    cout << "                4::::::::::::::::4 8:::::88888:::::8       h::::::h   h::::::ho::::o     o::::o r:::::r     r:::::r  aaaaaaa:::::a s:::::s  ssssss      o::::o     o::::o     m:::::mmm::::::mmm:::::me:::::::eeeee::::::e  n:::::nnnn:::::no::::o     o::::o s:::::s  ssssss                                                                                                                    " << endl;
    cout << "                4444444444:::::4448:::::8     8:::::8      h:::::h     h:::::ho::::o     o::::o r:::::r     rrrrrrraa::::::::::::a   s::::::s           o::::o     o::::o     m::::m   m::::m   m::::me:::::::::::::::::e   n::::n    n::::no::::o     o::::o      s::::::s                                                                                                                          " << endl;
    cout << "                          4::::4  8:::::8     8:::::8      h:::::h     h:::::ho::::o     o::::o r:::::r           a::::aaaa::::::a      s::::::s        o::::o     o::::o     m::::m   m::::m   m::::me::::::eeeeeeeeeee    n::::n    n::::no::::o     o::::o           s::::::s                                                                                                                       " << endl;
    cout << "                          4::::4  8:::::8     8:::::8      h:::::h     h:::::ho::::o     o::::o r:::::r          a::::a    a:::::assssss   s:::::s      o::::o     o::::o     m::::m   m::::m   m::::me:::::::e             n::::n    n::::no::::o     o::::o  ssssss   s:::::s                                                                                                                     " << endl;
    cout << "                          4::::4  8::::::88888::::::8      h:::::h     h:::::ho:::::ooooo:::::o r:::::r          a::::a    a:::::as:::::ssss::::::s     o:::::ooooo:::::o     m::::m   m::::m   m::::me::::::::e            n::::n    n::::no:::::ooooo:::::os:::::ssss::::::s                                                                                                                    " << endl;
    cout << "                        44::::::44 88:::::::::::::88       h:::::h     h:::::ho:::::::::::::::o r:::::r          a:::::aaaa::::::as::::::::::::::s      o:::::::::::::::o     m::::m   m::::m   m::::mo:::::::::::::::e    n::::n    n::::no:::::::::::::::os::::::::::::::s                                                                                                                    " << endl;
    cout << "                        4::::::::4   88:::::::::88         h:::::h     h:::::h oo:::::::::::oo  r:::::r           a::::::::::aa:::as:::::::::::ss        oo:::::::::::oo      m::::m   m::::m   m::::m  ee:::::::::::::e    n::::n    n::::n oo:::::::::::oo  s:::::::::::ss                                                                                                                     " << endl;
    cout << "                        4444444444     888888888           hhhhhhh     hhhhhhh   ooooooooooo    rrrrrrr            aaaaaaaaaa  aaaa sssssssssss            ooooooooooo        mmmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee    nnnnnn    nnnnnn   ooooooooooo     sssssssssss                                                                                                                       " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                         " << endl;
    getch();
    cout << "                                                                                                           bbbbbbbb" << endl;
    cout << "EEEEEEEEEEEEEEEEEEEEEE                                                            lllllll                  b::::::b                                                                                      iiii" << endl;
    cout << "E::::::::::::::::::::E                                                            l:::::l                  b::::::b                                                                                     i::::i" << endl;
    cout << "E::::::::::::::::::::E                                                            l:::::l                  b::::::b                                                                                      iiii" << endl;
    cout << "EE::::::EEEEEEEEE::::E                                                            l:::::l                   b:::::b" << endl;
    cout << "  E:::::E       EEEEEEnnnn  nnnnnnnn             cccccccccccccccc   ooooooooooo    l::::l   aaaaaaaaaaaaa   b:::::bbbbbbbbb       ooooooooooo   rrrrr   rrrrrrrrr   aaaaaaaaaaaaa      cccccccccccccccciiiiiii    ooooooooooo   nnnn  nnnnnnnn             cccccccccccccccc   ooooooooooo   nnnn  nnnnnnnn" << endl;
    cout << "  E:::::E             n:::nn::::::::nn         cc:::::::::::::::c oo:::::::::::oo  l::::l   a::::::::::::a  b::::::::::::::bb   oo:::::::::::oo r::::rrr:::::::::r  a::::::::::::a   cc:::::::::::::::ci:::::i  oo:::::::::::oo n:::nn::::::::nn         cc:::::::::::::::c oo:::::::::::oo n:::nn::::::::nn   ::::::" << endl;
    cout << "  E::::::EEEEEEEEEE   n::::::::::::::nn       c:::::::::::::::::co:::::::::::::::o l::::l   aaaaaaaaa:::::a b::::::::::::::::b o:::::::::::::::or:::::::::::::::::r aaaaaaaaa:::::a c:::::::::::::::::c i::::i o:::::::::::::::on::::::::::::::nn       c:::::::::::::::::co:::::::::::::::on::::::::::::::nn  ::::::" << endl;
    cout << "  E:::::::::::::::E   nn:::::::::::::::n     c:::::::cccccc:::::co:::::ooooo:::::o l::::l            a::::a b:::::bbbbb:::::::bo:::::ooooo:::::orr::::::rrrrr::::::r         a::::ac:::::::cccccc:::::c i::::i o:::::ooooo:::::onn:::::::::::::::n     c:::::::cccccc:::::co:::::ooooo:::::onn:::::::::::::::n ::::::" << endl;
    cout << "  E:::::::::::::::E     n:::::nnnn:::::n     c::::::c     ccccccco::::o     o::::o l::::l     aaaaaaa:::::a b:::::b    b::::::bo::::o     o:::::o r:::::r     r:::::r  aaaaaaa:::::ac::::::c     ccccccc i::::i o::::o     o::::o  n:::::nnnn:::::n     c::::::c     ccccccco::::o     o:::::o  n:::::nnnn:::::n" << endl;
    cout << "  E:::::E               n::::n    n::::n     c:::::c             o::::o     o::::o l::::l   aa::::::::::::a b:::::b     b:::::bo::::o     o:::::o r:::::r     rrrrrrraa::::::::::::ac:::::c              i::::i o::::o     o::::o  n::::n    n::::n     c:::::c             o::::o     o:::::o  n::::n    n::::n" << endl;
    cout << "  E:::::E       EEEEEE  n::::n    n::::n     c:::::c             o::::o     o::::o l::::l  a::::aaaa::::::a b:::::b     b:::::bo::::o     o:::::o r:::::r           a::::aaaa::::::ac:::::c              i::::i o::::o     o::::o  n::::n    n::::n     c:::::c             o::::o     o:::::o  n::::n    n::::n" << endl;
    cout << "  E:::::E       EEEEEE  n::::n    n::::n     c::::::c     ccccccco::::o     o:::::o l::::l a::::a    a:::::a b:::::b     b:::::bo::::o     o:::::o r:::::r          a::::a    a:::::ac::::::c     ccccccc i::::i o::::o     o::::o  n::::n    n::::n     c::::::c     ccccccco::::o     o:::::o  n::::n    n::::n ::::::" << endl;
    cout << "EE::::::EEEEEEEE:::::E  n::::n    n::::n     c:::::::cccccc:::::co:::::ooooo:::::ol::::::la::::a    a:::::a b:::::bbbbbb::::::bo:::::ooooo:::::o r:::::r          a::::a    a:::::ac:::::::cccccc:::::ci::::::io:::::ooooo:::::o  n::::n    n::::n     c:::::::cccccc:::::co:::::ooooo:::::o  n::::n    n::::n ::::::" << endl;
    cout << "E::::::::::::::::::::E  n::::n    n::::n      c:::::::::::::::::co:::::::::::::::ol::::::la:::::aaaa::::::a b::::::::::::::::b o:::::::::::::::o r:::::r          a::::::::::aa:::a cc:::::::::::::::ci::::::io:::::::::::::::o  n::::n    n::::n      c:::::::::::::::::co:::::::::::::::o  n::::n    n::::n ::::::" << endl;
    cout << "E::::::::::::::::::::E  n::::n    n::::n       cc:::::::::::::::c oo:::::::::::oo l::::::l a::::::::::aa:::ab:::::::::::::::b   oo:::::::::::oo  r:::::r           a::::::::::aa:::a   cc:::::::::::::::ci::::::i oo:::::::::::oo   n::::n    n::::n       cc:::::::::::::::c oo:::::::::::oo   n::::n    n::::n" << endl;
    cout << "EEEEEEEEEEEEEEEEEEEEEE  nnnnnn    nnnnnn         cccccccccccccccc   ooooooooooo   llllllll  aaaaaaaaaa  aaaabbbbbbbbbbbbbbbb      ooooooooooo    rrrrrrr            aaaaaaaaaa  aaaa   cccccccccccccccciiiiiiii   ooooooooooo     nnnnnn    nnnnnn         cccccccccccccccc   ooooooooooo     nnnnnn    nnnnnn\n" << endl;
    getch();
    system("cls");
    cout << "TTTTTTTTTTTTTTTTTTTTTTT                  lllllll   iiii                             QQQQQQQQQ                         iiii                            tttt" <<  endl;
    cout << "T:::::::::::::::::::::T                  l:::::l  i::::i                          QQ:::::::::QQ                      i::::i                        ttt:::t" <<  endl;
	cout << "T:::::::::::::::::::::T                  l:::::l   iiii                         QQ:::::::::::::QQ                     iiii                         t:::::t" <<  endl;
	cout << "T:::::TT:::::::TT:::::T                  l:::::l                               Q:::::::QQQ:::::::Q                                                 t:::::t" <<  endl;
	cout << "TTTTTT  T:::::T  TTTTTTuuuuuu    uuuuuu   l::::l iiiiiii    ooooooooooo        Q::::::O   Q::::::Quuuuuu    uuuuuu  iiiiiiinnnn  nnnnnnnn    ttttttt:::::ttttttt      aaaaaaaaaaaaa  nnnn  nnnnnnnn      aaaaaaaaaaaaa" <<  endl;
	cout << "        T:::::T        u::::u    u::::u   l::::l i:::::i  oo:::::::::::oo      Q:::::O     Q:::::Qu::::u    u::::u  i:::::in:::nn::::::::nn  t:::::::::::::::::t      a::::::::::::a n:::nn::::::::nn    a::::::::::::a" <<  endl;
	cout << "        T:::::T        u::::u    u::::u   l::::l  i::::i o:::::::::::::::o     Q:::::O     Q:::::Qu::::u    u::::u   i::::in::::::::::::::nn t:::::::::::::::::t      aaaaaaaaa:::::an::::::::::::::nn   aaaaaaaaa:::::a" <<  endl;
	cout << "        T:::::T        u::::u    u::::u   l::::l  i::::i o:::::ooooo:::::o     Q:::::O     Q:::::Qu::::u    u::::u   i::::inn:::::::::::::::ntttttt:::::::tttttt               a::::ann:::::::::::::::n           a::::a" <<  endl;
	cout << "        T:::::T        u::::u    u::::u   l::::l  i::::i o::::o     o::::o     Q:::::O     Q:::::Qu::::u    u::::u   i::::i  n:::::nnnn:::::n      t:::::t              aaaaaaa:::::a  n:::::nnnn:::::n    aaaaaaa:::::a" <<  endl;
	cout << "        T:::::T        u::::u    u::::u   l::::l  i::::i o::::o     o::::o     Q:::::O  QQQQ:::::Qu::::u    u::::u   i::::i  n::::n    n::::n      t:::::t            aa::::::::::::a  n::::n    n::::n  aa::::::::::::a" <<  endl;
	cout << "        T:::::T        u:::::uuuu:::::u   l::::l  i::::i o::::o     o::::o     Q::::::O Q::::::::Qu:::::uuuu:::::u   i::::i  n::::n    n::::n      t::::::tttt:::::ta::::a    a:::::a  n::::n    n::::na::::a    a:::::a" <<  endl;
	cout << "      TT:::::::TT      u:::::::::::::::uul::::::li::::::io:::::ooooo:::::o     Q:::::::QQ::::::::Qu:::::::::::::::uui::::::i n::::n    n::::n      tt::::::::::::::ta:::::aaaa::::::a  n::::n    n::::n a::::aaaa::::::a" <<  endl;
	cout << "      T:::::::::T       u:::::::::::::::ul::::::li::::::io:::::::::::::::o      QQ::::::::::::::Q  u:::::::::::::::ui::::::i n::::n    n::::n        tt:::::::::::tt a::::::::::aa:::a n::::n    n::::n a::::::::::aa:::a" <<  endl;
	cout << "      T:::::::::T        uu::::::::uu:::ul::::::li::::::i oo:::::::::::oo         QQ:::::::::::Q    uu::::::::uu:::ui::::::i n::::n    n::::n        tt:::::::::::tt a::::::::::aa:::a n::::n    n::::n a::::::::::aa:::a" <<  endl;
	cout << "      TTTTTTTTTTT          uuuuuuuu  uuuulllllllliiiiiiii   ooooooooooo             QQQQQQQQ::::QQ    uuuuuuuu  uuuuiiiiiiii nnnnnn    nnnnnn          ttttttttttt    aaaaaaaaaa  aaaa nnnnnn    nnnnnn  aaaaaaaaaa  aaaa" <<  endl;
	cout << "                                                                                            Q:::::Q" <<  endl;
	cout << "                                                                                             QQQQQQ\n" <<  endl;
	getch();
    std::cout << "BBBBBBBBBBBBBBBBB   lllllll                                    kkkkkkkk                                         LLLLLLLLLLL" << std::endl;
    std::cout << "B::::::::::::::::B  l:::::l                                    k::::::k                                         L:::::::::L" << std::endl;
    std::cout << "B::::::BBBBBB:::::B l:::::l                                    k::::::k                                         L:::::::::L" << std::endl;
    std::cout << "BB:::::B     B:::::Bl:::::l                                    k::::::k                                         LL:::::::LL" << std::endl;
    std::cout << "  B::::B     B:::::B l::::l   aaaaaaaaaaaaa  nnnn  nnnnnnnn     k:::::k    kkkkkkkyyyyyyy           yyyyyyy       L:::::L                  ooooooooooo   ppppp   ppppppppp       eeeeeeeeeeee    zzzzzzzzzzzzzzzzz" << std::endl;
    std::cout << "  B::::B     B:::::B l::::l   a::::::::::::a n:::nn::::::::nn   k:::::k   k:::::k  y:::::y         y:::::y        L:::::L                oo:::::::::::oo p::::ppp:::::::::p    ee::::::::::::ee  z:::::::::::::::z" << std::endl;
    std::cout << "  B::::BBBBBB:::::B  l::::l   aaaaaaaaa:::::an::::::::::::::nn  k:::::k  k:::::k    y:::::y       y:::::y         L:::::L               o:::::::::::::::op:::::::::::::::::p  e::::::eeeee:::::eez::::::::::::::z" << std::endl;
    std::cout << "  B:::::::::::::BB   l::::l            a::::ann:::::::::::::::n k:::::k k:::::k      y:::::y     y:::::y          L:::::L               o:::::ooooo:::::opp::::::ppppp::::::pe::::::e     e:::::ezzzzzzzz::::::z" << std::endl;
    std::cout << "  B::::BBBBBB:::::B  l::::l     aaaaaaa:::::a  n:::::nnnn:::::n k::::::k:::::k        y:::::y   y:::::y           L:::::L               o::::o     o::::o p:::::p     p:::::pe:::::::eeeee::::::e      z::::::z" << std::endl;
    std::cout << "  B::::B     B:::::B l::::l   aa::::::::::::a  n::::n    n::::n k:::::::::::k          y:::::y y:::::y            L:::::L               o::::o     o::::o p:::::p     p:::::pe:::::::::::::::::e      z::::::z" << std::endl;
    std::cout << "  B::::B     B:::::B l::::l  a::::aaaa::::::a  n::::n    n::::n k:::::::::::k           y:::::y:::::y             L:::::L               o::::o     o::::o p:::::p     p:::::pe::::::eeeeeeeeeee      z::::::z" << std::endl;
    std::cout << "  B::::B     B:::::B l::::l a::::a    a:::::a  n::::n    n::::n k::::::k:::::k           y:::::::::y              L:::::L         LLLLLLo::::o     o::::o p:::::p    p::::::pe:::::::e              z::::::z" << std::endl;
    std::cout << "BB:::::BBBBBB::::::Bl::::::la::::a    a:::::a  n::::n    n::::nk::::::k k:::::k           y:::::::y             LL:::::::LLLLLLLLL:::::Lo:::::ooooo:::::o p:::::ppppp:::::::pe::::::::e            z::::::zzzzzzzz" << std::endl;
    std::cout << "B:::::::::::::::::B l::::::la:::::aaaa::::::a  n::::n    n::::nk::::::k  k:::::k           y:::::y              L::::::::::::::::::::::Lo:::::::::::::::o p::::::::::::::::p  e::::::::eeeeeeee   z::::::::::::::z" << std::endl;
    std::cout << "B::::::::::::::::B  l::::::l a::::::::::aa:::a n::::n    n::::nk::::::k   k:::::k         y:::::y               L::::::::::::::::::::::L oo:::::::::::oo  p::::::::::::::pp    ee:::::::::::::e  z:::::::::::::::z" << std::endl;
    std::cout << "BBBBBBBBBBBBBBBBB   llllllll  aaaaaaaaaa  aaaa nnnnnn    nnnnnnkkkkkkkk    kkkkkkk       y:::::y                LLLLLLLLLLLLLLLLLLLLLLLL   ooooooooooo    p::::::pppppppp        eeeeeeeeeeeeee  zzzzzzzzzzzzzzzzz" << std::endl;
    std::cout << "                                                                                        y:::::y                                                           p:::::p" << std::endl;
    std::cout << "                                                                                       y:::::y                                                            p:::::p" << std::endl;
    std::cout << "                                                                                      y:::::y                                                            p:::::::p" << std::endl;
    std::cout << "                                                                                     y:::::y                                                             p:::::::p" << std::endl;
    std::cout << "                                                                                    yyyyyyy                                                              p:::::::p" << std::endl;
    std::cout << "                                                                                                                                                         ppppppppp" << std::endl;
    getch();
    cout << "WWWWWWWW                           WWWWWWWW iiii  lllllll lllllll                              VVVVVVVV           VVVVVVVV iiii  lllllll lllllll" << endl;
    cout << "W::::::W                           W::::::Wi::::i l:::::l l:::::l                              V::::::V           V::::::Vi::::i l:::::l l:::::l" << endl;
    cout << "W::::::W                           W::::::W iiii  l:::::l l:::::l                              V::::::V           V::::::V iiii  l:::::l l:::::l" << endl;
    cout << "W::::::W                           W::::::W       l:::::l l:::::l                              V::::::V           V::::::V       l:::::l l:::::l" << endl;
    cout << " W:::::W           WWWWW           W:::::Wiiiiiii  l::::l  l::::lyyyyyyy           yyyyyyy      V:::::V           V:::::Viiiiiii  l::::l  l::::l   aaaaaaaaaaaaa  nnnn  nnnnnnnn    uuuuuu    uuuuuu      eeeeeeeeeeee  vvvvvvv           vvvvvvvaaaaaaaaaaaaa" << endl;
    cout << "  W:::::W         W:::::W         W:::::W i:::::i  l::::l  l::::l y:::::y         y:::::y        V:::::V         V:::::V i:::::i  l::::l  l::::l   a::::::::::::a n:::nn::::::::nn  u::::u    u::::u    ee::::::::::::ee v:::::v         v:::::v a::::::::::::a" << endl;
    cout << "   W:::::W       W:::::::W       W:::::W   i::::i  l::::l  l::::l  y:::::y       y:::::y          V:::::V       V:::::V   i::::i  l::::l  l::::l   aaaaaaaaa:::::an::::::::::::::nn u::::u    u::::u   e::::::eeeee:::::eev:::::v       v:::::v  aaaaaaaaa:::::a" << endl;
    cout << "    W:::::W     W:::::::::W     W:::::W    i::::i  l::::l  l::::l   y:::::y     y:::::y            V:::::V     V:::::V    i::::i  l::::l  l::::l            a::::ann:::::::::::::::nu::::u    u::::u  e::::::e     e:::::e v:::::v     v:::::v            a::::a" << endl;
    cout << "     W:::::W   W:::::W:::::W   W:::::W     i::::i  l::::l  l::::l    y:::::y   y:::::y              V:::::V   V:::::V     i::::i  l::::l  l::::l     aaaaaaa:::::a  n:::::nnnn:::::nu::::u    u::::u  e:::::::eeeee::::::e  v:::::v   v:::::v      aaaaaaa:::::a" << endl;
    cout << "      W:::::W W:::::W W:::::W W:::::W      i::::i  l::::l  l::::l     y:::::y y:::::y                V:::::V V:::::V      i::::i  l::::l  l::::l   aa::::::::::::a  n::::n    n::::nu::::u    u::::u  e:::::::::::::::::e    v:::::v v:::::v     aa::::::::::::a" << endl;
    cout << "       W:::::W:::::W   W:::::W:::::W       i::::i  l::::l  l::::l      y:::::y:::::y                  V:::::V:::::V       i::::i  l::::l  l::::l  a::::aaaa::::::a  n::::n    n::::nu:::::uuuu:::::u  e::::::eeeeeeeeeee      v:::::v:::::v     a::::aaaa::::::a" << endl;
    cout << "        W:::::::::W     W:::::::::W        i::::i  l::::l  l::::l       y:::::::::y                    V:::::::V        i::::i  l::::l  l::::l a::::a    a:::::a  n::::n    n::::nu:::::::::::::::uue::::::::e                v:::::::v      a::::a    a:::::a" << endl;
    cout << "         W:::::::W       W:::::::W        i::::::il::::::ll::::::l       y:::::::y                      V:::::::V        i::::::il::::::ll::::::la::::a    a:::::a  n::::n    n::::nu:::::::::::::::u e::::::::eeeeeeee         v:::::v       a::::a    a:::::a" << endl;
    cout << "          W:::::W         W:::::W         i::::::il::::::ll::::::l        y:::::y                        V:::V          i::::::il::::::ll::::::l a::::::::::aa:::a n::::n    n::::n  uu::::::::uu:::u  ee:::::::::::::e          v:::v         a::::::::::aa:::a" << endl;
    cout << "           W:::W           W:::W          i::::::il::::::ll::::::l       y:::::y                          VVV           iiiiiiiillllllllllllllll  aaaaaaaaaa  aaaa nnnnnn    nnnnnn    uuuuuuuu  uuuu    eeeeeeeeeeeeee           vvv           aaaaaaaaaa  aaaa" << endl;
    cout << "            WWW             WWW           iiiiiiiillllllllllllllll      y:::::y                                                                                                                                                                                    " << endl;
    cout << "                                                                       y:::::y                                                                                                                                                                                    " << endl;
    cout << "                                                                      y:::::y                                                                                                                                                                                     " << endl;
    cout << "                                                                     y:::::y                                                                                                                                                                                      " << endl;
    cout << "                                                                    yyyyyyy                                                                                                                                                                                       " << endl;
    getch();


    cout << "NNNNNNNN        NNNNNNNN                                                                               MMMMMMMM               MMMMMMMM                                              tttt            iiii" << endl;
    cout << "N:::::::N       N::::::N                                                                               M:::::::M             M:::::::M                                           ttt:::t           i::::i" << endl;
    cout << "N::::::::N      N::::::N                                                                               M::::::::M           M:::::::::M                                           t:::::t            iiii" << endl;
    cout << "N:::::::::N     N::::::N                                                                               M:::::::::M         M:::::::::::M                                           t:::::t" << endl;
    cout << "N::::::::::N    N::::::N  aaaaaaaaaaaaa      ssssssssss       eeeeeeeeeeee    rrrrr   rrrrrrrrr        M::::::::::M       M:::::::::::M  aaaaaaaaaaaaa  rrrrr   rrrrrrrrr   ttttttt:::::ttttttt    iiiiii  nnnn  nnnnnnnn        eeeeeeeeeeee    zzzzzzzzzzzzzzzzz" << endl;
    cout << "N:::::::::::N   N::::::N  a::::::::::::a   ss::::::::::s    ee::::::::::::ee  r::::rrr:::::::::r       M:::::::::::M     M:::::::::::M  a::::::::::::a r::::rrr:::::::::r  t:::::::::::::::::t    i:::::in:::nn::::::::nn    ee::::::::::::ee  z:::::::::::::::z" << endl;
    cout << "N:::::::N::::N  N::::::N  aaaaaaaaa:::::ass:::::::::::::s  e::::::eeeee:::::eer:::::::::::::::::r      M:::::::M::::M   M::::M:::::::M  aaaaaaaaa:::::ar:::::::::::::::::r t:::::::::::::::::t     i::::in::::::::::::::nn  e::::::eeeee:::::eez::::::::::::::z" << endl;
    cout << "N::::::N N::::N N::::::N           a::::as::::::ssss:::::se::::::e     e:::::err::::::rrrrr::::::r     M::::::M M::::M M::::M M::::::M           a::::arr::::::rrrrr::::::rtttttt:::::::tttttt     i::::inn:::::::::::::::ne::::::e     e:::::ezzzzzzzz::::::z" << endl;
    cout << "N::::::N  N::::N:::::::N    aaaaaaa:::::a s:::::s  ssssss e:::::::eeeee::::::e r:::::r     r:::::r     M::::::M  M::::M::::M  M::::::M    aaaaaaa:::::a r:::::r     r:::::r      t:::::t           i::::i  n:::::nnnn:::::ne:::::::eeeee::::::e      z::::::z" << endl;
    cout << "N::::::N   N:::::::::::N  aa::::::::::::a   s::::::s      e:::::::::::::::::e  r:::::r     rrrrrrr     M::::::M   M:::::::M   M::::::M  aa::::::::::::a r:::::r     rrrrrrr      t:::::t           i::::i  n::::n    n::::ne:::::::::::::::::e      z::::::z" << endl;
    cout << "N::::::N    N::::::::::N a::::aaaa::::::a      s::::::s   e::::::eeeeeeeeeee   r:::::r                 M::::::M    M:::::M    M::::::M a::::aaaa::::::a r:::::r                  t:::::t           i::::i  n::::n    n::::ne::::::eeeeeeeeeee      z::::::z" << endl;
    cout << "N::::::N     N:::::::::Na::::a    a:::::assssss   s:::::s e:::::::e            r:::::r                 M::::::M               M::::::Ma::::a    a:::::a r:::::r                  t::::::tttt:::::ti::::::i n::::n    n::::n  e::::::::eeeeeeee   z:::::::::::::::z" << endl;
    cout << "N::::::N      N::::::::Na::::a    a:::::as:::::ssss::::::se::::::::e           r:::::r                 M::::::M               M::::::M a::::::::::aa:::ar:::::r                    tt::::::::::::::ti::::::i n::::n    n::::n   ee:::::::::::::e  z:::::::::::::::z" << endl;
    cout << "N::::::N       N:::::::Na:::::aaaa::::::as::::::::::::::s  e::::::::eeeeeeee   r:::::r                 M::::::M               M::::::M  aaaaaaaaaa  aaaarrrrrrr                      ttttttttttt  iiiiiiii nnnnnn    nnnnnn    eeeeeeeeeeeeee  zzzzzzzzzzzzzzzzz" << endl;
    cout << "NNNNNNNN         NNNNNNN  aaaaaaaaaa  aaaa sssssssssss        eeeeeeeeeeeeee   rrrrrrr                 MMMMMMMM               MMMMMMMM  aaaaaaaaaa  aaaarrrrrrr                                                                                                                \n" << endl;
    getch();
    
    cout << "        GGGGGGGGGGGGG                 b::::::b                                 iiii                     lllllll      VVVVVVVV           VVVVVVVV iiii  lllllll lllllll" << endl;
    cout << "     GGG::::::::::::G                 b::::::b                                i::::i                    l:::::l      V::::::V           V::::::Vi::::i l:::::l l:::::l" << endl;
    cout << "   GG:::::::::::::::G                 b::::::b                                 iiii                     l:::::l      V::::::V           V::::::V iiii  l:::::l l:::::l" << endl;
    cout << "  G:::::GGGGGGGG::::G                  b:::::b                                                          l:::::l      V::::::V           V::::::V       l:::::l l:::::l" << endl;
    cout << " G:::::G       GGGGGG  aaaaaaaaaaaaa   b:::::bbbbbbbbb    rrrrr   rrrrrrrrr  iiiiiii     eeeeeeeeeeee    l::::l       V:::::V           V:::::Viiiiiii  l::::l  l::::l   aaaaaaaaaaaaa  nnnn  nnnnnnnn    uuuuuu    uuuuuu      eeeeeeeeeeee  vvvvvvv           vvvvvvvaaaaaaaaaaaaa" << endl;
    cout << "G:::::G                a::::::::::::a  b::::::::::::::bb  r::::rrr:::::::::r i:::::i   ee::::::::::::ee  l::::l        V:::::V         V:::::V i:::::i  l::::l  l::::l   a::::::::::::a n:::nn::::::::nn  u::::u    u::::u    ee::::::::::::ee v:::::v         v:::::v a::::::::::::a" << endl;
    cout << "G:::::G                aaaaaaaaa:::::a b::::::::::::::::b r:::::::::::::::::r i::::i  e::::::eeeee:::::eel::::l         V:::::V       V:::::V   i::::i  l::::l  l::::l   aaaaaaaaa:::::an::::::::::::::nn u::::u    u::::u   e::::::eeeee:::::eev:::::v       v:::::v  aaaaaaaaa:::::a" << endl;
    cout << "G:::::G    GGGGGGGGGG           a::::a b:::::bbbbb:::::::brr::::::rrrrr::::::ri::::i e::::::e     e:::::el::::l          V:::::V     V:::::V    i::::i  l::::l  l::::l            a::::ann:::::::::::::::nu::::u    u::::u  e::::::e     e:::::e v:::::v     v:::::v            a::::a" << endl;
    cout << "G:::::G    G::::::::G    aaaaaaa:::::a b:::::b    b::::::b r:::::r     r:::::ri::::i e:::::::eeeee::::::el::::l           V:::::V   V:::::V     i::::i  l::::l  l::::l     aaaaaaa:::::a  n:::::nnnn:::::nu::::u    u::::u  e:::::::eeeee::::::e  v:::::v   v:::::v      aaaaaaa:::::a" << endl;
    cout << "G:::::G    GGGGG::::G  aa::::::::::::a b:::::b     b:::::b r:::::r     rrrrrrri::::i e:::::::::::::::::e l::::l            V:::::V V:::::V      i::::i  l::::l  l::::l   aa::::::::::::a  n::::n    n::::nu::::u    u::::u  e:::::::::::::::::e    v:::::v v:::::v     aa::::::::::::a" << endl;
    cout << "G:::::G        G::::G a::::aaaa::::::a b:::::b     b:::::b r:::::r            i::::i e::::::eeeeeeeeeee  l::::l             V:::::::::V        i::::i  l::::l  l::::l  a::::aaaa::::::a  n::::n    n::::nu::::u    u::::u  e::::::eeeeeeeeeee      v:::::v:::::v     a::::aaaa::::::a" << endl;
    cout << " G:::::G       G::::Ga::::a    a:::::a b:::::b     b:::::b r:::::r            i::::i e:::::::e           l::::l              V:::::V:::::V       i::::i  l::::l  l::::l a::::a    a:::::a  n::::n    n::::n u:::::::::::::::u e::::::::eeeeeeee         v:::::v       a::::a    a:::::a" << endl;
    cout << "  G:::::GGGGGGGG::::Ga::::a    a:::::a b:::::bbbbbb::::::b r:::::r           i::::::ie::::::::e         l::::::l              V:::::::V        i::::::il::::::ll::::::la::::a    a:::::a  n::::n    n::::n  uu::::::::uu:::u  ee:::::::::::::e          v:::v         a::::::::::aa:::a" << endl;
    cout << "   GG:::::::::::::::Ga:::::aaaa::::::a b::::::::::::::::b  r:::::r           i::::::i  ee:::::::::::::e l::::::l               V:::V          i::::::il::::::ll::::::l a::::::::::aa:::a n::::n    n::::n  uu::::::::uu:::u  ee:::::::::::::e          v:::v         a::::::::::aa:::a" << endl;
    cout << "     GGG::::::GGG:::G a::::::::::aa:::ab:::::::::::::::b   r:::::r           i::::::i  ee:::::::::::::e l::::::l                VVV           iiiiiiiillllllllllllllll  aaaaaaaaaa  aaaa nnnnnn    nnnnnn    uuuuuuuu  uuuu    eeeeeeeeeeeeee           vvv           aaaaaaaaaa  aaaa" << endl;
    cout << "        GGGGGG   GGGG  aaaaaaaaaa  aaaabbbbbbbbbbbbbbbb    rrrrrrr           iiiiiiii    eeeeeeeeeeeeee llllllll                 VVV           iiiiiiillllllllllllllll   aaaaaaaaaa  aaaa nnnnnn    nnnnnn    uuuuuuuu  u  " << endl;

    cout << "                                                                                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                                                                                      " << endl;
    getch();
    cout << "FFFFFFFFFFFFFFFFFFFFFF                                                     kkkkkkkk           lllllll   iiii                        LLLLLLLLLLL                                       " << endl;
    cout << "F::::::::::::::::::::F                                                     k::::::k           l:::::l  i::::i                       L:::::::::L                                       " << endl;
    cout << "F::::::::::::::::::::F                                                     k::::::k           l:::::l   iiii                        L:::::::::L                                       " << endl;
    cout << "FF::::::FFFFFFFFF::::F                                                     k::::::k           l:::::l                               LL:::::::LL                                       " << endl;
    cout << "  F:::::F       FFFFFFrrrrr   rrrrrrrrr   aaaaaaaaaaaaa  nnnn  nnnnnnnn     k:::::k    kkkkkkk l::::l iiiiiiinnnn  nnnnnnnn           L:::::L                  ooooooooooo   ppppp   ppppppppp       eeeeeeeeeeee    zzzzzzzzzzzzzzzzz" << endl;
    cout << "  F:::::F             r::::rrr:::::::::r  a::::::::::::a n:::nn::::::::nn   k:::::k   k:::::k  l::::l i:::::in:::nn::::::::nn         L:::::L                oo:::::::::::oo p::::ppp:::::::::p    ee::::::::::::ee  z:::::::::::::::z" << endl;
    cout << "  F::::::FFFFFFFFFF   r:::::::::::::::::r aaaaaaaaa:::::an::::::::::::::nn  k:::::k  k:::::k   l::::l  i::::in::::::::::::::nn        L:::::L               o:::::::::::::::op:::::::::::::::::p  e::::::eeeee:::::eez::::::::::::::z " << endl;
    cout << "  F:::::::::::::::F   rr::::::rrrrr::::::r         a::::ann:::::::::::::::n k:::::::::::k      l::::l  i::::inn:::::::::::::::n       L:::::L               o:::::ooooo:::::opp::::::ppppp::::::pe::::::e     e:::::ezzzzzzzz::::::z  " << endl;
    cout << "  F:::::::::::::::F    r:::::r     r:::::r  aaaaaaa:::::a  n:::::nnnn:::::n k::::::k:::::k     l::::l  i::::i  n:::::nnnn:::::n       L:::::L               o::::o     o::::o p:::::p     p:::::pe:::::::eeeee::::::e      z::::::z   " << endl;
    cout << "  F:::::F              r:::::r     rrrrrrraa::::::::::::a  n::::n    n::::n k::::::k k:::::k   l::::::li::::::i n::::n    n::::n       L:::::L               o::::o     o::::o p:::::p     p:::::pe:::::::::::::::::e      z::::::z    " << endl;
    cout << "  F:::::F              r:::::r           a::::aaaa::::::a  n::::n    n::::n k::::::k  k:::::k  l::::::li::::::i n::::n    n::::n       L:::::L               o::::o     o::::o p:::::p     p:::::pe::::::eeeeeeeeeee      z::::::z     " << endl;
    cout << "  F:::::F              r:::::r          a::::a    a:::::a  n::::n    n::::n k::::::k   k:::::k l::::::li::::::i n::::n    n::::n       L:::::L         LLLLLLo::::o     o::::o p:::::p    p::::::pe:::::::e              z::::::z      " << endl;
    cout << "FF:::::::FF            r:::::r          a::::a    a:::::a  n::::n    n::::n k::::::k    kkkkkkklllllllliiiiiiii nnnnnn    nnnnnn     LL:::::::LLLLLLLLL:::::Lo:::::ooooo:::::o p:::::ppppp:::::::pe::::::::e            z::::::zzzzzzzz" << endl;
    cout << "F::::::::FF            r:::::r          a:::::aaaa::::::a  n::::n    n::::nkkkkkkkk             l::::l iiiiiiinnnnn    nnnnnn     L::::::::::::::::::::::Lo:::::::::::::::o p::::::::::::::::p  e::::::::eeeeeeee   z::::::::::::::z" << endl;
    cout << "F::::::::FF            r:::::r           a::::::::::aa:::a n::::n    n::::n k::::::k             l::::l i::::i  n::::n    n::::n     L::::::::::::::::::::::L oo:::::::::::oo  p::::::::::::::pp    ee:::::::::::::e  z:::::::::::::::z" << endl;
    cout << "FFFFFFFFFFF            rrrrrrr            aaaaaaaaaa  aaaa nnnnnn    nnnnnn kkkkkkkk             lllllll iiiiiiinnnnn    nnnnnn     LLLLLLLLLLLLLLLLLLLLLLLL   ooooooooooo    p::::::pppppppp        eeeeeeeeeeeeee  zzzzzzzzzzzzzzzzz" << endl;
    cout << "                                                                                                                                                                              p:::::p" << endl;
    cout << "                                                                                                                                                                              p:::::p" << endl;
    cout << "                                                                                                                                                                             p:::::::p" << endl;
    cout << "                                                                                                                                                                             p:::::::p" << endl;
    cout << "                                                                                                                                                                             p:::::::p" << endl;
    cout << "                                                                                                                                                                             p:::::::p" << endl;
    cout << "                                                                                                                                                                             ppppppppp" << endl;
    getch();
    system("cls");
    cout<<"                                                     ,  ,*&@@@@@@@@@@@@@@@@@@@@@@#"<<endl;                                                                                                    
cout<<"                                                  (@@@@@@@@@@@@%###/,,,,,,,,(&@@@@(,,,"<<endl;                                                                                                
cout<<"                                              #@@@@@@@&(*,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@@&*"<<endl;                                                                                        
cout<<"                                           ,&@@@@@&*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,(@@@@@@*"<<endl;                                                                                
cout<<"                                         ,@@@@@*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@@#"<<endl;                                                                        
cout<<"                                       ,@@@@*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,#@@@@@"<<endl;                                                                
cout<<"                                      ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@#"<<endl;     
cout<<"                                   @@@@,,,,,,,(@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,%@@@@"<<endl;     
cout<<"                                 *@@@@*,,,,,,&@@@&,,,(@@@%,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@,"<<endl;     
cout<<"                                *@@@@,,,,,,,(@@@&,,,/@@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@@*"<<endl;     
cout<<"                               ,@@@@,,,,,,,,&@@@*,,*@@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@,"<<endl;     
cout<<"                               @@@@,,,/((/*,@@@@,,,%@@@/,,,,,**,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,(@@@&"<<endl;    
cout<<"                         ,(%&&&@@@%,,*//////***,,,,*@@%,,*////////,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,&@@@,"<<endl;     
cout<<"                     /@@@@@@@@@@@@(,,,,****,,,,**,,,,%@@%,*//////*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@"<<endl;     
cout<<"                   %@@@@&/,,,,%@@@/,,,,,,,,,,,@@@@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@@"<<endl;     
cout<<"                  @@@@(,,,,,,,,**,,***,,,,,,,,,,(@@@@(*,*&@@@@@@@@@@@*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@@@@@@@("<<endl;     
cout<<"                 &@@@*,,,,,,(@@@@@@@@@@@@@@@%*,,,,,,,(@@@@@@@&#/(%@@#,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*@@@@&@@@@@@@@/"<<endl;     
cout<<"                 @@@@,,,,*@@@@@@&%######&@@@@@@@/,,/@@@@%,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,**,,&@@//////(&@@@@&,"<<endl;     
cout<<"              ,  %@@@@@&%@@@@(###############@@@@@@@@@&,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,/@@@@@@/(///////////(@@@@("<<endl;     
cout<<"             /@@@@@@@@@@@@@@@@@@@@&&%%#########%@@@@@@(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,(&@@@@@@@%/////////////////&@@@%"<<endl; 
cout<<"         ,%@@@@@@#///////((&&@@@@@@@@@@@@@@@@@@&%@@@@@(,,,,,,,,,,,,,,,,,,,,,,,,,*(%@@@@@@@@@&(//////////////////////%@@@#"<<endl;     
cout<<"      ,, #@@@#////////////////(/////(///(%&@@@@@@@@@@@@(,,,,,,,,,,,,,,,,/@@@@@@@@@@@@@&(//////(/////(////////////////&@@@( *@@@@@# ,"<<endl;     
cout<<"    &@@@@////////////////////////////////////////#&%%@@@@%,,,,,,,,,,/&@(,(%&&%#((///////&@@@@@@@@@(///////////////////@@@@@@@@@@@@@#"<<endl;     
cout<<"  ,@@@@#/////(%@@@&#//////////////////////////////////#@@@@@@@@@@@@@@@@&///////////(&@@@@@@%(##%@@@///////////////////(@@@@####(@@@@,"<<endl;     
cout<<" ,@@@@(///#@@@@@@@@@@&//////////////////////////////////(/#&@@@@@@@&(/////////////(@@@@((###%@@@@@(////////////////////@@@@###%@@@@@"<<endl;     
cout<<" /@@@&//(@@@@#    #@@@%////////////////////////////////////////////////////////////@@@@@@@@@@@@(//(///////#@@@@@@@&////&@@@@@@@@@@,"<<endl;     
cout<<" %@@@(//%@@@(      @@@@(/////////////////////////////////////////////////////////////(#%%#(//////////(/#@@@@@@&&@@@@&//@@@@@@%,"<<endl;    
cout<<" %@@@(//@@@@       %@@@(/////////////////////////(@@@@@@@&(//////////////////////////////////////////(@@@@&,,,,,,#@@@&&@@@&"<<endl;     
cout<<",(@@@%//&@@@*      @@@@(//////////////////////(%@@@@@&&@@@@@////////////////////////////////////////(@@@@,,,,,,,,,&@@@@@@/"<<endl;     
cout<<" /@@@%//(@@@@*   *@@@@%///////////////////////%@@@#      @@@@(//////////////////(%&&%(//////////////@@@@*,,,,*/,,,*@@@#,"<<endl;     
cout<<" ,@@@&////&@@#@@@@@@&/////////////////////////@@@@       *@@@%//////////////%@@@@@@@@@@@%//////////(@@@&,,,,@@@@%,*@@@&"<<endl;     
cout<<"  @@@@@(///////(((////////////////////////////@@@@        @@@&////////////%@@@@%,,,,,#@@@@#////////(@@@&,,,(@@@@#,%@@@@@@/,"<<endl;     
cout<<"   ,@@@@@@@@@&#///////////////////////////////&@@@,      (@@@%///////////@@@@#,,,,,,,,,&@@@%////(/%@@@@@,,,,@@@%,*@@@@@@@@@@&"<<endl;     
cout<<"       ,#@@@@@@@@@@@@@%#(/////////////////////(@@@@     @@@@@///////////&@@@(,,,,,,,,,,,@@@@#&@@@@@@@@*,,,,,,,,,,@@@@@@@@@@@@@"<<endl;     
cout<<"              ,&@@@@@@@@@@@@@@@#(///////////////#%(#@@@@@@@%///////////(@@@&,,,,,#@@@#,,&@@@@@@@@@@@@@/,,,,,,,,(@@@@@@@@@@@@#"<<endl;     
cout<<"          ,&@@@@@@@@@@*,,/#@@@@@@@@@@@@@&#//////////(&&#(//////////////%@@@(,,,,*@@@@&,,&@@@@@@@@@@@@@@&,,,,*@@@@@@@@@@@*"<<endl;      
cout<<"          &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%#(/////////////////%@@@/,,,,*@@@@%,,@@@@@@@@@@@@@@@@@@@@@@@@@@%*"<<endl;      
cout<<"            *#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%#((((%@@@@@#,,,,,,@@@%,,*@@@@@@@@@@@@@@@@@@@@&/"<<endl;      
cout<<"                   *#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/,,,,,,,,,,,,,,@@@@@@@@@@@@@@@@@,"<<endl;      
cout<<"                           ,*#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,,,,,,&@@@@@@@@@@@@@/,"<<endl;      
cout<<"                                      ,,/%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*,,,,*/@@@@@@@@@@@#,"<<endl;      
cout<<"                                                 ,#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@("<<endl;      
cout<<"                                                           ,,*#&@@@@@@@@@@@@@@@@@@@(,"<<endl;      
 cout<<"                                                                      ,*///*,"<<endl;
 
 
    cout << "                                                                                                                                           " << endl;
    cout << "        GGGGGGGGGGGGG                                                         iiii                                                      " << endl;
    cout << "     GGG::::::::::::G                                                        i::::i                                                     " << endl;
    cout << "   GG:::::::::::::::G                                                         iiii                                                      " << endl;
    cout << "  G:::::GGGGGGGG::::G                                                                                                               " << endl;
    cout << " G:::::G       GGGGGGrrrrr   rrrrrrrrr   aaaaaaaaaaaaa      cccccccccccccccciiiiiii   aaaaaaaaaaaaa      ssssssssss                " << endl;
    cout << "G:::::G              r::::rrr:::::::::r  a::::::::::::a   cc:::::::::::::::ci:::::i   a::::::::::::a   ss::::::::::s               " << endl;
    cout << "G:::::G              r:::::::::::::::::r aaaaaaaaa:::::a c:::::::::::::::::c i::::i   aaaaaaaaa:::::ass:::::::::::::s              " << endl;
    cout << "G:::::G    GGGGGGGGGGrr::::::rrrrr::::::r         a::::ac:::::::cccccc:::::c i::::i            a::::as::::::ssss:::::s             " << endl;
    cout << "G:::::G    G::::::::G r:::::r     r:::::r  aaaaaaa:::::ac::::::c     ccccccc i::::i     aaaaaaa:::::a s:::::s  ssssss              " << endl;
    cout << "G:::::G    GGGGG::::G r:::::r     rrrrrrraa::::::::::::ac:::::c              i::::i   aa::::::::::::a   s::::::s                   " << endl;
    cout << "G:::::G        G::::G r:::::r           a::::aaaa::::::ac:::::c              i::::i  a::::aaaa::::::a      s::::::s                " << endl;
    cout << " G:::::G       G::::G r:::::r          a::::a    a:::::ac::::::c     ccccccc i::::i a::::a    a:::::assssss   s:::::s             " << endl;
    cout << "  G:::::GGGGGGGG::::G r:::::r          a::::a    a:::::ac:::::::cccccc:::::ci::::::ia::::a    a:::::as:::::ssss::::::s            " << endl;
    cout << "   GG:::::::::::::::G r:::::r          a:::::aaaa::::::a c:::::::::::::::::ci::::::ia:::::aaaa::::::as::::::::::::::s           " << endl;
    cout << "     GGG::::::GGG:::G r:::::r           a::::::::::aa:::a cc:::::::::::::::ci::::::i a::::::::::aa:::as:::::::::::ss            " << endl;
    cout << "        GGGGGG   GGGG rrrrrrr            aaaaaaaaaa  aaaa   cccccccccccccccciiiiiiii  aaaaaaaaaa  aaaa sssssssssss             " << endl;
    cout << "                                                                                                                                           " << endl;
    cout << "     ppppp   ppppppppp      ooooooooooo   rrrrr   rrrrrrrrr                                                                                                                                              " << endl;
    cout << "     p::::ppp:::::::::p   oo:::::::::::oo r::::rrr:::::::::r                                                                                                                                             " << endl;
    cout << "     p:::::::::::::::::p o:::::::::::::::or:::::::::::::::::r                                                                                                                                           " << endl;
    cout << "     pp::::::ppppp::::::po:::::ooooo:::::orr::::::rrrrr::::::r                                                                                                                                          " << endl;
    cout << "      p:::::p     p:::::po::::o     o::::o r:::::r     r:::::r                                                                                                                                         " << endl;
    cout << "      p:::::p     p:::::po::::o     o::::o r:::::r     rrrrrrr                                                                                                                                         " << endl;
    cout << "      p:::::p     p:::::po::::o     o::::o r:::::r                                                                                                                                                 " << endl;
    cout << "      p:::::p    p::::::po::::o     o::::o r:::::r                                                                                                                                                 " << endl;
    cout << "      p:::::ppppp:::::::po:::::ooooo:::::o r:::::r                                                                                                                                                 " << endl;
    cout << "      p::::::::::::::::p o:::::::::::::::o r:::::r                                                                                                                                                 " << endl;
    cout << "      p::::::::::::::pp   oo:::::::::::oo  r:::::r                                                                                                                                                 " << endl;
    cout << "      p::::::pppppppp       ooooooooooo    rrrrrrr                                                                                                                                                 " << endl;
    cout << "      p:::::p                                                                                                                                                                                         " << endl;
    cout << "      p:::::p                                                                                                                                                                                         " << endl;
    cout << "     p:::::::p                                                                                                                                                                                        " << endl;
    cout << "     p:::::::p                                                                                                                                                                                        " << endl;
    cout << "     p:::::::p                                                                                                                                                                                        " << endl;
    cout << "     ppppppppp                                                                                                                                                                                        " << endl;
    cout << "                                                               ffffffffffffffff                                       iiii                                                                                " << endl;
    cout << "                                                              f::::::::::::::::f                                     i::::i                                                                               " << endl;
    cout << "                                                             f::::::::::::::::::f                                     iiii                                                                                " << endl;
    cout << "                                                             f::::::fffffff:::::f                                                                                                                   " << endl;
    cout << "ppppp   ppppppppp   rrrrr   rrrrrrrrr       eeeeeeeeeeee     f:::::f       ffffffeeeeeeeeeeee    rrrrr   rrrrrrrrr  iiiiiiirrrrr   rrrrrrrrr   nnnn  nnnnnnnn       ooooooooooo       ssssssssss   " << endl;
    cout << "p::::ppp:::::::::p  r::::rrr:::::::::r    ee::::::::::::ee   f:::::f           ee::::::::::::ee  r::::rrr:::::::::r i:::::ir::::rrr:::::::::r  n:::nn::::::::nn   oo:::::::::::oo   ss::::::::::s  " << endl;
    cout << "p:::::::::::::::::p r:::::::::::::::::r  e::::::eeeee:::::eef:::::::ffffff    e::::::eeeee:::::eer:::::::::::::::::r i::::ir:::::::::::::::::r n::::::::::::::nn o:::::::::::::::oss:::::::::::::s " << endl;
    cout << "pp::::::ppppp::::::prr::::::rrrrr::::::re::::::e     e:::::ef::::::::::::f   e::::::e     e:::::err::::::rrrrr::::::ri::::irr::::::rrrrr::::::rnn:::::::::::::::no:::::ooooo:::::os::::::ssss:::::s" << endl;
    cout << " p:::::p     p:::::p r:::::r     r:::::re:::::::eeeee::::::ef::::::::::::f   e:::::::eeeee::::::e r:::::r     r:::::ri::::i r:::::r     r:::::r  n:::::nnnn:::::no::::o     o::::o s:::::s  ssssss " << endl;
    cout << " p:::::p     p:::::p r:::::r     rrrrrrraa:::::::::::::ac:::::::cccccc:::::c i::::i         aaaaaaa:::::a s:::::s  ssssss              " << endl;
    cout << " p:::::p     p:::::p r:::::r            e::::::::eeeeeeee    f:::::f         e::::::::eeeeeeee   r:::::r            i::::i r:::::r              n::::n    n::::n oo:::::::::::oo  s:::::::::::ss  " << endl;
    cout << " p:::::p    p::::::p r:::::r            e:::::::::e          f:::::f         e:::::::::e        r:::::r            i::::::ir:::::r              n::::n    n::::n oo:::::::::::oo  s:::::::::::::s" << endl;
    cout << " p:::::ppppp:::::::p r:::::r             e::::::::eeeeeeee  f:::::f          ee:::::::::::::e   r:::::r           i::::::ir:::::r              n::::n    n::::n  ooooooooooo    s:::::::::::ss" << endl;
    cout << " p::::::::::::::::p  r:::::r              ee:::::::::::::e  f:::::f           ee::::::::::::e   r:::::r           i::::::ir:::::r              n::::n    n::::n o:::::ooooo:::::o   sss:::::::::s" << endl;
    cout << " p::::::::::::::pp   r:::::r                eeeeeeeeeeeeee  ffffff             eeeeeeeeeeeeee   rrrrrrr           iiiiiiiirrrrrrr              nnnnnn    nnnnnn  ooooooooooo      sssssssssss  " << endl;
    cout << " p::::::pppppppp     rrrrrrr                                                                                                                                                                                 " << endl;
    cout << " p:::::p                                                                                                                                                                                                " << endl;
    cout << " p:::::p                                                                                                                                                                                                " << endl;
    cout << "p:::::::p                                                                                                                                                                                               " << endl;
    cout << "p:::::::p                                                                                                                                                                                               " << endl;
    cout << "p:::::::p                                                                                                                                                                                               " << endl;
    cout << "ppppppppp                                                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                                                                      " << endl;
            return 0; // Terminar el programa
        default:
            cout << "Opción no válida. Por favor, elija una opción válida." << endl;
            break;
        }
    } else if (op == 11) {
        system("cls");
        cout << "Nos vemos" << endl;
        system("PAUSE");
    } else {
        system("cls");
        cout << "ERROR: SELECCIONE UNA OPCION VALIDA" << endl;
        getch();
        goto menu;
    }

    getch();
    return 0;
}