#include <iostream>
using namespace std;

class MyClass
{
	public:
		
 	int n;
 	int m;
 	double v;
 	
 	void show()
	{
 		cout<<"m = "<<this->m<<endl;
 		cout<<"n = "<<this->n<<endl;
 		
		 cout<<"v = "<<this->v<<endl;
	}
 	void setmn(int m, int n, double v)
	{
		this->m=m;
 		this->n=n;
 		
		 this->v=v;
	}
	MyClass change()
	{
		int k;
	
		k=m;
 		m=n;
 		n=k;
 		
		k=v;
		
		return *this;
	}
};
int main()
{
	MyClass a, b, c;
 	
	a.setmn(10, 20, 30);
 	b=a.change();
 	
	a.show();
 	b.show();
 	
	c.show();
 	return 0;
}
