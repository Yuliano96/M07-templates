/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 18:07:24 by yuliano           #+#    #+#             */
/*   Updated: 2026/04/04 18:10:58 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

/**
 * SOBRECARGA 1: Para arrays NO constantes (mutables).
 * T: Tipo de los elementos del array.
 * F: Tipo de la función o instancia de plantilla.
 * F se convierte en void (*)(int) (un puntero a función).
 */
template<typename T, typename F>
void iter(T *array, std::size_t length, F func)
{
    if (!array || !func) return;

    for (std::size_t i = 0; i < length; ++i)
    {

        func(array[i]);
    }
}

/**
 * SOBRECARGA 2: Para arrays CONSTANTES (solo lectura).
 * Esta versión se activará automáticamente si pasas un 'const int[]' o similar.
 */
template<typename T, typename F>
void iter(const T *array, std::size_t length, F func)
{
    if (!array || !func) return;

    for (std::size_t i = 0; i < length; ++i)
    {
        func(array[i]);
    }
}

#endif
