/*
Customer.cpp
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:To recieve the customers information.
*/

#include <iostream>
#include <fstream>
#include "Customer.h"
using namespace std;

//Constructors
     /**************************************************************
	 *                          Customer                                                                                   
	 * Passed   : 4 arguments: a string, a string, a double                                         
	 * Purpose  : To create objects for the product class                  
	 * Returns  : Void                                     
	 **************************************************************/
Customer::Customer(string cnu, string cna, double l)
{
    customerNum=cnu; //sets customerNum equal to string cnu
    customerName=cna; //sets customerName equal to string cna
    lineOfCredit=l; //sets lineOfCredit equal to string l
}
     /**************************************************************
	 *                          Customer                                                                                   
	 * Passed   : None                                        
	 * Purpose  : To create objects for the product class                  
	 * Returns  : Void                                     
	 **************************************************************/
Customer::Customer()
{
    customerNum=""; 
    customerName="";
    lineOfCredit=0;
}

//Get Functions
       /**************************************************************
	 *                          getcustomerNum                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer #                  
	 * Returns  : String                                         
	 **************************************************************/
string Customer::getcustomerNum(){return customerNum;}
       /**************************************************************
	 *                          getcustomerName                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's name                  
	 * Returns  : String                                         
	 **************************************************************/
string Customer::getcustomerName(){return customerName;}
       /**************************************************************
	 *                          getlineofCredit                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer line of credit                  
	 * Returns  : Double                                         
	 **************************************************************/
double Customer::getlineOfCredit(){return lineOfCredit;}

//Receive from file functions
       /**************************************************************
	 *                          grabcustomer                                                                                     
	 * Passed   : Nothing                                        
	 * Purpose  : To receive all of the information from the costumer.h file                  
	 * Returns  : Void                                     
	 **************************************************************/
void Customer::grabcustomer()
{
        string street, city, state, zip; //variables were made to pick up values from file
        char c; //delimiter
        
        ifstream inFile; //file variable inFile
        inFile.open("customers.dat"); //the file we are receiving from
        if(inFile.is_open()) //if the file is open then run the while loop
        {
            while (!inFile.eof()) //while inFile is not at the end of the file
            {
                getline(inFile, customerNum, '|'); //receive the customer's #
                getline(inFile, customerName, '|');//receive the customer's name
                inFile >> lineOfCredit >> c;// receive the customer's lineOfCredit
                getline(inFile, street, ',');//receive the customer's street
                getline(inFile, city, ',');//receive the customer's city
                getline(inFile, state, ',');//receive the customer's state
                getline(inFile, zip);//receive the customer's zipcode
                Customer one(customerNum, customerName, lineOfCredit); //makes an object per line of customer information
                Address two(street, city, state, zip); //makes an object per line of address in the file 
                cust.push_back(one); //adds the object to a vector that holds customer objects
                addy.push_back(two); //adds the object to a vector that holds address objects
            }
        }
        inFile.close(); //closes the file
}


//Print Function
       /**************************************************************
	 *                          getcustomer                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the all of the customer's information                  
	 * Returns  : String                                         
	 **************************************************************/
string Customer::getCustomer()
{
    string lineOfCredit= (string) lineOfCredit; //turns lineOfCredit into a string for printing
    return customerNum+customerName+lineOfCredit;
}

//Set Functions
     /**************************************************************
	 *                          setcustomerNum                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member customerNum                  
	 * Returns  : Void                                     
	 **************************************************************/
void Customer::setcustomerNum(string cnu){customerNum=cnu;} //sets customerNum equal to string cnu
     /**************************************************************
	 *                          setcustomerName                                                                                    
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member customerName                  
	 * Returns  : Void                                     
	 **************************************************************/
void Customer::setcustomerName(string cna){customerName=cna;} //sets customerName equal to string cna
     /**************************************************************
	 *                          setlineOfCredit                                                                                     
	 * Passed   : 1 argument: a double                                         
	 * Purpose  : To update the value of private member lineOfCredit                  
	 * Returns  : Void                                     
	 **************************************************************/
void Customer::setlineOfCredit(double l){lineOfCredit=l;} //sets lineOfCredit equal to string l
