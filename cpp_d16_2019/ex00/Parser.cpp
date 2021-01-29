/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Parser
*/

#include "Parser.hpp"
#include <stack>

Parser::Parser()
{
    _result = 0;
}

Parser::~Parser()
{
}

void Parser::feed(const std::string &str)
{
    std::stack <char> operators;
    std::stack <int> operands;
    int number = 0;

    for (size_t i = 0; i < str.length(); i++) {
        while (str[i] == ' ')
            i++;
        if (str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
            operators.push(str[i]);
        else if (str[i] >= '0' && str[1] <= '9') {
            operands.push(atoi(&str[i]));
            for(;str[i] >= '0' && str[i] <= '9'; i++);
            i--;
        } else if (str[i] == ')') {
            while(operators.top() != '(' && operators.size() != 0) {
                number = operands.top();
                operands.pop();
                if (operators.top() == '+')
                    number = operands.top() + number;
                if (operators.top() == '-')
                    number = operands.top() - number;
                if (operators.top() == '*')
                    number = operands.top() * number;
                if (operators.top() == '/')
                    number = operands.top() / number;
                if (operators.top() == '%')
                    number = operands.top() % number;
                operands.pop();
                operators.pop();
                operands.push(number);
            }
            operators.pop();
        } else {
            std::cout << "????" << std::endl;
        }
    }
    _result += number;
}

int Parser::result() const
{
    return _result;
}

void Parser::reset()
{
    _result = 0;
}