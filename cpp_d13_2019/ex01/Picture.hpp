/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

#include <iostream>
#include <fstream>

class Picture {
	public:
		Picture(const std::string &file = "");
		Picture(const Picture &to_cpy);
		~Picture();
        std::string data;
        bool getPictureFromFile(const std::string &file);

		Picture &operator=(const Picture &cpyptr);

	protected:
	private:
};

#endif /* !PICTURE_HPP_ */
