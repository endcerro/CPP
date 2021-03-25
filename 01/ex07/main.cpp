/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:44:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 17:16:47 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string toUpper(std::string input)
{
	std::string output = "";
	for ( std::string::iterator it=input.begin(); it != input.end(); ++it)
		output+= (char)((*it >= 'a' && *it <= 'z') ? *it - 32 : *it);
	return (output);
}

std::string swap(std::string input, std::string old, std::string curr)
{	
	int pos = input.find(old);
	while (pos != -1)
	{
		input.replace(pos, old.size(), curr);	
		pos = input.find(old, pos + curr.size());
	}
    return (input);
}

int main(int argc, char const *argv[])
{
	std::ifstream input;
	std::ofstream output;
	std::string line;

	if (argc != 4)
	{
		std::cout << "Wrong number of args, try again" << std::endl;
		return (1);
	}
	input.open(argv[1]); 
	if (!input.is_open() || !strcmp(argv[2],"") || !strcmp(argv[3],""))
	{
		std::cout << "Invalid program args" << std::endl;
		input.close();
		return (1);
	}
	output.open(toUpper(argv[1]) + ".replace");
	int i = 0;
	while (getline(input, line))
	{ //Maybe avoid getting more \n than needed
		if (i++)
			output << std::endl;
		if (line[0] != 0)
			output << swap(line, argv[2], argv[3]);// << std::endl;
	}
	input.close();
	output.close();
	return (0);
}