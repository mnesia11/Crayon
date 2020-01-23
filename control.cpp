#include"crayon.hpp"
using namespace cy;
using namespace std;



int main() {
	
	for(int data=1;data<=10;data++) {
		make_in(data);
		int n=crayon_min(1000,crayon_max(0,(1000/200)*data*data*2+cyrand(-10,10)));
		int m=crayon_min(50000,crayon_max(0,(50000/10000)*data*data*data*10+cyrand(-10,10)));
		graph<int>g=connect_graph(n/2,m/2,1,cyrand(1,pow(2,data)+10),cyrand)+connect_graph(n/2,m/2,1,cyrand(1,pow(2,data)+10),cyrand);
		cout<<g;
		end_in();
		make_out(data);
	}
	
	return 0;
}
