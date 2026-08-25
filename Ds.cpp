//Addition of two single dimension array print the sum of array in cpp:

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int a[n], b[n], sum[n];

//     cout << "Enter elements of first array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     cout << "Enter elements of second array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//     }

//     for (int i = 0; i < n; i++) {
//         sum[i] = a[i] + b[i];
//     }

//     cout << "Sum of arrays: ";
//     for (int i = 0; i < n; i++) {
//         cout << sum[i] << " ";
//     }

//     return 0;
// }


//Addition of two matrix and print the sum of matrix in cpp:
// #include <iostream>
// using namespace std;

// int main() {
//     int r, c;

//     cout << "Enter rows and columns: ";
//     cin >> r >> c;

//     int a[10][10], b[10][10], sum[10][10];

//     cout << "Enter elements of first matrix:" << endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "Enter elements of second matrix:" << endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cin >> b[i][j];
//         }
//     }

//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     cout << "Resultant Matrix:" << endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int total = 0;

//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             total = total + sum[i][j];
//         }
//     }

//     cout << "Sum of resultant matrix = " << total;

//     return 0;
// }



//pattern printing

//1. star printing

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 2. 1 printing

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 5 - i; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {
//             cout << "1 ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//number tringle:

// #include <iostream>
// using namespace std;

// int main() {
//     int num = 1;

//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// 1 printing:

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "1 ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// double pointer initalisation :

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *p = &a;      
    int **q = &p;     

    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    return 0;
}