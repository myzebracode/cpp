#include <iostream>
#include <string>
#include <iomanip> //The iomanip header file for data formatting
#include <cmath>

using namespace std;

int main(){
/************
//Example 1: printing strings with the setw function
	cout << setw(18) << "Zebracode" <<endl;

//Example 2: Using setprecision
	cout << "|" << setw(12) << fixed << setprecision(4) << 29.95 << "|" <<endl;

//Example 3: Setting width and doing right and left text justification
	cout << "|" << setw(22) << left << 2000 << "|" <<endl;
	cout << "|" << setw(22) << right << 2000 << "|" <<endl;

//Example 4: Using the setiosflags
	cout << "|" << setw(10) << setiosflags(ios::left) << 1900 << "|" <<endl;
	cout << "|" << setw(10) << setiosflags(ios::left) << 2000 << "|" <<endl;
	cout << "|" << setw(10) << setiosflags(ios::left) << 3000 << "|" <<endl;


//Example 5: Formatting with setw, left, right and setprecision

	cout << "|" << setw(20) << right << setprecision(5) << exp(1.) <<"|" <<endl;
	cout << "|" << setw(20) << right << setprecision(5) << log(18.697) <<"|" <<endl;
	cout << "|" << setw(20) << right << setprecision(5) << log10(18.697) <<"|" <<endl;
	cout << "|" << setw(20) << right << setprecision(5) << M_PI <<"|" <<endl;

//Example 6: Displaying mathematical data with setw
	cout << setw(3) << 9 << endl
	     << setw(3) << 32 << endl
	     << setw(3) << 615 << endl
	     << "---\n"
	     << (9 + 32 + 615) <<endl;

//Example 6a: Displaying mathematical data with setw interactively
int a, b, c;
cout << "Enter three digits  between 1 and 100" <<endl;

cin >> a >> b >> c;

cout << setw(3) << a <<endl
     << setw(3) << b << endl
     << setw(3) << c << endl
     << "---\n"
     << (a + b + c) <<endl;


//Example 7: Using the setfill() function in the iomanip library
	cout << setfill('$') << setw(12) << 101 <<endl;


//Example 8: Using setprecision with double digits

	double cost = 3.662367;

	cout << setprecision(3) << cost << endl;
	cout << setprecision(4) << cost << endl;
	cout << setprecision(5) << cost << endl;
	cout << setprecision(6) << cost << endl;
	cout << setprecision(10) << cost << endl;


//Example 9: This programme shows grouping of Bits and Bytes in a computer
cout << "A Group of...	   " << "Equals" <<endl;
cout << "-------------	   " << "----------" <<endl;

cout << "8 bits"         <<setw(19)<<"1 byte" <<endl;
cout << "1024 Bytes"     <<setw(19)<<"1 kilobyte" <<endl;
cout << "1024 kilobytes" <<setw(15)<<"1 megabyte" <<endl;
cout << "1024 megabytes" <<setw(15)<<"1 gigabyte" <<endl;
cout << "1024 gigabytes" <<setw(15)<<"1 terabyte" <<endl;
cout << "1024 terabytes" <<setw(15)<<"1 petabyte" <<endl;
cout << "1024 petabytes" <<setw(14)<<"1 exabyte" <<endl;
cout << "1024 exabytes" <<setw(17)<<"1 zettabyte" <<endl;
cout << "1024 zettabytes" <<setw(15)<<"1 yottabyte" <<endl;

cout << "Note: you can also use 1000 bytes, etc." <<endl;

//Example 10: Showing the size of data types with the setw function
cout << "Size of int"  << setw(10)<<sizeof(int)<<endl;
cout << "Size of double"  << setw(7)<<sizeof(double)<<endl;
cout << "Size of float"  << setw(8)<<sizeof(float)<<endl;
cout << "Size of decimal"  << setw(6)<<sizeof(float)<<endl;
cout << "Size of string"  << setw(7)<<sizeof(string)<<endl;
cout << "Size of char"  << setw(9) <<sizeof(char)<<endl;
cout << "Size of boolean" << setw(6) <<sizeof(bool)<<endl;

//Example 11: Working with the put_money function in the iomanip library
//Available since C++11
//It will round up the number if the decimal value is over 50

	double cost = 989.18;
	cout << "The amount is: " << put_money(cost) <<endl;

*************/

//Example 12: Stock market and shares display with iomanip
	cout << "\tCompanies  	Share values" <<endl;
cout << "\t----------  	-----------" <<endl;

cout << "STOCK MARKETS" <<endl;
cout << setw(27) << "Nov 5 2021" << setw(9) << "prev" << setw(11) << "%chg" <<endl;

cout << fixed << setprecision(2);

cout << "S&P 500" << setw(20) << 4705.79 << setw(12) << 4680.06 << setw(8) << 0.55 <<endl;
cout << "Nasdaq Composite" << setw(11)  << 16032.97 << setw(12) << 15940.31 << setw(8) << 0.58 <<endl;
cout << "Dow Jones Index" << setw(12)  << 36344.46 << setw(12) << 36124.23 << setw(8) << 0.61 <<endl;
cout << "FTSEurofirst 300" << setw(11) << 1870.28 << setw(12)  << 1869.90 << setw(8) << 0.02 <<endl;
cout << "Euro Stoxx 50" << setw(14)  << 4357.45 << setw(12) << 4333.34 << setw(8) << 0.56 <<endl;
cout << "FTSE 100" << setw(19)  << 7303.96 << setw(12) << 7279.91 << setw(8) << 0.33 <<endl;
cout << "FTSE All-Share" << setw(13)  << 4175.97 << setw(12) << 4160.90 << setw(8) << 0.36 <<endl;
cout << "CAC 40" << setw(21)  << 7040.79 << setw(12) << 6987.79 << setw(8) << 0.76 <<endl;
cout << "Xetra Dax" << setw(18)  << 16054.36 << setw(12) << 16029.65 << setw(8) << 0.15 <<endl;
cout << "Nikkei" << setw(21)  << 29611.57 << setw(12) << 29794.37 << setw(8) << -0.61 <<endl;
cout << "Hang Seng" << setw(18)  << 24870.51 << setw(12) << 25225.19 << setw(8) << -1.41 <<endl;
cout << "MSCI World $" << setw(15)  << 3224.63 << setw(12) << 3212.35 << setw(8) << 0.38 <<endl;
cout << "MSCI EM $" << setw(18)  << 1268.45 << setw(12) << 1262.46 << setw(8) << 0.47 <<endl;
cout << "MSCI ACWI $" << setw(16)  << 755.85 << setw(12) << 752.89 << setw(8) << 0.39 <<endl;

	return 0;
}