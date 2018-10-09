#include <cmath>
#include "vector.h"

float norm(const Vector3f& v) { return std::sqrt(v * v); }

float angle(const Vector3f& v1, const Vector3f& v2) {
  return std::acos((v1 * v2) / (norm(v1) * norm(v2)));
}