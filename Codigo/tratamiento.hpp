#ifndef _TRATAMIENTO_HPP_
#define _TRATAMIENTO_HPP_
#include <iostream>
using namespace std;
#include <vector>

typedef struct medicamento {
  string dosis;
  string nombre;
}Medicamento;

class Tratamiento {
private:
  std::vector<Medicamento> _medicamentos;
  string fecha_Inicio;
  string fecha_Final;
  int n_Medicamentos;

public:
  // Observadores de la clase tratamiento
  string getInicio() {
    return fecha_Inicio;
  }

  string getFinal() {
    return fecha_Final;
  }

  vector <Medicamento> getMedicamentos() {
    return _medicamentos;
  }

  int getN_Medicamentos() {
    return n_Medicamentos;
  }

  // Modificicadores de la clase tratamiento
  void setInicio(string inicio) {
    fecha_Inicio = inicio;
  }

  void setFinal(string final) {
    fecha_Final = final;
  }

  void setMedicamentos(vector <Medicamento> aux) {
    _medicamentos = aux;
  }

  void setN_Medicamentos(int aux) {
    n_Medicamentos = aux;
  }

  // Otros metodos de la clase tratamiento...
  void insertarMedicamento(const Medicamento &aux) {
    string aux1, aux2;

    cout << "Introduce el nombre del medicamento:";
    cin >> aux1;
    cout << "Introduce la dosis del medicamento";
    cin >> aux2;

    aux.nombre = aux1;
    aux.dosis = aux2;

    _medicamentos.push_back(aux);
    n_Medicamentos++;
  }

};

#endif
