#include <iostream>
#include <Windows.h>
#include <string>

class Figure {
protected:
    std::string name;
    int points;

public:
    Figure() {
        name = "Фигура";
        points = 0;
    }
    std::string get_name() {
        return name;
    }
    int get_points() {
        return points;
    }
};

class Triangle : public Figure {
public:
    Triangle() {
        name = "Треугольник";
        points = 3;
    }

};

class Quadrangle : public Figure {
public:
    Quadrangle() {
        name = "Четырехугольник";
        points = 4;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure = Figure();
    Triangle triangle = Triangle();
    Quadrangle  quadrangle = Quadrangle();
    std::cout << "Количество сторон:\n";
    std::cout << figure.get_name() << ": " << figure.get_points() << "\n";
    std::cout << triangle.get_name() << ": " << triangle.get_points() << "\n";
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_points() << "\n";
}
