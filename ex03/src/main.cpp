/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:53:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/21 14:54:37 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
	src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
	me->equip(tmp);
    tmp = src->createMateria("cure");
	me->equip(tmp);

    ICharacter* bob = new Character("bob");

	me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
	delete me;
	delete src;

    return 0;
}
