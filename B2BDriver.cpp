#include <ctime>
#include<sstream>
#include <fstream>
#include <iostream>
#include "Customer.h"
#include "Product.h"
#include <vector>
using namespace std;

string generateOrderNum()
{
    time_t now = time(0);
    string oNum;
    stringstream strstream;
    strstream << now;
    strstream >> oNum;
    return oNum;    
}


int main()
{ 
//Variables for Customer
string cName, cNum;
double loc; 

//Variables for Product
int iNum, sQuant;
string descript;
double pri;	
   
    Address a;
    Customer c;
    Product p;
    
    p.grabinfo();
    vector<Product> prod=p.product;
    
    c.grabcustomer();
    vector <Customer> cust=c.cust;
    
    vector <Address> addresses
    
    for(int i=0; i<cust.size(); i++)
    {
        cout << cust[i].getcustomerName() << endl;
    } 
    for (int i=0; i<prod.size(); i++)
    {
       if(prod[i].getcustomerName()==cusname)
    }

cin >> cName;
customer.setcustomerName(cName);

cin >> iNum >> sQuant;

customer.setitemNo(iNum);
customer.setstockQuantity(sQuant);
    
    //associate enters name 
    //associate looks up the customer
    //associate enters selected items/quantities
    
    /*string asc;
    cout << "Who are you(Associate Name)? ";
    cin >> asc;*/
    
    
    /*
    cout << "Order Number: " << generateOrderNum()<< endl;
    cout << "Associate: " << asc << endl; 
    cout << "Customer Number: " << endl;
    cout << "Costumer: " << endl;
    cout << "Address: " << endl; */
	return 0;
}
