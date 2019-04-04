 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
            
using std::cout;
using std::endl;


int main(){
    int i;
    srand48(time(0));
    double sigma = 1.0;
    double funcion = drand48();
    double x_1 = 0.0;
    double x_2 = 0.0;
    double prop;
    double alpha;
  
  return 0;
}

void MCMD(int N){
    srand48(time(0));
    double sigma = 1.0;
    double funcion=drand48();
    double x_1 = 0.0;
    double x_2 = 0.0;
    double prop;
    double alpha;
    
        for(int i=0;i<N;i++){
            cout << i << " " << funcion << endl;
            prop = funcion + ((drand48()*2)-1);
            x_1 = prop;
            x_2 = funcion;
            double d = exp((sigma*sigma)*(-1*x_1)*(x_1/2))/exp((sigma*sigma)*(-1*x_2)*(x_2/2));
            double s = min(1.0,d);
            alpha = drand48();
            
            
         if (alpha<s){
             funcion = prop;
             
         }
         else {
             funcion = funcion;
         }
        }
        
        
