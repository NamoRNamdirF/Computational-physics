//#pragma clang diagnostic push
//#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//
#include <iostream>
#include "num_methods.h"
#include <cmath>
#include <vector>
using namespace std;
//ofstream outf("Data.txt");
//double func(double a, double b)
//{
//    return cos(a);
//}
//int main() {
//    num_methods::rungeKutta(func, 1, 0, 0.2, 100);// nujno sdelat massiv v .h b v nego pushit' a zdes vizivat
////    std::cout<<num_methods::euler(func,1,0,0.2);
//}
double x1, x2, x3, y11, y2, y3, z1, z2, z3;
double vx1, vx2, vx3 ,vy1, vy2, vy3, vz1, vz2, vz3;

double const G = 1;
double m1, m2, m3;
int n = 100;
//// obyavit localnuu peremennuu - puctoy massiv
//// Dlya NN
double r[3][3] = {{0, 0, 0},
                  {1, 1, 1},
                  {2, 2, 2}};
int main() {
    vector <double> r_mod;
    for (int i = 0; i <= 3; ++i) {
        for (int j = 0; j <= 3; ++j) {
            r[i][j] = sqrt((r[j] - r[i]) * (r[j] - r[i])+(r[j+1] - r[i]) * (r[j+1] - r[i]));
            r_mod.push_back(r[i][j]);
        }
}
}

//    double r[3][3] = {{x1 = 0, y11 = 1, z1 = 1},
//                      {x2 = 1, y2 = 1, z2 = 0},
//                      {x3 = 1, y3 = 0, z3 = 1}};
//
//    double v[3][3] = {{vx1 = 0, vy1 = 0, vz1 = 0},
//                      {vx2 = 0, vy2 = 0, vz2 = 0},
//                      {vx3 = 0, vy3 = 0, vz3 = 0}};
//    int main() {
//        for (int t = 0; t <= 100; ++t) {
//
//            double r12;
//            r12 = sqrt(((r[2][1] - r[1][1]) * (r[2][1] - r[1][1])) + (r[2][2] - r[1][2]) * (r[2][2] - r[1][2]) +
//                       (r[2][3] - r[1][3]) * (r[2][3] - r[1][3]));
//            double r13;
//            r13 = sqrt(((r[3][1] - r[1][1]) * (r[3][1] - r[1][1])) + (r[3][2] - r[1][2]) * (r[3][2] - r[1][2]) +
//                       (r[3][3] - r[1][3]) * (r[3][3] - r[1][3]));
//            double r23;
//            r23 = sqrt(((r[3][1] - r[2][1]) * (r[3][1] - r[2][1])) + (r[3][2] - r[2][2]) * (r[3][2] - r[2][2]) +
//                       (r[3][3] - r[2][3]) * (r[3][3] - r[2][3]));
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//            double a1x;
//            a1x = -G * ((m2 / (r12 * (r12) * r12)) * (r[1][1] - r[2][1]) +
//                        (m3 / ((r13) * (r13) * (r13))) * (r[1][1] - r[3][1]));
//
//            double a1y;
//            a1y = -G * ((m2 / (r12 * r12 * r12)) * (r[1][2] - r[2][2]) +
//                        (m3 / ((r13) * (r13) * (r13))) * (r[1][2] - r[3][2]));
//
//            double a1z;
//            a1z = -G * ((m2 / (r12 * r12 * r12)) * (r[1][3] - r[2][3]) +
//                        (m3 / ((r13) * (r13) * (r13))) * (r[1][3] - r[3][3]));
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//            double a2x;
//            a2x = -G * ((m1 / (r12 * r12 * r12)) * (r[1][1] - r[2][1]) +
//                        (m3 / ((r23) * (r23) * (r23))) * (r[2][1] - r[3][1]));
//
//            double a2y;
//            a2y = -G * ((m1 / (r12 * r12 * r12)) * (r[1][2] - r[2][2]) +
//                        (m3 / ((r23) * (r23) * (r23))) * (r[2][2] - r[3][2]));
//
//            double a2z;
//            a2z = -G * ((m1 / ((r12) * (r12) * (r12))) * (r[1][3] - r[2][3]) +
//                        (m3 / ((r23) * (r23) * (r23))) * (r[2][3] - r[3][3]));
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//            double a3x;
//            a3x = -G * ((m2 / ((r23) * (r23) * (r23))) * (r[2][1] - r[3][1]) +
//                        (m1 / ((r13) * (r13) * (r13))) * (r[1][1] - r[3][1]));
//
//            double a3y;
//            a3y = -G * ((m2 / ((r23) * (r23) * (r23))) * (r[2][2] - r[3][2]) +
//                        (m1 / ((r13) * (r13) * (r13))) * (r[1][2] - r[3][2]));
//
//            double a3z;
//            a3z = -G * ((m2 / ((r23) * (r23) * (r23))) * (r[2][3] - r[3][3]) +
//                        (m1 / ((r13) * (r13) * (r13))) * (r[1][3] - r[3][3]));
//////////////////////////////////////////////////////////////////////////////////////////////////////
//            double a[3][3] = {{a1x, a1y, a1z},
//                              {a2x, a2y, a2z},
//                              {a3x, a3y, a3z}};
//
//
//            for (int i = 0; i <= 3; i++) {  //po strokam
//                for (int j = 0; j <= 3; j++) {    // ctolbsam
//                    v[i][j] = v[i][j] + a[i][j] * t;
//                    r[i][j] = r[i][j] + v[i][j] * t;
////                outf << r[i][j] << endl;
////                return r[i][j];//r[i][j];
//                }
//            }
//        }
//    }
