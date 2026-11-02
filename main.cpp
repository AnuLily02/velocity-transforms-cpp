#include <iostream>
#include <fstream>
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

    // 2. Simulate a Trajectory and Export to CSV for Python Visualization
    std::ofstream outfile("trajectory_poses.csv");
    if (outfile.is_open()) {
        // Write CSV Header (step, x, y, z, roll, pitch, yaw)
        outfile << "step,x,y,z,roll,pitch,yaw\n";

        int total_steps = 25;
        for (int i = 0; i < total_steps; ++i) {
            double t = static_cast<double>(i) * 0.2;
            
            // Generate curved path coordinates
            double x = t;
            double y = std::sin(t);
            double z = 0.1 * t;
            double yaw = std::cos(t);

            // Write row data
            outfile << i << "," << x << "," << y << "," << z << ",0.0,0.0," << yaw << "\n";
        }
        outfile.close();
        std::cout << "[Info] Successfully generated and saved 'trajectory_poses.csv'!\n";
    } else {
        std::cerr << "[Error] Could not open trajectory_poses.csv for writing!\n";
    }

    return 0;
}