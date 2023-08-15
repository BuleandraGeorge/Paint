#pragma once
//! A simple Dot class which inherits from Shapes
#include "Shapes.h"
class Dot : public Shapes {
public:
	Dot();//!< A constructor which allows to create undefined dots
	/*!
	* \param initialDot the position of the dot
	* \param finalDot it is only to keep the structure of the constructors
	*/
	Dot(Vector2f initialDot, Vector2f finalDot); //!< A second constructor which initializes a dot with the given values
};