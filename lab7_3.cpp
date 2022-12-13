#include<iostream>
#include<cmath>

using namespace std;

int adiff(int A,int B){
  int C;
  if(abs(A-B) <= 180){
  C = abs(A-B); 
  return C;
  }
  else if(abs(A-B) == 0){
  C = 0; 
  return C;
  }
  else if(abs(A-B)  > 180 && abs(A-B) < 360){
  C = 360-abs(A-B) ;
  return C;
  } 
  else if(abs(A-B) >= 360){
  C = abs(A-B)%360;
  return C;
  }
  return 0;
}

int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";
  return 0;
}
