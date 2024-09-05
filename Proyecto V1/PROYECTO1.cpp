#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
int op, op2, op3, op4, salario, num2, num3, num4, num5, num6, num7;
char nombre[40], apellido[40], fecha[40], correo[40];

menu:
system("cls");
cout<<"---------FANS NUMERO UNO---------"<<endl;
cout<<"---Esperamos que tengas un buen dia---"<<endl;
cout<<"---Que deseas hacer hoy?---"<<endl;
cout<<"1.Registro de empleados"<<endl;
cout<<"2.Ventas"<<endl;
cout<<"3.Nomina de sueldos"<<endl;
cout<<"4.Reportes"<<endl;
cout<<"5.Salir"<<endl;
cin>>op;
switch(op){
case 1:
{system("cls");
int num1, opc2, opc3;
cout<<"\n\n1)-Registro de Empleados\n";
cout<<"\nIngrese el codigo de empleado\n";
cin>>num1;
cout<<"Ingrese el nombre del Empleado\n";
cin>>nombre;
cout<<"Ingrese el apellido del Empleado\n";
cin>>apellido;
cout<<"Ingrese el puesto del empleado\n";
cin>>num7;
if (num7==1){cout<<"El puesto es: Administrador con salario de Q5000\n";}
else if(num7==2){ cout<<"El puesto es: Vendedor con salario de Q3000\n";}
else if(num7==3){ cout<<"El puesto es: Auxiliar del Vendedor con salario de Q2000\n";}
else if(num7==4){ cout<<"El puesto es: Encargado de Bodega con salario de Q2000\n";}
else if(num7==5){ cout<<"El puesto es: Encargador de Limpieza con salario de Q1000\n";}
else{ cout<<"La opcion que ha escogido es incorrecta";}
cout<<"\nDireccion: "<<endl;
cout<<"1) ALTA VERAPAZ"<<endl;
cout<<"2) BAJA VERAPAZ"<<endl;
cout<<"3) CHIMALTENANGO"<<endl;
cout<<"4) CHIQUIMULA"<<endl;
cout<<"5) EL PROGRESO"<<endl;
cout<<"6) ESCUINTLA"<<endl;
cout<<"7) GUATEMALA"<<endl;
cout<<"8) HUEHUETENANGO"<<endl;
cout<<"9) IZABAL"<<endl;
cout<<"10) JALAPA"<<endl;
cout<<"11) JUTIAPA"<<endl;
cout<<"12) PETEN"<<endl;
cout<<"13) QUETZALTENANGO"<<endl;
cout<<"14) QUICHE"<<endl;
cout<<"15) RETALHULEU"<<endl;
cout<<"16) SACATEPEQUEZ"<<endl;
cout<<"17) SAN MARCOS"<<endl;
cout<<"18) SANTA ROSA"<<endl;
cout<<"19) SOLOLA"<<endl;
cout<<"20) SUCHITEPEQUEZ"<<endl;
cout<<"21) TOTONICAPAN"<<endl;
cout<<"22) ZACAPA"<<endl;
cout<<"\n\n ELIJA UN DEPARTAMENTO: \n\n"<<endl;
cin>>opc2;
switch (opc2)
{
char aldea[40];
case 1:
cout<<"El Departamento es: ALTA VERAPAZ\n";
cout<<"1.CHISEC "<<endl;
cout<<"2.COBAN "<<endl;
cout<<"3.TATIC "<<endl;
cout<<"4.SAN PEDRO CARCHA "<<endl;
cout<<"5.FRAY BARTOLOME DE LAS CASAS "<<endl;
cout<<"6.SAN AGUSTIN LANQUIN "<<endl;
cout<<"7.SANTA MARIA CAHABON "<<endl;
 
cout<<"8.CHAJAL "<<endl;
cout<<"9.TAMAHU "<<endl;
cout<<"10.TUCURU "<<endl;
cout<<"11.SANTA CRUZ VERAPAZ "<<endl;
cout<<"12.PANZOS "<<endl;
cout<<"13.RAXRUHA "<<endl;
cout<<"14.SAN JUAN CHAMELCO "<<endl;
cout<<"15.SANTA CATALINA LA TINTA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: ALTA VERAPAZ\n";
cout<<"El Municipio es: CHISEC\n";
cout<<"1)-CANDELARIA\n";
cout<<"2)-RAXRUJA\n";
cout<<"3)-RUBELQUICHE\n";
cout<<"\nIngrese una aldea\n";
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: ALTA VERAPAZ\n";
cout<<"El Municipio es: COBAN\n";
cout<<"1)-CHICUBAX\n";
cout<<"2)-CHIJOMON\n";
cout<<"3)-CHIONON\n";
cout<<"4)-CHITOCAN\n";
cout<<"5)-CHITU\n";
cout<<"\nIngrese una aldea\n";
cin>>aldea;
break;
case 3:
cout<<"El Municipio es: TATIC "<<endl;
cout<<"1)-Chiacal\n";
cout<<"2)-Cumbre (La)\n";
cout<<"3)-Cuyquel \n";
cout<<"4)-Flores (Las)\n";
cout<<"5)-Guaxpac \n";
cout<<"6)-Pajmolon\n";
cout<<"Ingrese una aldea\n";
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: ALTA VERAPAZ\n";
cout<<"El Municipio es: SAN PEDRO CARCHA "<<endl;
cout<<"1)-Cojaj \n";
cout<<"2)-Caquiton\n";
cout<<"3)-Chiptap Chicojl\n";
cout<<"4)-Chiqueleu\n";
cout<<"5)-Cenimlapur Grande\n";
cout<<"Ingrese una aldea\n";
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: ALTA VERAPAZ\n";
cout<<"El Municipio es: FRAY BARTOLOME DE LAS CASAS "<<endl;
cout<<"1)-Boloncó"<<endl;
cout<<"2)-Champeguano"<<endl;
cout<<"3)-Chimenja"<<endl;
cout<<"Ingrese una aldea\n";
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"EL Municipio es: SAN AGUSTIN LANQUIN"<<endl;
cout<<"1)-Cajux"<<endl;
cout<<"2)-Chamil"<<endl;
cout<<"3)-Chicanutz"<<endl;
cout<<"Ingrese una aldea\n";
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: SANTA MARIA CAHABON"<<endl;
cout<<"1)-Bolonco"<<endl;
cout<<"2)-Canatzun"<<endl;
cout<<"3)-Cantzum"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: CHAJAL"<<endl;
cout<<"1)-Las Conchas"<<endl;
cout<<"2)-Sepemech"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: TAMAHU"<<endl;
cout<<"1)-Chimolon"<<endl;
cout<<"2)-Chiquim Guaxcux"<<endl;
cout<<"3)-Naxombal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: TUCURU"<<endl;
cout<<"Tzunyul"<<endl;
cout<<"Ingrese una aldea";
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: SANTA CRUZ VERAPAZ"<<endl;
cout<<"1)-Acamal"<<endl;
cout<<"2)-Chicoyoj"<<endl;
cout<<"3)-Chiixajau"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: PANZOS"<<endl;
cout<<"1)-Cahaboncito"<<endl;
cout<<"2)-Sepur Limite"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: RAXRUHA"<<endl;
cout<<"1)-La flor Sesajal"<<endl;
cout<<"2)-San Miguel Sechochox"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: SAN JUAN CHAMELCO"<<endl;
cout<<"1)- Campat"<<endl;
cout<<"2)-Candelaria"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: ALTA VERAPAZ"<<endl;
cout<<"El Municipio es: SANTA CATARINA LA TINTA"<<endl;
cout<<"1)-Acamal"<<endl;
cout<<"2)-Chimolon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;

case 2:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"1.SANTA CRUZ EL CHOL "<<endl;
cout<<"2.CUBULCO "<<endl;
cout<<"3.GRANADOS "<<endl;
cout<<"4.PURULHA "<<endl;
cout<<"5.RABINAL "<<endl;
cout<<"6.SALAMA"<<endl;
cout<<"7.SAN JERONIMO "<<endl;
cout<<"8.SAN MIGUEL CHICAJ "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: SANTA CRUZ EL CHOL"<<endl;
cout<<"1)-Agua Caliente"<<endl;
cout<<"2)-El Apazote"<<endl;
cout<<"3)-La concepcion"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: CUBULCO"<<endl;
cout<<"1)-Cala"<<endl;
cout<<"2)-Canchel"<<endl;
cout<<"3)-Cimientos"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: GRANADOS"<<endl;
cout<<"1)-El Guapinol"<<endl;
cout<<"2)El Oratorio"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: PURULHA"<<endl;
cout<<"1)-Mocohan"<<endl;
cout<<"2)-Mojon Panima"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: RABINAL"<<endl;
cout<<"1)-Chirrum"<<endl;
cout<<"2)-Chiticoy"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: SALAMA"<<endl;
cout<<"1)-Chaguite"<<endl;
cout<<"2)-Chilasco"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: SAN JERONIMO"<<endl;
cout<<"1)-Astillero"<<endl;
cout<<"2)-Chile"<<endl;
break;
case 8:
cout<<"El Departamento es: BAJA VERAPAZ"<<endl;
cout<<"El Municipio es: SAN MIGUEL CHICAJ"<<endl;
cout<<"1)-Agua Caliente"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;

case 3:
cout<<"El Departamento es: CHIMALTENANGO "<<endl;
cout<<"1.ACATENANGO "<<endl;
cout<<"2.CHIMALTENANGO "<<endl;
cout<<"3.EL TEJAR "<<endl;
cout<<"4.PARRAMOS "<<endl;
cout<<"5.PATZICIA "<<endl;
cout<<"6.PATZUN"<<endl;
cout<<"7.POCHUTA "<<endl;
cout<<"8.SAN ANDRES ITZAPA "<<endl;
cout<<"9.SAN JOSE POAQUIL "<<endl;
cout<<"10.SAN JUAN COMALAPA "<<endl;
cout<<"11.SAN MARTIN JILOTEPEQUE "<<endl;
cout<<"12.SANTA APOLONIA "<<endl;
cout<<"13.SANTA CRUZ BALANYA "<<endl;
cout<<"14.TECPAN GUATEMALA "<<endl;
cout<<"15.YEPOCAPA "<<endl;
cout<<"16.ZARAGOZA"<<endl;

cout<<"\nSELECCIONE UN MUNICIPIO\n:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
 cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: ACATENANGO"<<endl;
cout<<"1)-El Campamento"<<endl;
cout<<"2)-El socorro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: EL TEJAR"<<endl;
cout<<"1)-San Miguel Morazan"<<endl;
cout<<"2)-San Miguelito"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: PARRAMOS"<<endl;
cout<<"1)-Chirijuyu"<<endl;
cout<<"2)-Pampay"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: PATZICIA"<<endl;
cout<<"1)-Cerritos Asuncion"<<endl;
cout<<"2)-El caman"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: PATZUN"<<endl;
cout<<"1)-Chichoy Alto"<<endl;
cout<<"2)-Chichoy Bajo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: POCHUTA"<<endl;
cout<<"No Tiene aldeas"<<endl;
break;
case 8:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: SAN ANDRES ITZAPA"<<endl;
cout<<"1)-Chicazanga"<<endl;
cout<<"2)-Chimachoy"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: SAN ANDRES POAQUIL"<<endl;
cout<<"1)-Hacienda Maria"<<endl;
cout<<"2)-Hacienda Vieja"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: SAN JUAN COMALAPA"<<endl;
cout<<"1)-Cojoljuyu"<<endl;
cout<<"2)-Panabajal"<<endl;
cout<<"Ingrese una Aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: SAN MARTIN JILOTEPEQUE"<<endl;
cout<<"1)-Chijocom"<<endl;
cout<<"2)-Choatalum"<<endl;
cout<<"INgrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: SANTA APOLONIA"<<endl;
cout<<"1)-Chipata"<<endl;
cout<<"2)-Chiquex"<<endl;
cout<<"Ingrese una Aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: SANTA CRUZ BALANYA"<<endl;
cout<<"1)-Chimasat"<<endl;
cout<<"INgrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: TECPAN GUATEMALA"<<endl;
cout<<"1)-Asuncion Manzanales"<<endl;
cout<<"2)-Caliaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: YEPOCAPA"<<endl;
cout<<"1)-Los Yucales"<<endl;
cout<<"2)-Panimache"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: CHIMALTENANGO"<<endl;
cout<<"El Municipio es: ZARAGOZA"<<endl;
cout<<"1)-Las lomas"<<endl;
cout<<"2)-Joya Grande"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;

case 4:
cout<<"El Departamento es: CHIQUIMULA "<<endl;
cout<<"1.CAMOTAN"<<endl;
cout<<"2.CHIQUIMULA "<<endl;
cout<<"3.ESQUIPULAS "<<endl;
cout<<"4.IPALA "<<endl;
cout<<"5.JOCOTAN "<<endl;
cout<<"6.OLOPA"<<endl;
cout<<"7.QUETZALTEPEQUE"<<endl;
 
cout<<"8.SAN JOSE LA ARADA "<<endl;
cout<<"9.SAN JUAN ERMITA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch(opc3)
{
case 1:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: CAMOTAN"<<endl;
cout<<"1)-Anisillo"<<endl;
cout<<"2)-Brasilar"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: CHIQUIMULA"<<endl;
cout<<"1)-El Conacaste"<<endl;
cout<<"2)-El Morral"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: ESQUIPULAS"<<endl;
cout<<"1)-Atulapa"<<endl;
cout<<"2)-Belen"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: IPALA"<<endl;
cout<<"1)-Amatillo"<<endl;
cout<<"2)-Cacahuatepeque"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: JOCOTAN"<<endl;
cout<<"1)-Agua Zarca"<<endl;
cout<<"2)-Colmenas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: OLOPA"<<endl;
cout<<"1)-El Carrizal"<<endl;
cout<<"2)-El Guayabo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: QUETZALTEPEQUE"<<endl;
cout<<"1)-Azacualpa"<<endl;
cout<<"2)-Chiramay"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: SAN JOSE LA ARADA"<<endl;
cout<<"1)-El Cerron"<<endl;
cout<<"2)-El Rincon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: CHIQUIMULA"<<endl;
cout<<"El Municipio es: SAN JUAN ERMITA"<<endl;
cout<<"1)-Rio Arriba"<<endl;
cout<<"2)-Salitron"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 5:
cout<<"El Departamento es: EL PROGRESO "<<endl;
cout<<"1.EL JICARO"<<endl;
cout<<"2.GUASTATOYA "<<endl;
cout<<"3.MORAZAN "<<endl;
cout<<"4.SAN AGUSTIN ACASAGUASCATLAN "<<endl;
cout<<"5.SAN ANTONIO LA PAZ "<<endl;
cout<<"6.SAN CRISTOBAL AGUASCATLAN"<<endl;
cout<<"7.SANARATE"<<endl;
cout<<"8.SANSARE "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
 
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: EL JICARO"<<endl;
cout<<"1)-Espiritu Santo"<<endl;
cout<<"2)-Ojo De Agua"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: GUASTATOYA"<<endl;
cout<<"1)-Anshagua"<<endl;
cout<<"2)-Casa Viejas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: MORAZAN"<<endl;
cout<<"1)-Carrizo Grande"<<endl;
cout<<"2)-El Coyote"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: SAN AGUSTIN ACASAGUASCATLAN"<<endl;
cout<<"1)-Chanrayo"<<endl;
cout<<"2)-Comaja"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: SAN ANTONIO LA PAZ"<<endl;
cout<<"1)-El Carmen"<<endl;
cout<<"2)-Chanrayo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: SAN CRISTOBAL ACASAGUASCATLAN"<<endl;
cout<<"1)-Los Chiqueros"<<endl;
cout<<"2)-Cruz del Valle"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: SANARATE"<<endl;
cout<<"1)-Barranquillo"<<endl;
cout<<"2)-Chichicaste"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: EL PROGRESO"<<endl;
cout<<"El Municipio es: SANSARE"<<endl;
cout<<"1)-Buena Vista"<<endl;
cout<<"2)-Estacion Jalapa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;

case 6:
cout<<"El Departamento es: ESCUINTLA "<<endl;
cout<<"1.ESCUINTLA "<<endl;
cout<<"2.GUANAGAZAPA "<<endl;
cout<<"3.IZTAPA "<<endl;
cout<<"4.LA DEMOCRACIA "<<endl;
cout<<"5.LA GOMERA "<<endl;
cout<<"6.MASAGUA "<<endl;
cout<<"7.NUEVA CONCEPCION "<<endl;
cout<<"8.PALIN "<<endl;
cout<<"9.SAN JOSE "<<endl;
cout<<"10.SAN VICENTE PACAYA "<<endl;
cout<<"11.SANTA LUCIA COTZUMALGUAPA "<<endl;
cout<<"12.SIQUINALA "<<endl;
cout<<"13.TIQUISATE "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: ESCUINTLA"<<endl;
cout<<"1)-El rodeo y Guadalupe"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
 cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: GUANAGAZAPA"<<endl;
cout<<"1)-Brito"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: IZTAPA"<<endl;
cout<<"1)-Buena Vista"<<endl;
cout<<"2)-El Castaños"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: LA DEMOCRACIA"<<endl;
cout<<"1)-El Pilar"<<endl;
cout<<"2)-Las Delicias"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: LA GOMERA"<<endl;
cout<<"1)-Ceiba Amelia"<<endl;
cout<<"2)-El Naranjo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: MASAGUA"<<endl;
cout<<"1)-El Milagro"<<endl;
cout<<"2)-Obero"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: NUEVA CONCEPCION"<<endl;
cout<<"1)-Barranquilla"<<endl;
cout<<"2)-El Laberinto"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: PALIN"<<endl;
cout<<"1)-La Periquera"<<endl;
cout<<"2)-San pedro el Carrizo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: SAN JOSE"<<endl;
cout<<"1)-La Barrita"<<endl;
cout<<"2)-El Laberinto"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: SAN VICENTE PACAYA"<<endl;
cout<<"1)-Bejucal"<<endl;
cout<<"2)-El Cedro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: SANTA LUCIA COTZUMALGUAPA"<<endl;
cout<<"1)-eL Transito"<<endl;
cout<<"2)-Las Playas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: SIQUINALA"<<endl;
cout<<"1)-El Nispero"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: ESCUINTLA"<<endl;
cout<<"El Municipio es: TIQUISATE"<<endl;
cout<<"1)-Barra Nahualate"<<endl;
cout<<"2)-El Semillero Barra Nahualate"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 7:
cout<<"El Departamento es: GUATEMALA "<<endl;
cout<<"1.AMATITLAN "<<endl;
cout<<"2.CHINAUTLA "<<endl;
cout<<"3.CHUARRANCHO "<<endl;
cout<<"4.FRAIJANES "<<endl;
cout<<"5.PALENCIA "<<endl;
cout<<"6.SAN JOSE DEL GOLFO "<<endl;
cout<<"7.SAN JOSE PINAULA "<<endl;
cout<<"8.SAN JUAN SACATEPEQUEZ "<<endl;
cout<<"9.SAN MIGUEL PETAPA "<<endl;
cout<<"10.SAN PEDRO AYAMPUC "<<endl;
cout<<"11.SAN PEDRO SACATEPEQUEZ "<<endl;
cout<<"12.SAN RAYMUNDO "<<endl;
cout<<"13.SANTA CATARINA PINULA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: AMATITLAN"<<endl;
cout<<"1)-Agua de las Minas"<<endl;
cout<<"2)-Calderas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: CHINAUTLA"<<endl;
cout<<"1)-Azacualpilla"<<endl;
cout<<"2)-Buena Vista"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: CHUARRANCHO"<<endl;
cout<<"1)-Chiquin"<<endl;
cout<<"2)-La Ceiba"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: FRAIJANES"<<endl;
cout<<"1)-El cerrito"<<endl;
cout<<"2)-Puerta del Señor"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: PALENCIA"<<endl;
cout<<"1)-El Triunfo"<<endl;
cout<<"2)-La Concepcion"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN JOSE DEL GOLFO"<<endl;
cout<<"1)-El Caulote"<<endl;
cout<<"2)-La Choleña"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN JOSE PINULA"<<endl;
cout<<"1)-Santa Ines Pinula"<<endl;
cout<<"2)-Cienega Grande"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN JUAN SACATEPEQUEZ"<<endl;
cout<<"1)-Comunidad Zet"<<endl;
cout<<"2)-Camino de San Pedro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN MIGUEL PETAPA"<<endl;
cout<<"1)-Santa Ines Petapa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN PEDRO AYAMPUC"<<endl;
cout<<"1)-El Carrizal"<<endl;
cout<<"2)-Encuentro Cucajol"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN PEDRO SACATEPEQUEZ"<<endl;
cout<<"1)-Buena Vista "<<endl;
cout<<"2)-Vista Hermosa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SAN RAYMUNDO"<<endl;
cout<<"1)-El Zarzal"<<endl;
cout<<"2)-Estancia Vieja"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: GUATEMALA"<<endl;
cout<<"El Municipio es: SANTA CATARINA PINULA"<<endl;
cout<<"1)-Carbonera"<<endl;
cout<<"2)-Basilar"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
 }
break;
case 8:
cout<<"El Departamento es: HUEHUETENANGO "<<endl;
cout<<"1.AGUACATAN "<<endl;
cout<<"2.CHIANTLA "<<endl;
cout<<"3.COLOTENANGO "<<endl;
cout<<"4.CONCEPCION HUISTA "<<endl;
cout<<"5.CUILCO "<<endl;
cout<<"6.HUEHUETENANGO"<<endl;
cout<<"7.JACALTENANGO "<<endl;
cout<<"8.LA DEMOCRACIA "<<endl;
cout<<"9.LA LIBERTAD "<<endl;
cout<<"10.MALACATANCITO "<<endl;
cout<<"11.NENTON "<<endl;
cout<<"12.SAN ANTONIO HUISTA "<<endl;
cout<<"13.SAN GASPAR IXCHIL "<<endl;
cout<<"14.SAN JUAN ATITAN "<<endl;
cout<<"15.SAN JUAN IXCOY "<<endl;
cout<<"16.SAN MATEO IXTATAN"<<endl;
cout<<"17.SAN MIGUEL ACATAN "<<endl;
cout<<"18.SAN PEDRO NECTA "<<endl;
cout<<"19.SAN RAFAEL LA INDEPENDENCIA "<<endl;
cout<<"20.SAN RAFAEL PETZAL "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: AGUACATAN"<<endl;
cout<<"1)-El Cipresal"<<endl;
cout<<"2)-El Limonar"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: CHIANTLA"<<endl;
cout<<"1)-Chancol"<<endl;
cout<<"2)-Chochal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: COLOTENANGO"<<endl;
cout<<"1)-Bella Vista"<<endl;
cout<<"2)-El Granadillo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: CONCEPCION HUISTA"<<endl;
cout<<"1)-Ajul"<<endl;
cout<<"2)-Bacu"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: CUILCO"<<endl;
cout<<"1)-Agua Dulce"<<endl;
cout<<"2)-Balta"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: HUEHUETENANGO"<<endl;
cout<<"1)-Zaculeu"<<endl;
cout<<"2)-Canabaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: JACALTENANGO"<<endl;
cout<<"1)-Catarina"<<endl;
cout<<"2)-Chapaltelaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: LA DEMOCRACIA"<<endl;
cout<<"1)-Buenos Aires Huixoc"<<endl;
cout<<"2)-Camoja Grande"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: LA LIBERTAD"<<endl;
cout<<"1)-Cerro Grande"<<endl;
cout<<"2)-El Aguacate"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: MALACATANCITO"<<endl;
cout<<"1)-Cacom"<<endl;
cout<<"2)-Cacum"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: NENTON"<<endl;
cout<<"1)-Aguacate"<<endl;
cout<<"2)-Cajatavi"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN ANTONIO HUISTA"<<endl;
cout<<"1)-El coyegual"<<endl;
cout<<"2)-El Pajal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN GASPAR IXCHIL"<<endl;
cout<<"1)-Coxton"<<endl;
cout<<"2)-Buena Vista"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN JUAN ATITAN"<<endl;
cout<<"1)-Camul"<<endl;
cout<<"2)-Checoche"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN JAUN IXCOY"<<endl;
cout<<"1)-Bacu"<<endl;
cout<<"2)-Canchicu"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN MATEO IXTATAN"<<endl;
cout<<"1)-Bulej"<<endl;
cout<<"2)-Chexjoj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 17:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN MIGUEL ACATAN"<<endl;
cout<<"1)-Akal Coya"<<endl;
cout<<"2)-Canicham"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 18:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN PEDRO NECTA"<<endl;
cout<<"No Tiene Aldeas"<<endl;
break;
case 19:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN RAFAEL LA INDEPENDENCIA"<<endl;
cout<<"1)-Achi"<<endl;
cout<<"2)-Ixcama"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 20:
cout<<"El Departamento es: HUEHUETENANGO"<<endl;
cout<<"El Municipio es: SAN RAFAEL PETZAL"<<endl;
cout<<"1)-El Oratorio"<<endl;
cout<<"2)-Tuishaina"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 9:
 cout<<"El Departamento es IZABAL "<<endl;
cout<<"1.EL ESTOR "<<endl;
cout<<"2.PUERTO BARRIOS "<<endl;
cout<<"3.MORALES "<<endl;
cout<<"4.LOS AMATES "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch(opc3)
{
case 1:
cout<<"El Departamento es: IZABAL"<<endl;
cout<<"El Municipio es: EL ESTOR"<<endl;
cout<<"1)-Bongo"<<endl;
cout<<"2)-Chichipate"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: IZABAL"<<endl;
cout<<"El Municipio es: PUERTO BARRIOS"<<endl;
cout<<"1)-Chachagualilla"<<endl;
cout<<"2)-Corozo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: IZABAL"<<endl;
cout<<"El Municipio es: MORALES"<<endl;
cout<<"1)-Amatillo"<<endl;
cout<<"2)-Animas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: IZABAL"<<endl;
cout<<"El Municipio es: LOS AMATES"<<endl;
cout<<"1)-El refugio"<<endl;
cout<<"2)-El Rico"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 10:
cout<<"El Departamento es: JALAPA "<<endl;
cout<<"1.JALAPA "<<endl;
cout<<"2.MATAQUESCUINTLA "<<endl;
cout<<"3.MONJAS "<<endl;
cout<<"4.SAN CARLOS ALZATATE "<<endl;
cout<<"5.SAN LUIS JILOTEPEQUE"<<endl;
cout<<"6.SAN PEDRO PINULA"<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: JALAPA"<<endl;
cout<<"El Municipio es: JALAPA"<<endl;
cout<<"1)-La Paz"<<endl;
cout<<"2)-La Ventura"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: JALAPA"<<endl;
cout<<"El Municipio es: MATAQUESCUINTLA"<<endl;
cout<<"1)-Agua Caliente"<<endl;
cout<<"2)-El Carrizal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: JALAPA"<<endl;
cout<<"El Municipio es: MONJAS"<<endl;
cout<<"1)-Los Achiotes"<<endl;
cout<<"2)-Agua Caliente"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: JALAPA"<<endl;
cout<<"El Municipio es: SAN CARLOS ALZATATE"<<endl;
cout<<"1)-Las Flores"<<endl;
cout<<"2)-Pino Zapaton"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: JALAPA"<<endl;
cout<<"El Municipio es: SAN LUIS JILOTEPEQUE"<<endl;
cout<<"1)-El Chaguiton"<<endl;
cout<<"2)-El Paterno"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: JALAPA"<<endl;
cout<<"El Municipio es: SAN PEDRO PINULA"<<endl;
cout<<"1)-Agua Zarca"<<endl;
cout<<"2)-Aguamecate"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 11:
cout<<"El Departamento es: JUTIAPA "<<endl;
cout<<"1.AGUA BLANCA "<<endl;
cout<<"2.ASUNCION MITA "<<endl;
cout<<"3.ATESCATEMPA "<<endl;
cout<<"4.COMAPA "<<endl;
cout<<"5.CONGUACO "<<endl;
cout<<"6.EL ADELANTO "<<endl;
cout<<"7.EL PROGRESO "<<endl;
cout<<"8.JALPATAGUA "<<endl;
cout<<"9.JUTIAPA "<<endl;
cout<<"10.MOYUTA "<<endl;
cout<<"11.PASACO "<<endl;
cout<<"12.QUEZADA "<<endl;
cout<<"13.SAN JOSE ACATEMPA "<<endl;
cout<<"14.SANTA CATARINA MITA "<<endl;
cout<<"15.YUPILTEPEQUE "<<endl;
cout<<"16.ZAPOTITLAN "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: AGUA BLANCA"<<endl;
cout<<"1)-Cañas"<<endl;
cout<<"2)-La tuna"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: ASUNCION MITA"<<endl;
cout<<"1)-Asuncion Grande"<<endl;
cout<<"2)-Cerro Blanco"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: ATESCATEMPA"<<endl;
cout<<"1)-Amatepeque"<<endl;
cout<<"2)-Contepeque"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: COMAPA"<<endl;
cout<<"1)-Caparrosa"<<endl;
cout<<"2)-El carrizo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: CONGUACO"<<endl;
cout<<"1)-El Barro"<<endl;
cout<<"2)-El Bran"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: EL ADELANTO"<<endl;
cout<<"1)-Chinamas"<<endl;
cout<<"2)-El Cajon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: El PROGRESO"<<endl;
cout<<"1)-Acequi"<<endl;
cout<<"2)-Ovejero"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: JALPATAGUA"<<endl;
cout<<"1)-Aceituno"<<endl;
cout<<"2)-Azulco"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: JUTIAPA"<<endl;
cout<<"1)-Amayito"<<endl;
cout<<"2)-Rio de la Virgen"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: MOYUTA"<<endl;
cout<<"1)-Barranca Honda"<<endl;
cout<<"2)-Bethania"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: PASACO"<<endl;
cout<<"1)-El Jobo"<<endl;
cout<<"2)-El Porvenir"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: QUEZADA"<<endl;
cout<<"1)-Las Quebradas"<<endl;
cout<<"2)-Los Comunes"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: SAN JOSE ACATEMPA"<<endl;
cout<<"1)-Calderas"<<endl;
cout<<"2)-Delicias"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: SANTA CATARINA MITA"<<endl;
cout<<"1)-Carbonera"<<endl;
cout<<"2)-Cuesta del Guayabo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: YUPILTEPEQUE"<<endl;
cout<<"1)-EL Amatillo"<<endl;
cout<<"2)-El Calvario"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: JUTIAPA"<<endl;
cout<<"El Municipio es: ZAPOTITLAN"<<endl;
cout<<"1)-Cerro Redondo"<<endl;
cout<<"2)-El Pianl I"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 12:
cout<<"El Departamento es: PETEN "<<endl;
cout<<"1.DOLORES "<<endl;
cout<<"2.FLORES "<<endl;
cout<<"3.LA LIBERTAD "<<endl;
cout<<"4.MELCHOR DE MENCOS "<<endl;
cout<<"5.POPTUN "<<endl;
cout<<"6.SAN ANDRES "<<endl;
cout<<"7.SAN BENITO "<<endl;
cout<<"8.SAN FRANCISCO "<<endl;
cout<<"9.SAN JOSE "<<endl;
cout<<"10.SAN LUIS "<<endl;
cout<<"11.SANTA ANA "<<endl;
cout<<"12.SAYAXCHE "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: DOLORES"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 2:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: FLORES"<<endl;
cout<<"1)-El Remate"<<endl;
cout<<"2)-San Miguel"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: LA LIBERTAD"<<endl;
cout<<"1)-Chiche"<<endl;
cout<<"2)-El Paraiso"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: MELCHOR DE MENCOS"<<endl;
cout<<"1)-Cidabenque"<<endl;
cout<<"2)-El Arenal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: POPTUN"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 6:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SAN ANDRES "<<endl;
cout<<"1)-Carmelita"<<endl;
cout<<"2)-Paso Caballos"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SAN BENITO"<<endl;
cout<<"1)-LA COBANERITA"<<endl;
cout<<"2)-San Antonio"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SAN FRANCISCO"<<endl;
cout<<"1)-San Juan De Dios"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SAN JOSE"<<endl;
cout<<"1)-Jobompiche"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
 cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SAN LUIS"<<endl;
cout<<"1)-Agua Negra"<<endl;
cout<<"2)-Chacte"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SANTA ANA"<<endl;
cout<<"1)-Juleque"<<endl;
cout<<"2)-El Mango"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: PETEN"<<endl;
cout<<"El Municipio es: SAYAXCHE"<<endl;
cout<<"1)-El Zapote"<<endl;
cout<<"2)-Paso de la Milpa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 13:
 cout<<"El Departamento es: QUETZALTENANGO "<<endl;
cout<<"1.QUETZALTENANGO "<<endl;
cout<<"2.ALMOLONGA "<<endl;
cout<<"3.CABRICAN "<<endl;
cout<<"4.CAJOLA "<<endl;
cout<<"5.CANTEL "<<endl;
cout<<"6.COATEPEQUE "<<endl;
cout<<"7.COLOMBA COSTA CUCA "<<endl;
cout<<"8.EL PALMAR "<<endl;
cout<<"9.FLORES COSTA CUCA "<<endl;
cout<<"10.GENOVA "<<endl;
cout<<"11.HUITAN "<<endl;
cout<<"12.LA ESPERANZA "<<endl;
cout<<"13.OLINTEPEQUE "<<endl;
cout<<"14.SAN JUAN OSTUNCALCO "<<endl;
cout<<"15.PALESTINA DE LOS ALTOS "<<endl;
cout<<"16.SALCAJA "<<endl;
cout<<"17.SAN MARCOS SIJA "<<endl;
cout<<"18.SAN FRANCISCO LA UNION "<<endl;
cout<<"19.SAN MARTIN SACATEPEQUEZ "<<endl;
cout<<"20.SAN MATEO "<<endl;
cout<<"21.SAN MIGUEL SIGÜILA "<<endl;
cout<<"22.SIBILIA "<<endl;
cout<<"23.ZUNIL "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: QUETZALTENANGO"<<endl;
cout<<"1)-Zunil"<<endl;
cout<<"2)-Cantel"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: ALMOLONGA"<<endl;
cout<<"1)-Los Baños"<<endl;
cout<<"2)-Las Delicias"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: CABRICAN"<<endl;
cout<<"1)-Chorjale"<<endl;
cout<<"2)-El Cerro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: CAJOLA"<<endl;
cout<<"1)-Cajola Chiquito"<<endl;
cout<<"2)-Chico"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: CANTEL"<<endl;
cout<<"1)-Chiriguac"<<endl;
cout<<"2)-Chuisuc"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: COATEPEQUE"<<endl;
cout<<"1)-Bethania"<<endl;
cout<<"2)-Chatuj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: COLOMBA COSTA CUCA"<<endl;
cout<<"1)-Toj tut"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: EL PALMAR"<<endl;
cout<<"1)-Nimina"<<endl;
cout<<"2)-San Miguelito Calahuache"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: FLORES COSTA CUCA"<<endl;
cout<<"1)-Barrios"<<endl;
cout<<"2)-Galvez"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: GENOVA"<<endl;
cout<<"1)-Zunil"<<endl;
cout<<"2)-Cantel"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: HUITAN"<<endl;
cout<<"1)-Bixben"<<endl;
cout<<"2)-Huitancito"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: LA ESPERANZA"<<endl;
cout<<"1)-Santa Rita"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: OLINTEPEQUE"<<endl;
cout<<"1)-Barrios"<<endl;
cout<<"2)-Justo Rufino Barrios"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SAN JUAN OSTUNCALCO"<<endl;
cout<<"1)-La Esperanza"<<endl;
cout<<"2)-La Granadilla"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: PALESTINA DE LOS ALTOS"<<endl;
cout<<"1)-El Carmen"<<endl;
cout<<"2)-El Eden"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SALCAJA"<<endl;
cout<<"1)-Marroquin"<<endl;
cout<<"2)-Santa Rita"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 17:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SAN CARLOS SIJA"<<endl;
cout<<"1)-Chiquibal"<<endl;
cout<<"2)-Cale"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 18:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SAN FRANCISCO LA UNION"<<endl;
cout<<"1)-Xeaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 19:
 cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SAN MARTIN SACATEPEQUEZ"<<endl;
cout<<"1)-El Rincon"<<endl;
cout<<"2)-La Estancia"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 20:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SAN MATEO"<<endl;
cout<<"1)-San Jose Pachimacho"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 21:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SAN MIGUEL SIGUILA"<<endl;
cout<<"1)-El llano"<<endl;
cout<<"2)-La Cienaga"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 22:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: SIBLIA"<<endl;
cout<<"1)-Chuicabal"<<endl;
cout<<"2)-El Rincon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 23:
cout<<"El Departamento es: QUETZALTENANGO"<<endl;
cout<<"El Municipio es: ZUNIL"<<endl;
cout<<"1)-La Estancia de la Cruz"<<endl;
cout<<"2)-Santa Maria de Jesus"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 14:
cout<<"El Departamento es: QUICHE "<<endl;
cout<<"1.SANTA CRUZ DEL QUICHE "<<endl;
cout<<"2.CANILLA "<<endl;
cout<<"3.CHAJUL "<<endl;
cout<<"4.CHICAMAN "<<endl;
cout<<"5.CHICE "<<endl;
cout<<"6.CHICHICASTENANGO "<<endl;
cout<<"7.CHINIQUE "<<endl;
cout<<"8.CUNEN "<<endl;
cout<<"9.IXCAN "<<endl;
cout<<"10.JOYOBAJ "<<endl;
cout<<"11.PACHALUM "<<endl;
cout<<"12.PATZITE "<<endl;
cout<<"13.SACAPULAS "<<endl;
cout<<"14.SAN ANDRES SAJCABAJA "<<endl;
cout<<"15.SAN ANTONIO ILOTENANGO "<<endl;
cout<<"16.SAN BARTOLOME JOCOTENANGO "<<endl;
cout<<"17.SAN JUAN COTZAL "<<endl;
cout<<"18.SAN PEDRO JOCOPILAS "<<endl;
cout<<"19.SANTA MARIA NEBAJ "<<endl;
cout<<"2O.USPANTAN "<<endl;
cout<<"21.ZACUALPA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
 {
case 1:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SANTA CRUZ DEL QUICHE"<<endl;
cout<<"1)-Chajbal"<<endl;
cout<<"2)-Chitabul"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CANILLA"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 3:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CHAJUL"<<endl;
cout<<"1)-Chacalte"<<endl;
cout<<"2)-Chel"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CHICAMAN"<<endl;
cout<<"1)-Beleju"<<endl;
cout<<"2)-Cala"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CHICE"<<endl;
cout<<"1)-Capuchinas "<<endl;
cout<<"2)-Choaxan I"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CHICHICASTENANGO"<<endl;
cout<<"No hay aldeas registradas"<<endl;
break;
case 7:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CHINIQUE"<<endl;
cout<<"1)-Agua Tibia II"<<endl;
cout<<"2)-Choaxan"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: CUNEN"<<endl;
cout<<"1)-Chiul"<<endl;
cout<<"2)-El Pericon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: IXCAN"<<endl;
cout<<"1)-Armenia"<<endl;
cout<<"2)-Ascencion Copon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: JOYOBAJ"<<endl;
cout<<"1)-Caquil"<<endl;
cout<<"2)-Chuquenum"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: PACHALUM"<<endl;
cout<<"1)-Cimarron"<<endl;
cout<<"2)-El Cipres"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: PATZITE"<<endl;
cout<<"1)-Chuamarcel"<<endl;
cout<<"2)-Pachaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SACAPULAS"<<endl;
cout<<"1)-El Jocote"<<endl;
cout<<"2)-Guantajau"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SAN ANDRES SAJCABAJA"<<endl;
cout<<"1)-Chinanton"<<endl;
cout<<"2)-Chinilla"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SAN ANTONIO ILOTENANGO"<<endl;
cout<<"No hay aldeas registradas"<<endl;
break;
case 16:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SAN BARTOLOME JOCOTENANGO"<<endl;
cout<<"1)-Los Cimientos"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 17:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SAN JUAN COTZAL"<<endl;
cout<<"1)-Asich"<<endl;
cout<<"2)-Cajixay"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 18:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SAN PEDRO JOCOPILAS"<<endl;
cout<<"1)-Santa Maria"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 19:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: SANTA MARIA NEBAJ"<<endl;
cout<<"1)-Acul"<<endl;
cout<<"2)-Bacalama"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 20:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: USPANTAN"<<endl;
cout<<"1)-Bellejub"<<endl;
cout<<"2)-Chicaman"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 21:
cout<<"El Departamento es: QUICHE"<<endl;
cout<<"El Municipio es: ZACUALPA"<<endl;
cout<<"1)-Arriquin"<<endl;
cout<<"2)-Chixocol"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 15:
 cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"1.RETALHULEU "<<endl;
cout<<"2.CHAMPERICO "<<endl;
cout<<"3.EL ASINTAL "<<endl;
cout<<"4.NUEVO SAN CARLOS "<<endl;
cout<<"5.SAN ANDRE VILLA SECA "<<endl;
cout<<"6.SAN FELIPE RETALHULEU "<<endl;
cout<<"7.SAN MARTIN ZAPOTITLAN "<<endl;
cout<<"8.SAN SEBASTIAN "<<endl;
cout<<"9.SANTA CRUZ MULUA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: RETALHULEU"<<endl;
cout<<"1)-Las cruces"<<endl;
cout<<"2)-Caballo Blanco"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: CHAMPERICO"<<endl;
cout<<"1)-Acapan"<<endl;
cout<<"2)-Aztlan"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: EL ASINTAL"<<endl;
cout<<"1)-El Xab"<<endl;
cout<<"2)-Sibana"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: NUEVO SAN CARLOS"<<endl;
cout<<"1)-Barrios"<<endl;
cout<<"2)-Granados"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: SAN ANDRE VILLA SECA"<<endl;
cout<<"1)-Becaja"<<endl;
cout<<"2)-Pajales"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: SAN FELIPE RETALHULEU"<<endl;
cout<<"1)-Fegua"<<endl;
cout<<"2)-La Piedad"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: SAN MATIN ZAPOTITLAN"<<endl;
cout<<"1)-Ajaxa"<<endl;
cout<<"2)-San Pedro Ajaxa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: SAN SEBASTIAN"<<endl;
cout<<"1)-San Luis"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: RETALHULEU"<<endl;
cout<<"El Municipio es: SANTA CRUZ MULUA"<<endl;
cout<<"1)-Boxoma"<<endl;
cout<<"2)-Lolita"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 16:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"1.ANTIGUA GUATEMALA "<<endl;
cout<<"2.CIUDAD VIEJA "<<endl;
cout<<"3.JOCOTENANGO "<<endl;
cout<<"4.MAGDALENA MILPAS ALTAS "<<endl;
cout<<"5.PASTORES "<<endl;
cout<<"6.SAN ANTONIO AGUAS CALIENTES "<<endl;
cout<<"7.SAN BARTOLOME MILPAS ALTAS "<<endl;
cout<<"8.SAN JUAN ALOTENANGO "<<endl;
cout<<"9.SAN LUCAS SACATEPEQUEZ "<<endl;
cout<<"10.SAN MIGUEL DUEÑAS "<<endl;
cout<<"11.SANTA CATARINA BARAHONA "<<endl;
cout<<"12.SANTA LUCIA MILPAS ALTAS "<<endl;
cout<<"13.SANTA MARIA DE JESUS "<<endl;
cout<<"14.SANTIAGO SACATEPEQUEZ "<<endl;
cout<<"15.SANTO DOMINGO XENACOJ "<<endl;
cout<<"16.SUMPANGO "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: ANTTGUA GUATEMALA"<<endl;
cout<<"1)-Los Encuentros"<<endl;
cout<<"2)-San Bartolomé Becerra"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: CIUDAD VIEJA"<<endl;
cout<<"1)-Cubo"<<endl;
cout<<"2)-Monroy"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: JOCOTENANGO"<<endl;
cout<<"1)-Los Cimientos"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: MAGADALENA MILPAS ALTAS"<<endl;
cout<<"1)- Buena Vista"<<endl;
cout<<"2)-San Miguel"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: PASTORES"<<endl;
cout<<"1)-San Lorenzo"<<endl;
cout<<"2)-San Lorenzo El Tejar"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN ANTONIO AGUAS CALIENTAS"<<endl;
cout<<"1)-Candelaria Siquival"<<endl;
cout<<"2)-Las Barrancas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN BARTOLOME MILPAS ALTAS"<<endl;
cout<<"nO HAY ALDEAS REGISTRADAS"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN JUAN ALOTENANGO"<<endl;
cout<<"No hay aldeas registradas"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN LUCAS SACATEPEQUEZ"<<endl;
cout<<"1)-Choacorral"<<endl;
cout<<"2)-Manzanillo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN MIGUEL DUEÑAS"<<endl;
cout<<"1)-Rosario"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTA CATARINA BARAHONA"<<endl;
cout<<"No hay aldeas registradas"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTA LUCIA MILPAS ALTAS"<<endl;
cout<<"1)-La Libertad"<<endl;
cout<<"2)-Santo Tomas Milpas Altas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTA MARIA DE JESUS"<<endl;
cout<<"No hay aldeas registradas"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTIAGO SACATEPEQUEZ"<<endl;
cout<<"1)-Santa Maria Cauque"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es:SANTO DOMINGO XENACOJ"<<endl;
cout<<"No hay aldeas registradas"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: SACATEPEQUEZ"<<endl;
cout<<"El Municipio es: SUMPANGO"<<endl;
cout<<"1)-Chipoton"<<endl;
cout<<"2)-El Milagro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 17:
cout<<"El Departamento es: SAN MARCOS "<<endl;
cout<<"1.SAN MARCOS "<<endl;
cout<<"2.AYTLA "<<endl;
cout<<"3.CATARINA "<<endl;
cout<<"4.COMITANCILLO "<<endl;
cout<<"5.CONCEPCION TUTUAPA "<<endl;
cout<<"6.EL QUETZAL "<<endl;
cout<<"7.EL TUMBADOR "<<endl;
cout<<"8.ESQUIPULAS PALO GORDO "<<endl;
cout<<"9.IXCHIGUAN "<<endl;
cout<<"10.LA BLANCA "<<endl;
cout<<"11.LA REFORMA "<<endl;
cout<<"12.MALACATAN "<<endl;
cout<<"13.NUEVO PROGRESO "<<endl;
cout<<"14.OCOS "<<endl;
cout<<"15.PAJAPITA "<<endl;
cout<<"16.RIO BLANCO "<<endl;
cout<<"17.SAN ANTONIO SACATEPEQUEZ "<<endl;
cout<<"18.SAN CRISTOBAL CUCHO "<<endl;
cout<<"19.SAN JOSE EL RODEO "<<endl;
cout<<"20.SAN JOSE OJETENAM "<<endl;
cout<<"21.SAN LORENZO "<<endl;
cout<<"22.SAN MIGUEL IXTAHUACAN "<<endl;
cout<<"23.SAN PABLO "<<endl;
cout<<"24.SAN PEDRO SACATEPEQUEZ "<<endl;
cout<<"25.SAN RAFAEL PIE DE LA CUESTA "<<endl;
cout<<"26.SIBINAL "<<endl;
cout<<"27.SIPACAPA "<<endl;
cout<<"28.TACANA "<<endl;
cout<<"29.TAJUMULCO "<<endl;
cout<<"30.TEJUTLA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN MARCOS"<<endl;
cout<<"1)-Agua Caliente Grande"<<endl;
cout<<"2)-Barranca de Galvez"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: AYTLA"<<endl;
cout<<"1)-Guarumo"<<endl;
cout<<"2)-Margaritas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: CATARINA"<<endl;
cout<<"1)-Bejucal"<<endl;
cout<<"2)-Buena Vista las Flores"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: COMITANCILLO"<<endl;
cout<<"1)-Chicajalaj"<<endl;
cout<<"2)-Chixal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: CONCEPCION TUTUAPA"<<endl;
cout<<"1)-Belajuyape"<<endl;
cout<<"2)-Chipomal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: EL QUETZAL"<<endl;
cout<<"1)-Chibuj"<<endl;
cout<<"2)-La Union"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: EL TUMBADOR"<<endl;
cout<<"1)-Amparo"<<endl;
cout<<"2)-Cielo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: ESQUIPULAS PALO GORDO"<<endl;
cout<<"1)-Ixquihuila"<<endl;
cout<<"2)-Fraternidad"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: IXCHIGUAN"<<endl;
cout<<"1)-Calapte"<<endl;
cout<<"2)-Choapequez"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: LA BLANCA"<<endl;
cout<<"1)-Chiquirines"<<endl;
cout<<"2)-Pueblo Nuevo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: LA REFORMA"<<endl;
cout<<"1)-Santa Clara"<<endl;
cout<<"2)-San Rafael Bocol"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: MALACATAN"<<endl;
cout<<"1)-Carmen"<<endl;
cout<<"2)-Olvido"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: NUEVO PROGRESO"<<endl;
cout<<"1)-Sombrerito"<<endl;
cout<<"2)-Conquista"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: OCOS"<<endl;
cout<<"1)-Limones"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 15:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: PAJAPITA"<<endl;
cout<<"1)-Concepcion Melendrez"<<endl;
cout<<"2)-Medio Monte"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: RIO BLANCO"<<endl;
cout<<"1)-El Durazno"<<endl;
cout<<"2)-Manzanas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 17:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN ANTONIO SACATEPEQUEZ"<<endl;
cout<<"1)-Barrancas"<<endl;
cout<<"2)-San Isidro Ixcolochi"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 18:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN CRISTOBAL CUCHO"<<endl;
cout<<"1)-Barranca Grande el Calvario"<<endl;
cout<<"2)-Barranca grande el centro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 19:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es:SAN JOSE EL RODEO"<<endl;
cout<<"1)-Cerro Redondo"<<endl;
cout<<"2)-Ixpeten"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 20:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN JOSE OJETENAM"<<endl;
cout<<"1)-Choanla"<<endl;
cout<<"2)-Esquipulas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 21:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN LORENZO"<<endl;
cout<<"1)-Cerra Grande"<<endl;
cout<<"2)-Corinto Zacapa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 22:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN MIGUEL IXTAHUACAN"<<endl;
cout<<"1)-Chilebe"<<endl;
cout<<"2)-Colmito"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 23:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN PABLO"<<endl;
cout<<"1)-Colima II"<<endl;
cout<<"2)-Matasano"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 24:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN PEDRO SACATEPEQUEZ"<<endl;
cout<<"1)-Chillani"<<endl;
cout<<"2)-Buena Vista"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 25:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SAN RAFAEL PIE DE LA CUESTA"<<endl;
cout<<"1)-Chayen"<<endl;
cout<<"2)-Feria"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 26:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SIBINAL"<<endl;
cout<<"1)-Chocabj"<<endl;
cout<<"2)-Cocabaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 27:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: SIPICAPA"<<endl;
cout<<"1)-Cancil"<<endl;
cout<<"2)-Canoj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 28:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: TACANA"<<endl;
cout<<"1)-Chanjule"<<endl;
cout<<"2)-Chequim"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 29:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: TAJUMULCO"<<endl;
cout<<"1)-Santa Lucia Talux"<<endl;
cout<<"2)-Tocuto"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 30:
cout<<"El Departamento es: SAN MARCOS"<<endl;
cout<<"El Municipio es: TEJUTLA"<<endl;
cout<<"1)-Armenia"<<endl;
cout<<"2)-Cancela Grande"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 18:
cout<<"El Departamento es: SANTA ROSA "<<endl;
cout<<"1.CUILAPA "<<endl;
cout<<"2.BARBERENA "<<endl;
cout<<"3.CASILLAS "<<endl;
cout<<"4.CHIQUIMULILLA "<<endl;
cout<<"5.GUAZACAPAN "<<endl;
cout<<"6.NUEVA SANTA ROSA "<<endl;
cout<<"7.ORATORIO "<<endl;
cout<<"8.PUEBLO NUEVA VIÑAS "<<endl;
cout<<"9.SAN JUAN TECUACO "<<endl;
cout<<"10.SAN RAFAEL LAS FLORES "<<endl;
cout<<"11.SANTA CRUZ NARANJO "<<endl;
cout<<"12.SANTA MARIA IXHUATAN "<<endl;
cout<<"13.SANTA ROSA DE LIMA "<<endl;
cout<<"14.TAXISCO "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: CUILAPA"<<endl;
cout<<"1)-El Molino"<<endl;
cout<<"2)-Barillas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: BARBERENA"<<endl;
cout<<"1)-Pino"<<endl;
cout<<"2)-Junquillo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: CASILLAS"<<endl;
cout<<"1)-Ayarza"<<endl;
cout<<"2)-Palmar"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: CHIQUIMULILLA"<<endl;
cout<<"1)-Casas Viejas"<<endl;
cout<<"2)-Ahumado"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: GUAZACAPAN"<<endl;
cout<<"1)-Astillero"<<endl;
cout<<"2)-Barro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: NUEVA SANTA ROSA"<<endl;
cout<<"1)-Cacalotepeque"<<endl;
cout<<"2)-Chapas"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: ORATORIO"<<endl;
cout<<"1)-Pinedad"<<endl;
cout<<"2)-La Pastoria"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: PUEBLO NUEVA VIÑAS"<<endl;
cout<<"1)-Buena Vista"<<endl;
cout<<"2)-El cuje"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: SAN JUAN TECUACO"<<endl;
cout<<"1)-La Cumbre"<<endl;
cout<<"2)-Ijorga"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: SAN RAFAEL LAS FLORES"<<endl;
cout<<"1)-El chan"<<endl;
cout<<"2)-El Copante"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: SANTA CRUZ NARANJO"<<endl;
cout<<"1)-Bosque"<<endl;
cout<<"2)-Carmen"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 12:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es:SANTA MARIA IXHUATAN"<<endl;
cout<<"1)-Cuuchuapa"<<endl;
cout<<"2)-Camalote"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: SANTA ROSA DE LIMA"<<endl;
cout<<"1)-Amberes"<<endl;
cout<<"2)-Belen"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: SANTA ROSA"<<endl;
cout<<"El Municipio es: TAXISCO"<<endl;
cout<<"1)-Cacahuito"<<endl;
cout<<"2)-Gariton"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 19:
 cout<<"El Departamento es: SOLOLA "<<endl;
cout<<"1.SOLOLA "<<endl;
cout<<"2.CONCEPCION "<<endl;
cout<<"3.NAHUALA "<<endl;
cout<<"4.PANAJACHEL "<<endl;
cout<<"5.SAN ANDRES SEMETABAJ "<<endl;
cout<<"6.SAN ANTONIO PALOPO "<<endl;
cout<<"7.SAN JOSE CHACAYA "<<endl;
cout<<"8.SAN JUAN LA LAGUNA "<<endl;
cout<<"9.SAN LUCAS TOLIMAN "<<endl;
cout<<"10.SAN MARCOS LA LAGUNA "<<endl;
cout<<"11.SAN PABLO LA LAGUNA "<<endl;
cout<<"12.SAN PEDRO LA LAGUNA "<<endl;
cout<<"13.SANTA CATARINA IXTAHUACAN "<<endl;
cout<<"14.SANTA CATARINA PALOPO "<<endl;
cout<<"15.SANTA CLARA LA LAGUNA "<<endl;
cout<<"16.SANTA CRUZ LA LAGUNA "<<endl;
cout<<"17.SANTA LUCIA UTATLAN "<<endl;
cout<<"18.SANTA MARIA VISITACION "<<endl;
cout<<"19.SANTIAGO ATITLAN "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SOLOLA"<<endl;
cout<<"1)-Chuaxic"<<endl;
cout<<"2)-Pixabaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: CONCEPCION"<<endl;
cout<<"1)-Patzutzun"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: NAHUALA"<<endl;
cout<<"1)-Palacal"<<endl;
cout<<"2)-Xejuyub"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: PANAJACHEL"<<endl;
cout<<"1)-Patanatic"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN ANDRES SEMETABAJ"<<endl;
cout<<"1)-Godinez"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN ANTONIO PALOPO"<<endl;
cout<<"1)-Agua Escondida"<<endl;
cout<<"2)-Xequistel"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN JOSE CHACAYA"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 8:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN JUAN LA LAGUNA"<<endl;
cout<<"1)-Palestina"<<endl;
cout<<"2)-Panyevar"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN LUCAS TOLIMAN"<<endl;
cout<<"1)-Pachitulul"<<endl;
cout<<"2)-Panimaquib"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN MARCOS LA LAGUNA"<<endl;
cout<<"No tiene aldea"<<endl;
break;
case 11:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN PABLO LA LAGUNA"<<endl;
cout<<"NO tiene aldea"<<endl;
break;
case 12:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SAN PEDRO LA LAGUNA"<<endl;
cout<<"NO tiene aldea"<<endl;
break;
case 13:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTA CATARINA IXTAHUACAN"<<endl;
cout<<"1)-Tzanpoj"<<endl;
cout<<"2)-Xepiacul"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 14:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTA CATARINA PALOPO"<<endl;
cout<<"No tiene aldea"<<endl;
break;
case 15:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTA CLARA LA LAGUNA"<<endl;
cout<<"1)-Paquip"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTA CRUZ LAGUNA"<<endl;
cout<<"1)-Tzununa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 17:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTA LUCIA UTATLAN"<<endl;
cout<<"1)-Pacup"<<endl;
cout<<"2)-Pajaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 18:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTA MARIA VISITACION"<<endl;
cout<<"No Tiene Aldeas"<<endl;
break;
case 19:
cout<<"El Departamento es: SOLOLA"<<endl;
cout<<"El Municipio es: SANTIAGO ATITLAN"<<endl;
cout<<"1)-San Antonio Chacaya"<<endl;
cout<<"2)-Cerra de Oro"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 20:
cout<<"El Departamento es: SUCHITEPEQUEZ "<<endl;
cout<<"1.MAZATENANGO "<<endl;
cout<<"2.CHICACAO "<<endl;
cout<<"3.CUYOTENANGO "<<endl;
cout<<"4.PATULUL "<<endl;
cout<<"5.PUEBLO NUEVO "<<endl;
cout<<"6.RIO BRAVO "<<endl;
cout<<"7.SAMAYAC "<<endl;
cout<<"8.SAN ANTONIO SUCHITEPEQUEZ "<<endl;
cout<<"9.SAN BERNARDINO "<<endl;
cout<<"10.SAN FRANCISCO ZAPOTITLAN "<<endl;
cout<<"11.SAN GABRIEL "<<endl;
cout<<"12.SAN JOSE EL IDOLO "<<endl;
cout<<"13.SAN JOSE LA MAQUINA "<<endl;
cout<<"14.SAN JUAN BUATISTA "<<endl;
cout<<"15.SAN LORENZO "<<endl;
cout<<"16.SAN MIGUEL PANAN "<<endl;
cout<<"17.SAN PABLO JOCOPILAS "<<endl;
cout<<"18.SANTA BARBARA "<<endl;
cout<<"19.SANTO DOMINGO SUCHITEPEQUEZ "<<endl;
cout<<"20.SANTO TOMAS LA UNION "<<endl;
cout<<"21.ZUNILITO "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl; 
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: MAZATENANGO"<<endl;
cout<<"1)-Tahuesco"<<endl;
cout<<"2)-Bracitos"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: CHICACAO"<<endl;
cout<<"1)-Chinan"<<endl;
cout<<"2)-Cutzan"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: CUYOTENANGO"<<endl;
cout<<"1)-Chacalte Sis"<<endl;
cout<<"2)-Chacalte Aparicio"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: PATULUL"<<endl;
cout<<"1)-Coyolate"<<endl;
cout<<"2)-Santa Delfina"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: PUEBLO NUEVO"<<endl;
cout<<"1)-Ixpaco"<<endl;
cout<<"2)-Los Sitios"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: RIO BRAVO"<<endl;
cout<<"1)-Morazan"<<endl;
cout<<"2)-Guatalon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAMAYAC"<<endl;
cout<<"No tiene Aldeas"<<endl;
break;
case 8:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN ANTONIO SUCHITEPEQUEZ"<<endl;
cout<<"1)-Barrios I"<<endl;
cout<<"2)-Cheguez"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN BERNARDINO"<<endl;
cout<<"1)-El Sauce"<<endl;
cout<<"2)-La Libertad"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN FRANCISCO ZAPOTITLAN"<<endl;
cout<<"1)-Buena Vista"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN GABRIEL"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 12:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN JOSE EL IDOLO"<<endl;
cout<<"1)-Nahualate"<<endl;
cout<<"2)-San Ramon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 13:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN JOSE LA MAQUINA"<<endl;
cout<<"No tiene aldeas"<<endl;
cout<<"Ingrese una aldea"<<endl;
break;
case 14:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN JUAN BAUTISTA"<<endl;
cout<<"No tiene Aldeas"<<endl;
break;
case 15:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN LORENZO"<<endl;
cout<<"1)-El Porvenir Talquicho"<<endl;
cout<<"2)-Cerra Grande"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 16:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN MIGUEL PANAN"<<endl;
cout<<"nO TIENE ALDEAS"<<endl;
break;
case 17:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SAN PABLO JOCOPILAS"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 18:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTA BARBARA"<<endl;
cout<<"1)-Chicol"<<endl;
cout<<"2)-Sacpic"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 19:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTO DOMINGO"<<endl;
cout<<"1)-Belen"<<endl;
cout<<"2)-Chibomba"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 20:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: SANTO TOMAS LA UNION"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
case 21:
cout<<"El Departamento es: SUCHITEPEQUEZ"<<endl;
cout<<"El Municipio es: ZUNILITO"<<endl;
cout<<"No tiene aldeas"<<endl;
break;
}
break;
case 21:
cout<<"El Departamento es: TOTONICAPAN "<<endl;
cout<<"1.TOTONICAPAN "<<endl;
cout<<"2.MOMOSTENANGO "<<endl;
cout<<"3.SAN ANDRES XECUL "<<endl;
cout<<"4.SAN BARTOLO AGUAS CALIENTES "<<endl;
cout<<"5.SAN CRISTOBAL TOTONICAPAN "<<endl;
cout<<"6.SAN FRANCISCO EL ALTO "<<endl;
cout<<"7.SANTA LUCIA LA REFORMA "<<endl;
cout<<"8.SANTA MARIA CHIQUIMULA "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: TOTONICAPAN"<<endl;
cout<<"1)-Pachoc"<<endl;
cout<<"2)-Paqui"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: MOMOSTENANGO"<<endl;
cout<<"1)-Pacuc"<<endl;
cout<<"2)-Pitzal"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: SAN ANDRES XECUL"<<endl;
cout<<"1)-Xejuyub"<<endl;
cout<<"2)-Demora"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: SAN BARTOLO AGUAS CALIENTES"<<endl;
cout<<"El Municipio es: TOTONICAPAN"<<endl;
cout<<"1)-Tierra Blanca"<<endl;
cout<<"2)-Tzanjon"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: SAN CRISTOBAL "<<endl;
cout<<"1)-San Ramon"<<endl;
cout<<"2)-Xesuc"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: SAN FRANCISCO EL ALTO"<<endl;
cout<<"1)-Paxixil"<<endl;
cout<<"2)-Pachaj"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: SANTA LUCIA LA REFORMA"<<endl;
cout<<"1)-Chiguan"<<endl;
cout<<"2)-Gualtux"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: TOTONICAPAN"<<endl;
cout<<"El Municipio es: SANTA MARIA CHIQUIMULA"<<endl;
cout<<"1)-Xecaja"<<endl;
cout<<"2)-Xenasa"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
case 22:
cout<<"El Departamento es: ZACAPA "<<endl;
cout<<"1.ZACAPA "<<endl;
cout<<"2.CABAÑAS "<<endl;
cout<<"3.ESTANZUELA "<<endl;
cout<<"4.GUALAN "<<endl;
cout<<"5.HUITE "<<endl;
cout<<"6.LA UNION "<<endl;
cout<<"7.RIO HONDO "<<endl;
cout<<"8.SAN DIEGO "<<endl;
cout<<"9.SAN JORGE "<<endl;
cout<<"10.TECULUTAN "<<endl;
cout<<"11.USUMATLAN "<<endl;
cout<<"\nSELECCIONE UN MUNICIPIO:" <<endl;
cin>>opc3;
switch (opc3)
{
case 1:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: ZACAPA"<<endl;
cout<<"1)-El Guacal"<<endl;
cout<<"2)-Cerro Grande"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 2:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: CABAÑAS"<<endl;
cout<<"1)-El Guayabo"<<endl;
cout<<"2)-El Rosario"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 3:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: ESTANZUELA"<<endl;
cout<<"1)-Chispan"<<endl;
cout<<"2)-Tres Pinos"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 4:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: GUALAN"<<endl;
cout<<"1)-Barbasco"<<endl;
cout<<"2)-Biafra"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 5:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: HUITE"<<endl;
cout<<"1)-El Jute"<<endl;
cout<<"2)-Santa Cruz"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 6:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: LA UNION"<<endl;
cout<<"1)-Capucal"<<endl;
cout<<"2)-Campanario"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 7:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: RIO HONDO"<<endl;
cout<<"1)-El Cenagal"<<endl;
cout<<"2)-Llano Verde"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 8:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: SAN DIEGO"<<endl;
cout<<"1)-Venecia"<<endl;
cout<<"2)-Santa Elena"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 9:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: SAN JORGE"<<endl;
cout<<"1)-La Fragua"<<endl;
cout<<"2)-Llano de Piedras"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 10:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: TECULUTAN"<<endl;
cout<<"1)-San Antonio"<<endl;
cout<<"2)-Vega del Coban"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
case 11:
cout<<"El Departamento es: ZACAPA"<<endl;
cout<<"El Municipio es: USUMATLAN"<<endl;
cout<<"1)-Huijo"<<endl;
cout<<"2)-Pueblo Nuevo"<<endl;
cout<<"Ingrese una aldea"<<endl;
cin>>aldea;
break;
}
break;
}{
cout<<"\n\nIngrese sus numero telefonicos\n";
cout<<"-Personal: "; cin>>num2;
cout<<"-Casa: \t"; cin>>num3;
cout<<"-Trabajo: "; cin>>num4;
cout<<"Ingrese su fecha de Nacimiento:(dd/Mes/yyyy) ";cin>>fecha;
cout<<"Ingrese su edad: "; cin>>num5;
cout<<"Anios de laborar en la empresa: "; cin>>num6;
cout<<"Ingrese el correo electronico: "; cin>>correo;
}break;
}
case 2:
{system("cls");
int num1, num2, num3;
cout<<"\n\2)-Ventas Por Empleado\n";
cout<<"Ingrese el codigo de venta\n";
cin>>num1;
cout<<"Ingrese el codigo de Empleado\n";
cin>>num2;
cout<<"Ingrese el numero de ventas por empleado\n";
cin>>num3;
cout<<"\nEl codigo de venta es:"<<num1<<endl;
cout<<"El codigo de empleado es: "<<num2<<endl;
cout<<"El numero de ventas por empleado es: "<<num3<<endl;
break;
}
case 3:
{system("cls");
cout<<"-----BIENVENIDO A NOMINA DE SUELDOS----"<<endl;
cout<<"--Aca podras ver detalles del sueldo--"<<endl;
cout<<"-----Selecciona tu puesto-----"<<endl;
cout<<"1.Administrador"<<endl;
cout<<"2.Vendedor"<<endl;
cout<<"3.Auxiliar de vendedor"<<endl;
cout<<"4.Encargado de Bodega"<<endl;
cout<<"5.Encargado de limpieza"<<endl;
cin>>op3;
switch(op3){
case 1:
{system("cls");
float bono, IGSS, Ornato, comision, IRTRA, ISR, Re;
string nom;
cout<<"Ingresa tu nombre"<<endl;
cin>>nom;
cout<<"Buen dia "<<nom<<" que bueno verlo administrador"<<endl;
salario=5000;
bono=500;
comision=150;
Ornato=50;
ISR=200;
IRTRA=50;
IGSS=1035.20;
Re=(salario+comision+bono)-(IGSS+ISR+IRTRA+Ornato);
cout<<"Tu salario es: "<<salario<<endl;
cout<<"Tu sueldo liquido queda: "<<Re<<endl;
cout<<"Presiona 1 para volver a menu"<<endl;
cin>>op4;
switch(op4){
case 1:
goto menu;
break;}
break;}
case 2:
{system("cls");
float bono, IGSS, Ornato, comision, IRTRA, ISR, Re;
string nom;
cout<<"Ingresa tu nombre"<<endl;
cin>>nom;
cout<<"Buen dia "<<nom<<" que bueno verlo vendedor"<<endl;
salario=3000;
bono=300;
comision=90;
Ornato=50;
ISR=120;
IRTRA=30;
IGSS=621.12;
Re=(salario+comision+bono)-(IGSS+ISR+IRTRA+Ornato);
cout<<"Tu salario es: "<<salario<<endl;
cout<<"Tu sueldo liquido queda: "<<Re<<endl;
cout<<"Presiona 1 para volver a menu"<<endl;
cin>>op4;
switch(op4){
case 1:
goto menu;
break;}
break;}
case 3:
{
float bono, IGSS, Ornato, comision, IRTRA, ISR, Re;
string nom;
cout<<"Ingresa tu nombre"<<endl;
cin>>nom;
cout<<"Buen dia "<<nom<<" que bueno verlo Auxiliar de vendedor"<<endl;
salario=2000;
bono=250;
comision=20;
Ornato=15;
ISR=40;
IRTRA=20;
IGSS=414.08;
Re=(salario+comision+bono)-(IGSS+ISR+IRTRA+Ornato);
cout<<"Tu salario es: "<<salario<<endl;
cout<<"Tu sueldo liquido queda: "<<Re<<endl;
cout<<"Presiona 1 para volver a menu"<<endl;
cin>>op4;
switch(op4){
case 1:
goto menu;
break;}
break;}
case 4:
{system("cls");
float bono, IGSS, Ornato, comision, IRTRA, ISR, Re;
string nom;
cout<<"Ingresa tu nombre"<<endl;
cin>>nom;
cout<<"Buen dia "<<nom<<" que bueno verlo Encargado de bodega"<<endl;
salario=2000;
bono=250;
comision=20;
Ornato=15;
ISR=40;
IRTRA=20;
IGSS=414.08;
Re=(salario+comision+bono)-(IGSS+ISR+IRTRA+Ornato);
cout<<"Tu salario es: "<<salario<<endl;
cout<<"Tu sueldo liquido queda: "<<Re<<endl;
cout<<"Presiona 1 para volver a menu"<<endl;
cin>>op4;
switch(op4){
case 1:
goto menu;
break;}
break;}
case 5:
{system("cls");
float bono, IGSS, Ornato, comision, IRTRA, ISR, Re;
string nom;
cout<<"Ingresa tu nombre"<<endl;
cin>>nom;
cout<<"Buen dia "<<nom<<" que bueno verlo Encargado de limpieza"<<endl;
salario=1000;
bono=250;
comision=10;
Ornato=15;
ISR=40;
IRTRA=10;
IGSS=207.04;
Re=(salario+comision+bono)-(IGSS+ISR+IRTRA+Ornato);
cout<<"Tu salario es: "<<salario<<endl;
cout<<"Tu sueldo liquido queda: "<<Re<<endl;
cout<<"Presiona 1 para volver a menu"<<endl;
cin>>op4;
switch(op4){
case 1:
goto menu;
break;}
break;}}
case 4:
{system("cls");
cout<<"----BIENVENIDO A REPORTES----"<<endl;
cout<<"----Que deseas hacer?----"<<endl;
cout<<"1.Reporte de Datos Generales de los empleados"<<endl;
cout<<"2.Reporte de Nomina General de empleados"<<endl;
cout<<"3.Reporte de salarios"<<endl;
cout<<"4.Salir"<<endl;
cin>>op2;
switch(op2){
case 1:
{system("cls");
cout<<"Ingrese tu reporte"<<endl;
goto menu;
break;}
case 2:
{system("cls");
cout<<"Ingrese tu reporte de la nomina de empleados"<<endl;
goto menu;
break;}
case 3:
{system("cls");
cout<<"Pon tu reporte de salario"<<endl;
goto menu;
break;}
case 4:
{
cout<<"perfecto, nos vemos en menu"<<endl;
system ("pause");
goto menu;
break;}
goto menu;
break;}

case 5:
{system("cls");
cout<<"Nos vemos en otra ocasion"<<endl;
cout<<"Grupo pro"<<endl;
cout<<"NASER MARTINEZ"<<endl;
cout<<"TULIO QUINTANA"<<endl;
system ("pause");
break;}

default:
{system("cls");
cout<<"ERROR SELECCIONE UNA OPCION VALIDA"<<endl;
cout<<"----Vuelve a intentar----"<<endl;
goto menu;
break;}}
}
}
}