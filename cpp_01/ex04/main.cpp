/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:27:20 by atudor            #+#    #+#             */
/*   Updated: 2024/09/04 15:27:22 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void output_file(std::string& filename, std::string& input_file)
{
	std::ofstream output_file((filename + ".replace").c_str());
	if (output_file.fail())
	{
		std::cerr << "Error creating file" << std::endl;
		return ;
	}
	output_file << input_file;
	output_file.close();
}

std::string replace_string(std::string& input_file, std::string s1, std::string s2)
{
	std::string	output_string;
	size_t	pos = 0;
	size_t found_pos = 0;
	
	if (s1.empty())
        return input_file;
	found_pos = input_file.find(s1, pos);
	while (found_pos != std::string::npos)
	{
		output_string.append(input_file, pos, found_pos - pos);
		output_string.append(s2);
		pos = found_pos + s1.length();
		found_pos = input_file.find(s1, pos);
	}
	output_string.append(input_file, pos, std::string::npos);
	return (output_string);
}

std::string get_input_file(std::string filename, std::string& input_file)
{
	std::ifstream file;
	char		c;

	file.open(filename.c_str());
	if (file.fail())
	{
		std::cerr << "File not found" << std::endl;
		return (0);
	}
	while (file.get(c))
		input_file += c;
	file.close();
	return (input_file);
}

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::string	input_file;
	std::string	output_string;

	input_file = get_input_file(filename, input_file);
	if (input_file.empty())
		return ;
	output_string = replace_string(input_file, s1, s2);
	if (input_file.empty())
		return ;
	output_file(filename, output_string);
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string s1;
	std::string s2;

	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		replace(filename, s1, s2);
		return (0);
	}
	if (argc == 2 && std::string(argv[1]) == "test")
	{
		filename = "test.txt";
		std::cout << "General use case (replaced cat with dog) check test.txt.replace!\n" << std::endl;
		s1 = "cat";
		s2 = "dog";
		replace(filename, s1, s2);
		std::cout << "For when the word can't be found, check test_inexistent_word.text.replace!\n" << std::endl;
		filename = "test_inexistent_word.txt";
		s1 = "inexistent";
		s2 = "dog";
		replace(filename, s1, s2);
		std::cout << "For when the file is empty, check test_empty_file.txt.replace!\n" << std::endl;
		filename = "test_empty_file.txt";
		s1 = "word";
		s2 = "WORD";
		std::cout << "For when s1 is empty, check test1.txt.replace!\n" << std::endl;
		filename = "test1.txt";
		s1 = "";
		s2 = "WORD";
		replace(filename, s1, s2);
		std::cout << "For when s2 is empty, check test2.txt.replace!\n" << std::endl;
		filename = "test2.txt";
		s1 = "wizard";
		s2 = "";
		replace(filename, s1, s2);
		std::cout << "For when s2 is a substring of s1, check test_substring.txt.replace\n" << std::endl;
		filename = "test_substring.txt";
		s1 = "ABRACADABRA";
		s2 = "DABRA";
		replace(filename, s1, s2);
		return (0);
	}
	else
	{
		std::cerr << "Incorrect format" << std::endl;
		return (1);
	}
}
