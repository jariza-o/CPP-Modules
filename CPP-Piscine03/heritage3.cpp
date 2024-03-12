/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage3.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:59:13 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/12 16:03:49 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadruped { //Can access name, run() and legs
private:
    std::string name; //Only accessible from a Quadruped object

protected:
    Leg Legs[4]; //Accessible from an Quadruped or derived object
public:
    void    run(); //Accessible from wherever
};

class Dog : public Quadruped { //Can access run() and legs
    
};

int main() { //Can only access run()
    
}