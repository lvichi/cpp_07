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


template <typename T>
void iter( T* array, unsigned int length, void ( *f )( T& ) )
{
  for( unsigned int i = 0; i < length; i++ ) {
    f( array[i] );
  }
}
