#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;


struct Boleta {
    string fecha;
    string carnet;
    string nombre;
    int semestre;
    string campus;
    string banco;
    int opcionPago;
    int opcionBanco;
    int total;
    string banco;
}; Boleta Boleta1;



struct Catedratico {
    string cod;
    string nomc1;
    string apellido1;
    string direc;
    string prof;
    string email;
    int telefono1;
}; Catedratico Catedratico1;

struct Curso {
    string nomc;
    string horario;
    int codc;
    int prereq;
    int creditos;
    int semestre;
    const int MAX_COURSES = 5;
};  Curso Curso1;

struct Estudiante {
    string nombre;
    string apellido;
    string fechaNac;
    string direccion;
    string email;
    string pd;
    string carrera;
    int edad;
    int promo;
    int telefono;
    int carnet;
    int ao;
}; Estudiante Estudiante1;

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
    int promedio
};Notas Notas1;

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
    int año1;
};

void mostrarClases(const vector<string>& clases) {
    cout << "Clases:" << endl;
    for (int i = 0; i < clases.size( i++) {
        cout << i + 1 << ". " << clases[i] << endl;
    }
    cout << "Presione 0 para volver a seleccionar otro ciclo." << endl;
}

int main() {
    int op, op2, opdatos;
    string carrera, departamento;

    menu:
    system("cls"

    cout << "---- REGISTRO Y CONTROL ACADEMICO ----" << endl;
    cout << "-- UNIVERSIDAD MARINO GALVEZ DE GUATEMALA --" << endl;
    cout << "- CAMPOS CENTRAL -" << endl;
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
        cout << "Saliendlo del programa..." << endl;
        return 0; // Terminar el programa
    default:
        cout << "Opción no válida. Por favor, elija una opción válida." << endl;
        break;
    }

    if (op >= 1 && op <= 10) {
        system("cls"
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

        system("cls"
        cout << "Bienvenido al sistema de ingreso de datos" << endl;
        cout << "Elige lo que deseas hacer" << endl;
        cout << "\n\t1. Ingreso de datos" << endl;
        cout << "\t2. Impresión de datos" << endl;
        cout << "\t3. Salir del programa" << endl;
        cin >> opdatos;

        switch (opdatos) {
        case 1:
            system("cls"
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
                cout << "====== Introducir Estudiantes ======" << endl;

                cout << "Nombre: "<< endl;
                cin >> Estudiante1.nombre

                cout << "Apellido: "<< endl;
                cin >> Estudiante1.apellido

                cout << "Edad: "<< endl;
                cin >> Estudiante1.edad;

                cout << "Fecha de nacimiento (DD/MM/AAAA): ";
                cin >> Estudiante1.fechaNac;

                cout << "Carnet: "<< endl;
                cin >> Estudiante1.carnet;

                cout << "Email: "<< endl;
                cin >> Estudiante1.email;

               cout << "Dirección: "<< endl;
                cin >> Estudiante1.doreccion;

               cout << "Teléfono: "<< endl;
                cin >> Estudiante1.telefono;

               cout << "Carrera: "<< endl; 
                cin >> Estudiante1.carrera;

               cout << "Año de ingreso: "<< endl;
                cin >> Estudiante1.ao;

               cout << "Promedio: "<< endl;
                cin >> Estudiante1.promo;
                
               cout << "Primer dia de clases: "<< endl;
                cin >> Estudiante1.pd;

                cout << "\nPresione Enter para volver al menú anterior...";
                cin.ignore(
                cin.get(

                break;
            }
            case 2:
            {
                cout << "====== Introducir boleta de inscripción ======" << endl;

                cout << "Nombre: "<< endl;
                cin >> Boleta1.nombre; 

                cout << "Carnet (11 digitos): "<< endl;
                cin >> Boleta1.carnet;

                cout << "Fecha de pago (DD/MM/AAAA): "<< endl;
                cin >> Boleta1.fecha;

                cout << "Semestre: "<< endl;
                cin >> Boleta1.semestre;

                cout << "Campus: "<< endl;
                cin >> Boleta1.campus;

                cout << "Banco: "<< endl;
                cin >> Boleta1.banco;


                cout << "\nPresione Enter para volver al menú anterior...";
                cin.get( // Esperar a que el usuario presione Enter

                break;
            }
            case 3:
            {
                cout << "====== Introducir cursos para el estudiante ======" << endl;
                cout << "Introduzca el nombre y código de los cursos:" << endl;

                for (int i = 0; i < Curso1.MAX_COURSES; i++) {
                    cout << "Escriba el nombre del curso No. " << i+1 << ": "<< endl;
                    cin >> Curso1.cursos[i];

                    cout << "Escriba el código del curso No. " << i+1 << " (4 dígitos): "<< endl;
                    cin >>Curso1.codc[i];

                    cout << "Horario del curso: "<<endl; 
                    cin >> Curso1.horario[i];

                    cout << "Prerequisito del curso: "<<endl;
                    cin >> Curso1.prereq[i];

                    cout << "Creditos del curso: "<<endl;
                    cin >> Curso1.creditos[i];

                    cout << "Semestre del curso: "<<endl;
                    cin >> Curso1.semestre[i];

                    cin.ignore( // Ignorar el salto de línea después de leer el código
                }

                // Do something with the student's courses here
                cout << "\nPresione Enter para volver al menú anterior...";
                cin.get( // Esperar a que el usuario presione Enter

                break;
            }
            
            case 4:
            {

                cout << "====== Introducir catedráticos ======" << endl;
                cout << "Introduzca el nombre de los catedráticos:" << endl;

                cout << "Codigo del catedratico: "<< endl;
                cin >> Catedratico1.codigo;

                cout << "Nombre del catedratico: "<< endl; 
                cin >> Catedratico1.nombre;

                cout << "Apellido del catedratico: "<< endl;
                cin >> Catedratico1.apellido;

                cout << "Direccion del catedratico: "<< endl;
                cin >> Catedratico1.direccion;

                cout << "Profesion del catedratico: "<< endl;
                cin >> Catedratico1.prof;

                cout << "Email del catedratico: "<< endl;
                cin >> Catedratico1.email;

                cout << "Telefono del catedratico: "<< endl;
                cin >> Catedratico1.telefono;
    
                
            }
            
            case 5:
            {
                
                

                // Leer los nombres de los cursos desde un archivo o ingresarlos manualmente
                for (int i = 0; i < MAX_COURSES; i++) {
                    cout << "Ingrese el nombre del curso: " << i + 1 << ": ";
                    cin.ignore( // Limpia el buffer del teclado antes de la lectura
                    cin >> Curso1.nomc[i]; 

                    cout << "Ingrese el horario del curso: " << i + 1 << ": ";
                    cin.ignore( // Limpia el buffer del teclado antes de la lectura
                    cin >> Curso1.horario[i]; 

                    cout << "Ingrese el codigo del curso: " << i + 1 << ": ";
                    cin.ignore( // Limpia el buffer del teclado antes de la lectura
                    cin >> Curso1.codc[i];

                    cout << "Ingrese el prerequisito del curso: " << i + 1 << ": ";
                    cin.ignore( // Limpia el buffer del teclado antes de la lectura
                    cin >> Curso1.prereq[i];

                    cout << "Ingrese los creditos del curso: " << i + 1 << ": ";
                    cin.ignore( // Limpia el buffer del teclado antes de la lectura
                    cin >> Curso1.creditos[i];

                    cout << "Ingrese el semestre del curso: " << i + 1 << ": ";
                    cin.ignore( // Limpia el buffer del teclado antes de la lectura
                    cin >> Curso1.semestre[i];



                }

                // Mostrar los cursos disponibles para seleccionar
                cout << "Seleccione uno de los siguientes cursos:" << endl;
                for (int i = 0; i <Curso1.nomc; i++) {
                    cout << i + 1 << ". " << nomc[i] << endl;
                }
                cin >> Curso1.nomc;

                Curso1.nomc--; // Ajustar para el índice basado en 0

                cout << "Punteo de zona: ";
                cin >> Notas1.zona<< endl;

                cout << "Punteo de primer parcial: ";
                cin >> Notas1.parcial1 << endl;

                cout << "Punteo de segundo parcial: ";
                cin >> Notas1.parcial2 << endl;

                cout << "Punteo de examen final: ";
                cin >> Notas1.exf << endl;

                cout << "Tareas retrasadas: ";
                cin >> Notas1.retrasado << endl;

                Notas1.total = Notas1.parcial1 + Notas1.parcial2 + Notas1.zona + Notas1.exf;

                cout << "La nota final del estudiante es: " << Total << endl;
                cout << "Presione Enter para volver al menú anterior...";
                cin.ignore(
                cin.get(

                break;
            }
            case 6:
            {
                cout << "====== Realizar pagos ======" << endl;
               
            

                // Mostrar las opciones de bancos
                cout << "Elija un banco:" << endl;
                cout << "1. Banco G&T Continental" << endl;
                cout << "2. Banco Industrial" << endl;
                cout << "3. Banco Agromercantil" << endl;
                cout << "4. Volver al menú anterior" << endl;
                cin >> Boleta1.opcionBanco;

                switch (Boleta1.opcionBanco) {
                    case 1:
                        Boleta1.banco = "Banco G&T Continental";
                        break;
                    case 2:
                        Boleta1.banco = "Banco Industrial";
                        break;
                    case 3:
                        Boleta1.banco = "Banco Agromercantil";
                        break;
                    case 4:
                        goto menu; // Volver al menú anterior
                    default:
                        cout << "Opción no válida. Volviendlo al menú anterior..." << endl;
                        break;
                }

        

                // Mostrar las opciones de pago
                cout << "Elija el tipo de pago:" << endl;
                cout << "1. Pago de colegiatura" << endl;
                cout << "2. Pago de extraordinario" << endl;
                cout << "3. Certificado de estudios" << endl;
                cout << "4. Volver al menú anterior" << endl;
                cin >> Boleta1.opcionPago << endl; break

                switch (Boleta1.opcionPago) {
                    case 1:
                        cout << "Procesando pago de colegiatura en " << Boleta1.opcionBanco<< "..." << endl;
                        // Implementa aquí la lógica para el pago de colegiatura
                        break;
                    case 2:
                        cout << "Procesando pago de extraordinario en " << Boleta1.opcionBanco << "..." << endl;
                        // Implementa aquí la lógica para el pago de extraordinario
                        break;
                    case 3:
                        cout << "Solicitando certificado de estudios en " << Boleta1.opcionBanco << "..." << endl;
                        // Implementa aquí la lógica para solicitar el certificado de estudios
                        break;
                    case 4:
                        goto menu; // Volver al menú anterior
                    default:
                        cout << "Opción no válida. Volviendlo al menú anterior..." << endl;
                        break;
                }

                cout << "Presione Enter para volver al menú anterior...";
                cin.ignore(
                cin.get(

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
        case 2:
        {
            cout << "====== Impresión de datos ======" << endl;

            cout << "-----IMPRESION DE DATOS-----" << endl;
            cout << "Impresion de boleta de inscripcion" << endl;
            cout << "Numero de carnet de estudiante: " <<  Estudiante1.carnet<< endl;
            cout << "La fecha de su pago es: " << Boleta1.fecha << endl;
            cout << "Semestre: " << Boleta1.semestre << endl;
            cout << "Banco: " << Boleta1.opcionBanco<< endl;
            cout << "El total de la inscripcion es de: Q.800.00" << endl;

            cout << "Impresion de pemsun de estudio" << endl;
            cout << "Pemsun Ingenieria en Sistemas" << endl;
            cout << "PRIMER SEMESTRE" << endl;
            cout << "001 DESARROLLO HUMANO Y PROFESIONAL" << endl;
            cout << "002 METODOLOGÍA DE LA INVESTIGACIÓN" << endl;
            cout << "003 CONTABILIDAD I" << endl;
            cout << "004 INTRODUCCION A LOS SISTEMAS DE COMPUTO" << endl;
            cout << "005 LOGICA DE SISTEMAS" << endl;
            cout << "SEGUNDO SEMESTRE" << endl;
            cout << "006 PRECALCULO" << endl;
            cout << "007 ALGEBRA LINEAL" << endl;
            cout << "008 ALGORITMOS" << endl;
            cout << "009 CONTABILIDAD II" << endl;
            cout << "010 MATEMATICA DISCRETA" << endl;
            cout << "TERCER SEMESTRE" << endl;
            cout << "011 FISICA I" << endl;
            cout << "012 PROGRAMACION I" << endl;
            cout << "013 CALCULO I" << endl;
            cout << "014 PROCESO ADMINISTRATIVO" << endl;
            cout << "015 DERECHO INFORMATICO" << endl;
            cout << "CUARTO SEMESTRE" << endl;
            cout << "016 MICROECONOMÍA" << endl;
            cout << "017 PROGRAMACIÓN II" << endl;
            cout << "018 CÁLCULO II" << endl;
            cout << "019 ESTADÍSTICA I" << endl;
            cout << "020 FÍSICA II" << endl;
            cout << "QUINTO SEMESTRE" << endl;
            cout << "021 MÉTODOS NUMÉRICOS" << endl;
            cout << "022 PROGRAMACIÓN III" << endl;
            cout << "023 EMPRendlEDORES DE NEGOCIOS" << endl;
            cout << "024 ELECTRÓNICA ANALÓGICA" << endl;
            cout << "025 ESTADÍSTICA II" << endl;
            cout << "SEXTO SEMESTRE" << endl;
            cout << "026 INVESTIGACIÓN DE OPERACIONES" << endl;
            cout << "027 BASES DE DATOS I" << endl;
            cout << "028 AUTÓMATAS Y LENGUAJES FORMALES" << endl;
            cout << "029 SISTEMAS OPERATIVOS I" << endl;
            cout << "030 ELECTRÓNICA DIGITAL" << endl;
            cout << "SEPTIMO SEMESTRE" << endl;
            cout << "031 BASES DE DATOS II" << endl;
            cout << "032 ANÁLISIS DE SISTEMAS I" << endl;
            cout << "033 SISTEMAS OPERATIVOS II" << endl;
            cout << "034 ARQUITECTURA DE COMPUTADORAS I" << endl;
            cout << "035 COMPILADORES" << endl;
            cout << "OCTAVO SEMESTRE" << endl;
            cout << "036 DESARROLLO WEB" << endl;
            cout << "037 ANÁLISIS DE SISTEMAS II" << endl;
            cout << "038 REDES DE COMPUTADORAS I" << endl;
            cout << "039 ÉTICA PROFESIONAL" << endl;
            cout << "040 ARQUITECTURA DE COMPUTADORAS II" << endl;
            cout << "NOVENO SEMESTRE" << endl;
            cout << "041 ADMINISTRACIÓN DE TECNOLOGÍAS DE INFORMACIÓN" << endl;
            cout << "042 INGENIERÍA DE SOFTWARE" << endl;
            cout << "042 INGENIERÍA DE SOFTWARE" << endl;
            cout << "042 INGENIERÍA DE SOFTWARE" << endl;
            cout << "043 PROYECTO DE GRADUACIÓN I" << endl;
            cout << "044 REDES DE COMPUTADORAS II" << endl;
            cout << "045 INTELIGENCIA ARTIFICIAL" << endl;
            cout << "DECIMO SEMESTRE" << endl;
            cout << "046 TELECOMUNICACIONES" << endl;
            cout << "047 SEMINARIO DE TECNOLOGÍAS DE INFORMACIÓN" << endl;
            cout << "048 ASEGURAMIENTO DE LA CALIDAD DE SOFTWARE" << endl;
            cout << "049 PROYECTO DE GRADUACIÓN II" << endl;
            cout << "050 SEGURIDAD Y AUDITORÍA DE SISTEMAS" << endl;

            cout << "Impresion de cursos por semestre" << endl;
            cout << "SEGUNDO SEMESTRE de la carrera Ingenieria en Sistemas" << endl;
            cout << "006 PRECALCULO" << endl;
            cout << "007 ALGEBRA LINEAL" << endl;
            cout << "008 ALGORITMOS" << endl;
            cout << "009 CONTABILIDAD II" << endl;
            cout << "010 MATEMATICA DISCRETA" << endl;

            cout << "Impresion de notas" << endl;
            cout << "Numero de carnet: " <<Estudiante1.carnet<< endl;
            cout << "Codigo de curso: " << Curso1.codc<< endl;
            cout << "Nota Primer Parcial: " << Notas1.parcial1 << endl;
            cout << "Nota Segundo Parcial: " << Notas1.parcial2 << endl;
            cout << "Zona: " << Notas1.zona<< endl;
            cout << "Examen final: " << Notas1.exf<< endl;
            Notas1.total = Notas1.parcial1 + Notas1.parcial2 + Notas1.zona + Notas1.exf;
            cout << "Su nota del semestre es: " << Notas1.total << endl;

            cout << "Impresion promedio" << endl;
            Notas1.promedio = (Notas1.parcial1 + Notas1.parcial2 + Notas1.parcial2 + Notas1.exf + Notas1.zona) / 5;
            cout << "Su promedio es: " << Notas1.promedio << endl;

            break;
        }
        case 3:
            cout << "Saliendlo del programa..." << endl;
            return 0; // Terminar el programa
        default:
            cout << "Opción no válida. Por favor, elija una opción válida." << endl;
            break;
        }
    } else if (op == 11) {
        system("cls")
        cout << "Nos vemos" << endl;
        system("PAUSE")
    } else {
        system("cls")
        cout << "ERROR: SELECCIONE UNA OPCION VALIDA" << endl;
        getch(
        goto menu;
    }

    getch(
    return 0;
}