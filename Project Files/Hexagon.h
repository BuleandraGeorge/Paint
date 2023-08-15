#pragma once

#include "Shapes.h"
#include <math.h>
using namespace sf;
//! A simple Hexagon class which inherits from Shapes
class Hexagon : public Shapes {
public:
	Hexagon();//!< A constructor which allows to create undefined hexagons
	/*!
	* \param initialDot represents the center of the hexagon
	* \param finalDot represents a point from the edge of the hexagon
	*/
	Hexagon(Vector2f initialDot, Vector2f finalDot); //!< A second constructor which initializes a hexagon with the given values
};
