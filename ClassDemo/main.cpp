//
//  main.cpp
//  ClassDemo
//
//  Created by allentang on 2018/12/24.
//  Copyright © 2018 allentang. All rights reserved.
//

#include <iostream>
#include "Person.h"
int main(int argc, char const *argv[])
{
    Person p;
    p.age = 12;
    p.name = "allen";
    p.showAge();
    p.showName();
    return 0;
}
