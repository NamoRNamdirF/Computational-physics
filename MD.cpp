
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double x1, x2, x3, y11, y2, y3, z1, z2, z3;
double vx1, vx2, vx3 ,vy1, vy2, vy3, vz1, vz2, vz3;

double const G = 1;
double m[3] = {1, 1, 1};
// int n = 100;
int const k = 3;
int const n = 3;
double r[k][n] = {{0, 0, 0},
                  {1, 1, 1},
                  {3, 3, 3}};

double v[k][n] = {{0, 0, 0},
                  {0, 0, 0},
                  {0, 0, 0}};

using namespace std;

void show_vector(vector<double >&x)
{
    for (double & it : x)
        cout <<it <<" ";
}

int main (){
    for (int t = 0; t<100;++t) {
        vector<double> r_mod;
        vector<double> a_mod;
        double r_prom;
        double a_prom;
        for (int i = 0; i < k - 1; ++i) { //i = 1 to n-1; j = i+1 to n  -  the 3-d law of Newton or how delete the same elements;
            for (int j = i + 1; j < n; ++j) {
                if (i != j) {
                    r_prom = sqrt ( pow(r[j][i] - r[i][j], 2) + pow(r[j][i] - r[i][j], 2) +
                             pow(r[j][i] - r[i][j], 2));//Do not foget sqrt
                    r_mod.push_back(r_prom);
                    a_prom = G * ((m[j] * (r[j][i] - r[i][j]) / (pow(r_mod[i], 3))));
                    a_mod.push_back(a_prom);

                    v[i][j] += a_mod[t]*t;
                    r[i][j] += v[i][j]*t;

                }
            }
        }
//        show_vector(a_mod);
//    return r_mod;

    }
}

//int main(){
//    vector <double>  a_mod;
//    double a_prom;
//    for (int k = 0; k < 100; ++k){
//    a +=- G*( (m[k]*r[j][i]-r[i][j])/(modul[k] * (r_mod[0]) * (r_mod[0]));
//    a_mod.push_back(a_prom);
////    show_vector(r_mod);
//    return 0;
//}
//}

