#include<iostream>
#include<string> //Libreria para poder utilizar el string y el getline
using namespace std;

int main() {
	int opcion;
	int menu;
	int numc;
	string nombre;
	string hora;
	string tratamiento;
	string desc;
	float preuni;
	float cantidad;
	float precio;
	float total;
	int ncita; //Nueva cita

	do {
		cout << "*** MEJORANDO SONRISAS ***" << endl;
		//MENU
		cout << "Agendar cita" << endl;                    //EL MENU NO TIENE NUMEROS PORQUE SE EXPLICARA SU UTILIZACION EN EL MANUAL DE USUARIO
		cout << "Modificar cita" << endl;
		cout << "Eliminar cita" << endl;
		cout << "Lista de citas vigentes" << endl;
		cout << "Limpiar pantalla" << endl;
		cout << "Salir" << endl;

		cin >> opcion;

		switch (opcion) //SWITCH PARA HACER FUNCIONAR EL MENU
		{
		case 1:   //SE UTILIZA UN DO WHILE EN LA OPCION 1 PARA QUE SE PUEDA REALIZAR UN CICLO EN DONDE EL USUARIO PUEDA INSERTAR UNA NUEVA CITA
			do{                
			cout << "Consecutivo del numero de cita" << endl;
			cin >> numc;

			cout << "Nombre del paciente" << endl;
			cin >> nombre;
			getline(cin, nombre);  //EL GETLINE SIRVE PARA QUE EL PROGRAMA PUEDA LEER LOS ESPACIOS

			cout << "Hora del tratamiento" << endl;
			cin >> hora;
			getline(cin, hora);

			cout << "Nombre del tratamiento" << endl;
			cin >> tratamiento;
			getline(cin, tratamiento);

			cout << "Descripcion" << endl;
			cin >> desc;
			getline(cin, desc);

			cout << "Precio unitario tratamiento" << endl;
			cin >> preuni;

			cout << "Cantidad del tratamiento" << endl;
			cin >> cantidad;

			cout << "Precio unitario" << endl;
			cin >> precio;

			cout << "Total" << endl;
			cin >> total;

			//AQUI SE LE HACE LA PREGUNTA AL USUARIO SI DESEA INGRESAR UNA NUEVA CITA, AL IGUAL QUE EN EL MENU, NO LE INDIQUE EL NUMERO PARA ELEGIR 
			//OPCION, YA QUE, ESTO ESTARA EN EL MANUAL DE USUARIO
			cout << "¿Desea ingresar una nueva cita? Si, No" << endl;
			cin >> ncita;
		}
			//SI EL USUARIO DECIDE INGRESAR UNA NUEVA CITA SE VOLVERAN A PEDIR TODOS LOS DATOS
			while (ncita == 1);
		//SI EL USUARIO DECIDE NO INGRESAR UNA NUEVA CITA LE MOSTRARA LA SIGUIENTE PREGUNTA
		cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
		cin >> menu;

		break;
		//EN LAS SIGUIENTES OPCIONES SOLO SE MOSTRARA EL TITULO, YA QUE, AUN NO SON FUNCIONALES Y SE REALIZARA LA PREGUNTA DE SI DESEA VOLVER AL MENU
		case 2:
			cout << "Modificar cita" << endl;
			cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			cin >> menu;

			break;
		case 3:
			cout << "Eliminar cita" << endl;
			cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			cin >> menu;

			break;
		case 4:
			cout << "Lista de citas vigentes" << endl;
			cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			cin >> menu;

			break;
		case 5:
			cout << "Limpiar pantalla" << endl;
			cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			cin >> menu;

			break;
		case 6:
			//EN EL CASO DE SALIR, LE AGREGUE UNA PREGUNTA EN DONDE EL USUARIO ASEGURE QUE DESEA SALIR DEL PROGRAMA
			cout << "¿Esta seguro que desea salir?" << endl << "NO" << endl << "SI" << endl;
			cin >> menu;

			break;
		}
		
	} 	
	while (menu==1);
	
	
	return 0;
	
}