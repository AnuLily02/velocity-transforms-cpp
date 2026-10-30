#include <iostream>
#include "cpp_math/kinematics.hpp"

int main() {
    std::cout << "=== Kinematics Velocity Transformation Demo ===\n\n";

    // 1. Frame Transformation Example (Rotation 90 degrees around Z-axis)
    cpp_math::Matrix3x3 R_z_90 = {{{
        {0.0, -1.0, 0.0},
        {1.0,  0.0, 0.0},
        {0.0,  0.0, 1.0}
    }}};

    cpp_math::Vector3 v_frameA{2.0, 1.0, 0.0};
    cpp_math::Vector3 v_frameB = cpp_math::Kinematics::transformVector(R_z_90, v_frameA);

    std::cout << "[1] Vector Transformation (90 deg Z-rotation):\n";
    std::cout << "  Input Velocity in Frame A:  (" << v_frameA.x << ", " << v_frameA.y << ", " << v_frameA.z << ")\n";
    std::cout << "  Transformed in Frame B:     (" << v_frameB.x << ", " << v_frameB.y << ", " << v_frameB.z << ")\n\n";

    // 2. Rigid Body Velocity Example (v_p = v_origin + omega x r)
    cpp_math::Vector3 v_origin{1.0, 0.0, 0.0};  // Linear velocity of origin
    cpp_math::Vector3 omega{0.0, 0.0, 5.0};     // Angular velocity (rad/s) around Z
    cpp_math::Vector3 r{0.0, 2.0, 0.0};         // Position vector to point P from origin

    cpp_math::Vector3 v_point = cpp_math::Kinematics::rigidBodyPointVelocity(v_origin, omega, r);

    std::cout << "[2] Rigid Body Point Velocity:\n";
    std::cout << "  Origin Linear Velocity:     (" << v_origin.x << ", " << v_origin.y << ", " << v_origin.z << ")\n";
    std::cout << "  Angular Velocity (Omega):   (" << omega.x << ", " << omega.y << ", " << omega.z << ")\n";
    std::cout << "  Position Vector (r):        (" << r.x << ", " << r.y << ", " << r.z << ")\n";
    std::cout << "  Resultant Point Velocity:   (" << v_point.x << ", " << v_point.y << ", " << v_point.z << ")\n";

    return 0;
}