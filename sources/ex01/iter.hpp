#ifndef ITER_HPP
# define ITER_HPP

template<class T>
void	iter(T *arr, int len, void (*func)(const T & elem))
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif