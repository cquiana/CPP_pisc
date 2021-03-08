#include <iostream>
#include <cmath>
using namespace std;

#define MAX(x, y, r) {int _x = (x); int _y = (y); int _r = ((r) = (_x > _y ? _x : _y)); r = _r ;}

int		get_log(int x)
{
	int res = 0;
	while (x > 1) {
		x /= 2;
		res++;
	}
	return (res);
}

int		main()
{
	int n = 0;
	int a = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << get_log(a) << endl;
	}
	return (0);
}
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
