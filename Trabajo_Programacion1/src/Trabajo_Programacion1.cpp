#include "DtFecha.h"
#include "Usuario.h"
#include <iostream>
#include <string>
int main() {
	 int oper;
	 int cantUsr=3;
	 Usuario* listaUsuarios = new Usuario[cantUsr];
	 DtFecha fechaNacimiento1(20, 11, 2003);
	 DtFecha fechaNacimiento2(25, 5, 1994);
	 DtFecha fechaNacimiento3(11, 3, 2011);
	 listaUsuarios[0] = Usuario("Ramiro", 20, "Ramiro@gmail.com", fechaNacimiento1);
	 listaUsuarios[1] = Usuario("Juan", 10, "Juan@gmail.com", fechaNacimiento2);
	 listaUsuarios[2] = Usuario("Martin", 20, "Juan@gmail.com", fechaNacimiento3);
	 do {
	    cout<<  "-----------------------------------"<<endl;
	    cout << "-                                 -"<<endl;
	    cout<<  "-              MENU               -"<<endl;
	    cout<<  "-          1-CREAR USUARIO        -"<<endl;
	    cout<<  "-          2-VER USUARIOS         -"<<endl;
	    cout<<  "-          3-MODIFICAR USUARIO    -"<<endl;
	    cout<<  "-          4-ELIMINAR USUARIO     -"<<endl;
	    cout<<  "-          5-BUSCAR USUARIO       -"<<endl;
	    cout<<  "-          6-SALIR                -"<<endl;
	    cout << "-                                 -"<<endl;
	    cout<<  "-----------------------------------"<<endl;
	    cin >> oper;
	    switch (oper){
	    	case 1:{
	    		string Name;
	    		int Age;
	    		string Mail;
	    		int Day,Month,Year;
	    		cout << "Ingrese el nombre: ";
	    		cin >>Name;
	    		cout << "Ingrese la edad: ";
	    		cin >>Age;
	    		cout << "Ingrese el Mail: ";
	    		cin >>Mail;
	    		cout << "Ingrese el dia: ";
	    		cin >>Day;
	    		cout << "Ingrese el mes: ";
	    		cin >>Month;
	    		cout << "Ingrese el año: ";
	    		cin >>Year;
	    		DtFecha fechaNacimiento(Day, Month, Year);
	    		Usuario* listaUsuariosAux = new Usuario[cantUsr +1];
				for (int i = 0; i < cantUsr; ++i)
					listaUsuariosAux[i] = listaUsuarios[i];
				listaUsuariosAux[cantUsr] = Usuario(Name, Age, Mail, fechaNacimiento);
				delete[] listaUsuarios;
				listaUsuarios = listaUsuariosAux;
				cantUsr = cantUsr+1;
	    		break;
	    	};
	    	case 2:{
	    		 for (int i = 0; i < cantUsr; ++i) {
	    		        cout << "Usuario " << i << ":" << endl;
	    		        listaUsuarios[i].mostrarInformacion();
	    		 }
	    		 break;
	    	};
	    	case 3:{
	    		int Buscador;
				int Opp;
	    		for (int i = 0; i < cantUsr; ++i) {
					cout << "Usuario " << i << ": <";
					cout<<listaUsuarios[i].getNombre();
					cout <<"> "<< endl;
	    		}
	    		cout<<"Quiere buscar el usuario por ID(1) o por NOMBRE(2)?: ";
	    		cin>>Opp;
	    		switch (Opp){
	    			case 1:{
	    				cout<<"Ingrese el ID del usuario que quiere cambiar : ";
	    				cin>>Buscador;
	    				string Name;
						int Age;
						string Mail;
						int Day,Month,Year;
						cout << "Ingrese el nombre: ";
						cin >>Name;
						cout << "Ingrese la edad: ";
						cin >>Age;
						cout << "Ingrese el Mail: ";
						cin >>Mail;
						cout << "Ingrese el dia: ";
						cin >>Day;
						cout << "Ingrese el mes: ";
						cin >>Month;
						cout << "Ingrese el año: ";
						cin >>Year;
						DtFecha fechaNacimiento(Day, Month, Year);
						listaUsuarios[Buscador] = Usuario(Name, Age, Mail, fechaNacimiento);
	    				break;
	    			}
	    			case 2:{
	    				string nombreUsuario;
	    				cout<<"Ingrese el NOMBRE del usuario que quiere cambiar : ";
	    				cin>>nombreUsuario;
						for (int i = 0; i < cantUsr; ++i) {
							if (listaUsuarios[i].getNombre() == nombreUsuario) {
								 Buscador = i;
								 break;
								};
						}
						string Name;
						int Age;
						string Mail;
						int Day,Month,Year;
						cout << "Ingrese el nombre: ";
						cin >>Name;
						cout << "Ingrese la edad: ";
						cin >>Age;
						cout << "Ingrese el Mail: ";
						cin >>Mail;
						cout << "Ingrese el dia: ";
						cin >>Day;
						cout << "Ingrese el mes: ";
						cin >>Month;
						cout << "Ingrese el año: ";
						cin >>Year;
						DtFecha fechaNacimiento(Day, Month, Year);
						listaUsuarios[Buscador] = Usuario(Name, Age, Mail, fechaNacimiento);
						break;
	    			}
	    		}
	    	break;
	    	};
	    	case 4:{
	    		int Buscador;
				int Opp;
				for (int i = 0; i < cantUsr; ++i) {
					cout << "Usuario " << i << ": <";
					cout<<listaUsuarios[i].getNombre();
					cout <<"> "<< endl;
				}
				cout<<"Quiere buscar el usuario por ID(1) o por NOMBRE(2)?: ";
				cin>>Opp;
				switch (Opp){
					case 1:{
						cout<<"Ingrese el ID del usuario que quiere eliminar : ";
						cin>>Buscador;
						Usuario* listaUsuariosAux = new Usuario[cantUsr -1];
						for (int i = 0; i < cantUsr; ++i){
							if ( i < Buscador){
								listaUsuariosAux[i] = listaUsuarios[i];
							}
							if (i > Buscador){
								listaUsuariosAux[i-1] = listaUsuarios[i];
							}
						}
						delete[] listaUsuarios;
						listaUsuarios = listaUsuariosAux;
						cantUsr = cantUsr-1;
						break;
					}
					case 2:{
						string nombreUsuario;
						cout<<"Ingrese el NOMBRE del usuario que quiere cambiar : ";
						cin>>nombreUsuario;
						for (int i = 0; i < cantUsr; ++i) {
						if (listaUsuarios[i].getNombre() == nombreUsuario) {
							 Buscador = i;
							 break;
							};
						}
						Usuario* listaUsuariosAux = new Usuario[cantUsr -1];
						for (int i = 0; i < cantUsr; ++i){
							if ( i < Buscador){
								listaUsuariosAux[i] = listaUsuarios[i];
							}
							if (i > Buscador){
								listaUsuariosAux[i-1] = listaUsuarios[i];
							}
						}
						delete[] listaUsuarios;
						listaUsuarios = listaUsuariosAux;
						cantUsr = cantUsr-1;
						break;
					};
				}
	    		break;
	    	}
	    	case 5:{
	    		int Opp;
	    		cout<<"Quiere buscar por NOMBRE(1), EMAIL(2) o EDAD(3) : ";
	    		cin>>Opp;
	    		switch(Opp){
	    			case 1:{
	    				string nombreUsuario;
						cout<<"Ingrese el NOMBRE del usuario que quiere buscar : ";
						cin>>nombreUsuario;
	    				for (int i = 0; i < cantUsr; ++i) {
							if (listaUsuarios[i].getNombre() == nombreUsuario) {
									cout << "Usuario " << i << ":" << endl;
									listaUsuarios[i].mostrarInformacion();
							};
	    				}
	    				break;
	    			}
	    			case 2:{
	    				string nombreUsuario;
						cout<<"Ingrese el EMAIL del usuario que quiere buscar : ";
						cin>>nombreUsuario;
						for (int i = 0; i < cantUsr; ++i) {
							if (listaUsuarios[i].getEmail() == nombreUsuario) {
									cout << "Usuario " << i << ":" << endl;
									listaUsuarios[i].mostrarInformacion();
							};
						}
	    				break;
	    			}
	    			case 3:{
	    				int nombreUsuario;
						cout<<"Ingrese la EDAD del usuario que quiere buscar : ";
						cin>>nombreUsuario;
						for (int i = 0; i < cantUsr; ++i) {
							if (listaUsuarios[i].getEdad() == nombreUsuario) {
									cout << "Usuario " << i << ":" << endl;
									listaUsuarios[i].mostrarInformacion();
							};
						}
	    				break;
	    			}
	    		}
	    	break;
	    	}
	    	default:{
	    		cout << "Salinedo!";
				break;
			}
	    };
	 }
	 while(oper < 6);
	 return 0;
}
