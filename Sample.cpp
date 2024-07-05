#include "gnuplot-iostream.h"
#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main() {
    Gnuplot gp;

    vector<double> ys(100);
    default_random_engine generator;
    normal_distribution<double> distribution(0.0, 1.0);

    for (int i = 0; i < 100; ++i) {
        ys[i] = 200 + distribution(generator);
    }

    vector<int> x(100);
    for (int i = 0; i < 100; ++i) {
        x[i] = i;
    }

    gp << "plot '-' with lines title 'Sample Visualization', '-' with filledcurves y1=195 fs transparent solid 0.6 lc rgb 'green' notitle\n";
    gp.send1d(make_tuple(x, ys));
    gp.send1d(make_tuple(x, ys));

    return 0;
}
