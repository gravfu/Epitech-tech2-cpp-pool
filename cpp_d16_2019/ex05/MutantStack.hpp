/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** MutantStack
*/

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>

template <typename T>
class MutantStack {
	public:
		MutantStack();
		~MutantStack();
        void push(T);

	protected:
        std::stack<T> _stack;
	private:
};

#endif /* !MUTANTSTACK_HPP_ */
