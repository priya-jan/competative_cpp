//copy constructor in a class
#include<iostream>
using namespace std;
class Company
{
	private:
		int id;
	public:
		Company(int x)
		{
			id=x;
		}
		
		Company(Company &m)
		{
			id=m.id;
			cout<<id<<endl;
		}
};

int main()
{
	Company obj1(15);
	// Copying of Obj1 to obj2;
	Company obj2(obj1);
	
	return 0;
}
