/*
 * userinput.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: User
 */


#include <iostream>
#include <string>

int main()
{
	int year = 0;
	int age = 0;
	std::string name = " ";
	std::cout<< "what is your fav year?" << std::endl;
	std::cin>> year;

	std::cout<< "very interesting, what is your bike model?" << std::endl;
	//std::cin>> name;
	std::getline(std::cin,name);


	std::cout<< "what is your age?" << std::endl;
	std::cin>> age;



    //std::string name = " ";
    std::string address = " ";
    std::string phone = " ";

    std::cout<<"what is your name?" <<std::endl;
    std::getline(std::cin,name);

    std::cout<<"what is your address?" <<std::endl;
    std::getline(std::cin,address);

    std::cout<<"what is your phone?" <<std::endl;
    std::getline(std::cin,address);

	return 0;

}

