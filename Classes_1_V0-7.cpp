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
	
	void abso_dist()
	{
		m_d = std::sqrt(m_x*m_x + m_y*m_y);
	}
	
	public:
	
	void input_x(const float x)
	{
		m_x = x;
		abso_dist();
	}
	
	void input_y(const float y)
	{
		m_y = y;
		abso_dist();
	}
	
	void input_x_y(const float x, const float y)
	{
		m_x = x;
		m_y = y;
		abso_dist();
	}
	
	float give_x()
	{
		return m_x;
	}
	
	float give_y()
	{
		return m_y;
	}
	
	float give_d()
	{
		return m_d;
	}
	
	void display_vars()
	{
		std::cout << "x coord = " << m_x << ", y coord = " << m_y << ", distance = " << m_d << "\n";
	}
	
	coords()
		: m_x(0.0f), m_y(0.0f), m_d(0.0f)
	{
	}
	
	coords(const float x, const float y)
		:m_x(x), m_y(y), m_d(0.0f)
	{
		abso_dist();
	}
	
	~coords()
	{
	}
	
};

int main()
{
	std::string program_name{"Classes 1 V0.7"};
	assert(program_name != "");
	
	const float x_coord{10.4f};
	const float y_coord{46.78f};
		
	coords where;
		
	where.display_vars();
	
	where.input_x(x_coord);
	
	where.display_vars();
	
	where.input_y(y_coord);
	
	where.display_vars();
	
	const float x_cord{where.give_d() - where.give_y()};
	const float y_cord{where.give_d() - where.give_x()};
	
	where.input_x_y(x_cord, y_cord);
	
	where.display_vars();
	
	coords here{x_cord, y_coord};
	here.display_vars();
} 
