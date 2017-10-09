#include <iostream>
//итератор произвольного доступа

template <typename Iterator1, typename Iterator2>
auto merge(Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output)->Iterator2
{
	while (first1 != last1 || first2 != last2)
	{
		if (first1 == last1 || first2 == last2)
		{
			if (first1 == last1)
			{
				while (first2 != last2)
				{
					*output = *first2;
					output++;
					first2++;
				}
			}

			else //(first2 == last2)
			{
				while (first1 != last1)
				{
					*output = *first1;
					output++;
					first1++;
				}
			}
		}
		else
		{
			if (*first1 < *first2)
			{
				*output = first1;
				output++;
				first1++;
			}
			else
			{
				*output = first2;
				output++;
				first2++;
			}
		}
	}
	return output;
}
