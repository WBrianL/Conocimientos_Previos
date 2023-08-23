#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct CD
{
int codigo;
char artista[30];
char  album[30];
int no_canciones;
float precio;
int existencias;
};

void agregar (CD CDs[], int tamano, int i);
void mostrar (CD CDs[], int limite);
void busqueda(CD CDs[], int limite, int codigo);
void modificar(CD CDs[], int limite, int codigo);
void venta(CD CDs[], int limite, int codigo);

int main(){
	const int tamano=50;
	CD CDs[tamano]; //Se declara el arreglo de estructura
	int T; //Variable para guardar el numero de discos agregados
	char opcion;

    do {
        cout << "Tienda De CD" << endl;
        cout << "1. Agregar CD" << endl;
        cout << "2. Mostrar todos los CD" << endl;
        cout << "3. Buscar por codigo" << endl;
        cout << "4. Modificar" << endl;
        cout << "5. Realizar venta" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case '1':
                // Agregar CD
                cout << "Agregar CD." << endl;
                agregar(CDs, tamano, T);
                if(T<50){
                	T=T+1;
				}
                getch();
                system("cls");
                break;

            case '2':
                // Muestra todos los CD
				mostrar(CDs,T);
				system("cls");
                break;

            case '3':
                // Busca por codigo
                int codigo;
                cout<<"Codigo para buscar: ";
                cin>>codigo;
                busqueda(CDs, T, codigo);
                break;

            case '4':
            	int codigobusqueda;
                cout << "Codigo del CD que quieres modificar: ";
                cin>>codigobusqueda;
                system("cls");
                modificar(CDs, T, codigobusqueda);
                break;

            case '5':
                cout << "Codigo del CD a vender: ";
                cin>>codigo;
                venta(CDs, T, codigo);
                break;

            case '6':
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opción inválida. Por favor, selecciona una opción válida." << endl;
                break;
        }

    } while (opcion != '6');

return 0;
}

void agregar (CD CDs[], int tamano, int i){
	if(i<tamano){
		cout<<"Codigo: ";
		cin>>CDs[i].codigo;
		
		cout<<"Artista: ";
		cin>>CDs[i].artista;
		
		cout<<"Album: ";
		cin>>CDs[i].album;
		
		cout<<"Numero de Canciones: ";
		cin>>CDs[i].no_canciones;
		
		cout<<"Precio: ";
		cin>>CDs[i].precio;
		
		cout<<"Numero de existencias: ";
		cin>>CDs[i].existencias;
		
		cout<<"Se guardo con exito :)";
		getch();
	}
	else {
		cout<<"Haz llegado al Limte :(";
	}
}


void mostrar (CD CDs[], int limite){
	for(int i=0; i<limite; i++){
		cout<<"--------------------------------------\n";
		cout<<"Codigo: "<<CDs[i].codigo<<"\n";
		cout<<"Artista: "<<CDs[i].artista<<"\n";
		cout<<"Album: "<<CDs[i].album<<"\n";
		cout<<"Numero de canciones: "<<CDs[i].no_canciones<<"\n";
		cout<<"Precio: "<<CDs[i].precio<<"\n";
		cout<<"Existencias: "<<CDs[i].existencias<<"\n";
		getch();
	}
}

//esta funcion busca por codigo
void busqueda(CD CDs[], int limite, int codigo){
	int contador = 0; //Este contatador me servira para saber si hubo un registro de la busqueda
	for(int i = 0; i<limite; i++){
		if(CDs[i].codigo==codigo){
			cout<<"--------------------------------------\n";
			cout<<"Codigo: "<<CDs[i].codigo<<"\n";
			cout<<"Artista: "<<CDs[i].artista<<"\n";
			cout<<"Album: "<<CDs[i].album<<"\n";
			cout<<"Numero de canciones: "<<CDs[i].no_canciones<<"\n";
			cout<<"Precio: "<<CDs[i].precio<<"\n";
			cout<<"Existencias: "<<CDs[i].existencias<<"\n";
			contador = contador + 1;
			getch();
			system("cls");
		}
	}
	if(contador==0){
		cout<<"-----------------------------------\n";
		cout<<"No se encontraron registros :(";
		getch();
		system("cls");
	}
}

