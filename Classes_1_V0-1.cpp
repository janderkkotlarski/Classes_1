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
};

int main()
{
	const float x_coord{10.4f};
	const float y_coord{46.78f};
	
	coords where;
	
	float dist{std::sqrt(where.x*where.x + where.y*where.y)};	
	
	std::cout << "x coord = " << where.x << ", y coord = " << where.y << ", distance = " << dist << "\n";
	
	where.x = x_coord;
	where.y = y_coord;
	
	dist = std::sqrt(where.x*where.x + where.y*where.y);
	
	std::cout << "x coord = " << where.x << ", y coord = " << where.y << ", distance = " << dist << "\n";	
} 
