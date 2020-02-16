#include <iostream>
#include <fstream>
#include "Customer.h"
#include "Address.h"
#include "Product.h"
#include <string>

using namespace std;

int main()
{
ifstream myIn ("customers.dat");
ifstream myIn2 ("inventory.dat");  
ofstream myOut ("dontknowyet");  //Dont Know What This File is supposed to be yet 
  
//Variables for Customer
string cName, cNum;
double loc; 
  
//Variables for Product
int iNum, sQuant;
string descript;
double pri;

//Created object of Customer class  
Customer customer;
  
  
myIn >> cName >> cNum >> loc;
  
customer.setcustomerNum(cName);
customer.setcustomerName(cName); 
customer.setlineOfCredit(loc);
  
myIn2 >> iNum >> descript >> pri >> sQuant;
  
customer.setitemNo(iNum);
customer.setdescription(descript); 
customer.setprice(pri);
customer.setstockQuantity(sQuant);
  
  

cout << "--------------------------------------------------" << endl;
cout << "B2B Shopping Cart << endl;
cout << "--------------------------------------------------" << endl << endl;  
  
cout << "Order Number: " <<   << endl;
cout << "Associate: " <<   << endl;
cout << "Customer Number: " <<   << endl;
cout << "Customer: " <<   << endl;
cout << "Address: " <<   << endl << endl;

cout << "--------------------------------------------------" << endl;
cout << "Item No      Description           Qty     Total" << endl;
cout << "--------------------------------------------------" << endl; 
cout <<  << "      " <<  << "           " <<  << "     " <<  << endl; 
cout <<  << "      " <<  << "           " <<  << "     " <<  << endl; 
cout <<  << "      " <<  << "           " <<  << "     " <<  << endl; 
cout <<  << "      " <<  << "           " <<  << "     " <<  << endl;   
cout << "--------------------------------------------------" << endl;
cout << "Total" <<  << endl;
cout << "--------------------------------------------------" << endl;  
cout << "Remaining Credit" <<  << endl;  
  
  
  
 
     
   
  
  
  return 0;
} 

