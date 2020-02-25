/*
Address.cpp
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:
*/

#include <iostream>
#include "Address.h"
using namespace std;

//constructors given definition
        /**************************************************************
	 *                          Address                                                                                    
	 * Passed   : 4 argument: 4 strings                                         
	 * Purpose  : To create objects for the address class                  
	 * Returns  : Void                                     
	 **************************************************************/
Address::Address(string sa, string c, string s, string z)
{
    streetAddress=sa; // sets streetAddress equal to string sa
    city=c; // sets city equal to string c
    state=s; // sets state equal to string s 
    zipCode=z;  // sets zipCode equal to string z
} 
        /**************************************************************
	 *                          Address                                                                                     
	 * Passed   : None                                        
	 * Purpose  : To create objects for the address class                 
	 * Returns  : Void                                     
	 **************************************************************/ 
Address::Address()
{
    streetAddress="";
    city="";
    state="";
    zipCode="";    
}

//Get Functions
   /**************************************************************
	 *                          getstreetAddress                  
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's street                 
	 * Returns  : String                                          
	 **************************************************************/
string Address::getstreetAddress(){return streetAddress;}
  /**************************************************************
	 *                          getcity                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's city                   
	 * Returns  : String                                          
	 **************************************************************/  
string Address::getcity(){return city;}
  /**************************************************************
	 *                          getstate                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's state                   
	 * Returns  : String                                          
	 **************************************************************/  
string Address::getstate(){return state;}
  /**************************************************************
	 *                          getzipCode                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's zipcode                   
	 * Returns  : String                                          
	 **************************************************************/ 
string Address::getzipCode(){return zipCode;}

//Print Function
  /**************************************************************
	 *                          getAddress                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To print out the customer's address                   
	 * Returns  : String                                          
	 **************************************************************/ 
string Address::getAddress()
{
    return (streetAddress+","+city+","+state+","+zipCode); 
}

//Set Functions
       /**************************************************************
	 *                          setstreetAddress                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member streetAddress                  
	 * Returns  : Void                                     
	 **************************************************************/
void Address::setstreetAddress(string sa){streetAddress=sa;} // sets streetAddress equal to string sa
       /**************************************************************
	 *                          setcity                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member city                  
	 * Returns  : Void                                     
	 **************************************************************/
void Address::setcity(string c){city=c;} //sets city equal to string c
       /**************************************************************
	 *                          setstate                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member state                  
	 * Returns  : Void                                     
	 **************************************************************/
void Address::setstate(string s){state=s;} //sets state equal to string s
       /**************************************************************
	 *                          setstate                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member state                  
	 * Returns  : Void                                     
	 **************************************************************/
void Address::setzipCode(string z){zipCode=z;} //sets zipCode equal to string z
