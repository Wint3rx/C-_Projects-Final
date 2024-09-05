#include <iostream>
#include <vector>

using namespace std;


void mostrarClases(const vector<string>& clases) {
    cout << "Clases:" << endl;
    for (int i = 0; i < clases.size(); i++) {
        cout << i + 1 << ". " << clases[i] << endl;
    }
    cout << "Presione 0 para volver a seleccionar otro ciclo." << endl;
}

int main() {
    int seleccionCarrera = 0;
    vector<string> carreras = {
        "Ingeniería en Sistemas",
        "Ingeniería Industrial",
        "Ingenieria Civil",
        "Arquitectura",
        "Medicina",
        "Psicologia",
        "Derecho",
        "Auditoria",
        "Criminologia",
        "Trabajo Social",
       
    };

    vector<vector<vector<string>>> clasesPorCarrera = {
        {
            
            {   
                "001 DESARROLLO HUMANO Y PROFESIONAL",
                 "002 METODOLOGÍA DE LA INVESTIGACIÓN",
                 "003 CONTABILIDAD I",
                 "004 INTRODUCCION A LOS SISTEMAS DE COMPUTO",
                 "005 LOGICA DE SISTEMAS",
              
            },
            
            {
                 "006 PRECALCULO",
                "007 ALGEBRA LINEAL", 
                "008 ALGORITMOS",
                "009 CONTABILIDAD II",
                 "010 MATEMATICA DISCRETA",
            },
            
            {
                 "011 FISICA I",
                 "012 PROGRAMACION I",
                 "013 CALCULO I",
                 "014 PROCESO ADMINISTRATIVO",
                 "015 DERECHO INFORMATICO",
            },
            {
                 "016 MICROECONOMÍA",
                 "017 PROGRAMACIÓN II",
                 "018 CÁLCULO II",
                 "019 ESTADÍSTICA I",
                 "020 FÍSICA II",  
            },
            {
               "021 MÉTODOS NUMÉRICOS",
              "022 PROGRAMACIÓN III",
              "023 EMPRENDEDORES DE NEGOCIOS",
             "024 ELECTRÓNICA ANALÓGICA",
             "025 ESTADÍSTICA II",
            },
            {
              "026 INVESTIGACIÓN DE OPERACIONES",
             "027 BASES DE DATOS I",
             "028 AUTÓMATAS Y LENGUAJES FORMALES",
             "029 SISTEMAS OPERATIVOS I",
            "030 ELECTRÓNICA DIGITAL",   
            },
            {
                "031 BASES DE DATOS II",
                 "032 ANÁLISIS DE SISTEMAS I",
                "033 SISTEMAS OPERATIVOS II",
                 "034 ARQUITECTURA DE COMPUTADORAS I",
                  "035 COMPILADORES",   
            },
            
            {
                "036 DESARROLLO WEB",
                 "037 ANÁLISIS DE SISTEMAS II",
                "038 REDES DE COMPUTADORAS I",
                "039 ÉTICA PROFESIONAL",
             "040 ARQUITECTURA DE COMPUTADORAS II",
          
            },
            {
              "041 ADMINISTRACIÓN DE TECNOLOGÍAS DE INFORMACIÓN",
                 "042 INGENIERÍA DE SOFTWARE",
                 "043 PROYECTO DE GRADUACIÓN I",
                 "044 REDES DE COMPUTADORAS II",
                 "045 INTELIGENCIA ARTIFICIAL",    
            },
            {
                 "046 TELECOMUNICACIONES",
                 "047 SEMINARIO DE TECNOLOGÍAS DE INFORMACIÓN",
                 "048 ASEGURAMIENTO DE LA CALIDAD DE SOFTWARE",
                 "049 PROYECTO DE GRADUACIÓN II",
                 "050 SEGURIDAD Y AUDITORÍA DE SISTEMAS"    
            },
            
        },
       
        {
            
            {
               "0904001 DESARROLLO HUMANO Y PROFESIONAL",
                "0904002 METODOLOGIA DE LA INVESTIGACION",
                "0904003 CONTABILIDAD I",
                "0904004 INTRODUCCION A LOS SISTEMAS DE COMPUTO",
                "0904005 LOGICA DE SISTEMAS",
            },
           
            {
               "0904006 PRECALCULO",
                "0904007 ALGEBRA LINEAL",
                "0904008 ALGORITMOS",
                "0904009 CONTABILIDAD II",
                "0904010 MATEMATICA DISCRETA",

            },
            {
                "0904011 FISICA I",
                "0904012 PROGRAMACION I",
                "0904013 CALCULO I",
                "0904014 PROCESO ADMINISTRATIVO",
                "0904015 DERECHO INFORMATICO", 
            },
            {
                "0904016 MICROECONOMIA",
                "0904017 PROGRAMACION II",
                "0904018 CALCULO II",
                "0904019 ESTADISTICA I",
                "0904020 FISICA II",    
            },
            
            {
                "0904021 METODOS NUMERICOS",
                "0904022 PROGRAMACION III",
                "0904023 EMPRENDEDORES DE NEGOCIOS",
                "0904024 ELECTRONICA ANALOGICA",
                "0904025 ESTADISTICA II",    
            },
            {
                "0904026 INVESTIGACION DE OPERACIONES",
                "0904027 BASES DE DATOS I",
                "0904028 AUTOMATAS Y LENGUAJES FORMALES",
                "0904029 SISTEMAS OPERATIVOS I",
                "0904030 ELECTRONICA DIGITAL",
  
            },
            
            {
                "0904031 BASES DE DATOS II",
                "0904032 ANALISIS DE SISTEMAS I",
                "0904033 SISTEMAS OPERATIVOS II",
                "0904034 ARQUITECTURA DE COMPUTADORAS I",
   
            },
            
            {
                "0904036 DESARROLLO WEB",
                "0904037 ANALISIS DE SISTEMAS II",
                "0904038 REDES DE COMPUTADORAS I",
                "0904039 ETICA PROFESIONAL",
                "0904040 ARQUITECTURA DE COMPUTADORAS II",
   
            },
            
            {
                "0904041 ADMINISTRACION DE TECNOLOGIAS DE INFORMACION",
                "0904042 INGENIERIA DE SOFTWARE",
                "0904043 PROYECTO DE GRADUACION I",
                "0904044 REDES DE COMPUTADORAS II",
                "0904045 INTELIGENCIA ARTIFICIAL",
 
            },
            
            {
                "0904046 TELECOMUNICACIONES",
                "0904047 SEMINARIOS DE TECNOLOGIAS DE INFORMACION",
                "0904048 ASEGURAMIENTO DE LA CALIDAD DEL SOFTWARE",
                "0904049 PROYECTO DE GRADUACION II",
                "0904050 SEGURIDAD Y AUDITORIA DE SISTEMAS"   
            },
        },
        
        {
           
            {
                "5210921 ALGEBRA SUPERIOR",
                "5210922 GEOMETRÍA PLANA Y DEL ESPACIO",
                "5210923 DESARROLLO HUMANO Y PROFESIONAL",
                "5210925 PROGRAMACIÓN PARA LA CIENCIA E INGENIERÍA I",
                "5210926 DIBUJO TÉCNICO",
            },
           
            {
                "5210927 COMUNICACIÓN CIENTÍFICA",
                "5210928 QUÍMICA INORGÁNICA I",
                "5210929 CÁLCULO I",
                "5210930 PROGRAMACIÓN PARA LA CIENCIA Y LA INGENIERÍA II",
                "5210931 TOPOGRAFÍA I",
                "5210932 DIBUJO ASISTIDO POR COMPUTADORA",

            },
            
            {
                 "5210933 CÁLCULO II",
                "5210935 ALGEBRA LINEAL I",
                "5210936 TOPOGRAFÍA II",
                "5210937 FÍSICA I",
                "5210938 DIBUJO CONSTRUCTIVO Y TOPOGRÁFICO 5210932",

            },
            
            {
                "5210940 ALGEBRA LINEAL II",
                "5210941 TOPOGRAFÍA III",
                "5210942 ECUACIONES DIFERENCIALES ORDINARIAS",
                "5210943 CÁLCULO VECTORIAL Y MULTIVARIABLE",
                "5210944 FÍSICA III",
  
            },
            
            {
                "5210945 MECÁNICA DE CUERPOS RÍGIDOS I",
                "5210946 ECUACIONES DIFERENCIALES PARCIALES",
                "5210947 ESTADÍSTICA Y PROBABILIDAD PARA LA CIENCIA E INGENIERÍA",
                "5210948 FÍSICA III",
                "5210949 GEOLOGÍA",    
            },
            
            {
                "5210951 LEGISLACIÓN APLICADA A INGENIERÍA CIVIL",
                "5210952 MECÁNICA DE SÓLIDOS I",
                "5210953 MECÁNICA DE CUERPOS RÍGIDOS II",
                "5210954 ANÁLISIS NUMÉRICO",
                "5210956 ECOLOGÍA Y SOSTENIBILIDAD AMBIENTAL",
                "5210974 CONTABILIDAD APLICADA A EMPRESAS CONSTRUCTORAS",
 
            },
           
            {
                "5210957 MECÁNICA DE SUELOS I",
                "5210958 MECÁNICA DE SOLIDOS II",
                "5210959 INGENIERÍA DE CARRETERAS I",
                "5210960 MECÁNICA DE FLUIDOS I",
                "5210961 TIPOLOGiA ESTRUCTURAL",
                "5210962 METODOS MATEMATICOS DE LA INGENIERÍA",
            },
           
            {
                "5210939 METODOLOGÍA DE LA INVESTIGACIÓN EN LA INGENIERÍA",
                "5210964 MECÁNICA DE SUELOS II",
                "5210965 MATERIALES DE CONSTRUCCIÓN",
                "5210966 INGENIERÍA DE CARRETERAS II",
                "5210967 HIDRÁULICA",
                "5210968 ANÁLISIS ESTRUCTURAL II", 
            },
            
            {
                "5210969 ANÁLISIS ESTRUCTURAL II",
                "5210970 INVESTIGACIÓN DE OPERACIONES APLICADO A INGENIERÍA CIVIL",
                "5210971 HIDROLOGÍA",
                "5210972 DISEÑO ESTRUCTURAS DE MADERAS Y MAMPOSTERÍA",
                "5210973 DISEÑO DE ESTRUCTURAS DE CONCRETO I",
 
            },
            
            {
                "5210963 INGENIERÍA ECONÓMICA Y TEORIA DE DECISIONES EN INGENIERÍA CIVIL",
                "5210976 DISEÑO DE ESTRUCTURAS DE CONCRETO II",
                "5210977 COSTOS PRESUPUESTOS Y AVALÚOS",
                "5210979 INGENIERÍA SANITARIA I",
                "5210980 INGENIERÍA DE TRÁNSITO Y SISTEMAS DE TRANSPORTE",
 
            },
            
            {
                "5210975 EMPRENDIMIENTO, INNOVACIÓN Y PROYECTOS",
                "5210978 PAVIMENTOS",
                "5210983 DISEÑO DE ESTRUCTURAS DE ACERO",
                "5210984 INGENIERIA SANITARIA II" 
            },
           
        },
        
        {
            
            {
                "003 TECNICAS DE EXPRESION GRAFICA I",
                "005 DIBUJO ARQUITECTONICO I",
                "101 METODOS Y TECNICAS DE DISEÑO",
                "203 MATEMATICAS I",
                "601 HUMANISTICA Y ESTETICA",
                "701 COMUNICACION ORAL Y ESCRITA",

            },
                
            {
                "009 TECNICAS DE EXPRESION GRAFICA II",
                "013 MODELOS DE ARQUITECTONICOS",
                "103 DISEÑO ARQUITECTONICO",
                "205 MATEMATICAS II",
                "501 COMPUTACION I",
                "605 DESARROLLO HUMANO Y PROFESIONAL",
            },
            
            
            {
                "011 DIBUJO TECNICO II",
                "015 TECNICAS DE PRESENTACION DE PROYECTOS",
                "105 DISEÑO ARQUITECTONICO II",
                "301 MATERIALES DE CONSTRUCCION",
                "705 METODOS DE INVESTIGACION",
                "801 ECOLOGIA",
 
            },
            
            {
                "017 GEOMETRIA",
                "019 DIBUJO CONSTRUCTIVO",
                "207 FISICA",
                "303 INTRODUCCION A LAS ESTRUCTURAS",
                "609 HISTORIA DE LA ARQUITECTURA I",
                "803 CONTROL AMBIENTAL", 
            },
            
            {
                "107 DISEÑO ARQUITECTONICO III",
                "307 SISTEMAS ESTRUCTURALES I",
                "309 SISTEMAS CONSTRUCTIVOS I",
                "503 COMPUTACION II",
                "613 HISTORIA DE LA ARQUITECTURA II",
                "615 LEYES Y NORMAS DE LA CONSTRUCCION Y AMBIENTALES", 
            },
            
            {
                "305 TOPOGRAFIA",
                "311 INSTALACIONES I",
                "313 SISTEMAS ESTRUCTURALES II",
                "401 ADMINISTRACION DE OBRAS I",
                "619 HISTORIA DE LA ARQUITECTURA III",
                "805 CONTROL AMBIENTAL II",
            },
            
            {
                "109 DISEÑO ARQUITECTONICO IV",
                "315 SISTEMAS CONSTRUCTIVOS II",
                "319 INSTALACIONES II",
                "321 SISTEMAS ESTRUCTURALES III",
                "621 PSICOLOGIA AMBIENTAL",
                "625 HISTORIA Y TEORIA DE LA ARQUITECTURA", 
            },
            
            {
                "111 DISEÑO ARQUITECTONICO V",
                "209 ESTADISTICA",
                "323 SUELOS",
                "325 INSTALACIONES III",
                "327 SISTEMAS ESTRUCTURALES IV",
                "403 ADMINISTRACION DE OBRAS II",
 
            },
            
            {
                "113 DISEÑO ARQUITECTONICO VI",
                "211 MATEMATICAS III",
                "329 SISTEMAS CONSTRUCTIVOS III",
                "405 SUPERVISION DE OBRAS I",
                "407 ADMINISTRACION DE OBRAS III",
                "627 URBANISMO I",
                "807 ARQUITECTURA AMBIENTAL", 
            },
            
            {
                "115 DISEÑO ARQUITECTONICO VII",
                "331 SISTEMAS ESTRUCTURALES V",
                "333 SISTEMAS ESTRUCTURALES IV",
                "411 MERCADOTECNIA",
                "707 METODOS DE INVESTIGACION II", 
            },
            
            {
                "117 DISEÑO ARQUITECTONICO VIII",
                "339 SISTEMAS CONSTRUCTIVOS V",
                "515 ECONOMIA Y ARQUITECTURA",
                "629 SOCIOLOGIA DE LA ARQUITECTURA",
                "631 URBANISMO II",
                "709 ANTEPROYECTO DE GRADUACION",
 
            },
            
            {
                "119 DISEÑO ARQUITECTONICO IX",
                "413 ANALISTA DE PROYECTOS",
                "519 CONSERVACION DE MONUMENTOS",
                "633 ETICA PARA ARQUITECTOS",
                "711 PROYECTO DE GRADUACION" 
            },
        },
        
        {
            
            {
                "Química Inorgánica",
                "Principios Clínicos",
                "Ciencias Exactas en la Salud",
                "Salud Mental I, bases biológicas de la conducta",
                "Desarrollo Humano y Profesional",
                "Metodología de la Investigación",
                "Biología Celular y Molecular Humana I",
                "Sistemas de Comunicación",
            },
          
            {
                "Física Médica I",
                "Química Orgánica",
                "Propedéutica Médica",
                "Salud Mental II, psicología de la anormalidad",
                "Bioestadística",
                "Embriología",
                "Biología Celular y Molecular Humana II",
                "Investigación I",
            },
            
            {
                "Realidad Nacional",
                "Física Médica II",
                "Salud Mental III, desarrollo psicológico del niño y del adolescente",
                "Bioquímica I",
                "Anatomía I",
                "Histología I",
                "Investigación II",
                "Semiología I", 
            },
            
            {
                "Atención Primaria en Salud",
                "Epidemiología",
                "Fisiología I",
                "Semiología II",
                "Bioquímica II",
                "Salud Mental IV, salud mental en atención primaria",
                "Anatomía II",
                "Histología II", 
            },
            
            {
                "Fisiología II",
                "Semiología III",
                "Salud Pública",
                "Farmacología I",
                "Bioquímica III",
                "Anatomía III",
                "Microbiología I",
                "Patología I", 
            },
            
            {
                "Rehabilitación",
                "Fisiología III",
                "Tecnología Clínica Aplicada",
                "Inmunología",
                "Farmacología II",
                "Microbiología II",
                "Patología II", 
            },
            
            {
                "Atención Ambulatoria y Pre-hospitalaria",
                "Atención Oftalmológica",
                "Medicina Forense",
                "Atención Neurológica",
                "Medicina Laboral",
            "Genética Humana", 
            },
            
            {
                "Medicina Interna I",
                "Bioética I",
 
            },
            
            {
                "Medicina Interna II",
                "Psiquiatría", 
            },
            
            {
                "Pediatría",
                "Gestión y Liderazgo de los Servicios de la Salud",
 
            },
            
            {
                "Cirugía",
                "Medicina Alternativa",
                "Trabajo de Graduación I", 
            },
            
            {
                "Ginecología y Obstetricia",
                "Trabajo de Graduación II",
 
            },
            
            {
                "P.P.A. Hospitalario",
                "Bioética II" 
            },
            
        },
        
        {
            
            {
                "100 FILOSOFÍA",
                "101 DESARROLLO HUMANO Y PROFESIONAL",
                "102 BIOLOGÍA HUMANA",
                "103 SOCIOLOGÍA GENERAL",
            },
            
            {
                "104 ANTROPOLOGÍA GENERAL",
                "105 LÓGICA FORMAL",
                "106 PSICOLOGÍA GENERAL",
                "107 METODOLOGÍA DE LA INVESTIGACIÓN",

            },
            
            {
                "108 ANATOMÍA Y FISIOLOGÍA DEL SISTEMA NERVIOSO",
                "109 ESTADÍSTICA FUNDAMENTAL",
                "110 PSICOLOGÍA EVOLUTIVA DEL NIÑO Y DEL ADOLESCENTE",
                "111 SEMIOLOGÍA PSICOLÓGICA",
            },
            
            {
                "112 PSICOMETRÍA I",
                "113 TEORÍAS DE LA PERSONALIDAD",
                "114 ESTADÍSTICA APLICADA A LA PSICOLOGÍA",
                "115 PSICOLOGÍA EVOLUTIVA DEL ADULTO",
            },
            
            {
                "116 PSICOMETRÍA II",
                "117 PSICOLOGÍA DEL DEPORTE Y LA RECREACIÓN",
                "118 PSICOLOGÍA SOCIAL",
                "119 NEUROFISIOLOGÍA",
            },
            
            {
                "120 PSICOLOGÍA CLÍNICA",
                "121 INTRODUCCIÓN A LA PSICOLOGÍA FORENSE",
                "122 INTRODUCCIÓN A LA PSICOLOGÍA INDUSTRIAL/ORGANIZACIONAL",
                "123 FUNDAMENTOS DE INFORMÁTICA",

            },
            
            {
                "124 SISTEMAS DE PSICOTERAPIAS",
                "125 PSICONEUROENDOCRINOLOGÍA",
                "126 PSICOPATOLOGÍA DEL ADULTO I",
                "127 PSICOPATOLOGÍA DEL NIÑO Y DEL ADOLESCENTE",
                "128 FUNDAMENTOS TEÓRICOS DE LA TERAPIA ANALÍTICA",

            },
            
            {
                "129 PROCESO TERAPEUTICO ANALÍTICO",
                "130 TÉCNICAS DE MODIFICACIÓN DE CONDUCTAS",
                "131 PSICOPATOLOGÍA DEL ADULTO II",
                "132 PSICOTERAPIA DEL NIÑO Y DEL ADOLESCENTE",
                "133 PSICOMETRÍA III",
            },
            
            {
                "134 FUNDAMENTOS DE PSICOFARMACOLOGÍA",
                "135 ELABORACIÓN DE TRABAJO DE GRADUACIÓN I",
                "136 PSICOEDUCACIÓN EN TRASTORNOS MENTALES",
                "137 PRÁCTICA I (NIÑOS Y ADOLESCENTES)",
                "138 MODELO PSICOTERAPEUTICO COGNITIVO CONDUCTUAL",

            },
            
            {
                "139 MODELO PSICOTERAPEUTICO HUMANÍSTICO EXISTENCIAL",
                "140 PSICOTERAPIA DE GRUPO",
                "141 PSICOTERAPIA DE PAREJA Y FAMILIAR",
                "142 PRÁCTICA II (ADULTOS)",
                "143 ELABORACIÓN DE TRABAJO DE GRADUACIÓN II"
            },
            
           
        },
        
        {
           
            {
                "1750101 INTRODUCCION AL DERECHO I",
                "1750102 SOCIOLOGIA DE GUATEMALA",
                "1750103 FILOSOFIA",
                "1750104 ECONOMIA",
                "1750105 METODOS Y TECNICAS DE INVESTIGACION",
            },
            
            {
                "1750106 INTRODUCCION AL DERECHO II",
                "1750107 LENGUAJE Y REDACCION",
                "1750108 LOGICA JURIDICA Y ETICA PROFESIONAL",
                "1750109 CRIMINOLOGIA Y CRIMINALISTICA",
                "1750110 DERECHO ROMANO Y ESPAÑOL",

            },
            
            {
                "1750111 DERECHO CIVIL I",
                "1750112 DERECHO PENAL I",
                "1750113 TEORIA GENERAL DEL ESTADO",
                "1750114 MEDICINA FORENSE",
                "1750115 DESARROLLO HUMANO Y PROFESIONAL",
            },
            
            {
                "1750116 DERECHO CIVIL II",
                "1750117 DERECHO PENAL II",
                "1750118 DERECHO CONSTITUCIONAL GUATEMALTECO",
                "1750119 TEORIA GENERAL DEL PROCESO",
                "1750120 ORATORIA FORENSE",
            },
            
            {
                "1750121 DERECHO CIVIL III",
                "1750122 DERECHO PENAL III",
                "1750123 DERECHO PROCESAL CONSTITUCIONAL",
                "1750124 DERECHO ADMINISTRATIVO I",
                "1750125 DERECHO DEL TRABAJO I",
            },
            
            {
                "1750126 DERECHO CIVIL IV",
                "1750127 DERECHO ADMINISTRATIVO II",
                "750128 DERECHO DEL TRABAJO II 1",
                "1750129 DERECHOS HUMANOS",
                "1750130 DERECHO PROCESAL PENAL I",
            },
            
            {
                "1750131 DERECHO CIVIL V",
                "1750132 DERECHO PROCESAL PENAL II",
                "1750133 DERECHO PROCESAL ADMINISTRATIVO",
                "1750134 DERECHO PROCESAL DEL TRABAJO",
                "1750135 DERECHO AMBIENTAL",

            },
            
            {
                "1750136 DERECHO CIVIL VI",
                "1750137 DERECHO MERCANTIL I",
                "1750138 DERECHO TRIBUTARIO",
                "1750140 DERECHO PROCESAL CIVIL Y MERCANTIL I",
                "1750141 CLINICA PROCESAL LABORAL",

            },
            
            {
                "1750139 DERECHO INOFMATICO",
                "1750143 DERECHO PROCESAL CIVIL Y MERCANTIL II",
                "1750144 DERECHO MERCANTIL II",
                "1750145 DERECHO NOTARIAL I",
                "1750147 CLINICA PROCESAL PENAL I",

            },
            
            {
                "1750148 DERECHO PROCESAL CIVIL Y MERCANTIL III",
                "1750149 DERECHO MERCANTIL III",
                "1750150 DERECHO REGISTRAL",
                "1750151 DERECHO NOTARIAL II",
                "1750153 CLINICA PREOCESAL PENAL II",

            },
            
            {
                "1750142 DERECHO INTERNACIONAL PUBLICO",
                "1750146 MEDIOS ALTERNOS DE SOLUCION DE CONFLICTOS",
                "1750152 DERECHO BANCARIO Y BURSATIL",
                "1750156 DERECHO NOTARIAL III",
                "1750157 CLINICA PROCESAL CIVIL I",
                "1750159 PROPIEDAD INTELECTUAL",
            },
            
            {
                "1750154 DERECHO INTERNACIONAL PRIVADO",
                "1750155 FILOSOFIA DEL DERECHO",
                "1750158 SEMINARIO DE TESIS",
                "1750160 DERECHO NOTARIAL IV",
                "1750161 CLINICA PROCESAL CIVIL II"
            },
            
            
                
            
      
        },
        
        {
             
            {
                "3217168 TÉCNICAS DE INVESTIGACIÓN",
                "3217169 MATEMÁTICA I",
                "3217170 INTRODUCCIÓN A LA ECONOMÍA",
                "3217171 DESARROLLO HUMANO Y PROFESIONAL",
            },
           
            {
                "3217172 CONTABILIDAD BÁSICA",
                "3217173 INTRODUCCIÓN AL DERECHO",
                "3217174 MICRO ECONOMÍA I",
                "3217175 MATEMÁTICA II 4",
            },
            
            {
                "3217179 MICRO ECONOMÍA II",
                "3217900 NORMAS INTERNACIONALES DE INFORMACIÓN FINANCIERA I 5 3217172",
                "3217901 CONTABILIDAD DE SOCIEDADES",
                "3217902 LEGISLACIÓN MERCANTIL",
            },
            
            {
                "3217178 MATEMÁTICA FINANCIERA I",
                "3217180 MÉTODOS ESTADÍSTICOS I",
                "3217903 NORMAS INTERNACIONALES DE INFORMACIÓN FINANCIERA II",
                "3217904 CONTABILIDAD AVANZADA I",
            },
            
            {
                "3217182 MÉTODOS ESTADÍSTICOS II",
                "3217905 MATEMÁTICA FINANCIERA II",
                "3217906 CONTABILIDAD AVANZADA II",
                "3217907 NORMAS INTERNACIONALES DE AUDITORÍA I",

            },
            
            {
                "3217185 FINANZAS PÚBLICAS",
                "3217908 CONTABILIDAD DE COSTOS I",
                "3217910 AUDITORÍA I",
                "3217911 NORMAS INTERNACIONALES DE AUDITORÍA II",

            },
            
            {
                "3217186 MONEDA Y BANCA",
                "3217909 LEGISLACIÓN TRIBUTARIA",
                "3217912 CONTABILIDAD DE COSTOS II",
                "3217914 AUDITORÍA II",
            },
            
            {
                "3217187 PRESUPUESTOS",
                "3217913 LEGISLACIÓN LABORAL",
                "3217915 ANÁLISIS E INTERPRETACIÓN DE ESTADOS FINANCIEROS",
                "3217917 AUDITORÍA III",

            },
            
            {
                "3217176 TEORÍA ADMINISTRATIVA",
                "3217177 ÉTICA PROFESIONAL",
                "3217918 CONTABILIDAD Y ORGANIZACIÓN BANCARIA",
                "3217921 AUDITORÍA DE SISTEMAS DE INFORMACIÓN",
            },
            
            {
                "3217916 PROCEDIMIENTOS LEGALES Y ADMINISTRATIVOS",
                "3217919 REDACCIÓN DE INFORMES TÉCNICOS",
                "3217920 CONTABILIDADES ESPECIALES",
                "3217922 AUDITORÍA ADMINISTRATIVA",
            },
            
            
            {
                "3217190 PROPEDÉUTICA DE TESIS",
                "3217191 ELABORACIÓN Y EVALUACIÓN DE PROYECTOS",
                "3217193 ADMINISTRACIÓN Y GESTIÓN DE RIESGOS",
                "3217923 SEMINARIO DE CONTABILIDAD",
                "3217924 SEMINARIO DE AUDITORÍA",

            },
            
            
            {
                "3217925 TRABAJO DE GRADUACIÓN I ",
                "3217926 TRABAJO DE GRADUACIÓN II"
            },
        },
      
        {
           
            {
                "001 INTRODUCCION AL DERECHO",
                "002 CRIMINALISTICA I",
                "003 CRIMINOLOGIA I",
                "004 SOCIOLOGÍA APLICADA",
                "005 DESARROLLO HUMANO Y PROFESIONAL",
            },
           
            {
                "006 TEORIA DEL DELITO",
                "007 CRIMINALISTICA II",
                "008 CRIMINOLOGIA II",
                "009 DERECHOS HUMANOS",
                "010 ORATORIA FORENSE",

            },
            
            {
                "011 DERECHO PENAL",
                "012 CRIMINALISTICA APLICADA",
                "013 CRIMINOLOGIA APLICADA",
                "014 MATEMÁTICA",
                "051 PSICOLOGÍA FORENSE",

            },
            
            
            {
                "016 DERECHO PROCESAL PENAL",
                "052 POLITICA CRIMINAL",
                "053 PSIQUIATRIA FORENSE",
                "054 SEGURIDAD PUBLICA Y PRIVADA",
                "020 METODOLOGIA DE LA INVESTIGACIÓN CIENTIFICA",

            },
            
            {
                "021 DERECHO CONSTITUCIONAL",
                "055 VICTIMOLOGIA",
                "056 CRIMINOGENESIS",
                "057 VIOLENCIA INFANTIL Y DE GENERO",
                "025 TÉCNICAS DE INVESTIGACIÓN CRIMINAL",

            },
             
            {
                "026 DERECHO INTERNACIONAL PUBLICO",
                "058 ENFOQUE PSICOLOGICO DEL ACOSO",
                "059 PSICOPATOLOGIAS CRIMINALES",
                "060 RELIGION, SU INCIDENCIA EN LA VICTIMOLOGIA Y DELINCUENCIA",
                "030 INFORMÁTICA Y MANEJO DE LA EVIDENCIA DIGITAL",

            },
            
            {
                "031 AUDITORIA FORENSE",
                "062 ANÁLISIS TIPOLOGICO CRIMINAL",
                "063 TÉCNICAS DE MEDIACION DE CONFLICTOS Y CONTROVERSIAS",
                "064 PROCESAMIENTO Y MANEJO DE BASES DE DATOS",
                "065 SISTEMA PENITENCIARIO Y POLITICAS DE REINSERCION",
            },
            
            {
                "061 APLICACION DE LA PENA, MEDIDAS SUSTITUTIVAS, IMPUTABILIDAD",
                "066 ANÁLISIS DE LA EVIDENCIA FISICA",
                "067 ANÁLISIS Y PREVENCION DEL TERRORISMO CONTEMPORANEO",
                "068 INTRODUCCION A LA ARQUEOLOGIA Y ANTROPOLOGIA SOCIAL",
                "040 GERENCIA Y ADMINISTRACIÓN",
            },
            
            {
                "041 ELECTIVO NACIONAL O INTERNACIONAL",
            },
            
            {
                "042 PRACTICA PROFESIONAL ASISTIDA"
            },
            
            
        },
        
        {
            
            {
                "401 FILOSOFÍA GENERAL",
                "402 ORIGEN Y DESARROLLO DE TRABAJO SOCIAL",
                "403 HISTORIA POLÍTICA Y SOCIAL DE GUATEMALA",
                "404 HERRAMIENTAS DE LA COMUNICACIÓN SOCIAL",

            },
            
            {
                "405 INTRODUCCIÓN A LAS CIENCIAS SOCIALES",
                "406 ESTUDIO DE LA REALIDAD SOCIAL DE GUATEMALA",
                "407 PSICOLOGÍA SOCIAL",
                "408 LÓGICA", 
            },
            
            {
                "409 ESTADÍSTICA APLICADA AL TRABAJO SOCIAL",
                "410 TEORÍA DEL ESTADO MODERNO",
                "411 INVESTIGACIÓN CIENTÍFICA ENFOCADA A LAS CIENCIAS SOCIALES I",
                "412 METODOLOGÍA PARA LA INTERVENCIÓN INDIVIDUAL Y FAMILIAR",

            },
            
            {
                "413 LEGISLACIÓN SOCIAL Y DERECHOS HUMANOS I",
                "414 DESARROLLO HUMANO Y PROFESIONAL",
                "415 METODOLOGÍA PARA LA INTERVENCIÓN GRUPAL",
                "416 INVESTIGACIÓN CIENTÍFICA ENFOCADA A LAS CIENCIAS SOCIALES II",

            },
            
            {
                "418 METODOLOGÍA PARA LA INTERVENCIÓN COMUNITARIA",
                "419 LEGISLACIÓN SOCIAL Y DERECHOS HUMANOS II",
                "420 FORMULACIÓN DE PROYECTOS",
                "421 EJERCICIO TÉCNICO SUPERVISADO I",

            },
            
            {
                "422 INTERCULTURALIDAD DE GUATEMALA",
                "424 EJERCICIO TÉCNICO SUPERVISADO II",
                "425 ECONOMÍA POLÍTICA",
                "426 SEMINARIO DE TRABAJO SOCIAL",
            },
            
            {
                "427 PRINCIPIOS FILOSÓFICOS DEL TRABAJO SOCIAL",
                "428 GERENCIA SOCIAL I",
                "429 POLÍTICAS PÚBLICAS Y SOCIALES",
                "430 INVESTIGACIÓN Y TRABAJO SOCIAL",

            },
            
            {
                "431 CAMPOS DE INTERVENCIÓN DE TRABAJO SOCIAL",
                "432 EVALUACIÓN Y MONITOREO DE PROYECTOS",
                "433 GERENCIA SOCIAL II",
                "434 TALLER: SISTEMATIZACIÓN DE EXPERIENCIAS DE TRABAJO SOCIAL",
 
            },
            
            {
                "435 ANTROPOLOGÍA SOCIAL",
                "436 PLANIFICACIÓN DEL DESARROLLO SOCIAL I",
                "437 TRABAJO DE GRADUACIÓN I",
                "438 PRÁCTICA PROFESIONAL I",

            },
            
            {
                "439 PLANIFICACIÓN DEL DESARROLLO SOCIAL II",
                "440 AUDITORÍA SOCIAL",
                "441 EVALUACIÓN Y RESOLUCIÓN DE CONFLICTOS",
                "442 TRABAJO DE GRADUACIÓN II"
            },
            
        },
        
        
    };

    do {
        cout << "MENU DE CARRERAS" << endl;
        for (int i = 0; i < carreras.size(); i++) {
            cout << i + 1 << ". " << carreras[i] << endl;
        }
        cout << carreras.size() + 1 << ". Cerrar el programa" << endl;
        cout << "Seleccione una carrera (1-" << carreras.size() + 1 << "): ";
        cin >> seleccionCarrera;

        if (seleccionCarrera >= 1 && seleccionCarrera <= carreras.size()) {
            int seleccionCiclo = 0;
            do {
                cout << "Seleccione su Ciclo Universitario" << endl;
                for (int ciclo = 1; ciclo <= clasesPorCarrera[seleccionCarrera - 1].size(); ciclo++) {
                    cout << ciclo << ". Ciclo " << ciclo << endl;
                }
                cout << "Presione 0 para volver a seleccionar otra carrera." << endl;
                cout << "Seleccione un ciclo (1-" << clasesPorCarrera[seleccionCarrera - 1].size() << "): ";
                cin >> seleccionCiclo;

                if (seleccionCiclo >= 1 && seleccionCiclo <= clasesPorCarrera[seleccionCarrera - 1].size()) {
                    mostrarClases(clasesPorCarrera[seleccionCarrera - 1][seleccionCiclo - 1]);
                    int volverCiclo;
                    cin >> volverCiclo;
                    if (volverCiclo == 0) {
                        break;
                    }
                } else if (seleccionCiclo == 0) {
                    break; // Salir del bucle y volver a seleccionar una carrera
                } else {
                    cout << "Selección no válida. Intente nuevamente." << endl;
                }
            } while (true);
        } else if (seleccionCarrera == carreras.size() + 1) {
            cout << "Cerrando el programa." << endl;
            break; // Salir del programa
        } else {
            cout << "Selección no válida. Intente nuevamente." << endl;
        }
    } while (true);

    return 0;
}