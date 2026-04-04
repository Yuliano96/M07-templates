/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 18:59:47 by yuliano           #+#    #+#             */
/*   Updated: 2026/04/04 18:32:11 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>



void int_print(const int &m)
{
	std::cout<<m<<" ";
}

void modify(int &m)
{
	m += 1;
	std::cout<<m<<" ";
}

void str_print(const std::string &s)
{
	std::cout<<s<<" ";
}

void str_modify(std::string &s)
{
	s[0] = s[0]- 32;
	std::cout<<s<< " ";
}

template<typename T>
void increase(T &n) { n++; }

template<typename T>
void print(const T &n) { std::cout << n << " "; }

int main()
{
	int tab[] = {1,6,7,9};
	const int tab1[] = {1, 2, 3, 4};
	const std::string s1[] = {"house", "floor", "Wall", "Windows"};
	std::string s2[] = {"lion", "horse", "dog", "cat"};
	std::cout<<"========int (const - NO const)=======\n";
	iter(tab, 4, modify);
	std::cout<<std::endl;
	iter(tab1, 4, int_print);//const
	std::cout<<std::endl;
	std::cout<<"=======string (const - NO const)======\n";
	iter(s1, 4, str_print);
	std::cout<<std::endl;
	iter(s2, 4, str_modify);
	std::cout<<std::endl;
	std::cout<<"=========template=============\n";
	int num[] = {1, 2, 3};
    iter(num, 3, increase<int>);
    iter(num, 3, print<int>);
    std::cout << std::endl;
	const int cons[] = {10, 20, 30};
    //iter(constantes, 3, incrementar<int>);
    iter(cons, 3, print<int>);
	std::cout<<std::endl;
	return (0);
}