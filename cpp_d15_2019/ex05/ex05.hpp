/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex05
*/

#ifndef EX05_HPP_
#define EX05_HPP_

#include <iostream>

template<typename T>
class array 
{
    public:
        array(unsigned int n = 0) : _size(n) {_array = (n != 0 ? new T[n] : nullptr);}
        array(const array<T> &a) {
            this->_size = a._size;
            this->_array = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                _array[i] = a._array[i];
        }

        ~array() {if (_array) {delete[] _array;}};

        unsigned int size() const {return _size;};

        T &operator[](const unsigned int a) const{
            if (_size <= a) {
                throw std::exception();
            }
            return _array[a];
        }

        T &operator[](const unsigned int a){
            if (_size <= a) {
                T *tmp = new T[a+1];
                for (unsigned int i = 0; i < _size; i++)
                    tmp[i] = _array[i];
                delete[] _array;
                _array = tmp;
                _size = a + 1;
            }
            return _array[a];
        }

        array<T> &operator=(const array<T> &old) {
            if (_array) {
                delete[] this->_array;
            }
            this->_size = old._size;
            this->_array = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                _array[i] = old._array[i];
            this->_size = old._size;
            return *this;
        }
        void dump() const
        {
            std::cout << "[";
            for (unsigned int i = 0; i < _size; i++)
            {
                if (i != 0)
                    std::cout << ", ";
                std::cout << _array[i];
            }
            std::cout << "]" << std::endl;
        }

        template <typename S>
        array<S> convertTo(S(*func)(const T &type)) const
        {
            array<S> arr(_size);
            for(unsigned int i = 0; i < _size; i++)
            {
                arr[i] = (*func)(_array[i]);
            }
            return arr;
        }
    private:
    protected:
        T *_array;
        unsigned int _size;
};

template<> void array<bool>::dump() const
{
    std::cout << "[";
    for (unsigned int i = 0; i < _size; i++)
    {
        if (i != 0)
            std::cout << ", ";
        std::cout << (_array[i] ? "true" : "false");
    }
    std::cout << "]" << std::endl;
}


#endif /* !EX05_HPP_ */
