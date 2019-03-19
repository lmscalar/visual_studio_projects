//
//  ints0.cpp : Implementation of class ints
//              (preliminary version: no reference counting).
//  cpp_tutorial
//
//  Created by Luis Molina on 2019/03/14/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#include <stdio.h>
#include "ints0.h"

ints::ints(int *a, int n)
{
    p = new int[n];
    for (int i=0; i < n; i++)
        p[i] = a[i];
    length = n;
}


ints::ints(const ints &r)
{
    length = r.length;
    p = new int[length];
    for (int i = 0; i < length; i++)
        p[i] = r.p[i];
}

ints &ints::operator=(const ints &r)
{
    if (&r != this)
    {
        delete [] p;
        length = r.length;
        p = new int[length];
        for (int i=0; i < length; i++)
            p[i] = r.p[i];
        
        
    }
    return *this;
    
}

