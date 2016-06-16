#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cassert>

// #include <SFML/Graphics.hpp>

class coords
{
	public:
	
	float x;
	float y;
	float d;	
};

int main()
{
	std::string program_name{"Classes 1 V0.2"};
	assert(program_name != "");
	
	const float x_coord{10.4f};
	const float y_coord{46.78f};
	float dist{std::sqrt(x_coord*x_coord + y_coord*y_coord)};	
	
	coords where;
		
	std::cout << "x coord = " << where.x << ", y coord = " << where.y << ", distance = " << where.d << "\n";
	
	where.x = x_coord;
	where.y = y_coord;
	where.d = dist;
	
	std::cout << "x coord = " << where.x << ", y coord = " << where.y << ", distance = " << where.d << "\n";	
} 
