#include <iostream>

using namespace std;

class Vector2D {
public:
    double x, y;

    
    Vector2D(double x = 0, double y = 0) : x(x), y(y) {}

   
    Vector2D(const Vector2D& another) : x(another.x), y(another.y) {}

    void друк() const {
        cout << "Vector2D(" << x << ", " << y << ")\n";
    }
};

class Vector3D {
public:
    double x, y, z;


    Vector3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    
    Vector3D(const Vector2D& v) : x(v.x), y(v.y), z(0) {}

    
    Vector3D(const Vector3D& another) : x(another.x), y(another.y), z(another.z) {}

    void друк() const {
        cout << "Vector3D(" << x << ", " << y << ", " << z << ")\n";
    }
};