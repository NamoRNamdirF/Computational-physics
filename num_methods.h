#ifndef NUM_METHODS_H
#define NUM_METHODS_H
#include<cstdio>
#include <iostream>
#include <fstream>
class num_methods {
public:

    static double rungeKutta(double (*func)(double, double), double x0, double y0, double h, int n) {

        auto x = new double[n];
        auto y = new double[n];
        x0 = x[0];
        y0 = y[0];
        for (int i = 1; i < n + 1; i++) {
            x[i] = x[0] + i * h;
            double k1 = h * func(x[i - 1], y[i - 1]);
            double k2 = h * func(x[i - 1] + h / 2., y[i - 1] + k1 / 2.);
            double k3 = h * func(x[i - 1] + h / 2., y[i - 1] + k1 / 2.);
            double k4 = h * func(x[i - 1] + h, y[i - 1] + k3);
            y[i] = y[i - 1] + (1. / 6.) * (k1 + 2 * k2 + 2. * k3 + k4);
            std::cout << i << "   " << '(' << x[i] << ';' << y[i] << ')' << "\n";
        }
        delete[] x;
        delete[] y;

    }


    static double euler(double (*func)(double, double), double y0, double x0, double h) {
        int n = 100;
        double X[(int) n], Y[(int) n];
        for (int i = 1; i <= n; ++i) {
            X[0] = x0;
            Y[0] = y0;
            X[i] = x0 + i * h;
            Y[i] = Y[i - 1] + h * func(X[i - 1], Y[i - 1]);
        }

        for (int i = 0; i <= n; ++i) {
            std::cout << "y[" << i << "]=" << Y[i] << " ";
            std::cout << '(' << X[i] << ';' << Y[i] << ')' << std::endl;

        }
        return 0;
    }
};


//    static double verlet() {
//
//    }
//};
#endif
