#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

int t;
std::cin >> t;
while(t--){
  int x,y,z;
  cin>>x>>y>>z;
  x=400/x;
  y=400/y;
  z=400/z;
  
  if(x>y && x>z){
    std::cout << "ALICE" << std::endl;
  }else if(y>x && y>z){
    std::cout << "BOB" << std::endl;
  }else if(z>x && z>y){
    std::cout <<"CHARLIE"<< std::endl;
  }
}
	return 0;

}