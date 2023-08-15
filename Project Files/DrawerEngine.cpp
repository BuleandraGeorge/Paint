#include "DrawerEngine.h"
#include <iostream>
DrawerEngine::DrawerEngine()
{
	iSelectedOption=-1;
	iSelectedColor = 1;
	bInitialiseShape = false;
}
void DrawerEngine::toggleInitialiseShape()
{
	bInitialiseShape = !bInitialiseShape;
}
void DrawerEngine::setStartingPoint(Vector2f x)
{
	initialPoint = x;
}
void DrawerEngine::setEndingPoint(Vector2f x)
{
	finalPoint = x;
	if ((iSelectedOption>0)&&(iSelectedOption <9)) toggleInitialiseShape();
}
void DrawerEngine::setOption(int x)
{
	if ((x > 0) && (x < 5)) iSelectedColor = x;
	else if ((x < 35) && (x > 25)) iSelectedOption = x - 26; // the key code for 0 is 26 and for 4 is 35

}
void DrawerEngine::activateOption()
{
		if (iSelectedOption == 0) clearShapes();
		else if (bInitialiseShape) switch (iSelectedOption)
		{
		case 1:
		{

			listOfDots.push_back(new Dot(initialPoint, finalPoint));
			listOfDots[listOfDots.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 2:
		{

			listOfLines.push_back(new Line(initialPoint, finalPoint));
			listOfLines[listOfLines.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 3:
		{
			listOfTriangles.push_back(new Triangle(initialPoint, finalPoint));
			listOfTriangles[listOfTriangles.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 4:
		{
			listOfSquares.push_back(new Square(initialPoint, finalPoint));
			listOfSquares[listOfSquares.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 5:
		{
			listOfCircles.push_back(new Circle(initialPoint, finalPoint));
			listOfCircles[listOfCircles.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 6:
		{
			listOfArcs.push_back(new Arc(initialPoint, finalPoint));
			listOfArcs[listOfArcs.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 7:
		{
			listOfHexagons.push_back(new Hexagon(initialPoint, finalPoint));
			listOfHexagons[listOfHexagons.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		case 8:
		{
			listOfOctagons.push_back(new Octagon(initialPoint, finalPoint));
			listOfOctagons[listOfOctagons.size() - 1]->setColor(iSelectedColor);
			toggleInitialiseShape();
			break;
		}
		default: break;
			
		}
}
void DrawerEngine::drawShapes(RenderWindow& window) {
	for (int i = 0; i < listOfDots.size(); i++)
	{
		listOfDots[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfLines.size(); i++)
	{
		listOfLines[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfTriangles.size(); i++)
	{
		listOfTriangles[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfSquares.size(); i++)
	{
		listOfSquares[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfCircles.size(); i++)
	{
		listOfCircles[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfArcs.size(); i++)
	{
		listOfArcs[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfHexagons.size(); i++)
	{
		listOfHexagons[i]->draw(window, RenderStates::Default);
	}
	for (int i = 0; i < listOfOctagons.size(); i++)
	{
		listOfOctagons[i]->draw(window, RenderStates::Default);
	}
}
void DrawerEngine::clearShapes()
{
	for (int i = 0; i < listOfDots.size(); i++)
	{
		delete listOfDots[i];
	}
	for (int i = 0; i < listOfLines.size(); i++)
	{
		delete listOfLines[i];
	}
	for (int i = 0; i < listOfTriangles.size(); i++)
	{
		delete listOfTriangles[i];
	}
	for (int i = 0; i < listOfSquares.size(); i++)
	{
		delete listOfSquares[i];
	};
	for (int i = 0; i < listOfCircles.size(); i++)
	{
		delete listOfCircles[i];
	}
	for (int i = 0; i < listOfArcs.size(); i++)
	{
		delete listOfArcs[i];
	}
	for (int i = 0; i < listOfHexagons.size(); i++)
	{
		delete listOfHexagons[i];
	}
	for (int i = 0; i < listOfOctagons.size(); i++)
	{
		delete listOfOctagons[i];
	}
	listOfDots.resize(0);
	listOfLines.resize(0);
	listOfTriangles.resize(0);
	listOfSquares.resize(0);
	listOfCircles.resize(0);
	listOfArcs.resize(0);
	listOfHexagons.resize(0);
	listOfOctagons.resize(0);
}