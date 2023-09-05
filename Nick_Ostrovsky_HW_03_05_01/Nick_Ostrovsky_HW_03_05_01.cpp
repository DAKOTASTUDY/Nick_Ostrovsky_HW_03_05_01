

#include <iostream>
class Figure
{
protected:
    int side_count;
    std::string name;
public:
    Figure() : side_count(0), name("Figure") {}
    Figure(int s_c, std::string n) : side_count(s_c), name(n) {}
    int get_side()
    {
        return side_count;
    }
    int side_out() 
    {
       
        return get_side();
    }
    std::string get_name()
    {
        return name;

    }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure(3, "Triangle") {};



};
class Quad : public Figure
{
public:
    Quad() : Figure(4, "Quad") {};



};
int main()
{
    Figure a;
    Triangle b;
    Quad c;
    std::cout << "\n" << a.get_name() << "\t" << a.side_out() << std::endl;
    std::cout << "\n" << b.get_name() << "\t" << b.side_out() << std::endl;
    std::cout << "\n" <<c.get_name() << "\t\t" << c.side_out() << std::endl;
   
    return 0;
}


