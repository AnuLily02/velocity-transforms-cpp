# 🚀 Velocity Kinematics Toolkit 📐

A lightweight, custom-built **C++17 mathematics and kinematics library** for handling 3D linear and angular velocity transformations, rigid-body point velocities, and spatial motion calculations.

---

## 🌟 About The Project

In robotics, physics simulations, and autonomous systems, understanding how objects move through 3D space is fundamental.

Objects do not simply move in straight lines — they rotate, spin, and pivot around different reference frames. Calculating these movements requires mathematical tools that can handle both linear and angular motion.

The **Velocity Kinematics Toolkit** is a custom C++ library designed to simplify spatial kinematics calculations through modular mathematical structures and reusable functions.

The library focuses on two fundamental concepts:

1. **3D Velocity Transformations:** Rotating velocity vectors between different reference frames using 3D rotation matrices.
2. **Rigid-Body Point Velocity:** Calculating the linear velocity of a point on a rotating rigid body using the cross-product relationship:

   \[
   \mathbf{v} = \mathbf{v}_0 + (\boldsymbol{\omega} \times \mathbf{r})
   \]

---

## ✨ Features

- **Custom C++ Math Library:** Modular implementation designed specifically for 3D mathematical and kinematics operations.
- **Vector3 Structure:**
  - 3D vector representation (X, Y, Z).
  - Operator overloading (`+`, `-`, `*`).
  - Vector arithmetic and cross-product operations.
- **Matrix3x3 Structure:**
  - 3×3 matrix representation.
  - Matrix multiplication.
  - 3D rotation transformations.
- **Kinematics Engine (`cpp_math::Kinematics`):**
  - Velocity transformations between coordinate frames.
  - Rigid-body point velocity calculations.
  - Angular and linear velocity operations.
- **Executable Demonstration:** Includes a `main.cpp` test runner demonstrating practical kinematics calculations.

---

## 📂 Project Structure

```text
velocity_project/
│
├── CMakeLists.txt
├── main.cpp
│
└── cpp_math/
    ├── kinematics.hpp
    └── kinematics.cpp
```

| File | Description |
|---|---|
| `CMakeLists.txt` | CMake build configuration |
| `main.cpp` | Executable demonstration and test runner |
| `kinematics.hpp` | Mathematical structures and kinematics declarations |
| `kinematics.cpp` | Implementation of vector, matrix, and kinematics operations |

---

## ⚙️ Getting Started

### 1. Prerequisites

Make sure the following tools are installed:

- C++ compiler supporting C++17 (GCC, Clang, or MSVC).
- CMake 3.16 or later.
- Git.

### 2. Clone the Repository

```bash
git clone YOUR_REPOSITORY_URL
cd velocity_project
```

### 3. Build the Project

Create a build directory:

```bash
mkdir build
cd build
```

Generate the build files using CMake:

```bash
cmake ..
```

Compile the project:

```bash
cmake --build .
```

### 4. Run the Demo

**Linux / macOS:**

```bash
./kinematics_demo
```

**Windows:**

```bash
.\Debug\kinematics_demo.exe
```

*Note: The executable location on Windows may vary depending on the selected CMake generator and build configuration.*

---

## 🧮 Mathematical Concepts

This project implements fundamental mathematical concepts used in robotics and rigid-body mechanics.

### 1. Linear Velocity

Linear velocity describes the rate of change of position over time.

\[
\mathbf{v} = \frac{d\mathbf{p}}{dt}
\]

### 2. Angular Velocity

Angular velocity describes the rotational motion of an object around an axis.

\[
\boldsymbol{\omega} =
\begin{bmatrix}
\omega_x \\
\omega_y \\
\omega_z
\end{bmatrix}
\]

### 3. Cross Product

The cross product determines a vector perpendicular to two input vectors.

\[
\mathbf{a} \times \mathbf{b}
\]

It is particularly useful for calculating the velocity contribution caused by rotation.

### 4. Rigid-Body Point Velocity

The velocity of a point on a rigid body is calculated using:

\[
\mathbf{v}_P = \mathbf{v}_O +
(\boldsymbol{\omega} \times \mathbf{r}_{OP})
\]

Where:

- \(\mathbf{v}_P\) = Velocity of the point.
- \(\mathbf{v}_O\) = Linear velocity of the reference origin.
- \(\boldsymbol{\omega}\) = Angular velocity.
- \(\mathbf{r}_{OP}\) = Position vector from the origin to the point.

---

## 🛠️ Built With

| Technology | Purpose |
|---|---|
| C++17 | Core mathematical operations and kinematics implementation |
| CMake | Build system and project configuration |
| Standard C++ Library | Fundamental programming utilities |

---

## 🎯 Applications

The mathematical concepts implemented in this project are relevant to:

- 🤖 Robotic arm kinematics.
- 🚗 Autonomous mobile robots.
- 🛰️ Aerospace and spacecraft motion calculations.
- 🎮 3D physics simulations.
- ⚙️ Rigid-body dynamics.
- 📐 Coordinate-frame transformations.

---

## 🚧 Future Improvements

Potential extensions for this library include:

- [ ] Quaternion-based rotation transformations.
- [ ] 4×4 homogeneous transformation matrices.
- [ ] Coordinate-frame composition.
- [ ] Forward and inverse kinematics.
- [ ] Jacobian matrix calculations.
- [ ] Automated unit testing.
- [ ] Integration with ROS 2 robotics applications.

---

## 👩‍💻 Author

**Anupama Balakrishnan**

GitHub: [@AnuLily02](https://github.com/AnuLily02)

---

## 📜 License

This project is open-source. A license can be added to define the terms of use and distribution.

---

⭐ If you find this project interesting, feel free to explore the repository!
