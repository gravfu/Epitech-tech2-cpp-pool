/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Picture.hpp"

class Toy {
	public:
		enum ToyType {BASIC_TOY, ALIEN};
		Toy();
		Toy(const ToyType, const std::string &, const std::string &);
		~Toy();
		ToyType getType() const;
		std::string getName() const;
		void setName(const std::string);
		bool setAscii(const std::string &name) const;
		std::string &getAscii() const;

	protected:
		ToyType _type;
		std::string name;
		Picture *picture;
	private:
};

#endif /* !TOY_HPP_ */
