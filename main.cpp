//
//  main.cpp
//  Math
//
//  Created by inky on 7/8/18.
//  Copyright © 2018 MateMagician. All rights reserved.
//

#include <iostream>
#include <string>
#define interface struct
#define implement public

interface IMath {
    virtual void solve() = 0;
    virtual void isdigit() = 0;
    virtual void isletter() = 0;
};

interface IEquation : implement IMath {
    virtual void kind() = 0;
    virtual void solve() = 0;
};

class Cuadratic : implement IEquation {
    typedef std::string equation;
    equation eq;
    void isdigit() {
        
    }
    void isletter() {
        
    }
public:
    Cuadratic(equation e): eq(e) {  }
    ~Cuadratic() = default;
    void kind() {
        for (auto i = 0; i < eq.size(); ++i) {
            (eq[i] == '0' or eq[i] == '1' or eq[i] == '2' or eq[i] == '3' or eq[i] == '4'
             or eq[i] == '5' or eq[i] == '6' or eq[i] == '7' or eq[i] == '8' or eq[i] == '9')?
            isdigit() : isletter();
        }
    }
    void solve() {
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
