#include <string>

class Product
{
    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    
    public:
    Product(int, std::string, double, int);
    Product();
    
    //Get Functions
    int getitemNo();
    std::string getdescription();
    double getprice();
    int getstockQuantity();
    
    //Print Function
    void getProduct();
    
    //Set Functions
    void setitemNo(int);
    void setdescription(std::string);
    void setprice(double);
    void setstockQuantity(int);
    
};
