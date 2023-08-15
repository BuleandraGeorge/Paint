#include "Interface.h"
Interface::Interface()
{
	menuDivider.updade(Vector2f(800.f, 0), Vector2f(800.f, 800.f));
	bDisplayTutorial = true;
	listOfShapes.resize(9);
	float fAlignAt = 840;
	for (int i = 0; i < listOfShapes.size();i++)
	{
		listOfShapes[i].set(texts[i + 2], Vector2f(fAlignAt, 120 + (30 * i)), 24);
	}
	listOfColors.resize(4);
	for (int i = 0; i < listOfColors.size(); i++)
	{
		listOfColors[i].set(texts[i + 11], Vector2f(fAlignAt, 480 + (30 * i)),24);
	}
	listOfColors[0].theMessage.setFillColor(Color::Red);
	listOfShapes[0].theMessage.setFillColor(Color::Red);
	MENU.set(texts[0], Vector2f(880.f, 70.f), 32);
	COLORS.set(texts[1], Vector2f(855.f, 430.f), 32);
}


void Interface::outlineSelectedOption(int x)
{

	if ((x < 35 ) && (x > 25))
	{
		int iAjustedValue = x - 26;
		for (int i = 0; i < listOfShapes.size(); i++)
		{
			listOfShapes[i].theMessage.setFillColor(Color::White);
		}
		listOfShapes[iAjustedValue].theMessage.setFillColor(Color::Red);
	}
	if ((x > -1) && (x < 5))
	{

		for (int i = 0; i < listOfColors.size(); i++)
		{
			listOfColors[i].theMessage.setFillColor(Color::White);
		}
		listOfColors[x-1].theMessage.setFillColor(Color::Red);
	}
}
void Interface::draw(RenderWindow& window)
{
	for (int i = 0; i < listOfShapes.size();i++)
	{
		window.draw(listOfShapes[i].theMessage);
	}
	for (int i = 0; i < listOfColors.size();i++)
	{
		window.draw(listOfColors[i].theMessage);
	}
	window.draw(MENU.theMessage);
	window.draw(COLORS.theMessage);
	menuDivider.draw(window, RenderStates::Default);
}