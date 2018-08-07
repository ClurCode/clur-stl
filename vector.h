//
//  vector.h
//  Hello World
//
//  Created by Emanuel Clur on 6/8/18.
//  Copyright © 2018 MateMagician. All rights reserved.
//

#ifndef vector_h
#define vector_h
#include <stdlib.h>
namespace clur {
    template<typename T>
    class vector {
        typedef T*              iterator;
        typedef T               vector_type;
        typedef vector<T>       this_type;
        typedef int             iterator;
        typedef static iterator static_iterator;
        vector_type* v;
        static_iterator it = -1;
    public:
        vector() {
            v = (vector_type*)malloc(vector_type);
        }
        template<typename ... args>
        vector(args ... arg) {
            ++it;
            v = (vector_type*)malloc(vector_type);
            v[it] = arg
        }
    };
}

#endif /* vector_h */
