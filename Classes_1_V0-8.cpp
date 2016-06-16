#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cassert>

#include <SFML/Graphics.hpp>

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
	std::string program_name{"Classes 1 V0.8"};
	assert(program_name != "");
	const sf::Color black{sf::Color(0, 0, 0)};
	const sf::Color light_red{sf::Color(191, 63, 63)};
	
	coords wind_dims{800.0f, 600.0f};
	wind_dims.display_vars();
	
	sf::RenderWindow window(sf::VideoMode(wind_dims.give_x(), wind_dims.give_y()), program_name, sf::Style::Default);
				
	coords cordi{200.0f, 100.0f};
	cordi.display_vars();
	
	coords recta{30.0f, 50.0f};
	recta.display_vars();
	
	sf::RectangleShape rectangle{sf::Vector2f(recta.give_x(), recta.give_y())};
	rectangle.setPosition(sf::Vector2f(cordi.give_x(), cordi.give_y()));
	rectangle.setFillColor(light_red);
	
	while (window.isOpen())
	{
		sf::Event event;		
		window.clear(black);
		
		window.draw(rectangle);
				
		window.display();
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
			return 0;
		}
		
		while (window.pollEvent(event))
		{			
			if (event.type == sf::Event::Closed)
			{
				window.close();
				return 0;
			}		
		}
	}
	
	return 1;
	
} 
