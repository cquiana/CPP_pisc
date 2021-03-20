#include <iostream>
#include <cmath>
#include "sample.hpp"
using namespace std;


int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
	int **n = new int *[cols];

	for (int i = 0; i < cols; i++)
	{
		n[i] = new int [rows];
		for (int j = 0; j < rows; j++)
		{
			n[i][j] = m[j][i];
		}
	}
	return n;
}


void swap_min(int *m[], unsigned rows, unsigned cols)
{
	int tmp = m[0][0];
	int *tptr = 0;
	int idx = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (tmp > m[i][j]) {
				tmp = m[i][j];
				// tptr = m[i];
				idx = i;
			}
		}
	}
	if (idx != 0) {
		tptr = m[0];
		m[0] = m[idx];
		m[idx] = tptr;
	}
}
void print_matrix( int *m[ ], const unsigned rows, const unsigned cols )
{
for ( size_t i = 0; i < rows; ++i )
    {
        for ( size_t j = 0; j < cols; ++j )
            std::cout << m[ i ][ j ] << ' ';
        std::cout << "\n";
    }
}

void input_matrix( int *m[ ], const unsigned rows, const unsigned cols )
{
    for ( size_t i = 0; i < rows; i++ )
        for ( size_t j = 0; j < cols; j++ )
        {
            std::cout << "Input matrix[" << i << "," << j << "]: ";
            std::cin >> m[ i ][ j ];
        }
}

// struct Person {
// virtual string name () const { return name_ ; }
// };


// struct Professor : Person {
// string name () const {
// return " Prof . " + Person :: name ();
// }

// };

int main()
{

    return 0;
}

    // unsigned rows, columns;
    // std::cout << "Input number of rows: ";
    // std::cin >> rows;
    // std::cout << "Input number of columns: ";
    // std::cin >> columns;
    // int** matrix = new int*[ rows ];
    // for ( size_t count = 0; count < rows; count++ )
    //     matrix[count] = new int[ columns ];
    // input_matrix( matrix, rows, columns );
    // std::cout << "\nYour matrix is... \n\n";
    // print_matrix( matrix, rows, columns);
    // std::cout << "\nChange row with first row ... \n\n";
    // swap_min( matrix, rows, columns );
    // std::cout << "Modified matrix... \n\n";
    // print_matrix( matrix, rows, columns);
    // std::cout << "\nFree memory... \n";
    // for ( size_t count = 0; count < rows; count++ )
    //     delete[ ] matrix[ count ];
// int		main()
// {

// 	int m[3][3] = {{4, 5, 3}, {2, 5, 9}, {1, 4, 2}};

// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			cout << m[i][j];
// 		}
// 		cout << endl;
// 		swap_min(m, 3, 3);
// 	}
// 		return (0);
// }

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
