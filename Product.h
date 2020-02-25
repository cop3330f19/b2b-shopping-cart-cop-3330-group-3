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
    int getitemNo();
    std::string getdescription();
    double getprice();
    int getstockQuantity();
    
    //Recieve from file Function
    void grabinfo();
    
    //Print Function
    std::string getProduct();
    
    //Set Functions
    void setitemNo(int);
    void setdescription(std::string);
    void setprice(double);
    void setstockQuantity(int);
};
