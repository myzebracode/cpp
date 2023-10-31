#include <iostream>
#include "Eigen/Dense"

//Examples of using Eigen Array class for array elements manipulation

int main(){

std::string SOMELINES = "*******************************\n";

	Eigen::ArrayXXd Y(3, 4);
	       Y << 2, 4, 3, 6,
	            8, 9, 12, 10,
	            7, 5, 1, 11;

	Eigen::ArrayXXd Z(3, 4);
	       Z << 3, 7, 6, 3,
	            4, 5, 8, 4,
	            5, 9, 5, 4;
	
   std::cout << "Array Y \n" << Y <<std::endl;
   std::cout << "Array Z \n" << Z <<std::endl;

   std::cout << "Array elements multiplication: Y * Z\n"
                       << (Y*Z) <<std::endl;
    
    std::cout << SOMELINES <<std::endl;

    std::cout << "Array elements subtraction: Y - Z\n"
                       << (Y-Z) <<std::endl;

    std::cout << SOMELINES <<std::endl;

    std::cout << "Addition of two arrays: Y + Z \n"
                       << (Y + Z) <<std::endl;

    std::cout << SOMELINES <<std::endl;

    std::cout << "Array elements division: Y / Z \n"
                       << ( Y / Z) <<std::endl;

    std::cout << SOMELINES <<std::endl;

    //Let's do Y array squared
    std::cout << "Array Y squared \n"
                   << (Y*Y*Y) <<std::endl;

    std::cout << SOMELINES <<std::endl;

    //Raise the array Z to the power of 2
    std::cout << "Array Z raised to the power of 2\n"
                  << (Z*Z)  <<std::endl;


	return 0;
}
