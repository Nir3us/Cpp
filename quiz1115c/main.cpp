#include <iostream>
#include "Vector3d_H.h"
#include "Point3d_H.h"

class Vector3d;

class Point3d;


int main()
{
	Point3d p{1.0, 2.0, 3.0};
	Vector3d v{2.0, 2.0, -3.0};

	p.print();
	p.moveByVector(v);
	p.print();

	return 0;
}
