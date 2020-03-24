#include <iostream>
using namespace std;

class my 
{   
	private: 
   	int number; 
	
	public: 
   	my( int numb ) : number( numb ) {}; 
   	
   	void show( void ) 
	{ 
    	cout << "my number is" << number << endl; 
   	} 
}; 

int main( int argc, char **argv, char **envp ) 
{ 
   my m1( 10 ), m2( 15 ), m3 ( 25 );       
   my *pm1 = &m1, *pm2 = &m2, *pm3 = &m3;  
   
   m1.show(); 
   m2.show(); 
   m3.show(); 
   
   pm1->show(); 
   pm2->show(); 
   pm3->show(); 
   return 0; 
}

