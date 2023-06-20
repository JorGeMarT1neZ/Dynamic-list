#include <iostream>

#include "producto.h"
#include "Nodo.h"

producto p = producto();
Nodo n = Nodo(p); 

int main(int argc, char** argv) {
	
	cout << &n << endl ; 
}
