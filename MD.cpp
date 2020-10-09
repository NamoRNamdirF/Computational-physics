
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

double a[k][n] = {{0, 0, 0},
                  {0, 0, 0},
                  {0, 0, 0}
                //   {5, 5, 5}
};

using namespace std;

void show_vector(vector<double >&x)
{
    for (double & it : x)
        cout <<it <<" ";
}

int main (){
    vector <double>  r_mod;
   vector < vector <double>>  a_mod;
    double r_prom;
    double a_prom;
    for (int i = 0; i < k-1; ++i){ //i = 1 to n-1; j = i+1 to n  -  the 3-d law of Newton or how delete the same elements;
      for (int j = i+1; j < n; ++j){
        if (i != j){
            r_prom = pow(r[j][i] - r[i][j], 2) + pow(r[j][i] - r[i][j], 2) + pow(r[j][i] - r[i][j], 2);//Do not foget sqrt
            r_mod.push_back(r_prom);
            a_prom = a[i][j] - G*( (m[i]*r[j][i]-r[i][j])/((r_mod[i])*(r_mod[i])*(r_mod[i])));
            cout << a_prom;
//            a_mod.push_back(a_prom);
        }
    }
    }
//        show_vector(a_mod);

}

//int main(){
//    vector <double>  a_mod;
//    double a_prom;
//    for (int i = 0; i < k-1; ++i){
//        for (int j = i+1; j < n; ++j){
//    a_prom = a[i][j] - G*( (m[i]*r[j][0]-r[i][0])/((r_mod[0])*(r_mod[0])*(r_mod[0])) + (m[i]*r[j][2]-r[i][2])/((r_mod[1])*(r_mod[1])*(r_mod[1])));
//    a_mod.push_back(a_prom);
////    show_vector(r_mod);
//    return 0;
//}


