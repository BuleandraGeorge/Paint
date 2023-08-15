#pragma once
/*!
 \brief The class which describes the user interface

 It draws on the screen the name of the options and highlights the selected ones

 */
#include <vector>
#include "Message.h"
#include "Line.h"
#include <SFML/Graphics.hpp>
#include <string>

class Interface
{
private:
	Message MENU; //!< represents the header of list of options
	Message COLORS; //!< represents he header for the list of colors 
	Line menuDivider; //!< represents the diving between the drawing table and the menu
	std::vector<std::string>texts = { "MENU", "COLORS", "0 - CLEAR", "1 - DOT", "2 - LINE", "3 - TRIANGLE", "4 - SQUARE", "5 - CIRCLE", "6 - ARC", "7 - HEXAGON", "8 - OCTAGON","B - WHITE", "C - RED","D - BLUE","E - YELLOW"}; //!< contains all the texsts of the interface
	std::vector<Message> listOfShapes; //!< is the list with all the shapes names
	std::vector<Message> listOfColors; //!< is the list with all the color names
	bool bDisplayTutorial; //!< was meant to be the trigger for display the tutorial. Unfortunatelly I saw that the tutorial is missing after I uploaded the UML Diagram.
public:
	Interface(); //!< initialise the interface
	void draw(RenderWindow& window); //!< draw all the elements of the interface
	void outlineSelectedOption(int x); //!< highlights the selected options
};

