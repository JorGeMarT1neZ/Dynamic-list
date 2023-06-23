#include "producto.h"

producto::producto()
{
	this->_id = "null"; 
	this->nombre = "null"; 
	this->marca = "null"; 
	this->precio = 0 ; 
}
producto::producto(string id , string nom ,string mar,int pre)
{
	this->_id = id ; 
	this->nombre = nom; 
	this->marca = mar; 
	this->precio = pre ; 
}
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

