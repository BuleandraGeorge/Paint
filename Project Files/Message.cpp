#include "Message.h";

Message::Message()
{
	bool bSuccess = theFont.loadFromFile(".\\assets\\fonts\\unifont.ttf");
	theMessage.setFont(theFont);
	theMessage.setCharacterSize(32);
	theMessage.setFillColor(Color::White);
	
}
void Message::set(std::string theString, Vector2f thePosition, int iFontSize)
{
	theMessage.setPosition(thePosition);
	theMessage.setString(theString);
	theMessage.setCharacterSize(iFontSize);
}
