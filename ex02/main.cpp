/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 23:01:36 by yuliano           #+#    #+#             */
/*   Updated: 2026/04/05 20:18:38 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

typedef struct s_people
{
	std::string name;
	int age;
}	t_people;

int	main(void)
{
	std::cout << "==============================\n";
	std::cout << "INT ARRAY TESTS\n";
	std::cout << "==============================\n";

	std::cout << "\n=== TEST 1: default constructor ===\n";
	Array<int> a;
	std::cout << "size: " << a.size() << std::endl;

	std::cout << "\n=== TEST 2: constructor with size ===\n";
	Array<int> b(5);
	std::cout << "size: " << b.size() << std::endl;

	std::cout << "initial values:\n";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 3: assign values ===\n";
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i * 10;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 4: copy constructor ===\n";
	Array<int> c(b);

	std::cout << "b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "c: ";
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	std::cout << "\nModify c[0] = 999\n";
	c[0] = 999;

	std::cout << "b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "c: ";
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 5: assignment operator ===\n";
	Array<int> d;
	d = b;

	std::cout << "d: ";
	for (unsigned int i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

	std::cout << "\nModify d[1] = 777\n";
	d[1] = 777;

	std::cout << "b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "d: ";
	for (unsigned int i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 6: out of range exception ===\n";
	try
	{
		std::cout << b[100] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 7: negative index ===\n";
	try
	{
		std::cout << b[-1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n\n==============================\n";
	std::cout << "STRING ARRAY TESTS\n";
	std::cout << "==============================\n";

	std::cout << "\n=== TEST 1: default constructor ===\n";
	Array<std::string> s1;
	std::cout << "size: " << s1.size() << std::endl;

	std::cout << "\n=== TEST 2: constructor with size ===\n";
	Array<std::string> s2(3);
	std::cout << "size: " << s2.size() << std::endl;

	std::cout << "initial values:\n";
	for (unsigned int i = 0; i < s2.size(); i++)
		std::cout << "[" << s2[i] << "] ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 3: assign values ===\n";
	s2[0] = "hello";
	s2[1] = "world";
	s2[2] = "template";

	for (unsigned int i = 0; i < s2.size(); i++)
		std::cout << s2[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 4: copy constructor ===\n";
	Array<std::string> s3(s2);

	std::cout << "s2: ";
	for (unsigned int i = 0; i < s2.size(); i++)
		std::cout << s2[i] << " ";
	std::cout << std::endl;

	std::cout << "s3: ";
	for (unsigned int i = 0; i < s3.size(); i++)
		std::cout << s3[i] << " ";
	std::cout << std::endl;

	std::cout << "\nModify s3[0] = \"changed\"\n";
	s3[0] = "changed";

	std::cout << "s2: ";
	for (unsigned int i = 0; i < s2.size(); i++)
		std::cout << s2[i] << " ";
	std::cout << std::endl;

	std::cout << "s3: ";
	for (unsigned int i = 0; i < s3.size(); i++)
		std::cout << s3[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 5: assignment operator ===\n";
	Array<std::string> s4;
	s4 = s2;

	std::cout << "s4: ";
	for (unsigned int i = 0; i < s4.size(); i++)
		std::cout << s4[i] << " ";
	std::cout << std::endl;

	std::cout << "\nModify s4[1] = \"independent\"\n";
	s4[1] = "independent";

	std::cout << "s2: ";
	for (unsigned int i = 0; i < s2.size(); i++)
		std::cout << s2[i] << " ";
	std::cout << std::endl;

	std::cout << "s4: ";
	for (unsigned int i = 0; i < s4.size(); i++)
		std::cout << s4[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TEST 6: out of range exception ===\n";
	try
	{
		std::cout << s2[42] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 7: negative index ===\n";
	try
	{
		std::cout << s2[-1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout<< "=========struct==============\n";

	Array<t_people>people(3);
	people[0].name = "pepe";
	people[0].age = 20;
	people[1].name = "Juan";
	people[1].age = 25;
	people[2].name = "Maria";
	people[2].age = 28;
	for (int i = 0; i < 3; i++)
	{
		std::cout<< "name: "<<people[i].name<<std::endl;
		std::cout<< "age : "<<people[i].age<<std::endl;
		std::cout<<std::endl;
	}

	return (0);
}

