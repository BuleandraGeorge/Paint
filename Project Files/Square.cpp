#include "Square.h"

Square::Square()
{

}
Square::Square(Vector2f initialDot, Vector2f finalDot):Shapes(4, initialDot,finalDot)
{
	Vector2f length = finalDot - initialDot;
	float lengthLength = sqrt(powf(length.x, 2) + powf(length.y, 2));
	float x1 = initialDot.x ;
	float x2 = initialDot.x + lengthLength;
	float y1 = initialDot.y;
	float y2 = initialDot.y + lengthLength;


	aDescribingPoints[0] = Vector2f(x1, y1);
	aDescribingPoints[1] = Vector2f(x2, y1);
	aDescribingPoints[2] = Vector2f(x2, y2);
	aDescribingPoints[3] = Vector2f(x1, y2);
	aDescribingPoints[4] = aDescribingPoints[0]; 

}