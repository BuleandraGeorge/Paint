#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Dot.h";
#include "Line.h";
#include "Triangle.h";
#include "Circle.h";
#include "Hexagon.h";
#include "Octagon.h";
#include "Square.h";
#include "Message.h";
#include "Arc.h";
#include <vector>;

using namespace sf;
/*! \brief The class which brings all the shapes together and takes care of the main features of the program
*
* It brings all the shapes together and take cares of their storage, initialization and printing in the window and also handles the selection of the different options.
*
*/
class DrawerEngine
{
private:
	std::vector<Dot*> listOfDots; //!< list of pointers to the drawn dots
	std::vector<Line*> listOfLines;  //!< list of pointers to the drawn lines
	std::vector<Triangle*> listOfTriangles;  //!< list of pointers to the drawn triangles
	std::vector<Square*> listOfSquares;  //!< list of pointers to the drawn dots squares
	std::vector<Circle*> listOfCircles;  //!< list of pointers to the drawn dots circles
	std::vector<Arc*> listOfArcs; //!< list of pointers to the drawn dots arcs
	std::vector<Hexagon*> listOfHexagons; //!< list of pointers to the drawn dots hexagons
	std::vector<Octagon*> listOfOctagons; //!< list of pointers to the drawn dots octagonss
	int iSelectedOption; //!< stores the selected option
	int iSelectedColor; //!< stores the selected color
	bool bInitialiseShape; //!< stores the state of the initialization of a shape
	Vector2f initialPoint; //!< first describing point of the shape
	Vector2f finalPoint;  //!< second describing point of the shape
	void clearShapes(); //!< clears the table by deleting the elements from the all vectors
	void toggleInitialiseShape(); //!< toggles between the states of the initialization of a shape
public:
	DrawerEngine();
	void setStartingPoint(Vector2f initialPoint); //!< sets the first describing point of a shape
	void setEndingPoint(Vector2f finalPoint);//!< sets the second describing point of a shape
	void setOption(int option); //!<based on value of the option sets iSelectedOption or iSelectedColor values after the test for validity
	void activateOption(); //!< triggers the selected option
	void drawShapes(RenderWindow & window);//!< draws the shapes stored in the lists
	
};

