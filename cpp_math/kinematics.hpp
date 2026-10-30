#pragma once

#include <array>
#include <cmath>

namespace cpp_math {

struct Vector3 {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    Vector3 operator+(const Vector3& o) const { return {x + o.x, y + o.y, z + o.z}; }
    Vector3 operator-(const Vector3& o) const { return {x - o.x, y - o.y, z - o.z}; }
    Vector3 operator*(double s) const { return {x * s, y * s, z * s}; }
};

// Cross product: a x b
inline Vector3 cross(const Vector3& a, const Vector3& b) {
    return {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}

// 3x3 Rotation Matrix
struct Matrix3x3 {
    std::array<std::array<double, 3>, 3> m;

    Vector3 operator*(const Vector3& v) const {
        return {
            m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z,
            m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z,
            m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z
        };
    }
};

class Kinematics {
public:
    // Transform velocity vector from frame A to frame B using rotation matrix R
    static Vector3 transformVector(const Matrix3x3& R, const Vector3& v);

    // Calculate linear velocity of a point on a rigid body: v_p = v_origin + omega x r
    static Vector3 rigidBodyPointVelocity(const Vector3& v_origin, const Vector3& omega, const Vector3& r);
};

} // namespace cpp_math