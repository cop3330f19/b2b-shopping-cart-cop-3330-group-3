/*
Product.h
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:
*/

#include <string>
#include <vector>

class Product
{
    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    
    public:
    Product(int, std::string, double, int);
    Product();
    
    std::vector<Product> product;
    
    //Get Functions
  /**************************************************************
	 *                          getitemNo                                                                                      
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's item #                   
	 * Returns  : Int                                          
	 **************************************************************/
    int getitemNo();
  /**************************************************************
	 *                          getdescription                                                                                    
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's description                   
	 * Returns  : String                                          
	 **************************************************************/
    std::string getdescription();
  /**************************************************************
	 *                          getprice                                                                                     
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's price                   
	 * Returns  : Double                                          
	 **************************************************************/
    double getprice();
  /**************************************************************
	 *                          getstockQuantity                                                                             
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's available stock quantity                   
	 * Returns  : Int                                          
	 **************************************************************/
    int getstockQuantity();
    
    //Recieve from file Function
  /**************************************************************
	 *                          grabinfo                                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To receive information from the product.h file                   
	 * Returns  : Void                                          
	 **************************************************************/
    void grabinfo();
    
    //Print Function
  /**************************************************************
	 *                          getProduct                                                                                      
	 * Passed   : Nothing                                         
	 * Purpose  : To return the all the information of the product                   
	 * Returns  : String                                         
	 **************************************************************/  
    std::string getProduct();
    
    //Set Functions
       /**************************************************************
	 *                          setitemNo                                                                                     
	 * Passed   : 1 argument: an int                                         
	 * Purpose  : To update the value of private member itemNo                  
	 * Returns  : Void                                     
	 **************************************************************/
    void setitemNo(int);
       /**************************************************************
	 *                          setdescription                                                                                   
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member description                  
	 * Returns  : Void                                     
	 **************************************************************/    
    void setdescription(std::string);
       /**************************************************************
	 *                          setprice                                                                                     
	 * Passed   : 1 argument: a double                                         
	 * Purpose  : To update the value of private member price                  
	 * Returns  : Void                                     
	 **************************************************************/ 
    void setprice(double);
       /**************************************************************
	 *                          setstockQuantity                                                                                     
	 * Passed   : 1 argument: an int                                         
	 * Purpose  : To update the value of private member stockQuantity                  
	 * Returns  : Void                                     
	 **************************************************************/
    void setstockQuantity(int);
};
