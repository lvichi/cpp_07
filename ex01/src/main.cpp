/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:39:22 by lvichi            #+#    #+#             */
/*   Updated: 2025/06/15 14:39:22 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstddef> // unsigned int ( size_t )


template <typename T> void printElements( T& element );
void square( int& number );
void removeLastLetter( std::string& str );


int main( int argc, char** argv )
{
  ( void )argc;
  ( void )argv;

  // With an array of int
  std::cout << "-- Int --" << std::endl << std::endl;

  int intArray[] = {1, 2, 3, 4};
  size_t intArrayLength = 4;

  iter( intArray, intArrayLength, ::printElements );

  std::cout << std::endl << "Square: " << std::endl;

  iter( intArray, intArrayLength, ::square );
  iter( intArray, intArrayLength, ::printElements );

  // With an array of strings
  std::cout << std::endl << "-- String --" << std::endl << std::endl;

  std::string stringArray[] = {"first", "second", "third"};
  size_t stringArrayLength = 3;

  iter( stringArray, stringArrayLength, ::printElements );

  std::cout << std::endl << "Remove Last Letter: " << std::endl;

  iter( stringArray, stringArrayLength, ::removeLastLetter );
  iter( stringArray, stringArrayLength, ::printElements );

  return 0;
}


void square( int& number )
{
  number = number * number;
}


void removeLastLetter( std::string& str )
{
  str.erase(str.length() - 1);
}


template <typename T>
void printElements( T& element )
{
  std::cout << element << std::endl;
}