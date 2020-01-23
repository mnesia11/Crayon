#include"crayon.hpp"
using namespace cy;
using namespace std;



int main(){
	for(int i=1;i<=10;i++) {
		make_in(i);
		int n=crayon_min(1000,pow(2,i));
		cout<<n<<endl;
		for(int j=1;j<=n;j++) {
			cout<<cyrand(1,1000)<<" ";
		}
		end_in();
		make_out(i);
	}
}

