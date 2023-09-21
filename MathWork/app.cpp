#include <iostream>
#include "Eigen/Dense"
#include "Eigen/Geometry"

using Eigen::MatrixXd;

int main(){

//Comma-Initialization
	Eigen::Matrix3f nums;
	nums << 1, 2, 3, 4, 5, 6, 7, 8, 9;
	std::cout << nums << std::endl;

//Create 2x2 matrix or 4x4 and print the size
	Eigen::Matrix4f price;
	std::cout << price.size() <<std::endl;

//Create a Constant 10x10 matrix with a fixed value of 6
	Eigen::MatrixXd games;
	games = MatrixXd::Constant(10, 10, 6);
	std::cout << games <<std::endl;

//Create a 4x4 matrix with a set value of 0
	Eigen::Matrix <float, 4, 4> mynums;
	mynums.setZero();
	std::cout << mynums <<std::endl;

//Working with functions
//using the transposeInPlace() function

	Eigen::MatrixXf results(4, 4);
	results << 8, 12, 17, 33, 39, 101, 20, 91, 36, 42, 55, 88, 10, 37, 27, 17;
	std::cout << "This is the original matrix results:\n" << results <<std::endl;

	//Now, let's use the function transposeInPlace()
	results.transposeInPlace();
	std::cout << "The new results after using transposeInPlace:\n" << results <<std::endl;

  //Some basic arithmetic operations with Eigen library
 //We can use the sum(), prod(), mean(), minCoeff(), maxCoeff(), trace() functions

	Eigen::Matrix4d scores;
	scores << 12, 18, 21, 34, 98, 122, 98, 27, 38, 20, 31, 45, 38, 11, 49, 51;

//Now, let's print it out
	std::cout << "All values in the scores 4x4 matrix are:\n" << scores <<std::endl;

//Let's use the functions
	std::cout << "Result for sum() function:" << scores.sum() <<std::endl;
	std::cout << "Result for prod() function:" << scores.prod() <<std::endl;
	std::cout << "Result for mean() function:" << scores.mean() <<std::endl;
	std::cout << "Result for minCoeff function:" <<scores.minCoeff() <<std::endl;
	std::cout << "Result for maxCoeff function:" <<scores.maxCoeff() <<std::endl;
	std::cout << "Result for trace() function:" << scores.trace() <<std::endl;

//Printing individual element from a matrix
	Eigen::Matrix3f goals;
	goals << 23, 54, 92, 49, 27, 39, 83, 96, 63;
	std::cout << goals(2,1) <<std::endl;






	return 0;
}
