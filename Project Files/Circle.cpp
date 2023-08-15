#include "Circle.h"
#define PI 3.14159265

Circle::Circle() {
}

Circle::Circle(Vector2f initialDot, Vector2f finalDot) :Shapes(59, initialDot, finalDot)
{
	Vector2f radius = finalDot - initialDot;
	float radiusLength = sqrt(powf(radius.x, 2) + powf(radius.y, 2));
	for (int i = 0; i < 60; i++)
	{
		float angle = 6 * i ;
		float x = initialDot.x + cos((angle * PI) / 180) * radiusLength;
		float y = initialDot.y + sin((angle * PI) / 180) * radiusLength;
		aDescribingPoints[i] = Vector2f(x, y);
	}
	aDescribingPoints[59] = aDescribingPoints[0];
}