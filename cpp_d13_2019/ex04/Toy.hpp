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
		enum ToyType {BASIC_TOY, ALIEN, BUZZ, WOODY};

		Toy();
		Toy(const ToyType, const std::string &, const std::string &);
		Toy(const Toy &oldtoy);
		~Toy();

		ToyType getType() const;
		std::string getName() const;

		void setName(const std::string);
		bool setAscii(const std::string &name);

		std::string getAscii() const;

		Toy &operator=(const Toy &cpyptr);

		virtual void speak(const std::string &statement) const;

		Toy &operator<<(const std::string &out);

	protected:
		const ToyType _type;
		std::string name;
		Picture _picture;

	private:
};

std::ostream &operator<<(std::ostream &, const Toy &);

#endif /* !TOY_HPP_ */
