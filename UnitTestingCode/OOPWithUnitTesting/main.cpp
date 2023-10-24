#include <iostream>
#include <string>

//Now add the assert header file
#include <assert.h>

using namespace std;

//Declare a product class
class Product
{
public:
    //Setting class attributes
    string item_name;
    int item_number;
    double item_price;
    int quantity;
    double total;

    Product() = default; //Default constructor
    ~Product();  //Destructor

    //Getters and setters
    void setItemName(string item_name){
        this->item_name = item_name;
    }

    string getItemName(){
        return item_name;
    }

    void setItemNumber(int item_number){
        this->item_number = item_number;
    }

    int getItemNumber(){
        return item_number;
    }

    void setPrice(double item_price){
        this->item_price = item_price;
    }

    double getPrice(){
        return item_price;
    }

    void setQuantity(int quantity){
        this->quantity = quantity;
    }

    int getQuantity(){
        return quantity;
    }

    void setTotal(double total){
        this->total = total;
    }

    double getTotal(){
        double cost;
        cost = item_price * quantity;
        return cost;

    }

    /*********Check amount for products************************************/
   //Declare theAmout() function
    double theAmount(double qty, double price){
       return qty * price;
    }

    //Now, use the assert function below with the function declared above
    double checkCost(){
        assert(theAmount(this->getPrice(), this->getQuantity()) == 28701.98);
        return checkCost();
    }
    /**********************************************************************/


    /**************Check product number*********************************
    int theItemNumber(int){
        return this->getItemNumber();
    }

    int checkItemNumber(){
        assert(theItemNumber(this->getItemNumber()) == 595001);
        return checkItemNumber();
    }
   *********************************************************************/

    /**********************************************************************
    //Check that item name is correct for the product
    string newItemName(string item_name){
        return item_name;
    }

    //Now, check the items name
    bool checkItemName(){
//        assert(newItemName(this->getItemName()) == "Old Computer");
        assert(newItemName(this->getItemName()) != "");
        return checkItemName();
    }
  ***********************************************************************/

};


int main()
{

    //Create an object of the Product class
    Product *computer = new Product();
    computer->setItemName("Acer Laptop");
    computer->setItemNumber(55001);
    computer->setPrice(1350.99);
    computer->setQuantity(2);

    //Print out the item information
    cout << "The product name is: " << computer->getItemName() <<endl;
    cout << "The product number is: " << computer->getItemNumber() <<endl;
    cout << "The unit price is: " << computer->getPrice() <<endl;
    cout << "The quantity is: " << computer->getQuantity() <<endl;
    cout << "The total cost is: " << computer->getTotal() <<endl;
    cout <<  computer->checkCost() <<endl;  //working
//    cout <<  computer->checkItemName() <<endl; //working
//    cout << computer->checkItemNumber() <<endl; //working

    return 0;
}

