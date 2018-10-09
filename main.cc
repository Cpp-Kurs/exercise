#include <iostream>
#include <sstream>

#include "vector.h"

int main(int argc, char** argv){
	if (argc != 7){
		std::cout << " main.cc <6 numbers for vector>\n";
	}

	Vector3f x;
	std::stringstream input{argv[1]};
	input >> x.x;
	input = std::stringstream{argv[2]};
	input >> x.y;
	input = std::stringstream{argv[3]};
	input >> x.z;
	Vector3f y;
	input = std::stringstream{argv[4]};
	input >> y.x;
	input = std::stringstream{argv[5]};
	input >> y.y;
	input = std::stringstream{argv[6]};
	input >> y.z;


	std::cout << "x = " << x ;
	std::cout << "\ny = " << y;
	std::cout << "\nx * y = " << x * y;
	std::cout << "\nnorm x = " << norm(x);
	std::cout << "\nnorm y = " << norm(y);
	std::cout << "\nangle = " << angle(x,y);

}