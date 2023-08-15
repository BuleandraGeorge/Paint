#include "Dot.h";

Dot::Dot()
{

}
Dot::Dot(Vector2f initialDot, Vector2f finalDot):Shapes(1, initialDot, finalDot){
	aDescribingPoints[0] = initialDot;
}