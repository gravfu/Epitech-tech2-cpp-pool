/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>

class Parser {
	public:
		Parser();
		~Parser();
        void feed( const std::string &);
		int result() const;
		void reset();

	protected:
		int _result;
	private:
};

#endif /* !PARSER_HPP_ */
