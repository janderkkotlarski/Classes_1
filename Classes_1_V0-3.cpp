#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cassert>

// #include <SFML/Graphics.hpp>

float abs_dist(float x, float y)
{
	return std::sqrt(x*x + y*y);
}

class coords
{
	public:
	
	float x;
	float y;
	float d;
	
	void display_vars()
	{
		std::cout << "x coord = " << x << ", y coord = " << y << ", distance = " << d << "\n";
	}
};

int main()
{
	std::string program_name{"Classes 1 V0.3"};
	assert(program_name != "");
	
	const float x_coord{10.4f};
	const float y_coord{46.78f};
	float dist{abs_dist(x_coord, y_coord)};	
	
	coords where;
		
	where.display_vars();
	
	where.x = x_coord;
	where.y = y_coord;
	where.d = dist;
	
	where.display_vars();
} 
