//
//  ints0.h : Dynamic arrays wihtout reference counting.
//  cpp_tutorial
//
//  Created by Luis Molina on 2019/03/14/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#ifndef ints0_h
#define ints0_h
#include <iostream>

class ints {
public:
    ints() {p = NULL; length=0;}
    ints(int *a, int n);
    ints(const ints &r);
    ~ints(){delete [] p;}
    ints &operator=(const ints &r);
    int len() const {return length;}
private:
    int *p;
    int length;
};

#endif /* ints0_h */