//Esta funcion utiliza el metodo de busqieda por codigo para modoficar algun campo elegible por el usuario
void modificar(CD CDs[], int limite, int codigo){
	int contador = 0; //Este contatador me servira para saber si hubo un registro de la busqueda
	for(int i = 0; i<limite; i++){
		if(CDs[i].codigo==codigo){
			
			cout<<"Codigo: "<<CDs[i].codigo<<"\n";
			cout<<"Artista: "<<CDs[i].artista<<"\n";
			cout<<"Album: "<<CDs[i].album<<"\n";
			cout<<"Numero de canciones: "<<CDs[i].no_canciones<<"\n";
			cout<<"Precio: "<<CDs[i].precio<<"\n";
			cout<<"Existencias: "<<CDs[i].existencias<<"\n";
			cout<<"----------------------------------------\n";
			
			int opcion;

    		do {
        		cout << "Menu para modificar." << endl;
        		cout << "-----------------------------------" << endl;
        		cout << "1. Modificar Codigo." << endl;
        		cout << "2. Modificar Artista" << endl;
        		cout << "3. Modificar Album" << endl;
        		cout << "4. Modificar Numero de Canciones" << endl;
        		cout << "5. Modificar Precio" << endl;
        		cout << "6. Modificar Existencias" << endl;
        		cout << "7. Salir" << endl;
        		cout << "Seleccione una opcion: ";
        		cin >> opcion;

        		switch (opcion) {
            	case 1:
                	cout << "Introduce el nuevo codigo: ";
                	cin>>CDs[i].codigo;
                	cout << "Se guardo con exito :)";
                	getch();
					system("cls");
               	break;
               	
           		case 2:
                	cout << "Introduce el nuevo Artista: ";
                	cin>>CDs[i].artista;
                	cout << "Se guardo con exito :)";
                	getch();
					system("cls");
                break;
                
            	case 3:
                	cout << "Introduce el nuevo Album: ";
                	cin>>CDs[i].album;
                	cout << "Se guardo con exito :)";
                	getch();
					system("cls");
                break;
                
            	case 4:
                	cout << "Introduce el nuevo Numero de canciones: ";
                	cin>>CDs[i].no_canciones;
                	cout << "Se guardo con exito :)";
                	getch();
					system("cls");
                break;
                
            	case 5:
                	cout << "Introduce el nuevo precio: ";
                	cin>>CDs[i].precio;
                	cout << "Se guardo con exito :)";
                	getch();
					system("cls");
                break;
                
            	case 6:
                	cout << "Introduce el nuevo numero de existencias: ";
                	cin>>CDs[i].existencias;
                	cout << "Se guardo con exito :)";
                	getch();
					system("cls");
                break;
                
            	case 7:
                	cout << "Saliendo del menu de modificacion :)";
                	getch();
                	system("cls");
                break;
                
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida (:";
                break;
        		}
    		} while (opcion != 7);
    	contador = contador + 1;
		}
	}
	if(contador==0){
		cout<<"-----------------------------------\n";
		cout<<"No se encontraron registros :(";
		getch();
		system("cls");
	}
}

void venta(CD CDs[], int limite, int codigo){
	int contador = 0; //Este contatador me servira para saber si hubo un registro de la busqueda
	for(int i = 0; i<limite; i++){
		if(CDs[i].codigo==codigo){
			if(CDs[i].existencias>0){
				int cantidad;
				cout<<"¿Cuantas unidades se van a vender? ";
				cin>>cantidad;
				if(cantidad<=CDs[i].existencias){
					CDs[i].existencias = CDs[i].existencias - cantidad;
					cout<<"Disco vendido :)";
					getch();
					system("cls");
				}
				else{
					cout<<"Solo hay "<<CDs[i].existencias<<" Disponibles :(";
					getch();
					system("cls");
				}
			}
			else{
				cout<<"Ya no hay existencias :(";
				getch();
				system("cls");
			}
		contador = contador + 1;
		}
	}
	if(contador==0){
		cout<<"-----------------------------------\n";
		cout<<"No se encontraron registros :(";
		getch();
		system("cls");
	}
}
