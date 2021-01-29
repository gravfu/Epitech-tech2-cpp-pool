/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Mixer
*/

#ifndef MIXER_HPP_
#define MIXER_HPP_

#include "FruitBox.hpp"
#include "MixerBase.hpp"

class Mixer : public MixerBase {
	public:
		Mixer();
		~Mixer();
		static int mix (FruitBox &fruits);
		void connect_it();

	protected:
	private:
};

#endif /* !MIXER_HPP_ */
