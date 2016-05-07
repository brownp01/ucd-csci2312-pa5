//
// Created by Paul Brown on 5/6/16.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H

namespace CS2312{

    template <typename T>
    class less{
    public:
        bool operator ()(const T& lhs, const T& rhs){

            return lhs < rhs;
        }
    };

    template <>
    class less <const char*>{
    public:
        bool operator ()(const char* lhs, const char* rhs){

            string _l  = lhs;
            string _r = rhs;

            return _l < _r;
        }
    };
}
