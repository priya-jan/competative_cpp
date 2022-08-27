//constructor
// 1. Default 2. Parameterized 3. Copy
#include<iostream>
using namespace std;

class Car{
	string company_name;
	string model_name;
	string fuel_typ;
	float mileage;
	double price;
	
	public:
	Car()
	{
		cout<<"Default Constructor"<<endl;
	}
		
	void setData(string cname,string mname,string ftype,float m,double p)
	{
		company_name=cname;
		model_name=mname;
		fuel_typ=ftype;
		mileage=m;
		price=p;
	}
	
	void displayData()
	{
		cout<<"Car Properties"<<endl;
		cout<<"Car Company Name- "<<company_name<<endl;
		cout<<"Car Model Name-"<<model_name<<endl;
		cout<<"Car Fuel type-"<<fuel_typ<<endl;
		cout<<"Car Mileage-"<<mileage<<endl;
		cout<<"Car Price-"<<price<<endl;	
	}
	void getData()
	{
		string cmname,mdname,fltype;
		float mlg;
		double prc;
		cout<<"Enter Company Name, Model Name, Fuel Type, Mileage and Price"<<endl;
		cin>>cmname>>mdname>>fltype>>mlg>>prc;
		setData(cmname,mdname,fltype,mlg,prc);
		
	}
~Car() // Destructor
	{
		cout<<"Destructor is Calling"<<endl;
	}
};

int main()
{
	Car obj; // Creation of an object of class Car
	obj.getData();
	obj.displayData();
	
	return 0;
}
