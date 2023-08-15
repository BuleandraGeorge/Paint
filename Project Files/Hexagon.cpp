#include "Hexagon.h"
#define PI 3.14159265

Hexagon::Hexagon() {
}

Hexagon::Hexagon(Vector2f initialDot, Vector2f finalDot) :Shapes(6, initialDot, finalDot)
{
	Vector2f radius = finalDot - initialDot;
	float radiusLength = sqrt(powf(radius.x, 2) + powf(radius.y, 2));
	for (int i = 0; i < 6; i++)
	{
		float angle = 60 * i;
		float x = initialDot.x + cos((angle * PI) / 180) * radiusLength;
		float y = initialDot.y + sin((angle * PI) / 180) * radiusLength;
		aDescribingPoints[i] = Vector2f(x, y);
	}
	aDescribingPoints[6] = aDescribingPoints[0];
}