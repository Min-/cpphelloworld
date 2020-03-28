//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

class Vertex
{
public:
    float x, y, z;
    
    Vertex(float x, float y, float z)
    : x(x), y(y), z(z){};
    
    // copy constructor
    Vertex(const Vertex& vertex)
    : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "copy" << std::endl;
    };
};

std::ostream& operator<<(std::ostream&stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

// pass Vector by reference to avoid copying
int main()
{
    Vertex v = Vertex {3,4,6.3};
     
    std::vector<Vertex> vertices;
    vertices.reserve(3);
    vertices.emplace_back(34,56,32);
    std::cout << "line" << std::endl;
    vertices.emplace_back(4,5,6);
    std::cout << "line" << std::endl;
    
    for (int i = 0; i < vertices.size(); i++)
        std::cout << vertices[i] << std::endl;
    
    for (Vertex& v : vertices)
        std::cout << v << std::endl;
    
    vertices.clear();
    
    for (Vertex& v : vertices)
           std::cout << v << std::endl;
    
    return 0;
}
