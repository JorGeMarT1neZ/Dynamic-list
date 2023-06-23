#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include <fstream>

using std::ifstream ; 
using std::ofstream ;
using std::random_device; 
using std::to_string; 

class Lista
{
	private:
		Nodo *firstnode; 
		Nodo *lastnode; 
	public:
		Lista();
		void setfirstnode(Nodo *);
		Nodo * getfirstnode();
		
		void setlastnode(Nodo *);
		Nodo * getlastnode();  
		
		void insertOne(); 
		void insertMany(); 
		void insert(producto);
		
		void showlist(); 	
};

#endif
