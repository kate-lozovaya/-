#include <iostream>
#include "0.0.3.hpp"
//итератор произвольного доступа

template <typename Iterator1, typename Iterator2>
void merge_sort(Iterator1 first, Iterator1 last, Iterator2 memory)
{
	if (first == last)
		return;
	else if (first++ == last)
	{
		if (*first > *last)
		{
			Iterator1 a = first;
			*first = *last;
			*last = *a;
		}
		else return;
	}
	
	auto mid = first + (last - first) / 2;
	merge_sort(first, mid, memory);
	merge_sort(mid, last, memory);
	merge(first, mid, mid, last, memory);
}
