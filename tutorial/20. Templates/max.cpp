#include <iostream>

template<typename T>

T const	&max(T const &x, T const &y)
{
	return (x >= y ? x : y);
}

int	foo(int x)
{
	std::cout << "long computing time " << std::endl;
	return x;
}

int	main()
{
	int	a = 21;
	int	b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;

	float	c = -1.7f;
	float	d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl;
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;

	char	e = 'f';
	char	f = 'x';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl;
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl;

	int	ret = max<int>(foo(a), foo(b));

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;
}
