//
//  main.cpp
//  vectors
//
//  Created by Luis Molina on 2019/03/08/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<double> dbl = {2.13, 3.45, 7.37, 21.37};
    
    for (double x: dbl){
        cout << x << endl;
    }
    
    cout << endl;
    
    array<string, 3> str = {"hello", "apple", "orange"};
    for (string s: str){
        cout << s << endl;
    }
    
    
    double* myPointer = nullptr;
    
    myPointer = new double;
    
    double x = 3.0;
    
    myPointer = &x;
    
    cout << *myPointer << endl;
    
    
    int myArray[3] {1, 2, 3};
    
    for ( int i = 0; i < 3; ++i){
        ++myArray[i];
        cout << myArray[i] << endl;
    }
    
    for (int x: myArray)
        cout << x << endl;
    
    array<int, 3> anotherArray {1, 2, 3};
    
    for(int i=0; i < anotherArray.size(); ++i){
        ++anotherArray[i];
    }
    
    cout << endl;
    for(int elem: anotherArray)
        cout << elem << endl;
    
    string question = "Where do you live? ";
    string answer;
    
    cout << endl;
    cout << question;
    cin >> answer;
    
    cout << "Hi Homer from " << answer;
    cout << endl;
    
    
    // pointers
    
    double value0, value1;
    double* ptr0; double* ptr1;
    ptr0 = &value0;
    *ptr0 = 21;
    
    ptr1 = &value1;
    *ptr1 = 22;
    
    cout << value0 << " " << value1 << endl;
    
    
    // pointers;
    
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p = &numbers[2];  *p=30;
    p = numbers + 3; *p = 40;
    p = numbers; *(p +4) = 50;
    
    for (int n=0; n < 5; ++n){
        
        cout << numbers[n] << ", ";
    }
    
    cout << endl;
    
    int e;
    int c = 10;
    const int *d = &c;
    e = *d;
    
    cout << e << endl;
    
    
    return 0;
}
