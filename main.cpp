#include "Lista.h"

Lista list = Lista(); 

int main(int argc, char** argv) {
	list.showlist(); 
	list.insertMany(); 
	cout << "first  " << list.getfirstnode() << endl ; 
	cout << "last  " << list.getlastnode() << endl ; 
	list.showlist(); 			
}
