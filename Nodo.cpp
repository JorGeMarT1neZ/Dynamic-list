#include "Nodo.h"

Nodo::Nodo()
:nextptr(NULL)
{}

Nodo::Nodo(producto p)
:datoproducto(p),nextptr(NULL)
{}

void Nodo::setdatoproducto(producto p){
	this->datoproducto = p ; 
}
producto Nodo::getdatoproducto(){
     return this->datoproducto ; 
} 
