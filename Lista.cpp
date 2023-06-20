#include "Lista.h"

Lista::Lista()
:firstnode(NULL),lastnode(NULL)
{}
void Lista::setfirstnode(Nodo *n){
	this->firstnode = n ; 
}
Nodo * Lista::getfirstnode(){
	return this->firstnode; 
}
		
void Lista::setlastnode(Nodo *n){
	this->lastnode = n; 
}
Nodo * Lista::getlastnode(){
	return this->lastnode; 
} 
		
void Lista::insetOne(){
	
	producto p = producto();  

	cout <<"ingresa nombre -> "; 
	string nombre ; 
	cin >>nombre ; 
	p.setnombre(nombre); 
	cout <<"ingresa marca -> "; 
	string marca ;
	cin >> marca ;  
	p.setmarca(marca);
    cin.ignore(); 
	cout <<"ingresa precio -> ";
	int precio ;
	cin >> precio ;  
	p.setprecio(precio); 
	
	Nodo *node = new Nodo(p) ;
	
	if(this->firstnode == NULL){
		cout << "primer elemento insertado " << endl ; 
		this->firstnode = node; 
	}
	 
} 
void Lista::InsetMany(){

} 
		
void Lista::showlist(){

}
