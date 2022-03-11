#include <iostream>
#include <SFML/Graphics.hpp>

namespace Local
{
	sf::Vector2<int> LocalMousePosition;
	sf::Vector2<int> GlobalMousePosition;
	sf::Event PrimaryEventBuffer;
}


int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "Schizo Pirel Suite");
	
	while(true)
	{
		while(window.pollEvent(Local::PrimaryEventBuffer))
		{
			
		}
		Local::GlobalMousePosition = sf::Mouse::getPosition();
		Local::LocalMousePosition  = sf::Mouse::getPosition(window);
		
		//std::cout << "Global Mouse Position  :  " << Local::GlobalMousePosition.x << "   " << Local::GlobalMousePosition.y << std::endl;
		std::cout << "Local  Mouse Position  :  " << Local::LocalMousePosition.x  << "   " << Local::LocalMousePosition.y  << std::endl;
		
	}
    
  

    return 0;
}
