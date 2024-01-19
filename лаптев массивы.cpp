#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Array {
public:
    vector <double> arr;

    void init(int size)
    {
        double temp;

        for (int i = 0; i < size; i++)
        {
            cin >> temp;

            arr.push_back(temp);
        }
    }

    double norma(vector <double> curr_arr)
    {
        double res = 0, summ = 0;

        for (int i = 0; i < curr_arr.size(); i++)
        {
            summ += pow(curr_arr[i], 2);
        }

        res = sqrt(summ);

        return res;
    }

    void print(Array arr2, int size, double scal)
    {
        double norma1 = norma(this->arr), norma2 = norma(arr2.arr);
        double scalMult = 0;

        cout << "vector1= ";
        for (int i = 0; i < size; i++)
        {
            cout << this->arr[i] << " ";
        }

        cout << "norma= " << norma1 << endl;

        cout << "vector2= ";
        for (int i = 0; i < size; i++)
        {
            cout << arr2.arr[i] << " ";
        }

        cout << "norma= " << norma2 << endl;

        cout << "summa= ";
        for (int i = 0; i < size; i++)
        {
            cout << this->arr[i] + arr2.arr[i] << " ";
        }

        cout << "\nraznost= ";
        for (int i = 0; i < size; i++)
        {
            cout << this->arr[i] - arr2.arr[i] << " ";
        }

        cout << "\nscalar= ";
        for (int i = 0; i < size; i++)
        {
            scalMult += this->arr[i] * arr2.arr[i];
        }
        cout << scalMult;

        cout << "\nmult chislo * Vector1= ";
        for (int i = 0; i < size; i++)
        {
            cout << this->arr[i] * scal << " ";
        }

        cout << "\nmult chislo * Vector2= ";
        for (int i = 0; i < size; i++)
        {
            cout << arr2.arr[i] * scal << " ";
        }

        if (norma1 == norma2)
            cout << "\nnorma(Vector1) = norma(Vector2)";
        else if (norma1 > norma2)
            cout << "\nnorma(Vector1) > norma(Vector2)";
        else
            cout << "\nnorma(Vector1) < norma(Vector2)";
    }
};

int main()
{
    Array arr1, arr2;
    int size;
    double scal;

    cin >> size;

    arr1.init(size);
    arr2.init(size);

    cin >> scal;

    arr1.print(arr2, size, scal);

    return 0;
}
