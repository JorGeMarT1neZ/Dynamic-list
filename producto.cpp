#include "producto.h"

producto::producto()
:_id("-"),nombre("-"),marca("-"),precio(0)
{}
producto::producto(string id ,string nom ,string mar,int pre)
:_id(id),nombre(nom),marca(mar),precio(0)

{}
void producto::set_id(string id){
	this->_id = id ; 
}
 
string producto::get_id(){
	return this->_id; 
}
void producto::setnombre(string nom){
	this->nombre = nom ; 
}
string producto::getnombre(){
	return this->nombre ; 
} 
void producto::setmarca(string mar)  {
	this->marca = mar ; 
}
string producto::getmarca(){
	return this->marca ;
} 
void producto::setprecio(int pre){
	this->precio = pre ; 
}
int producto::getprecio(){
	return this->precio;  	
}
