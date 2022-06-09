#include <iostream>
using namespace std;

class Vector3d {



private:
	float x;
	float y;
	float z;


public:
	void operator-=(const Vector3d& v);
	void operator+=(const Vector3d& v);
	void operator*=(const Vector3d& v);
	void operator/=(const Vector3d& v);
	float calcScalarProduct(const Vector3d& v) const;
	void print();
};

void Vector3d::operator -=(const Vector3d& subtract)
{
	x -= subtract.x;
	y -= subtract.y;
	z -= subtract.z;
}

void Vector3d::operator +=(const Vector3d& addition) {



	x += addition.x;
	y += addition.y;
	z += addition.z;
}



void Vector3d::operator *=(const Vector3d& multiplication) {



	x *= multiplication.x;
	y *= multiplication.y;
	z *= multiplication.z;
}

void Vector3d::operator /=(const Vector3d& division) {



	x /= division.x;
	y /= division.y;
	z /= division.z;
}

float Vector3d::calcScalarProduct(const Vector3d& v) const {
	return x * v.x + y * v.y + z * v.z;
}

void Vector3d::print()
{
	cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << endl;
}

int main() {



	Vector3d vec1;
	Vector3d vec2;

	Vector3d result;

	vec1 += vec2;
	vec1 *= vec2;
	vec1 /= vec2;
	vec1 -= vec2;

	result.print();
}