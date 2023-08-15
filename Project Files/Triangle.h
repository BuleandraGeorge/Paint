#pragma once
#include "Shapes.h"
#include <math.h>
using namespace sf;
//! A simple Triangle class which inherits from Shapes
class Triangle: public Shapes {
public:
	Triangle();//!< A constructor which allows to create undefined triangles
	/*!
	* \param initialDot is used to describe the height of the triangle
	* \param finalDot is used to describe the height of the triangle
	*/
	Triangle(Vector2f initialDot, Vector2f finalDot);  //!< A second constructor which initialize a triangle with the given values

};