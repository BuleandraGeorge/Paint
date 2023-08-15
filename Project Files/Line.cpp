#include "Line.h";
Line::Line():Shapes(2, Vector2f(0,0), Vector2f(0,0))
{

}
Line::Line(Vector2f initialDot, Vector2f finalDot) :Shapes(2, initialDot, finalDot)
{
	aDescribingPoints[0] = initialDot;
	aDescribingPoints[1] = finalDot;
}
void Line::updade(Vector2f initialDot, Vector2f finalDot)
{
	firstDot = initialDot;
	secondDot = finalDot;
	aDescribingPoints[0] = initialDot;
	aDescribingPoints[1] = finalDot;
}
