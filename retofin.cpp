//reto D:
#include<iostream>
#include<stdlib.h>
using namespace std;

class Pymes{
    public:
        string nomempresa;
        string razonsocial;
        string direcc;
        int numtrabajadores;
        string director;
        float pesos;
    public: //atributos
        Pymes(){
            nomempresa=" ";
            razonsocial=" ";
            direcc=" ";
            numtrabajadores=0;
            director=" ";
            pesos=0;
        }
        Pymes(string _nomempresa, string _razonsocial, string _direcc, int _numtrabajadores,string _director,float _pesos){
            nomempresa=_nomempresa; //1
            razonsocial=_razonsocial; //2
            direcc=_direcc; //3
            numtrabajadores=_numtrabajadores;
            director=_director;
            pesos=_pesos;
        }
        void mostrarPymes(){
            cout<<"Nombre de la empresa: "<<nomempresa<<endl;
            cout<<"Razón social de la empresa: "<<razonsocial<<endl;
            cout<<"Dirección de la empresa: "<<direcc<<endl;
            cout<<"Núm. de trabajadores de la empresa: "<<numtrabajadores<<endl;
            cout<<"Director de la empresa: "<<director<<endl;
            cout<<"Cant. de pesos que genera al año: "<<pesos<<endl;
        }
        void agregarPymes(){
            cout<<"Nombre de la empresa: ";
            cin>>nomempresa;
            cout<<"Razón social de la empresa: ";
            cin>>razonsocial;
            cout<<"Dirección de la empresa: ";
            cin>>direcc;
            cout<<"Núm. de trabajadores de la empresa: ";
            cin>>numtrabajadores;
            cout<<"Director de la empresa: ";
            cin>>director;
            cout<<"Cant. de pesos que genera al año: ";
            cin>>pesos;
        }
};

class Trabajador:public Pymes{
    private: //atributos
        string nombre;
        int edad;
        string puesto;
        int sueldo;
    public: //métodos 
        Trabajador(){
            nombre=" ";
            edad=0;
            puesto=" ";
            sueldo=0;
        }
        Trabajador(string _nomempresa, string _razonsocial, string _direcc, string _nombre, int _edad, string _puesto, int _sueldo){
            nomempresa=_nomempresa;
            razonsocial=_razonsocial;
            direcc=_direcc;
            nombre=_nombre;
            edad=_edad;
            puesto=_puesto;
            sueldo=_sueldo;
        }
        void mostrarTrabajador(){
            cout<<"Nombre del trabajador: "<<nombre<<endl;
            cout<<"Edad del trabajador: "<<edad<<endl;
            cout<<"Puesto del trabajador: "<<puesto<<endl;
            cout<<"Sueldo del trabajador: "<<sueldo<<endl;
            cout<<"Nombre de la empresa: "<<nomempresa<<endl;
            cout<<"Razón social de la empresa: "<<razonsocial<<endl;
            cout<<"Dirección de la empresa: "<<direcc<<endl;
        }
        void agregarTrabajador(){
            cout<<"Nombre del trabajador: ";
            cin>>nombre;
            cout<<"Edad del trabajador: ";
            cin>>edad;
            cout<<"Puesto del trabajador: ";
            cin>>puesto;
            cout<<"Sueldo del trabajador: ";
            cin>>sueldo;
            cout<<"Nombre de la empresa: ";
            cin>>nomempresa;
            cout<<"Razón social de la empresa: ";
            cin>>razonsocial;
            cout<<"Dirección de la empresa: ";
            cin>>direcc;
        }
};

int main(){
    Pymes pymes1("Empresa #1","SA de CV","Calle 10",20,"Juan",1200);
    Pymes pymes2("Empresa #2","SA de CV","Calle 20",10,"Luis",3000);
    Trabajador trabajador1("Empresa #1","SA de CV","Calle 10","Paco",18,"gerente",1200);
    Trabajador trabajador2("Empresa #2","SA de CV","Calle 20","María",20,"cajera",1400);
    int n;
    
    while(n!=5){
        cout<<"Escoje una opción: \n"<<endl;
        cout<<"1. Agregar PYME \n";
        cout<<"2. Agregar trabajador \n";
        cout<<"3. Consultar PYME \n";
        cout<<"4. Consultar trabajador \n";
        cout<<"5. Cerrar \n";
        cout<<"Opción";
        cin>>n;
        int consult;
        switch(n){
            case 1: //agregarPymes
                pymes1.agregarPymes();
            case 2: //agregarTrabajador
                trabajador1.agregarTrabajador();
            case 3: //mostrarPymes
                cout<<"Selecciona la PYME que deseas consultar";
                cin>>consult;
                if(consult==1){
                    pymes1.mostrarPymes();
                }
                if(consult==2){
                    pymes2.mostrarPymes();
                }
                else{
                    break;
                }
            case 4: //mostrarTrabajador
                cout<<"Selecciona el trabajador que deseas consultar\n";
                cout<<"trabajador1\n";
                cout<<"trabajador2\n";
                cin>>consult;
                if(consult==1){
                    trabajador1.mostrarTrabajador();
                }   
                if(consult==2){
                    trabajador2.mostrarTrabajador();
                }
                else{
                    break;
                }
            case 5:
                cout<<"Fin del programa";
                break;
        }
    }
    return 0;
}
