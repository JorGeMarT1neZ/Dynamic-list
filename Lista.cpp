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
		
void Lista::insertOne(){
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
		this->lastnode = node;  
	}else{

		this->lastnode->setnextptr(node); 
		this->lastnode = node;
	}	 
} 

void Lista::insertMany(){
	string dato1,dato2; 
	int dato3; 
	ifstream entrada("datosProductos.txt"); 
	random_device rd;
	while(!entrada.eof() && entrada>>dato1>>dato2>>dato3){
		producto P(to_string(rd()),dato1,dato2,dato3);
		insert(P); 
	}	
} 

void Lista::insert(producto p){
	
	Nodo *node = new Nodo(p) ;
	if(this->firstnode == NULL && this->lastnode == NULL){
		this->firstnode = node;
		this->lastnode = node;  
	}else{
		this->lastnode->setnextptr(node); 
		this->lastnode = node;
	}	
}	
void Lista::showlist(){
	
	if(!this->getfirstnode()){
		cout << "\n\tLa Lista esta vacia " <<endl<<endl ;
	}else{
		Nodo * Aux = this->getfirstnode();
		while(Aux){
			Aux->datosnodo();
		    Aux = Aux->getnextptr();	
		}
	}
}


