#ifndef NODO_H
#define NODO_H

#include "producto.h"

class Nodo
{
	private: 
	    producto datoproducto ; 
	    Nodo *nextptr; 
	public:
		Nodo();
		Nodo(producto); 
		void setdatoproducto(producto); 
		producto getdatoproducto(); 
	protected:
};

#endif
