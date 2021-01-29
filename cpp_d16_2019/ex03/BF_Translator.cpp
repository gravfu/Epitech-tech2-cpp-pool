/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** BF_Translator
*/

#include "BF_Translator.hpp"

BF_Translator::BF_Translator()
{

}

int BF_Translator::translate(const std::string &in, const std::string &out)
{
    std::ifstream file_in(in, std::ifstream::in);
    if (!file_in)
        return 1;
    std::ofstream file_out(out, std::ofstream::out);
    if (!file_out)
        return 2;
    char c;

    std::map<char, std::string> _map;
    _map['+'] = "++*ptr;";
    _map['-'] = "--*ptr;";
    _map['<'] = "--ptr;";
    _map['>'] = "++ptr;";
    _map['.'] = "putchar(*ptr);";
    _map[','] = "*ptr=getchar();";
    _map['['] = "while (*ptr) {";
    _map[']'] = "}";

    file_out << "#include <stdio.h>" << std::endl;
    file_out << "#include <unistd.h>" << std::endl;
    file_out << "#include <stdlib.h>" << std::endl;
    file_out << "int main() {" << std::endl;
    file_out << "char array[60000] = {0};" << std::endl;
    file_out << "char *ptr=array;" << std::endl;
    while (file_in.get(c)) {
        file_out << _map[c] << std::endl;
    }
    file_out << "}" << std::endl;
    file_out.close();
    file_in.close();
    return 0;
}
