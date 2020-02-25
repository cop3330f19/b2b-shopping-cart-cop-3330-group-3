/*
Address.h
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose: To store our set and get funtions for our source code file Address.cpp
*/

#include <string>

class Address
{
  //data members
  std::string streetAddress; //holds the streetaddreess
  std::string city; //holds the name of the city
  std::string state; //holds the name of the state
  std::string zipCode; //holds the zipcode
  
  public:
  //constructors
        /**************************************************************
	 *                          Address                                                                                    
	 * Passed   : 4 argument: 4 strings                                         
	 * Purpose  : To create objects for the address class                  
	 * Returns  : Void                                     
	 **************************************************************/
  Address(std::string, std::string, std::string, std::string);
        /**************************************************************
	 *                          Address                                                                                     
	 * Passed   : None                                        
	 * Purpose  : To create objects for the address class                 
	 * Returns  : Void                                     
	 **************************************************************/ 
  Address();
  
  //Get Functions
   /**************************************************************
	 *                          getstreetAddress                  
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's street                 
	 * Returns  : String                                          
	 **************************************************************/
  std::string getstreetAddress();
  /**************************************************************
	 *                          getcity                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's city                   
	 * Returns  : String                                          
	 **************************************************************/  
  std::string getcity();
  /**************************************************************
	 *                          getstate                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's state                   
	 * Returns  : String                                          
	 **************************************************************/  
  std::string getstate();
  /**************************************************************
	 *                          getzipCode                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's zipcode                   
	 * Returns  : String                                          
	 **************************************************************/  
  std::string getzipCode();
  
  //Print function
  /**************************************************************
	 *                          getAddress                           
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To print out the customer's address                   
	 * Returns  : String                                          
	 **************************************************************/ 
  std::string getAddress();
  
  //Set Functions
       /**************************************************************
	 *                          setstreetAddress                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member streetAddress                  
	 * Returns  : Void                                     
	 **************************************************************/  
  void setstreetAddress(std::string);
       /**************************************************************
	 *                          setcity                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member city                  
	 * Returns  : Void                                     
	 **************************************************************/  
  void setcity(std::string);
       /**************************************************************
	 *                          setstate                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member state                  
	 * Returns  : Void                                     
	 **************************************************************/  
  void setstate(std::string);
       /**************************************************************
	 *                          setstate                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member state                  
	 * Returns  : Void                                     
	 **************************************************************/  
  void setzipCode(std::string);
};
