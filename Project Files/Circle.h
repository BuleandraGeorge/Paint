#pragma once
//! A simple Circle class which inherits from Shapes
#include "Shapes.h"
#include <math.h>
class Circle: public Shapes {
public:
	Circle(); //!< A constructor which allows to create undefined circles
	/*!
	* \param initialDot the starting point of the radius
	* \param finalDot the ending point of the radius
	*/
	Circle(Vector2f initialDot, Vector2f finalDot);  //!< A second constructor which initialize a circle with the given values
};