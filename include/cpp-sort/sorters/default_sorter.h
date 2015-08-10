/*
 * Copyright (C) 2015 Morwenn
 *
 * array_sort is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * array_sort is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef CPPSORT_SORTERS_DEFAULT_SORTER_H_
#define CPPSORT_SORTERS_DEFAULT_SORTER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <utility>
#include <cpp-sort/sorters/pdq_sorter.h>
#include <cpp-sort/sorters/small_array_sorter.h>

namespace cppsort
{
    using default_sorter = small_array_sorter<
        pdq_sorter,
        std::make_index_sequence<10u>
    >;
}

#endif // CPPSORT_SORTERS_DEFAULT_SORTER_H_