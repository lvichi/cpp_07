/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:42:23 by lvichi            #+#    #+#             */
/*   Updated: 2025/06/15 14:42:23 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <cstddef> // unsigned int ( size_t )


template <typename T>
void iter( T* array, size_t length, void ( *f )( T& ) )
{
  for( size_t i = 0; i < length; i++ ) {
    f( array[i] );
  }
}
