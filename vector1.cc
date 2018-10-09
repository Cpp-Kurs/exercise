#include "vector.h"

float operator*(const Vector3f& v1, const Vector3f& v2){
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
std::ostream& operator<<(std::ostream& os, const Vector3f& v){
  return os << "( " << v.x <<", " << v.y << ", " << v.z << " )" << std::endl;
}
