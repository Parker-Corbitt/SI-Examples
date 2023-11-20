#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

class car
{
public:
    car();
    int* get_color();
    void set_color(int r, int g, int b);

private:
    int color_value[3] = {0, 0, 0};
};

