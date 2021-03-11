#include <iostream>
#include <cmath>
#include "sample.hpp"
// using namespace std;

#define MAX(x, y, r) {int _x = (x); int _y = (y); int _r = ((r) = (_x > _y ? _x : _y)); r = _r ;}

void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void rotate(int *a, unsigned size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			swap(&a[j], &a[j + 1]);
		}
	}

}

int		main()
{

	int a[] = {1, 2, 3, 4, 5};
	rotate(a, 5, 2);
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	std::cout << a[3] << std::endl;
	std::cout << a[4] << std::endl;


	// Sample instance;

	// instance.setF(42);
	// std::cout << "instance.getF() :" << instance.getF() << std::endl;

	// instance.setF(-42);
	// std::cout << "instance.getF() :" << instance.getF() << std::endl;
	return (0);
}

// int		get_log(int x)
// {
// 	int res = 0;
// 	while (x > 1) {
// 		x /= 2;
// 		res++;
// 	}
// 	return (res);
// }
	// cout << res << endl;
	// int res = get_log(59218);

// int power(int x, unsigned p) {
//     int answer;

//     if (p == 0)
//     {
//         answer = 1;
//         return answer;
//     }
//     answer = x;
//     for (int i = 1; i < p; i++)
//     {
//         answer *= x;
//     }
//     return answer;
// }

// int	flag = 1;

    // char c = '\0';
    // while (cin.get(c)) {
    //     if ((c == ' ') && flag == 1) {
	// 		cout << c;
	// 		flag = 0;
	// 	} else if (c != ' ') {
	// 		cout << c;
	// 		flag = 1;
	// 	}
    // }


	// int a = 0;
	// int b = 0;
	// int c = 0;
	// double d = 0;
	// double x1 = 0;
	// double x2 = 0;

	// cin >> a >> b >> c;
	// d = (b * b) - 4 * a * c;

	// if (d < 0) {
	// 	cout << "No real roots" << endl;
	// }
	// else if (d == 0) {
	// 	x1 = (-1 * b) / (2 * a);
	// 	cout << x1 << " " << x1 << endl;
	// }
	// else {
	// 	x1 = ((-1 * b) + sqrt(d)) / (2 * a);
	// 	x2 = ((-1 * b) - sqrt(d)) / (2 * a);
	// 	cout << x1 << " " << x2 << endl;
	// }


	// cout << "max1 = " << c << "\n";

	// cout << "max2 = " << c << "\n";

	// i = power(2, 1);
	// double	d = 3.14;
	// const char	*s = "C-style string";

	// std::cin >> i >> d;
	// std::cout << "Your input is " << i << " | " << d << "\n";
