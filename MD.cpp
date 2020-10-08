#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double x1, x2, x3, y11, y2, y3, z1, z2, z3;
double vx1, vx2, vx3 ,vy1, vy2, vy3, vz1, vz2, vz3;

double const G = 1;
double m1, m2, m3;
// int n = 100;
int const m = 3;
int const n = 3;
double r[m][n] = {{0, 0, 0},
                  {1, 1, 1},
                  {3, 3, 3}
                  
double a[m][n] = {{0, 0, 0},
                  {0, 0, 0},
                  {0, 0, 0}
                //   {5, 5, 5}
};

using namespace std;

void show_vector(vector<double >&a)
{
    for (double & it : a)
        cout <<it <<" ";
}

int main(){
    vector <double>  r;
    vector <double>  a;

    double r_prom;
    double a_prom;

    for (int i = 0; i < m-1; ++i){ //i = 1 to n-1; j = i+1 to n  -  the 3-d law of Newton or how delete the same elements;
      for (int j = 0; j < n; ++j){ 
        if (i != j){
            r_prom = (pow(r[j][0] - r[i][0], 2) + pow(r[j][1] - r[i][1], 2) + pow(r[j][2] - r[i][2], 2));//Do not foget sqrt
            r.push_back(r_prom);
            
        }
    }
    
            // a_prom = -G*( (m2*r[j][0]-r[i][0])/(pow(r[i]),3) + (m2*r[j][2]-r[i][2])/(pow(r[i]),3)

    }
    show_vector(r);
    return 0;
}
