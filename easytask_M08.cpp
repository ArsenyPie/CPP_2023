#include<iostream>
#include<cmath>

double getAngle(double a, double b, double c){
  double angle = acos(((a*a)+(b*b)-(c*c)) / (2*a*b));
  return angle * 180.0 / M_PI;
}
 
int main(){
  double a, b, c;
  std::cout<<"Enter the lengths of the triangle sides: ";
  std::cin>>a>>b>>c;
 
  if(a<=0 || b<=0 || c<=0){
    std::cout<< "Error! The sides cannot be negative or zero.\n";
  }
  else{
    double angle = getAngle(a,b,c);
    std::cout<<"The angle opposite to side "<<a<<" is: "<<angle<<" degrees.\n";    
  }
  
  return 0;
}