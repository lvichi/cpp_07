/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:57:53 by lvichi            #+#    #+#             */
/*   Updated: 2025/06/15 13:57:53 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once


template <typename T>
void swap( T &a, T &b )
{
  T temp = a;
  a = b;
  b = temp;
}


template <typename T>
const T& max( const T &a, const T &b )
{
  return ( a > b ) ? a : b;
}


template <typename T>
const T& min( const T &a, const T &b )
{
  return ( a < b ) ? a : b;
}
