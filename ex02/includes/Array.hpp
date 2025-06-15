/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:58:46 by lvichi            #+#    #+#             */
/*   Updated: 2025/06/15 15:58:46 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <exception>


template <typename T>
class Array
{
  private:
    T*           _elements;
    unsigned int _arraySize;
  public:
    Array();
    Array( unsigned int n );
    Array( const Array& original );
    Array& operator=( const Array& original );
    ~Array();

    unsigned int size() const;

    T& operator[]( unsigned int index );
    const T& operator[]( unsigned int index ) const;

    class OutOfBoundsException : public std::exception
    {
      public:
        const char* what() const throw();
    };
};

#include "Array.tpp"
