/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:30:12 by lvichi            #+#    #+#             */
/*   Updated: 2025/06/15 13:56:54 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"
#include <iostream>
#include <string>


int main( int argc, char** argv )
{
  (void)argc;
  (void)argv;

  int a = 1;
  int b = 2;

  std::cout << "-- Before Swap --" << std::endl
            << "a: " << a << ", b: " << b << std::endl << std::endl;

  ::swap( a, b );

  std::cout << "-- After Swap --" << std::endl
            << "a: " << a << ", b: " << b << std::endl << std::endl;

  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;


  std::string stringA = "String A";
  std::string stringB = "String B";

  std::cout << "-- Before Swap --" << std::endl
            << "stringA: " << stringA << ", stringB: "
            << stringB << std::endl << std::endl;

  ::swap( stringA, stringB );

  std::cout << "-- After Swap --" << std::endl
            << "stringA: " << stringA << ", stringB: "
            << stringB << std::endl << std::endl;

  std::cout << "min( stringA, b ) = " << ::min( stringA, stringB )
            << std::endl;
  std::cout << "max( stringA, b ) = " << ::max( stringA, stringB )
            << std::endl << std::endl;
}
