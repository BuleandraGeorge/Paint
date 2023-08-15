#include "Octagon.h"
#define PI 3.14159265

Octagon::Octagon() {
}

Octagon::Octagon(Vector2f initialDot, Vector2f finalDot) :Shapes(8, initialDot, finalDot)
{
	Vector2f radius = finalDot - initialDot;
	float radiusLength = sqrt(powf(radius.x, 2) + powf(radius.y, 2));
	for (int i = 0; i < 8; i++)
	{
		float angle = 45 * i;
		float x = initialDot.x + cos((angle * PI) / 180) * radiusLength;
		float y = initialDot.y + sin((angle * PI) / 180) * radiusLength;
		aDescribingPoints[i] = Vector2f(x, y);
	}
	aDescribingPoints[8] = aDescribingPoints[0];
}