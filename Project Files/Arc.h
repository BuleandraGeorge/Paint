#pragma once
#define PI 3.14159265

//! A simple Arc class  which inherits from Shapes
#include "Shapes.h"
#include <cmath>
class Arc :public Shapes
{
public:
	Arc(); //!< A constructor which allows to create undefined arcs
	/*!
	* \param initialDot the starting point of the radius
	* \param finalDot the ending point of the radius
	*/
	Arc(Vector2f initialDot, Vector2f finalDot); //!< A second constructor which initializes an arc with the given values

};

