/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Morwenn
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef CPPSORT_SORTERS_SPREAD_SORTER_STRING_SPREAD_SORTER_H_
#define CPPSORT_SORTERS_SPREAD_SORTER_STRING_SPREAD_SORTER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <iterator>
#include <cpp-sort/sorter_base.h>
#include <cpp-sort/sorter_traits.h>
#include "../../detail/spreadsort/string_sort.h"

namespace cppsort
{
    ////////////////////////////////////////////////////////////
    // Sorter

    struct string_spread_sorter:
        sorter_base<string_spread_sorter>
    {
        using sorter_base<string_spread_sorter>::operator();

        template<typename RandomAccessIterator>
        auto operator()(RandomAccessIterator first, RandomAccessIterator last) const
            -> void
        {
            detail::spreadsort::string_sort(first, last);
        }
    };

    ////////////////////////////////////////////////////////////
    // Sorter traits

    template<>
    struct sorter_traits<string_spread_sorter>
    {
        using iterator_category = std::random_access_iterator_tag;
        static constexpr bool is_stable = false;
    };
}

#endif // CPPSORT_SORTERS_SPREAD_SORTER_STRING_SPREAD_SORTER_H_
