#pragma once

#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;

//! A class which defines the texts
class Message
{
public:
	Font theFont; //!< represents the font of the text
	Text theMessage; //!< represents the string of the message

public:
	Message();//!< loads and sets the font, sets a default size of 32 and the color white;
	/*!
	* \param theString is the string of the text
	* \param thePosition is the position of the text
	* \param iFontSize is the size of the font
	*/
	void set(std::string theString, Vector2f thePosition, int iFontSize); //!< sets the string, the position and the font of the text accordingly to the parameters;

};