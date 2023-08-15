#pragma once
//! A simple Square class which inherits from Shapes
#include "Shapes.h"


class Square :public Shapes
{
public:
	Square();//!< A constructor which allows to create undefined squares
	/*!
	* \param initialDot is used to define the lenght of the side
	* \param finalDot is used to define the lenght of the side
	*/
	Square(Vector2f initialDot, Vector2f finalDot);  //!< A second constructor which initialize a square with the given values
};

