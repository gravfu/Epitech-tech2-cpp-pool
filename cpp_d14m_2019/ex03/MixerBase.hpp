/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Mixer
*/

#ifndef MIXER_BASE_HPP_
#define MIXER_BASE_HPP_

#include "FruitBox.hpp"

class MixerBase {
	public:
		MixerBase();
        int mix (FruitBox &fruits) const;

	protected:
        bool _plugged;
        int (*_mixfunc)(FruitBox &fruits);
	private:
};

#endif /* !MIXER_BASE_HPP_ */
