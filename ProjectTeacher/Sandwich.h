//
//  Sandwich.hpp
//  ProjectTeacher
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Henrichsen, Cody. All rights reserved.
//

#ifndef Sandwich_h
#define Sandwich_h

#include <string>
using namespace std;

class Sandwich
{
private:
    int breadCount;
    string filling;
    string name;
public:
    Sandwich();
    ~Sandwich();
    void setBreadCount(int breadCount);
    int getBreadCount();
    void setFilling(string filling);
    string getFilling();
    string getName();
    void setName(string name);
};

#endif /* Sandwich_hpp */
