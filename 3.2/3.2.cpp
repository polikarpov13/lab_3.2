#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;

    double F;

    cout << "A = ";
    cin >> a;

    cout << endl;

    cout << "B = ";
    cin >> b;

    cout << endl;

    cout << "C = ";
    cin >> c;

    cout << endl;

    cout << "X = ";
    cin >> x;

    cout << endl;


    if (x < 1 && c != 0)
        F = a * pow(x, 2) + (b / c);
    if (x > 1.5 && c == 0)
        F = (x - a) / (pow(x - c, 2));
    if (!(x < 3 && b != 0) && !(x > 1.5 && c == 0))
        F = (pow(x, 2)) / (pow(c, 2));

    cout << "Result1 : " << F << endl;


    if(x < 1 && c != 0)
        F = a * pow(x, 2) + (b / c);
    else
        if(x > 1.5 && c == 0)
            F = (x - a) / (pow(x - c, 2));
        else
            F = (pow(x, 2)) / (pow(c, 2));

    cout << "Result2 : " << F << endl;


    system("pause");
    return 0;
}



