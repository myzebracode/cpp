#include <iostream>
#include <string>

// using namespace std; //This is for the standard namespace library

//Let's add some namespaces

//Namespace for the United Kingdom
namespace UnitedKingdom
{
	std::string city = "Oxford, England, United Kingdom";


//Namespace nesting
	namespace University
	{
		//Create a function here
		void uni(void)
		{
			std::string institutions[6] = {"University of Oxford", "Cambridge University", "University of Bristol", "University of London", "Durham University", "Oxford Brookes University"};

			//Do a for loop to print it out
			for(int i = 0; i < 6; i++)
				std::cout << institutions[i] <<std::endl;
		}
	}


}

//Namespace for the United States of America
namespace UnitedStatesofAmerica
{
	std::string city = "Oxford, Mississippi, United States of America";

	std::string capital = "Washington DC";

	//Namespace nesting
	namespace University
	{
		//Create a function here
		void uni(void)
		{
			std::string institutions[4] = {"MIT", "Harvard", "Stanford", "University of Florida"};

			//Do a for loop to print it out
			for(int i = 0; i < 4; i++)
				std::cout << institutions[i] <<std::endl;
		}


	//Namespace nesting
	namespace States
	{
		//Create a function here
		void stateName(void)
		{
			std::string sts[5] = {"Alabama", "Alaska", "Arkansas", "California", "Ohio"};

			//Do a for loop to print it out
			for(int i = 0; i < 5; i++)
				std::cout << sts[i] <<std::endl;
		}
	}

	}
}


//Using an alias for a namespace
namespace usa = UnitedStatesofAmerica;

//An alias for the UnitedKingdom namespace
namespace uk = UnitedKingdom;

int main(){

	// cout << city <<endl; //This will cause an error for the compiler
	std::cout << UnitedKingdom::city <<std::endl; //Oxford, England

	std::cout << UnitedStatesofAmerica::city  <<std::endl; //Oxford Mississippi

   //Priint out the capital of the United State of America
	std::cout << "The capital city of the USA is " << usa::capital << std::endl;

   std::cout << uk::city <<std::endl; //Print out Oxford, England, United Kingdom

   //Calling the nested namespace
   UnitedStatesofAmerica::University::uni();

   std::cout << "These are some universities in the UK" <<std::endl;
   UnitedKingdom::University::uni();

   //Accessing data within nested namespaces
   UnitedStatesofAmerica::University::States::stateName();

	return 0;
}