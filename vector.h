#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

struct Vector3f {
  float x, y, z;
};

std::ostream& operator<<(std::ostream& os, const Vector3f& v);
float operator*(const Vector3f& v1, const Vector3f& v2);
float norm(const Vector3f& v);
float angle(const Vector3f& v1, const Vector3f& v2);

#endif  // VECTOR_H_