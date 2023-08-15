#include "Shapes.h"
#include <iostream>
Shapes::Shapes()
{

}
Shapes::Shapes(int iLength, Vector2f initialDot, Vector2f finalDot)
{
	iSize = iLength;
	aDescribingPoints.resize(iSize);
	aDescribingPoints.setPrimitiveType(Points);
	if (iSize > 1) {
		aDescribingPoints.setPrimitiveType(LinesStrip);
	}
	if (iSize > 2)
	{
		iSize = iSize + 1;
		aDescribingPoints.resize(iSize);
	}
	firstDot = initialDot;
	secondDot = finalDot;
}
void Shapes::setColor(int color)
{
	for (int i = 0; i < iSize; i++)
	{
		aDescribingPoints[i].color = listOfColors[color-1];
	}
}
void Shapes::draw(RenderTarget& target, RenderStates states) const
{
	target.draw(aDescribingPoints);
}