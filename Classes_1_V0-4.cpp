#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cassert>

// #include <SFML/Graphics.hpp>

class coords
{
	float m_x;
	float m_y;
	float m_d;
	
	public:
	
	void input_x(const float x)
	{
		m_x = x;
	}
	
	void input_y(const float y)
	{
		m_y = y;
	}
	
	void abso_dist()
	{
		m_d = std::sqrt(m_x*m_x + m_y*m_y);
	}
	
	void display_vars()
	{
		std::cout << "x coord = " << m_x << ", y coord = " << m_y << ", distance = " << m_d << "\n";
	}
};

int main()
{
	std::string program_name{"Classes 1 V0.4"};
	assert(program_name != "");
	
	const float x_coord{10.4f};
	const float y_coord{46.78f};
		
	coords where;
		
	where.display_vars();
	
	where.input_x(x_coord);
	where.input_y(y_coord);
	where.abso_dist();
	
	where.display_vars();
} 
