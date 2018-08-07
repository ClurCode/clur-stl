//
//  main.cpp
//  Hello World
//
//  Created by Emanuel Clur on 6/8/18.
//  Copyright © 2018 MateMagician. All rights reserved.
//

#include <iostream>
namespace clur {
    /*template<typename T, std::size_t t_size = 1>
    class BaseVector {
        typedef T                       value_type;
        typedef T*                      collection;
        typedef std::size_t             this_size;
        typedef std::size_t             size;
        this_size static_size = 5;
        collection v;
        size it = 0;
        
    private:
        BaseVector() {
            v[it] = (value_type*)malloc(sizeof(value_type));
            ++it;
        }
        
    };*/
    template<typename T>
    class vector {
        typedef int             iterator;
        typedef T               vector_type;
        typedef vector<T>       this_type;
        vector_type* v;
        iterator it = -1;
        uint count = 0;
        template <typename ... Type>
        uint countFoldExpressions(Type ... a){
            auto val = []([a ...](){
                return (a and ...);
            };
            return count;
        }
    public:
        vector() {
            ++it;
            v[it] = (vector_type*)malloc(sizeof(vector_type));
        }
        template<typename ... args>
        vector(args ... arg) {
            v = (vector_type*)malloc(countFoldExpressions(arg ...) * sizeof...(arg));
        }
    };
}

int main(int argc, const char * argv[]) {
    clur::vector<int> v(3,4,5,6,7,8);
    return 0;
}
