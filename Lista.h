#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"



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
		
		void insetOne(); 
		void InsetMany(); 
		
		void showlist(); 
		
	protected:
};

#endif
