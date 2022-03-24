#include<iostream>
#include<string> //Libreria para poder utilizar el string y el getline
using namespace std;

struct cita
{
	string nombre;
	string hora;
	string tratamiento;
	string desc;
	float preuni;
	float cantidad;
	float precio;
	float total;
};
int main() {
	int opcion;
	int i;
	cita medica[3];
	int menu = 1;
	int j;
	int op;
	int numc;
	int ncita; //Nueva cita

	while (menu == 1)
	{
		cout << "\t" << "*** MEJORANDO SONRISAS ***" << "\n";
		//MENU
		cout << "Agendar cita" << "\n";                    //EL MENU NO TIENE NUMEROS PORQUE SE EXPLICARA SU UTILIZACION EN EL MANUAL DE USUARIO
		cout << "Modificar cita" << "\n";
		cout << "Eliminar cita" << "\n";
		cout << "Lista de citas vigentes" << "\n";
		cout << "Limpiar pantalla" << "\n";
		cout << "Salir" << "\n";

		cin >> opcion;

		switch (opcion) //SWITCH PARA HACER FUNCIONAR EL MENU
		{
		case 1:   //SE UTILIZA UN DO WHILE EN LA OPCION 1 PARA QUE SE PUEDA REALIZAR UN CICLO EN DONDE EL USUARIO PUEDA INSERTAR UNA NUEVA CITA
			//do {
				for (i = 0; i < 3; i++) {
					cout << "Consecutivo del numero de cita" << i + 1  << endl;

					cout << "Nombre del paciente" << endl;
					cin >> medica[i].nombre;
					//getline(cin, nombre);  //EL GETLINE SIRVE PARA QUE EL PROGRAMA PUEDA LEER LOS ESPACIOS

					cout << "Hora del tratamiento" << endl;
					cin >> medica[i].hora;
					//getline(cin, hora);

					cout << "Nombre del tratamiento" << endl;
					cin >> medica[i].tratamiento;
					//getline(cin, tratamiento);

					cout << "Descripcion" << endl;
					cin >> medica[i].desc;
					//getline(cin, desc);

					cout << "Precio unitario tratamiento" << endl;
					cin >> medica[i].preuni;

					cout << "Cantidad del tratamiento" << endl;
					cin >> medica[i].cantidad;

					cout << "Precio unitario" << endl;
					cin >> medica[i].precio;

					cout << "Total" << endl;
					cin >> medica[i].total;
				}
				//AQUI SE LE HACE LA PREGUNTA AL USUARIO SI DESEA INGRESAR UNA NUEVA CITA, AL IGUAL QUE EN EL MENU, NO LE INDIQUE EL NUMERO PARA ELEGIR 
				//OPCION, YA QUE, ESTO ESTARA EN EL MANUAL DE USUARIO
				//cout << "¿Desea ingresar una nueva cita? Si, No" << endl;
			   // cin >> ncita;
			//}
			//SI EL USUARIO DECIDE INGRESAR UNA NUEVA CITA SE VOLVERAN A PEDIR TODOS LOS DATOS
			//while (ncita == 1);
			//SI EL USUARIO DECIDE NO INGRESAR UNA NUEVA CITA LE MOSTRARA LA SIGUIENTE PREGUNTA
			//cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			//cin >> menu;

			break;
			//EN LAS SIGUIENTES OPCIONES SOLO SE MOSTRARA EL TITULO, YA QUE, AUN NO SON FUNCIONALES Y SE REALIZARA LA PREGUNTA DE SI DESEA VOLVER AL MENU
		case 2:
			cout << "Ingrese el numero de cita";
			cin >> j;
			j = j - 1;
			cout << "Ingrese que desea modificar 1.-Nombre,2.-Hora, 3.-Tratamiento, 4.-Descripcion, 5.-Precio unitario tratamiento, 6.-Cantidad del tratamiento, 7.-Precio unitario, 8.-Total, 9.Todo" << endl;
			cin >> op;
			
			switch (op)
			{
			case 1:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].nombre;
				}
				break;
			case 2:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].hora;
				}
				break;
			case 3:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].tratamiento;
				}
				break;
			case 4:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].desc;
				}
				break;
			case 5:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].preuni;
				}
				break;
			case 6:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].cantidad;
				}
				break;
			case 7:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].precio;
				}
				break;
			case 8:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;
					cin >> medica[i].total;
				}
				break;
			case 9:
				for (i = j; i <= j; i++)
				{
					cout << "Consecutivo del numero de cita" << i + 1 << endl;

					cout << "Nombre del paciente" << endl;
					cin >> medica[i].nombre;
					//getline(cin, nombre);  //EL GETLINE SIRVE PARA QUE EL PROGRAMA PUEDA LEER LOS ESPACIOS

					cout << "Hora del tratamiento" << endl;
					cin >> medica[i].hora;
					//getline(cin, hora);

					cout << "Nombre del tratamiento" << endl;
					cin >> medica[i].tratamiento;
					//getline(cin, tratamiento);

					cout << "Descripcion" << endl;
					cin >> medica[i].desc;
					//getline(cin, desc);

					cout << "Precio unitario tratamiento" << endl;
					cin >> medica[i].preuni;

					cout << "Cantidad del tratamiento" << endl;
					cin >> medica[i].cantidad;

					cout << "Precio unitario" << endl;
					cin >> medica[i].precio;

					cout << "Total" << endl;
					cin >> medica[i].total;
				}
				break;
			}
			
			//cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			//cin >> menu;

			break;
		case 3:
			cout << "Eliminar cita" << endl;
			cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			cin >> menu;

			break;
		case 4:
			for (i = 0; i < 3; i++)
			{
				cout << "Consecutivo del numero de cita" << i + 1 << endl;
				cout << medica[i].nombre << endl;
				cout << medica[i].hora << endl;
				cout << medica[i].tratamiento << endl;
				cout << medica[i].desc << endl;
				cout << medica[i].preuni << endl;
				cout << medica[i].cantidad << endl;
				cout << medica[i].precio << endl;
				cout << medica[i].total << endl;
			}

			//cout << "¿Desea volver al menu?" << endl << "SI" << endl << "NO" << endl;
			//cin >> menu;

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

	return 0;

}