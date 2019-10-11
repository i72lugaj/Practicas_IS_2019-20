### Historial de citas

**Descripcion**: En el historial de citas se encontrara el dia y la causa de la cita, tratamiento, inicio, fin y dosis del mismo,
y por ultimo, las citas anterioes. Se podra tambien buscar a los pacientes por su nombre.

**Actores principales**: Secretario
**Actores secundarios**: Administrador y paciente

**Precondiciones**:

* Las citas sera la pagina principal del sistema
* Se pueden ir modificando los datos de las nuevas citas pero no de las anteriores

**Flujo principal**:
1. La lista de pacientes permanecera con un orden ya sea por orden alfabetico o por cita mas reciente
1. El administrador podra buscar por nombre y apellidos a los pacientes
1. El administrador podra ver todos los datos del paciente
1. El administrador podra ver la ultima cita que tuvo el paciente
1. El administrador no podra modificar el historial de citas

**Postcondiciones**:

* El administrador puede buscar al paciente
* El administrador puede observar toda la informacion necesaria sobre el paciente almacenada en el sistema
* Si hay algun error el secretario sera el encargado de modificar el error


**Flujos alternativos**:

* Si no hay ningun paciente con ese nombre dara error
