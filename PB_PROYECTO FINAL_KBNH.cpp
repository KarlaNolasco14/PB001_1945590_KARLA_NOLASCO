#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

//definir la funcion
void Agendar();
void listas();
void archivos();
void eliminar();
void modificar();

double agendar, * preuni, * cantidad, * precio, * total;
string* nombre, * hora, * tratamiento, * desc;
int main()
{
	int opc;
	cout << "\t" << "*** MEJORANDO SONRISAS ***" << "\n";
	cout << "Agendar cita" << endl << "Modificar cita" << endl << "Eliminar cita" << endl << "Lista de citas vigentes" << endl << "Limpiar pantalla" << endl << "Salir" << endl;
	cin >> opc;

	switch (opc)
	{
	case 1:
		Agendar();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;

	case 3:
		eliminar();
		return main();
		break;
		
	case 4:
		listas();
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		archivos();
		break;
	}
}

void Agendar()
{
	cout << "Digite el numero de citas que desea agendar" << endl;
	cin >> agendar;
	
	nombre = new string[agendar]; 
	hora = new string[agendar];
	tratamiento = new string[agendar];
	desc = new string[agendar];
	preuni = new double[agendar];
	cantidad = new double[agendar];
	precio = new double[agendar];
	total = new double[agendar];
	
	for (int i = 0; i < agendar; i++)
	{

		while (getchar() != '\n'); 
		cout << "Nombre del paciente" << endl;
		getline(cin, nombre[i]); 
		cout << "Hora del tratamiento" << endl;
		getline(cin, hora[i]);
		cout << "Nombre del tratamiento" << endl;
		getline(cin, tratamiento[i]);
		cout << "Descripcion" << endl;
		getline(cin, desc[i]);
		cout << "Precio unitario tratamiento" << endl;
		cin >> preuni[i];
		cout << "Cantidad del tratamiento" << endl;
		cin >> cantidad[i];
		precio[i] = preuni[i] * cantidad[i];
		cout << "Precio unitario" << "\n";
		cout << precio[i] << "\n";
		cout << "Total" << "\n";
		total[i] = (precio[i] * .16) + precio[i];
		cout << total[i] << "\n";
	}
}

void listas()
{
	for (int i = 0; i < agendar; i++)
	{
		cout << "cita" << i + 1 << endl;
		cout << nombre[i] << endl;
		cout << hora[i] << endl;
		cout << tratamiento[i] << endl;
		cout << desc[i] << endl;
		cout << preuni[i] << endl;
		cout << cantidad[i] << endl;
		cout << precio[i] << endl;
		cout << total[i] << endl;
	}
}

void archivos()
{
	ofstream archivo; 
	string nombrearchivo;
	int texto;
	string texto2;

	nombrearchivo = "citasagendadas";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	archivo << "NOMBRE DEL PACIENTE" << "\t";
	archivo << "HORA" << "\t";
	archivo << "TRATAMIENTO" << "\t";
	archivo << "DESCRIPCION" << "\t";
	archivo << "PRECIO UNI T" << "\t";
	archivo << "CANTIDAD" << "\t";
	archivo << "PRECIO UNI" << "\t";
	archivo << "TOTAL" << "\n";

	for (int i = 0; i < agendar; i++)
	{
		texto2 = nombre[i];
		archivo << texto2 << "\t" << "\t";
		texto2 = hora[i];
		archivo << texto2 << "\t" << "\t";
		texto2 = tratamiento[i];
		archivo << texto2 << "\t" << "\t";
		texto2 = desc[i];
		archivo << texto2 << "\t" << "\t";
		texto = preuni[i];
		archivo << texto << "\t " << "\t";
		texto = cantidad[i];
		archivo << texto << "\t " << "\t";
		texto = precio[i];
		archivo << texto << "\t " << "\t";
		texto = total[i];
		archivo << texto << "\t " << "\t";
		
	}


	archivo.close();
}

void eliminar()
{
	int j;
	cout << "ingrese el  registro a eliminar";
	cin >> j;
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		nombre[i] = " ";
		hora[i] = " ";
		tratamiento[i] = " ";
		desc[i] = " ";
		preuni[i] = 0;
		cantidad[i] = 0;
		precio[i] = 0;
		total[i] = 0;
	}
}

void modificar()
{
	int j, opcion;
	cout << "ingrese el numero registro a modificar";
	cin >> j;
	j = j - 1; 
	cout << "ingrese que desea modificar Nombre, Hora, Tratamiento, Descripcion, Precio unitario tratamiento, Cantidad, Precio, Total" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n'); 
			cout << "Ingrese el nombre" << endl;
			getline(cin, nombre[i]);
			
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n'); 
			cout << "Ingrese la hora" << endl;
			getline(cin, hora[i]);
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el tratamiento" << endl;
			getline(cin, tratamiento[i]);
		}
		break;

	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n'); 
			cout << "Ingrese la descripcion" << endl;
			getline(cin, desc[i]);
		}
		break;

	case 5:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el precio unitario del tratamiento" << endl;
			cin >> preuni[i];
		}
		break;

	case 6:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese la cantidad" << endl;
			cin >> cantidad[i];
		}
		break;

	case 7:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el precio" << endl;
			cin >> precio[i];
		}
		break;

	case 8:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el total" << endl;
			cin >> total[i];
		}
		break;
	}

    
}