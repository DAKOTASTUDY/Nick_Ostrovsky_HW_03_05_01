

#include <iostream>
class Figure
{
protected:
    int side_count;
public:
    Figure() : side_count(0) {}
    Figure(int s_c) : side_count(s_c) {}
    int get_side()
    {
        return side_count;
    }
    int side_out() 
    {
       
        return get_side();
    }

};

class Triangle : public Figure
{
public:
    Triangle() : Figure(3) {};



};
class Quad : public Figure
{
public:
    Quad() : Figure(4) {};



};
int main()
{
    Figure a;
    Triangle b;
    Quad c;
    std::cout << "\n" << "Figure: \t" << a.side_out() << std::endl;
    std::cout << "\n" << "Triangle: \t" << b.side_out() << std::endl;
    std::cout << "\n" << "Quad: \t\t" << c.side_out() << std::endl;
    return 0;
}


