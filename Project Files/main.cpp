/*! \mainpage Lab 2 - Shapes - Assesed
* 
* This a simple program which allows to the user to draw multiple shapes at a time in different positions using the mouse.
* 
* The program has a simple interface through which the user can selected from 8 different shapes and 4 different colors by pressing
* the numbers from 1 to 8 for shapes , "E", "D", "C" and "B" to change the color and "0" to clear the table.
* 
* By being able to draw multiples shapes or same shape multiple times the user can represend things from around it. 
* 
* For example a human using a circle and couple lines for body.
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application.
* Apart from that has the loop of the window and takes care of the user's input
*/

#include "SFML/Graphics.hpp"
#include "DrawerEngine.h"
#include "Interface.h"
using namespace sf;

int main() //!< Entry point for the application
{
	RenderWindow window(VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);
	DrawerEngine Engine;
	Interface EngineInterface;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			
			switch (event.type)
			{
			case Event::MouseButtonPressed:
			{
				Engine.setStartingPoint(Vector2f(event.mouseButton.x, event.mouseButton.y));
				break;
			}
			case Event::MouseButtonReleased:
			{
				Engine.setEndingPoint(Vector2f(event.mouseButton.x, event.mouseButton.y));
				break;
			}
			case Event::KeyPressed:
			{
				Engine.setOption(event.key.code);
				EngineInterface.outlineSelectedOption(event.key.code);
				break;
			}
			case Event::Closed:
			{
				window.close();
			}
			default:break;
			}	
		}

		Engine.activateOption();

		window.clear();
		Engine.drawShapes(window);
		EngineInterface.draw(window);
		window.display();
	}
}
