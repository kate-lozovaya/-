#include <iostream>
//двунаправленный итератор

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c)->std::pair<bool, std::pair<Iterator, Iterator>>
{
	std::pair<bool, std::pair<Iterator, Iterator>>pair;

	while (first < last)
	{
		T sum = *first + *last;
		if (sum == c)
		{
			pait.first = true;
			pair.second.first = first;
			pair.second.second = last;
		}
		else
		{
			if (sum > c) last--;
			else first++;
		}
	}
	return pair;
}
