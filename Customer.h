/*
Customer.h
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose: To set and get functions of the customer.
*/

#include <string>
#include <vector>
#include "Address.h"

 class Customer
 {
     std::string customerNum;
     std::string customerName;
     double lineOfCredit;
     Address * corperateAddress;
     
     public:
     //Class constructors
     /**************************************************************
	 *                          Customer                                                                                   
	 * Passed   : 4 arguments: a string, a string, a double                                         
	 * Purpose  : To create objects for the product class                  
	 * Returns  : Void                                     
	 **************************************************************/
     Customer(std::string, std::string, double);
      /**************************************************************
	 *                          Customer                                                                                   
	 * Passed   : None                                        
	 * Purpose  : To create objects for the product class                  
	 * Returns  : Void                                     
	 **************************************************************/    
     Customer();
     
     //Class vectors
     std::vector<Customer> cust;
     std::vector<Address> addy;
     
     //Get Functions
       /**************************************************************
	 *                          getcustomerNum                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer #                  
	 * Returns  : String                                         
	 **************************************************************/
     std::string getcustomerNum();
       /**************************************************************
	 *                          getcustomerName                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer's name                  
	 * Returns  : String                                         
	 **************************************************************/
     std::string getcustomerName();
       /**************************************************************
	 *                          getlineofCredit                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the customer line of credit                  
	 * Returns  : Double                                         
	 **************************************************************/
     double getlineOfCredit();
     
     //Receive from file Function
       /**************************************************************
	 *                          grabcustomer                                                                                     
	 * Passed   : Nothing                                        
	 * Purpose  : To receive all of the information from the costumer.h file                  
	 * Returns  : Void                                     
	 **************************************************************/
     void grabcustomer();
     //Print function
       /**************************************************************
	 *                          getcustomer                          
	 *                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To return the all of the customer's information                  
	 * Returns  : String                                         
	 **************************************************************/
     std::string getCustomer();
     
     //Set Functions
     /**************************************************************
	 *                          setcustomerNum                                                                                     
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member customerNum                  
	 * Returns  : Void                                     
	 **************************************************************/
     void setcustomerNum(std::string);
     /**************************************************************
	 *                          setcustomerName                                                                                    
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member customerName                  
	 * Returns  : Void                                     
	 **************************************************************/
     void setcustomerName(std::string);
     /**************************************************************
	 *                          setlineOfCredit                                                                                     
	 * Passed   : 1 argument: a double                                         
	 * Purpose  : To update the value of private member lineOfCredit                  
	 * Returns  : Void                                     
	 **************************************************************/
     void setlineOfCredit(double);
 };
