#include <iostream>
#include <vector>
#include <cmath>

class Array {
public:
    std::vector <double> arr;

    void init(int size)
    {
        double temp;

        for (int i = 0; i < size; i++)
        {
            std::cin >> temp;

            arr.push_back(temp);
        }
    }

    double norma(std::vector <double> curr_arr)
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

        std::cout << "vector1= ";
        for (int i = 0; i < size; i++)
        {
            std::cout << this->arr[i] << " ";
        }

        std::cout << "norma= " << norma1 << std::endl;

        std::cout << "vector2= ";
        for (int i = 0; i < size; i++)
        {
            std::cout << arr2.arr[i] << " ";
        }

        std::cout << "norma= " << norma2 << std::endl;

        std::cout << "summa= ";
        for (int i = 0; i < size; i++)
        {
            std::cout << this->arr[i] + arr2.arr[i] << " ";
        }

        std::cout << "\nraznost= ";
        for (int i = 0; i < size; i++)
        {
            std::cout << this->arr[i] - arr2.arr[i] << " ";
        }

        std::cout << "\nscalar= ";
        for (int i = 0; i < size; i++)
        {
            scalMult += this->arr[i] * arr2.arr[i];
        }
        std::cout << scalMult;

        std::cout << "\nmult chislo * Vector1= ";
        for (int i = 0; i < size; i++)
        {
            std::cout << this->arr[i] * scal << " ";
        }

        std::cout << "\nmult chislo * Vector2= ";
        for (int i = 0; i < size; i++)
        {
            std::cout << arr2.arr[i] * scal << " ";
        }

        if (norma1 == norma2)
            std::cout << "\nnorma(Vector1) = norma(Vector2)";
        else if (norma1 > norma2)
            std::cout << "\nnorma(Vector1) > norma(Vector2)";
        else
            std::cout << "\nnorma(Vector1) < norma(Vector2)";
    }
};

int main()
{
    Array arr1, arr2;
    int size;
    double scal;

    std::cin >> size;

    arr1.init(size);
    arr2.init(size);

    std::cin >> scal;

    arr1.print(arr2, size, scal);

    return 0;
}