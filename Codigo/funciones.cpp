#include "funciones.hpp"

int menu()
{
	int opcion;

	cout<<"=============================================="<<endl;
	cout<<"------------------- MENÚ -------------------\n";
	cout<<"  1: Listar todos los pacientes del sistema.\n";
	cout<<"  2: Insertar un paciente nuevo.\n";
	cout<<"  3: Añadir cita a paciente\n";
	cout<<"  4: Modificar los datos de un paciente.\n";
	cout<<"  5: Borrar un paciente.\n";
	cout<<"  6: Buscar un paciente.\n";
	cout<<"  7: Mostrar datos de un paciente.\n";
	cout<<endl;
	cout<<"  0: Apagar sistema.\n\n";
	cout<<"----------------------------------------------"<<endl;

	cout<<"Introduce la opción que desee: ";
	cin>>opcion;
	cout<<endl;
	cout<<"==============================================";

	cout<<endl;

	return opcion;
}