#pragma once


#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
//! A shape class which inherits from Drawable, it the backbone of all the shapes
class Shapes : protected Drawable
{
private:
	std::vector<Color> listOfColors = { Color::White, Color::Red, Color::Blue, Color::Yellow };//!< the list of the possible colors of the shape
protected:
	Vector2f firstDot;
	Vector2f secondDot;
	VertexArray aDescribingPoints;
	int iSize;
public:
	Shapes();//!< the default construct
	Shapes(int iSize, Vector2f initialDot, Vector2f finalDot); //!< the second constructor which sets the describins points and number of these
	void draw(RenderTarget& target, RenderStates states) const; //!< draws the shape to the screen
	void setColor(int color); //!< changes the color of the shape
	
	

};