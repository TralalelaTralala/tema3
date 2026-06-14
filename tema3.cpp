#include <iostream>
using namespace std;

// Завдання 1
double power(double n, int p = 2)
{
    double result = 1;

    for (int i = 0; i < p; i++)
    {
        result *= n;
    }

    return result;
}

// Завдання 2
void zeroSmaller(int& a, int& b)
{
    if (a < b)
        a = 0;
    else
        b = 0;
}

// Завдання 3
struct Distance
{
    int feet;
    float inches;
};

Distance maxDistance(Distance d1, Distance d2)
{
    float dist1 = d1.feet * 12 + d1.inches;
    float dist2 = d2.feet * 12 + d2.inches;

    if (dist1 > dist2)
        return d1;
    else
        return d2;
}

int main()
{
    // Завдання 1
    double n;
    int p;

    cout << "Task 1" << endl;
    cout << "Enter number: ";
    cin >> n;

    cout << "Enter power: ";
    cin >> p;

    cout << "Result = " << power(n, p) << endl;
    cout << "Square = " << power(n) << endl;

    cout << endl;

    // Завдання 2
    int x, y;

    cout << "Task 2" << endl;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    zeroSmaller(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout << endl;

    // Завдання 3
    Distance d1, d2, maxD;

    cout << "Task 3" << endl;

    cout << "Enter first distance (feet inches): ";
    cin >> d1.feet >> d1.inches;

    cout << "Enter second distance (feet inches): ";
    cin >> d2.feet >> d2.inches;

    maxD = maxDistance(d1, d2);

    cout << "Largest distance: "
         << maxD.feet << " feet "
         << maxD.inches << " inches" << endl;

    return 0;
}