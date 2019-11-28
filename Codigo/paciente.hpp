#ifndef CONTACTO_HPP
#define CONTACTO_HPP
#include <iostream>
using namespace std;
#include <vector>

// Estructura para las citas de los pacientes
typedef struct cita {
	string fecha;
	string hora;
	string motivo;
}Cita;

// Clase PACIENTE
class Paciente {
private:
	string nombre;
	string primer_Apellido;
	string segundo_Apellido;
	int DNI;
	string fecha_Nacimiento;
	int telefono;
	int n_Citas;
	vector <Cita> vector_Citas;

public:

	// Observadores de la clase paciente...
	string getNombre() {
		return nombre;
	}

	string getPrimer_Apellido() {
		return primer_Apellido;
	}

	string getSegundo_Apellido() {
		return segundo_Apellido;
	}

	int getDNI() {
		return DNI;
	}

	string getFecha_Nacimiento() {
		return fecha_Nacimiento;
	}

	int getTelefono() {
		return telefono;
	}

	int getN_Citas() {
		return n_Citas;
	}

	vector <Cita> getVector_Citas() {
		return vector_Citas;
	}

	// Modificadores de la clase paciente...
	void setNombre(string nombre) {
		nombre = nombre;
	}

	void setPrimer_Apellido(string apellido1) {
		primer_Apellido = apellido1;
	}

	void setSegundo_Apellido(string apellido2) {
		segundo_Apellido = apellido2;
	}

	void setDNI(int dni) {
		DNI = dni;
	}

	void setFecha_Nacimiento(string fn) {
		fecha_Nacimiento=fn;
	}

	void setTelefono(int telefono) {
		telefono = telefono;
	}

	void setN_Citas(int num) {
		n_Citas = num;
	}

	void setVector_Citas(vector <Cita> aux) {
		vector_Citas=aux;
	}

	// Otros metodos de la clase paciente...
	void insertarCita(const Cita &aux) {
		vector_Citas.push_back(aux);
		n_Citas++;
	}

	Paciente &operator=(const Paciente &aux) {
		nombre=aux.nombre;
		primer_Apellido=aux.primer_Apellido;
		segundo_Apellido=aux.segundo_Apellido;
		DNI=aux.DNI;
		telefono=aux.telefono;
		n_Citas=aux.n_Citas;
		fecha_Nacimiento=aux.fecha_Nacimiento;
		vector_Citas=aux.vector_Citas;

		return *this;

	}

	void pedirDatosPaciente() {
		Paciente aux;
		string nombre,ap1,ap2,fn;
		int dni,tlf;

		cout<<"Introducir los datos:"<<endl;
		cout<<"Introduce el nombre: ";
		cin>>nombre;
		cout<<"Introduce el primer apellido: ";
		cin>>ap1;
		cout<<"Introduce el segundo apellido: ";
		cin>>ap2;
		cout<<"Introduce el dni: ";
		cin>>dni;
		cout<<"Introduce la fecha de nacimiento (formato dd/mm/aaaa): ";
		cin>>fn;
		cout<<"Introduce el teléfono de contacto: ";
		cin>>tlf;

		(*this).setNombre(nombre);
		(*this).setPrimer_Apellido(ap1);
		(*this).setSegundo_Apellido(ap2);
		(*this).setDNI(dni);
		(*this).setFecha_Nacimiento(fn);
		(*this).setTelefono(tlf);
		(*this).setN_Citas(0);

		//contacto=aux;
	}

	void pedirCita(Cita &cita) {
		string f,h,m;

		cout << "Introduce la fecha de la cita con formato dd/mm/aaaa: " ;
		cin >> f;
		cout << "Introduce la hora de la cita con formato hh:mm: ";
		cin >> h;
		cout << "Introduce el motivo de la cita: ";
		cin >> m;

		cita.fecha=f;
		cita.hora=h;
		cita.motivo=m;

	}

	void imprimirPaciente() {
			cout<<endl;
			cout<<"Datos del paciente "<<(*this).getNombre()<<" "<<(*this).getPrimer_Apellido()<<" "<<(*this).getSegundo_Apellido()<<":\n";
			cout<<"DNI: "<<(*this).getDNI()<<"\n";
			cout<<"Fecha de naciemiento: "<<(*this).getFecha_Nacimiento()<<"\n";
			cout<<"Teléfono de contacto: "<<(*this).getTelefono()<<"\n";
			cout<<"Historial de citas: \n";

			vector<Cita>::const_iterator it;

			vector <Cita> citas=(*this).getVector_Citas();

			for (it =citas.begin(); it != citas.end(); ++it)
			{
				cout<<"    Fecha: "<<it->fecha<<"\n";
				cout<<"         Hora: "<<it->hora<<"\n";
				cout<<"         Motivo: "<<it->motivo<<"\n";
			}
	}
};


#endif
