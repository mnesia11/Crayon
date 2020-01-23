#include<bits/stdc++.h>
#include<windows.h>

#if _WIN32_WINDOWS || _WIN32_WINNT 

void color(const unsigned short color1) {
	//2 green
	//4 red
	//5 purple
	//7 white
	if(color1>=0&&color1<=15) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color1);
	} else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
}
#endif

int main(int argc,char* argv[]) {
	if(argc<=3) {
		#if _WIN32_WINDOWS || _WIN32_WINNT 
			color(7);
			std::cout<<"Crayon:\n";
			color(4);
			//"Crayon:\nArguments Error:Too few arguments.\ncompilation terminated."
			std::cout<<"Arguments Error";
			color(7);
			std::cout<<":Too few arguments.\n";
			std::cout<<"compilation terminated.";
			return 0;
		#else
			std::cout<<"Crayon:\nArguments Error:Too few arguments.\ncompilation terminated.";
			return 0;
		#endif
	} else {
		std::string path=argv[1];
		std::ifstream in("/../../crayon.hpp");
		std::ostringstream cy;
		cy<<in.rdbuf();
		std::string crayon=cy.str();
		path=path+"/.."+"/crayon.hpp";
		freopen(path.c_str(),"w",stdout);
		std::cout<<crayon;
		freopen("CON","w",stdout);
		std::string command="g++ ";
		for(int i=1;i<argc;i++) {
			command+=argv[i];
			command+=" ";
		}
		std::cout<<path<<std::endl<<command<<std::endl<<crayon;
		/*
		if(system(command.c_str())==0) {
			std::cout<<"ok";
		} else {
			
		}*/
	}
}
