#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float const x, float const y): x(x), y(y)
{
}

Point::~Point()
{
}

Point::Point(const Point &copy)
{
    *this = copy;
}

Point &Point::operator=(const Point &s)
{
	Point *copy = new Point(s.x.toFloat(), s.y.toFloat());
	return (*copy);
}

Fixed Point::get_x() const
{
	return (this->x);
}

Fixed Point::get_y() const
{
	return (this->y);
}
