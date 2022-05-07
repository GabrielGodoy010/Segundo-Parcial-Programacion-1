#include <iostream>
#include <string>
#include"Estudinate.h"
using namespace std;

int main() {
	
    int selec = 0, bus = 0, id = 0, tel=0, gen=0;
    char op = 's';
    string car, nom, ap, dir, em, fec;

    do {
        system("cls");
        cout << "___________________________________________________________" << endl;
        cout << "                       MENU ESTUDIANTE 
        cout << "___________________________________________________________" << endl;
        cout << "     1. Ingrese Estudiante" << endl;
        cout << "     2. Ver Base De Datos" << endl;
        cout << "     3. Modificar Base De Datos" << endl;
        cout << "     4. Eliminar Base" << endl;
        cout << "     0. Salir" << endl;
        cin >> selec;
        cin.ignore();

        if (selec == 1) {
            char op = 's';
            system("cls");

            do {

                cout << "************* Datos Del Estudiante ***************" << endl;
                cout << " Digite Numero De Carnet:                ";
                getline(cin, car);
                cout << " Ingrese Nombres:               ";
                getline(cin, nom);
                cout << " Ingrese Apellidos:             ";
                getline(cin, ap);
                cout << " Ingrese Direccion:             ";
                getline(cin, dir);
                cout << " Ingrese Numero De Telefono:    ";
                cin >> tel;
                cin.ignore();
                cout << " Ingrese Genero:   ";
                cin>> gen;
                cin.ignore();
                cout << "  Ingrese Email:                 ";
                getline(cin, em);
                cout << " Ingrese Fecha De Nacimiento:   ";
                getline(cin, fec);

                Estudiante es = Estudiante(car, nom, ap, dir, tel, gen, em, fec, bus, id);
                es.crear();
                cout << endl << "Desea Agregar Otro Proveedor (s/n):  ";
                cin >> op;
                cin.ignore();
            } while (op == 's' || op == 'S');
        }

        else if (selec == 2) {

            Estudiante es = Estudiante();
            es.leer();

            system("pause");
        }

        else if (selec == 3) {
            system("cls");
            char b = 's';
            

            do {
            cout << " Ingrese ID Del Estudiante A Modificar:   ";
            cin >> id;

            Estudiante es = Estudiante(car,nom,ap,dir,tel,gen,em,fec,bus,id);
            es.actualizar();

            system("cls");
            cout << "Modificar estudiante (s/n): ";
            cin >> b;
            cin.ignore();

            } while (b == 's' || b == 'S');

        }

        else if (selec == 4) {

            system("cls");
            cout << "Ingrese ID Del estudiante que desea eliminar: ";
            cin >> id;
            cin.ignore();

            Estudiante es = Estudiante(car, nom, ap, dir, tel, gen, em, fec, bus, id);
            es.eliminar();
            system("pause");

        }


    } while (selec != 0);
	



	return 0;
}
