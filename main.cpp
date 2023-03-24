#include <iostream>    
using namespace std; 
void aboutA(); 
bool getP(double&, double&); 
void putP(double, double); 
int whereP(double&, double&, double a); 
void proccesP(double, double, double); 
int main() { 
    double x, y, a = 10; 
    aboutA(); 
    if (getP(x, y)) { 
        putP(x, y); 
    } 
    else { 
        cout << "Error"; 
    } 
    proccesP(x, y, a); 
    return 0; 
} 
void aboutA() {  
    cout << "Laboratory work 1-1. Point and outline.\nK-14 Vasylenko Zlata\n";  
}  
bool getP(double& x, double& y) { 
    cout << "Enter the coordinates with a space: "; 
    if (cin >> x >> y) { 
        return true; 
    } 
    else { 
        return false; 
    } 
} 
void putP(double x, double y) { 
    cout << '(' << x << ';' << y << ')'; 
} 
int whereP(double& x, double& y, double a) { 
    if  ( 
        (x==a) && (y>=0 && y<= 2*a) || 
        (y==2*a) && (x>=0 && x<=a) || 
        (x==0) && (y>=a && y<= 2*a)|| 
        (x>=0 && x<=a) && y==(a-x)){ 
        return 0; 
    } 
    else if   ( 
        (x>0 && x<a) && (y>=a && y<= 2*a)|| 
        (x>0 && x<a) && (y>(a-x) && y<a)){ 
        return -1; 
    } 
    else { 
        return 1; 
    } 
} 
void proccesP(double x, double y, double a) { 
    int r = whereP(x, y, a); 
    if (r == -1) { cout << "IN_C\n "; } 
    else if (r == 0) { cout << "ON_C\n "; } 
    else { cout << "OUT_C\n "; 
        } 
        cout<<a ;
}
