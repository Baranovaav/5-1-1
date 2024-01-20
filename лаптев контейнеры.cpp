#include <iostream>
#include <vector>
#include <cmath>

class massiv
{
public:
    std::vector <double> mass;
    int size_of_mass;

    void new_mass()
    {
        double temp;

        std::cin >> size_of_mass;

        for (int i = 0; i < size_of_mass; i++)
        {
            std::cin >> temp;
            mass.push_back(temp);
        }

        std::cout << mass.size() << std::endl;
        result_cout();

        menu();
    }

private:
    void menu()
    {
        int dot = -1;

        while (dot != 0)
        {
            std::cin >> dot;

            if (dot == 0)
            {
                break;
            }
            else if (dot == 1)
            {
                add_el();
            }
            else if (dot == 2)
            {
                del_el();
            }

            result_cout();
        }
    }

    void add_el()
    {
        double temp;
        std::cin >> temp;

        mass.push_back(temp);

        std::cout << "+: " << mass.size() << std::endl;
    }

    void del_el()
    {
        mass.pop_back();

        std::cout << "-: " << mass.size() << std::endl;
    }


    void math_methods()
    {
        double summ = 0, arith_mean = 0;

        for (int i = 0; i < mass.size(); i++)
        {
            summ += mass[i];
        }

        arith_mean = summ / mass.size();

        mass.push_back(summ);
        mass.push_back(arith_mean);
    }

    void dop_quest()
    {
        double max_num = mass[0], slog;

        for (int i = 1; i < mass.size(); i++)
        {
            if (max_num < mass[i])
            {
                max_num = mass[i];
            }
        }

        slog = sqrt(max_num * mass[mass.size() - 1]);

        for (int i = 0; i < mass.size(); i++)
        {
            mass[i] += slog;
        }
    }


    void result_cout()
    {
        print_mass();

        math_methods();
        print_mass();

        dop_quest();
        print_mass();
    }

    void print_mass()
    {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(3);

        for (int i = 0; i < mass.size(); i++)
        {
            std::cout << mass[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    massiv start;

    start.new_mass();

    return 0;
}