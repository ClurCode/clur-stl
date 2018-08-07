//
//  stack.h
//  Hello World
//
//  Created by Emanuel Clur on 6/8/18.
//  Copyright © 2018 MateMagician. All rights reserved.
//

#ifndef stack_h
#define stack_h
#include <vector>

namespace clur {
    template <typename T, typename Container = std::vector<T>>
    class stack {
        typedef T                       stack_type;
        typedef Container               container_type;
        typedef stack<T, Container>     this_type;
        container_type s;
        container_type container() { return s; }
        
    public:
        stack() = default;
        stack(container_type c) : s(c) { }
        
        template <typename ... args>
        stack(args ... arg) { (s.push_back(arg), ...); }
        
        bool empty() const { return s.empty(); }
        bool size() const { return s.size(); }
        stack_type top() const { return s.back(); }
        
        template <typename ... args>
        void push(args ... arg) { (s.push_back(arg), ...); }
        
        void push(container_type v) { s = v; }
        stack_type pop() {
            stack_type t_value = s.back();
            s.pop_back();
            return t_value;
        }
        ~stack() = default;
        
        void operator=(this_type& another_type) {
            this->s = another_type.s;
        }
        bool operator==(this_type& another_type) {
            bool value = false;
            for(auto i = 0; i <= s.size(); ++i)
                if (this->s[i] == another_type.s[i]) {
                    value = true;
                }
            return value;
        }
        bool operator!=(this_type& another_type) {
            bool value = true;
            for(auto i = 0; i <= s.size(); ++i)
                if (this->s[i] == another_type.s[i]) {
                    value = false;
                }
            return value;
        }
        bool operator<(this_type& another_type) {
            return (this->size() < another_type.size());
        }
        bool operator>(this_type& another_type) {
            return (this->size() > another_type.size());
        }
};
    
}

#endif /* stack_h */
