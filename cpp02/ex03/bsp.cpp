#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed p1 = ((point.get_x() - a.get_x()) * (b.get_y() - a.get_y()) - (point.get_y() - a.get_y()) * (b.get_x() - a.get_x())) * 
    ((c.get_x() - a.get_x()) * (b.get_y() - a.get_y()) - (c.get_y() - a.get_y()) * (b.get_x() - a.get_x()));
    
    Fixed p2 = ((point.get_x() - b.get_x()) * (c.get_y() - b.get_y()) - (point.get_y() - b.get_y()) * (c.get_x() - b.get_x())) * 
    ((a.get_x() - b.get_x()) * (c.get_y() - b.get_y()) - (a.get_y() - b.get_y()) * (c.get_x() - b.get_x()));
    
    Fixed p3 = ((point.get_x() - c.get_x()) * (a.get_y() - c.get_y()) - (point.get_y() - c.get_y()) * (a.get_x() - c.get_x())) * 
    ((b.get_x() - c.get_x()) * (a.get_y() - c.get_y()) - (b.get_y() - c.get_y()) * (a.get_x() - c.get_x()));

    if (p1 > 0 && p2 > 0 && p3 > 0)
        return (true);
    return (false);
}