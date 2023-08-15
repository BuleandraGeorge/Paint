#include "Arc.h"

Arc::Arc()
{

}

Arc::Arc(Vector2f initialDot, Vector2f finalDot) :Shapes(59, initialDot, finalDot)
{
	Vector2f radius = finalDot - initialDot;
	float radiusLength = sqrt(powf(radius.x, 2) + powf(radius.y, 2));

		for (int i = 0; i < 59; i++)
		{
			float angle = 2 * i;
			float x = initialDot.x + cos((angle * PI) / 180) * radiusLength * 1.5;
			float y = initialDot.y + sin((angle * PI) / 180) * radiusLength;
			aDescribingPoints[i] = Vector2f(x, y);
		}

	aDescribingPoints[59] = aDescribingPoints[58];
}
