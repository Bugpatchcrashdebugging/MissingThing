#pragma once
#include<map>
template<typename T>
class MissingThin
{
public:
	int operator()(const T* _a, const T*_b, int _fullSize);
private:
};
template<typename T>MissingThin<T>::operator()(const T * _a, const T * _b, int _fullSize)
{
	std::map<T, T> collection;
	for (int i = 0; i < _fullSize; ++i)
	{
		collection[_a[i]]++;
		if (i != _fullSize - 1)
			collection[_b[i]]++;
	}
	for (auto it : collection)
	{
		if (it.second == 1)
			return it.first;
	}
	return -1;
}
