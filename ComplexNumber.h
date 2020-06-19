//
// Created by Julian on 15.06.2020.
//

#ifndef AUFGABE6_1_COMPLEXNUMBER_H
#define AUFGABE6_1_COMPLEXNUMBER_H

template <typename T> class ComplexNumber
{
public:
    ComplexNumber(T re, T im): _re(re), _im(im) {};
    T getre() const { return _re; }                                // 1.Möglichkeit
    T getim() const;
private:
    T _re;
    T _im;
};

template <typename T> T ComplexNumber<T>::getim() const           // 2.Möglichkeit
{
    return _im;
}

#endif //AUFGABE6_1_COMPLEXNUMBER_H
