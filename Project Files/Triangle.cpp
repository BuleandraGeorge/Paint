#include "Triangle.h"
#include <iostream>
Triangle::Triangle() :Shapes(3, Vector2f(0, 0), Vector2f(0, 0))
{
	for (int i = 0; i < 4;i++)
	{
		aDescribingPoints[i] = Vector2f(0, 0);
	}
	
}
Triangle::Triangle(Vector2f initialDot, Vector2f finalDot):Shapes(3, initialDot, finalDot)
{
    // finds the coordonates of the vectors describing the base.
	// left and right by the height
	float x1 = finalDot.x - (finalDot.y - initialDot.y); // x coodonate of left -side vector
	float y1 = finalDot.y; // y coordonate of the left-side vector
	Vector2f leftDot(x1, y1);
	float x2 = finalDot.x + (finalDot.y - initialDot.y); // x coodonate of rightside -side vector
	float y2 = finalDot.y; // y coodonate of right-side vector
	Vector2f rightDot(x2, y2);
	aDescribingPoints[0] = initialDot;
	aDescribingPoints[1] = leftDot;
	aDescribingPoints[2] = rightDot;
	aDescribingPoints[3] = initialDot;
}