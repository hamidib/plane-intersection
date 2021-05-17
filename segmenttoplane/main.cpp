//
//  main.cpp
//  segmenttoplane
//
//  Created by bijan hamidi on 11/10/17.
//  Copyright © 2017 bijan hamidi. All rights reserved.
//

#include <iostream>
#include <tuple>
#include <cstdlib>
#include <cstdio>
#include <sys/time.h>

#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_inverse.hpp>
using namespace std;

bool intersectClass(glm::vec3 P1, glm::vec3 P2, glm::vec3 norm, float offset)
{
    glm::vec3 plane = normalize(norm);
    if(glm::dot(plane, P1) >= offset && glm::dot(plane, P2) <= offset)
    return true;
    else if(glm::dot(plane, P1) <= offset && glm::dot(plane, P2) >= offset)
    return true;
    else
    return false;
   
}
/*
bool intersect3D_SegmentPlane( glm::vec3 P1, glm::vec3 P2, glm::vec3 norm)//Segment S, Plane Pn, Point* I )
{
    glm::vec3    u = P1 - P2;
    glm::vec3    w = P2 - normalize(norm);
    
    float     D = dot(norm, u);
    float     N = -dot(norm, w);
    
    if (fabs(D) == 0) {           // absolute val - segment is parallel to plane
        if (N == 0)                      // segment lies in plane
        return 2;
        else
        return false;                    // no intersection
    }
    // they are not parallel
    // compute intersect param
    float sI = N / D;
    if (sI < 0 || sI > 1)
    return false;                        // no intersection
    
    //*I = P1 + sI * u;                  // compute segment intersect point
    return true;
}
*/
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //if( intersect3D_SegmentPlane(glm::vec3(0,2,0), glm::vec3(0,0,0), glm::vec3(5,0,0)))
    //cout << "It does intersect \n";
    //else
    //cout << "No intersection baby\n";
    
    if( intersectClass(glm::vec3(0,2,0), glm::vec3(0,9,0), glm::vec3(0,1,0), 0))
    cout << "It does intersect \n";
    else
    cout << "No intersection baby\n";
    
    return 0;
}
