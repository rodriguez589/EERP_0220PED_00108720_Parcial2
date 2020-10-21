//CODIGO DE DONAS 00108720
#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>


using namespace std;

struct datos{
    string nombre;
    float precio_unitario;
};

struct pedido{
    string apellido;
    vector<datos> lista_comida;
};

void menu1()
{
    cout<<"-------HAY PROMOCIONES DE DONAS!!!------- :"<< endl ;
    cout<<" 1. Atender pedidos de clientes."<<endl;
    cout<<" 2. Calcular ganancias por venta de donas."<<endl;
    cout<<" 3. Calcular ganancias por venta de platos fuertes."<<endl;
    cout<<" 4. Salir"<<endl;
    cout<<"-------HAY PROMOCIONES DE DONAS!!!------- :" << endl;
}

void menu2()
{
    cout<<"-------PRECIOS DE LAS DONAS-------" << endl;
    cout<<" 1. comunes -> $1"<<endl;
    cout<<" 2. Rellena con leche -> $1.25"<<endl;
    cout<<" 3. especiales; de chocolate doble ->  $1.50"<<endl;
    cout<<" 4. regresar"<<endl;
    cout<<"-------PRECIOS DE LAS DONAS-------" << endl;
}

void menu3()
{
    cout<<"-------PRECIOS DE LOS PLATOS FUERTES------- " << endl;
    cout<<" 1. Desayunos -> $2.50"<<endl;
    cout<<" 2. Almuerzos -> $5.00"<<endl;
    cout<<" 3. Cenas -> $3.50"<<endl;
    cout<<" 4. regresar"<<endl;
    cout<<"-------PRECIOS DE LOS PLATOS FUERTES------- " << endl;
}

void menu4()
{
    cout<<"------- SELECCIONAR LO QUE USTED DESEA------- " << endl;
    cout<<" 1. Donas" <<endl;
    cout<<" 2. Platos fuertes" <<endl;
    cout<<" 3. regresar" <<endl;
    cout<<"------- SELECCIONAR LO QUE USTED DESEA------- " << endl;
}


void menu1();
void menu2();
void menu3();
void menu4();


int main(){
	
	
int opcion, opcion2, opcion_para_dona, opcion_para_Comida;
float Totaldona, Totalplato, Sumadonas, Sumaplato;
   
    queue<pedido> clientededonas;
    queue<pedido> clientedeplatos;

pedido pedidodedonas;
pedido pedidodeplatos;
pedido pedidoSumadedonas;
pedido pedidoSumadeplatos;

 datos productodedonas;
 datos productodeplatos;

    vector<datos> lista_comidadedonas;
    vector<datos> lista_comidadeplatos;

    do{

cout << "Bienvenid@ a mister donuts :D, escoja a continuacion de las opciones de nuestro menu" << endl;    
    	
        //MENU DONDE COMIENZA TODO
        menu1();
        cin>>opcion;
 
switch(opcion)
{
 case 1:
  system("cls");
do{
    menu4();
    cin>>opcion2;
    switch(opcion2)
      {

        //MENU DE DONAS

    case 1: 
     cout<<"Digitar apellido:";
    cin>>pedidodedonas.apellido;
     do{
     menu2();
    cin>>opcion_para_dona;
   switch(opcion_para_dona)
     {
         case 1:
     productodedonas.nombre = "Sencilla";
     productodedonas.precio_unitario = 1.00;
    lista_comidadedonas.push_back(productodedonas);
     cout<<"producto que quiso agregar:" << productodedonas.nombre<< endl;
    Totaldona += 1.00;

     break;
            case 2:
              productodedonas.nombre = "Rellena";
              productodedonas.precio_unitario = 1.25;
              lista_comidadedonas.push_back(productodedonas);
               cout<<"producto que quiso Agregar:" << productodedonas.nombre<< endl;     
                Totaldona += 1.25; 

                break;
                    case 3:
                    productodedonas.nombre = "Especial";
                     productodedonas.precio_unitario = 1.50;
                    lista_comidadedonas.push_back(productodedonas);
                    cout<<"producto que quiso Agregar:" << productodedonas.nombre<<endl;    
                    Totaldona += 1.50;  

                    break;
                     }
                     
                     pedidodedonas.lista_comida = lista_comidadedonas;                                  
                      }while(opcion_para_dona!=4);
                                 
                    system("pause");
                    cout<<endl;
                    cout<<"Total de Donas a comprar:"<<pedidodedonas.lista_comida.size()<< endl;
                    cout<<"Total del cliente:"<<Totaldona << endl;

                     clientededonas.push(pedidodedonas);
                     cout<<endl;
                     system("pause");

                                break;

                case 2:  
                cout<<"digitar apellido:";
                 cin>>pedidodeplatos.apellido;
                do{
                  menu3();
                    cin>> opcion_para_Comida;
                     switch(opcion_para_Comida)
                    {
                     case 1:
                            //MENU DE PLATOS

                         productodeplatos.nombre = "Desayuno";
                        productodeplatos.precio_unitario = 2.50;
                        lista_comidadeplatos.push_back(productodeplatos);
                        cout<<"producto que quiso Agregar:" << productodeplatos.nombre<<endl;
                         Totalplato += 2.50;
                        break;

                        case 2:
                         productodeplatos.nombre = "Almuerzo";
                         productodeplatos.precio_unitario = 5.00;
                         lista_comidadeplatos.push_back(productodeplatos);
                        cout<<"producto que quiso Agregar:" << productodeplatos.nombre<<endl; 
                        Totalplato += 5.00;
                                break;

                                 case 3:
                                productodeplatos.nombre = "Cena";
                                 productodeplatos.precio_unitario = 3.50;
                                 lista_comidadeplatos.push_back(productodeplatos);
                                 cout<<"producto que quiso Agregar:" << productodeplatos.nombre<< endl; 
                                 Totalplato += 3.50;
                                            break;
                                    }
                                    pedidodeplatos.lista_comida = lista_comidadeplatos;     
                                }while(opcion_para_Comida!=4);
								
                                system("pause");
                                cout<<endl;
                                cout<<"Total de Platos a comprar:"<<pedidodeplatos.lista_comida.size()<<endl;
                                cout<<"Total del cliente:"<<Totalplato<< endl;
                                clientedeplatos.push(pedidodeplatos);
                                cout<<endl;
                                system("pause");
                    }
                    cout<<endl<<endl; 
                    system("cls"); 
                }while(opcion2!=3);
                break;
            case 2:
            	 if (clientededonas.empty()){
                        cout<<"No existen, losiento :c" << endl;
                    }else{
                        cout<<"total Pedidos."<< clientededonas.size()<<endl;
                    
                        while(!clientededonas.empty()){
                        pedidoSumadedonas = clientededonas.front();
                        
                        //SE ESTA SACANDO 
                        clientededonas.pop();
                        }
                       
                }
                system("pause");
                 
                break;
            case 3:
            if (clientedeplatos.empty()){
                 cout<<"No existen pedidos de Platos fuertes." <<endl;
                 }else{
                cout<<"total Pedidos. \n"<<clientedeplatos.size()<<endl;
                        
                 while(!clientedeplatos.empty()){
                  pedidoSumadeplatos = clientedeplatos.front();
     
                 clientedeplatos.pop();
                        }      
                }
                system("pause");   
                break;
        }
     cout<<endl<<endl; 
    system("cls");    
    }while(opcion!=4);

    system("pause");
    return 0;
}

