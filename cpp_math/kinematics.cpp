#include "kinematics.hpp"

namespace cpp_math {

Vector3 Kinematics::transformVector(const Matrix3x3& R, const Vector3& v) {
    return R * v;
}

Vector3 Kinematics::rigidBodyPointVelocity(const Vector3& v_origin, const Vector3& omega, const Vector3& r) {
    // v_p = v_origin + (omega x r)
    return v_origin + cross(omega, r);
}

} // namespace cpp_math