//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>

using String = std::string;

struct Vector2
{
    float x, y;
    Vector2(float x, float y)
    : x(x), y(y) {}
    
    Vector2 Add(const Vector2& other) const
    {
        return Vector2(other.x + x, other.y + y);
    }
    
    // use const for no change for class
    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }
    
    std::string to_str()
    {
        return std::to_string(x) + ", " + std::to_string(y);
    }
};

// overloading << operator
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << ", " << other.y;
    return stream;
}
    
bool operator==(const Vector2& a, const Vector2& b)
{
    return a.x == b.x && a.y == b.y;
}
    
std::ostream& operator<<(std::ostream& stream, const bool& a)
{
    if (a)
        stream << "true";
    else
        stream << "false";
    return stream;
}

int main()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(1.0f, 5.5f);
    
    Vector2 res = position.Add(speed);
    Vector2 res2 = position + speed;
    
    std::cout << res.to_str() << std::endl;
    std::cout << res2.to_str() << std::endl;
    std::cout << res << std::endl;
    std::cout << true << std::endl;
    
    return 0;
}
