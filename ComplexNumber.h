//
// Created by Julian on 15.06.2020.
//

#ifndef AUFGABE6_1_COMPLEXNUMBER_H
#define AUFGABE6_1_COMPLEXNUMBER_H

#include <ostream>

template <typename T> class ComplexNumber
{
public:
    ComplexNumber(T re, T im): _re(re), _im(im) {};
    T getre() const { return _re; }                                // 1.Möglichkeit
    T getim() const;

    bool operator==(const ComplexNumber<T>& other) const;
    ComplexNumber<T> operator+(const ComplexNumber<T>& other) const;
    ComplexNumber<T> operator-(const ComplexNumber<T>& other) const;

private:
    T _re;
    T _im;
};

template <typename T> T ComplexNumber<T>::getim() const           // 2.Möglichkeit
{
    return _im;
}

template <typename T> bool ComplexNumber<T>::operator == (const ComplexNumber<T>& other) const
{
    return (_re == other._re) && (_im == other._im);
}

template <typename T> ComplexNumber<T> ComplexNumber<T>::operator + (const ComplexNumber<T>& other) const
{
    ComplexNumber<T> z(_re + other._re, _im + other._im);

    return z;
}

template <typename T> ComplexNumber<T> ComplexNumber<T>::operator - (const ComplexNumber<T>& other) const
{
    ComplexNumber<T> z(_re - other._re, _im - other._im);

    return z;
}



template <typename T> std::ostream& operator << (std::ostream& os, ComplexNumber<T> cn)
{
    os << "(" << cn.getre() << ", " << cn.getim() << ")";

    return os;
}

#endif //AUFGABE6_1_COMPLEXNUMBER_H
