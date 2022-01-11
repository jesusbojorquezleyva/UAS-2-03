#include <iostream>
#include <string>
using namespace std;
int contador=0;
/*string openFile()
{
	fstream iofile{ "Tareas.txt", ios::in | ios::out };
	if (!iofile)
	{
		cerr << "Error al abrir el archivo\n";
		return "123";
	}
}*/
struct Tareas
{
	string Nombre;
	string Descripcion;
	bool Terminada = false;
	string Fecha;
}Listadetareas[100];
int imprimirTareas()
{
	for (int i = 0;i < 99;i++)
	{
		if (i == 0 && Listadetareas[i].Terminada == false && Listadetareas[i].Nombre == "")
			cout << "Uffff! No hay Tareas Pendientes :)\n";
		if (Listadetareas[i].Terminada == false && Listadetareas[i].Nombre!="")
		{
			cout <<i<< ") Nombre: " << Listadetareas[50].Nombre<<", Descripcion: "<<Listadetareas[i].Descripcion<<", Fecha: "<<Listadetareas[i].Fecha;
		}
	}
	return 1;
}
int menu()
{
	cout << "Bienvenido a tu lista de tareas\n";
	imprimirTareas();
	return 1;
}
int borrarTarea()
{
	for (int i = 0; i <= 99; i++)
	{
		if (Listadetareas[i].Terminada == false)
		{
			for (int g = i;i <= 98;g++)
			{
				Listadetareas[g].Nombre = Listadetareas[g + 1].Nombre;
				Listadetareas[g].Descripcion = Listadetareas[g + 1].Descripcion;
				Listadetareas[g].Fecha = Listadetareas[g + 1].Fecha;
				Listadetareas[g].Terminada = Listadetareas[g + 1].Terminada;
			}
			Listadetareas[99].Descripcion = "";
			Listadetareas[99].Nombre = "";
			Listadetareas[99].Fecha = "";
			Listadetareas[99].Terminada = false;
			break;
		}
	}
	return 1;
}
int terminarTarea()
{
	int indice;
	if (Listadetareas[0].Terminada == false && Listadetareas[0].Nombre == "")
		cout << "Uffff! No hay Tareas Pendientes :)\n";
	else
	{
		cout << "Escribe el indice de la tarea\n";
		cin >> indice;
		Listadetareas[indice].Terminada = true;
	}
	return 1;
}
int crearTarea()
{
	char op;
	string nombre, descripcion, fecha;
	if (contador >= 99)
	{
		borrarTarea();
		contador -= 1;
	}
	cout << "Nombre de la tarea: ";
	getline(cin,nombre);
	cout << "\nDescripcion: ";
	getline(cin, descripcion);
	cout << "\nPara que fecha necesitas que te recuerde dd/mm/aaaa: ";
	getline(cin, fecha);
opincorrecta:
	cout << "Los datos son correctos? s/n\n";
	cin >> op;
	cin.ignore(32767, '\n');
	switch (op)
	{
	case 's':
		system("cls");
		Listadetareas[contador].Nombre = nombre;
		Listadetareas[contador].Descripcion = descripcion;
		Listadetareas[contador].Fecha = fecha;
		contador++;
		menu();
		break;
	case 'n':
		system("cls");
		menu();
	default:
		cout << "Opcion incorrecta, intente de nuevo\n";
		goto opincorrecta;
		break;
	}
	return 1;
}
int main()
{
	int op;
	char opc;
	menu();
	cout << "Que deseas hacer?\n";
	cout << "1)Terminar tarea\n2)Crear tarea\n3)Salir\n";
	cin >> op;
	cin.ignore(32676, '\n');
	switch (op)
	{
	case 1:
		imprimirTareas();
		terminarTarea();
		main();
		break;
	case 2:
		crearTarea();
		break;
	case 3:
	salir:
		cout << "Seguro que deseas salir?s/n\n";
		cin >> opc;
		if (opc == 's')
		{
			cout << "Hasta luego!!";
			return 1;
		}
		else if (opc == 'n')
		{
			system("cls");
			menu();
		}
		else
		{
			cout << "Opcion incorrecta!\n";
			goto salir;
		}
	default:
		cout << "Opcion incorrecta!!\n";
		menu();
		break;
	}
}