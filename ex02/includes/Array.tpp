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


// Array();
template <typename T>
Array<T>::Array()
{
  _arraySize = 0;
  _elements = 0;
}


// Array( unsigned int n );
template <typename T>
Array<T>::Array( unsigned int n )
{
  _arraySize = n;
  _elements = new T[_arraySize]();
}


// Array( const Array& original );
template <typename T>
Array<T>::Array( const Array& original )
{
  _arraySize = original._arraySize;
  _elements = new T[_arraySize];

  for ( unsigned int i = 0; i < _arraySize; i++) {
    _elements[i] = original._elements[i];
  }
}


// Array& operator=( const Array& original );
template <typename T>
Array<T>& Array<T>::operator=( const Array& original )
{
  if ( this != &original ) {
    delete[] _elements;
    _arraySize = original._arraySize;
    _elements = new T[_arraySize];

    for ( unsigned int i = 0; i < _arraySize; i++ ) {
      _elements[i] = original._elements[i];
    }
  }
  return *this;
}


// ~Array();
template <typename T>
Array<T>::~Array()
{
  delete[] _elements;
}


// unsigned int size();
template <typename T>
unsigned int Array<T>::size() const
{
  return _arraySize;
}


// T& operator[]( unsigned int index );
template <typename T>
T& Array<T>::operator[]( unsigned int index )
{
  if ( index >= _arraySize )
    throw Array::OutOfBoundsException();
  return _elements[index];
}


// const T& operator[]( unsigned int index ) const;
template <typename T>
const T& Array<T>::operator[]( unsigned int index ) const
{
  if ( index >= _arraySize )
    throw Array::OutOfBoundsException();
  return _elements[index];
}


// OutOfBoundsException { const char* what() const throw(); }
template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
  return "Index outside of bounds.";
}
