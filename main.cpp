#include <iostream>
#include <string>
#include <cstdarg> //For the variadic number of arguments function

using namespace std;

//Function prototype for country, it takes two arguments
string country(string name, string capital);

//Function prototype for country, it takes three arguments
string country(string name, string capital, string population);

//Function overloading with data type of int

//Function prototype for addNums function
int addNums(int a, int b); //Will only add two numbers

//Function prototype for addNums function
int addNums(int a, int b, int c); //Will only add three numbers

//Function prototype for addNums function
int addNums(int a, int b, int c, int d, int e); //Will only add five numbers

//Function prototype for addNums function to add five double numbers
double addNums(double a, double b, double c, double d, double e); //Will only add five numbers

//Using variable number of arguments function
//We will define the function
int myAddNums(int nums,...){

    va_list myValues; //He we define type of variable

    int total = 0;

    va_start(myValues, nums); //Now, we use the va_start macro

    //Here we will do a loop to add all the int values
    for(int i = 0; i < nums; i++){
        total += va_arg(myValues, int);
    }

    va_end(myValues);
    return total;
}


int main(){

   //Call the country function
    cout << country("United States of America ", "Washington DC") <<endl;

    //Call the country function with three arguments
    cout << country("Germany ", " Berlin", " 83,000,000") <<endl;

    //Call the addNums function to add two numbers
    cout << addNums(45, 32) <<endl;

    //Call the addNums function to add three numbers
    cout << addNums(67, 120, 733) <<endl;

    //Call the addNums function to add five integer numbers
    cout << addNums(22, 46, 78, 101, 29) <<endl;

    //Call the addNums function to add five double numbers
    cout << addNums(22.11, 46.99, 78.21, 101.44, 29.18) <<endl;

    //Call the myAddNums varable number or arguments function
    cout << "The six numbers added is: " << myAddNums(6, 21, 21, 21, 33, 61, 88) <<endl;

    return 0;
}

//Declare the country function, this takes two arguments
string country(string name, string capital){
    return (name + capital);
}

//Declare the country function, this takes three arguments
string country(string name, string capital, string population){
    return (name + capital + population);
}

//Declare the addNums function
int addNums(int a, int b){ //Add two numbers
    return (a + b);
}

//Declare the addNums function
int addNums(int a, int b, int c){ //Add three numbers
    return (a + b + c);
}

//Declare the addNums function
int addNums(int a, int b, int c, int d, int e){ //Add five numbers
    return (a + b + c + d + e);
}

//Declare the addNums function with data type double
//Function prototype for addNums function to add five double numbers
double addNums(double a, double b, double c, double d, double e){ //Will only add five numbers
    return (a + b + c + d + e);
}
