/*
Product.cpp
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:
*/

#include <string>
#include <fstream>
#include <iostream>
#include "Product.h"
#include <vector>
using namespace std;

    //Constructors
     /**************************************************************
	 *                          Product                                                                                    
	 * Passed   : 4 arguments: an int, a string, a double, an int                                         
	 * Purpose  : To create objects for the product class                  
	 * Returns  : Void                                     
	 **************************************************************/  
    Product::Product(int i, string d, double p, int s)
    {
        itemNo=i; //sets itemNo equal to i
        description=d; //sets description equal to d
        price=p; //sets price equal to p
        stockQuantity=s; //sets stockQuantity equal to s
    }
        /**************************************************************
	 *                          Product                                                                                    
	 * Passed   : None                                        
	 * Purpose  : To create objects for the product class                  
	 * Returns  : Void                                     
	 **************************************************************/
    Product::Product()
    {
        
        itemNo=0;
        description="";
        price=0;
        stockQuantity=0;   
    }

    //Get Function
  /**************************************************************
	 *                          getitemNo                                                                                      
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's item #                   
	 * Returns  : Int                                          
	 **************************************************************/    
    int Product::getitemNo(){return itemNo;}
  /**************************************************************
	 *                          getdescription                                                                                    
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's description                   
	 * Returns  : String                                          
	 **************************************************************/
    string Product::getdescription(){return description;}
  /**************************************************************
	 *                          getprice                                                                                     
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's price                   
	 * Returns  : Double                                          
	 **************************************************************/
    double Product::getprice(){return price;}
  /**************************************************************
	 *                          getstockQuantity                                                                             
	 * Passed   : Nothing                                         
	 * Purpose  : To return the product's available stock quantity                   
	 * Returns  : Int                                          
	 **************************************************************/
    int Product::getstockQuantity(){return stockQuantity;}
    
    //Receive from file Function
  /**************************************************************
	 *                          grabinfo                                                                            
	 * Passed   : Nothing                                         
	 * Purpose  : To receive information from the product.h file                   
	 * Returns  : Void                                          
	 **************************************************************/  
    void Product::grabinfo()
    {
        string size, type, description; //variables were made to pick up values from file
        char c; //delimiter
        
        ifstream inFile; //file variable inFile
        inFile.open("inventory.dat"); //the file we are receiving from
        if(inFile.is_open()) //if the file is open then run the while loop
        {
           while (!inFile.eof()) //while inFile is not at the end of the file
           {
               inFile >> itemNo >> c ; //receive the item #
               getline(inFile, size, ' ');//receive the size (Men's/Women's/Children's)
               getline(inFile, type, ','); //receive the type (Shirt, shorts, polo)
               inFile >> price >> c >> stockQuantity; //receive the product's price
               description= size + " " +type; //combines size and type to one string
               Product one(itemNo, description, price, stockQuantity);//makes an object per line of products in the file 
               product.push_back(one); //adds the object to a vector that holds product objects
           } 
        }    
        inFile.close(); //closes the file
    }
    
    //Print Function
  /**************************************************************
	 *                          getProduct                                                                                      
	 * Passed   : Nothing                                         
	 * Purpose  : To return the all the information of the product                   
	 * Returns  : String                                         
	 **************************************************************/    
    string Product::getProduct()
    {
        string itemNo=(string) itemNo; //converts itemNo to a string
        string stockQuantity= (string) stockQuantity; //converts stockQuantity to a string
        string price= (string) price; //converts price to a string
        return itemNo+description+""+stockQuantity+price+"";
    }

    //Set Function
       /**************************************************************
	 *                          setitemNo                                                                                     
	 * Passed   : 1 argument: an int                                         
	 * Purpose  : To update the value of private member itemNo                  
	 * Returns  : Void                                     
	 **************************************************************/    
    void Product::setitemNo(int i){itemNo=i;} //sets itemNo equal to i
       /**************************************************************
	 *                          setdescription                                                                                   
	 * Passed   : 1 argument: a string                                         
	 * Purpose  : To update the value of private member description                  
	 * Returns  : Void                                     
	 **************************************************************/
    void Product::setdescription(string d){description=d;} //sets description equal to d
       /**************************************************************
	 *                          setprice                                                                                     
	 * Passed   : 1 argument: a double                                         
	 * Purpose  : To update the value of private member price                  
	 * Returns  : Void                                     
	 **************************************************************/
    void Product::setprice(double p){price=p;} //sets price equal to p
       /**************************************************************
	 *                          setstockQuantity                                                                                     
	 * Passed   : 1 argument: an int                                         
	 * Purpose  : To update the value of private member stockQuantity                  
	 * Returns  : Void                                     
	 **************************************************************/ 
    void Product::setstockQuantity(int s){stockQuantity=s;} //sets stockQuantity equal to s
