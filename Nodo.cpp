#include "Nodo.h"

Nodo::Nodo()
:nextptr(NULL)
{}

Nodo::Nodo(producto p)
:datoproducto(p),nextptr(NULL)
{}

void Nodo::setnextptr(Nodo* n){

	this->nextptr = n ; 
}

Nodo * Nodo::getnextptr(){
	return this->nextptr; 
}

void Nodo::setdatoproducto(producto p){
	this->datoproducto = p ; 
}
producto Nodo::getdatoproducto(){
     return this->datoproducto ; 
} 

void Nodo::datosnodo(){
	cout <<"-------------------------------------"<<endl ;
	cout << "\t " << getdatoproducto().getnombre() <<" "<< getdatoproducto().getmarca() <<" "<< getdatoproducto().getprecio() << endl ; 
	cout << "La direccion de este nodo es: " << this << endl ; 
	cout << "Este Nodo le apunta a : " << getnextptr() << endl ;
	cout <<"-------------------------------------"<<endl<<endl;	
}
