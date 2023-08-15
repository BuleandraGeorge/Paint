#pragma once
//! A simple Octagon class which inherits from Shapes
#include "Shapes.h"

class Octagon :public Shapes
{
public:
	Octagon();//!< A constructor which allows to create undefined octagons
	/*!
	* \param initialDot describes the shape
	* \param finalDot describes the shape
	*/
	Octagon(Vector2f initialDot, Vector2f finalDot); //!< A second constructor which initialize a octagon with the given values
};

