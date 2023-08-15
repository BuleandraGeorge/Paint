#pragma once
//! A simple Line class which inherits from Shapes
#include "Shapes.h"
class Line: public Shapes {
public:
	Line();//!< A constructor which allows to create undefined lines
	/*!
	* \param initialDot starting point of the line
	* \param finalDot ending point of the line
	*/
	Line(Vector2f initialDot, Vector2f finalDot); //!< A second constructor which initialize a line with the given values
	void updade(Vector2f initialDot, Vector2f finalDot); //!< Updates the position of line by the given parameters
};