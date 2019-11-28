#ifndef AGENDA_HPP
#define AGENDA_HPP
#include "paciente.cpp"
using namespace std;

class Agenda:public Paciente {
private:
	vector <Paciente> _pacientes;

public:
	Agenda(){};

	// Modificadores de la clase Agenda...
	void setPacientes(vector<Paciente> vector) {
		_pacientes=vector;
	}

	// Observadores de la clase Agenda...
	vector<Paciente> getPacientes()const {
		return _pacientes;
	}

	// Otros metodos de la clase Agenda...
	bool insertar(const Paciente &aux) {
		_pacientes.push_back(aux);
		return true;
	}

	Paciente buscar(string nombre, string ap1, string ap2, bool &encon) {
		Paciente paciente;
		vector <Paciente> aux=(*this).getPacientes();

		for(int i=0; i<aux.size(); i++) {
			if(aux[i].getNombre()==nombre and aux[i].getPrimer_Apellido()==ap1 and aux[i].getSegundo_Apellido()==ap2) {
				encon=true;
				return aux[i];
			}
		}

		encon=false;
		return paciente;
	}

	bool borrarPaciente(Paciente paciente) {
		vector <Paciente> aux = (*this).getPacientes();
		string nombre=paciente.getNombre();
		string ap1=paciente.getPrimer_Apellido();
		string ap2=paciente.getSegundo_Apellido();
		int j;

		for(int i=0; i < (*this).getPacientes().size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getPrimer_Apellido()==ap1 and aux[i].getSegundo_Apellido()==ap2)
			{
				for(j=i; j < (*this).getPacientes().size()-1; j++)
				{
					aux[j]=aux[j+1];
				}
				aux[j]=aux[i];
				aux.pop_back();
				(*this).setPacientes(aux);
				return true;
			}
		}
		return false;
	}

	bool insertarCitaPaciente(Paciente paciente) {
		vector <Paciente> aux = (*this).getPacientes();
		string nombre=paciente.getNombre();
		string ap1=paciente.getPrimer_Apellido();
		string ap2=paciente.getSegundo_Apellido();
		Cita cita;

		for(int i=0; i < (*this).getPacientes().size(); i++) {
			if(aux[i].getNombre()==nombre and aux[i].getPrimer_Apellido()==ap1 and aux[i].getSegundo_Apellido()==ap2) {
				cout<<endl;
				cout << "INTRODUZCA LA NUEVA CITA" << endl;
				aux[i].pedirCita(cita);
				aux[i].insertarCita(cita);
				(*this).setPacientes(aux);
				return true;
			}
		}

		return false;
	}

	bool modificarDatosPaciente(Paciente paciente) {
		vector <Paciente> aux = (*this).getPacientes();
		string nombre=paciente.getNombre();
		string ap1=paciente.getPrimer_Apellido();
		string ap2=paciente.getSegundo_Apellido();
		int j;

		for(int i=0; i < (*this).getPacientes().size(); i++) {
			if(aux[i].getNombre()==nombre and aux[i].getPrimer_Apellido()==ap1 and aux[i].getSegundo_Apellido()==ap2) {
				cout<<endl;
				cout << "DATOS ACTUALES:"<<endl;
				aux[i].imprimirPaciente();
				cout<<endl;
				cout<<"INTRODUZCA LOS NUEVOS DATOS"<<endl;
				aux[i].pedirDatosPaciente();
				(*this).setPacientes(aux);
				return true;
			}
		}

		return false;
	}

	void listarPacientes() {
		for (int i=0; i < (*this).getPacientes().size(); i++) {
			(*this)._pacientes[i].imprimirPaciente();
		}
	}

};

#endif
