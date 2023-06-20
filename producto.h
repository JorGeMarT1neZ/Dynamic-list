#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>

using std::string; 

class producto
{
	private: 
	    string _id ;  
		string nombre ; 
		string marca ; 
		int precio ; 
	public:
		producto();
		producto(string,string,string,int); 
		void set_id(string); 
		string get_id();
		void setnombre(string);
		string getnombre(); 
		void setmarca(string);
		string getmarca(); 
		void setprecio(int);
		int getprecio();    
	protected:
};

#endif
