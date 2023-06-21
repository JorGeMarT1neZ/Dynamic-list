#ifndef NODO_H
#define NODO_H

#include "producto.h"

using std::cout ; 
using std::endl ;
using std::cin ;

class Nodo
{
	private: 
	    producto datoproducto ; 
	    Nodo *nextptr; 
	public:
		Nodo();
		Nodo(producto);
		void setnextptr(Nodo*); 
		Nodo * getnextptr(); 
		void setdatoproducto(producto); 
		producto getdatoproducto(); 
		void datosnodo(); 
	protected:
};

#endif
