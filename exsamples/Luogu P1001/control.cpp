//Luogu P1001
#include"crayon.hpp"
/*
crayon.hpp�а���bits/stdc++.h
*/
using namespace std;
using namespace cy;
/*
namespace cy�а�����crayon������namespace(s).
*/

int a,b;

int main() {
	for(int data=1;data<=10;data++) {
		make_in(data);
		/*
		make_in(data);
		�����붨��testdata(data).in��.
		��make_in(5);���ǰ����붨����testdata5.in��.
		*/
 	 	a=cyrand(1,pow(2,data+7));
		b=cyrand(1,pow(2,data+7));
		/*
		cyrand(a,b) ����һ��[a,b]֮��������
		(a<=b , b>=0 , a,b<INTMAX)

		����cyrand_ll(a,b) ����һ��[a,b]֮��������
		(a<=b , b>=0 , a,b<LONGLONGMAX)

		pow(2,data+7)��Ϊ��֤�������ݶ�.
		*/
		cout<<a<<" "<<b;
		/*
		���a��b.
		*/
		end_in();
		/*
		ȡ������(�൱��freopen("CON","r",stdin);)
		*/
		make_out(data);
		/*
		ʹ��tools//program//std.exe��testdata(data).in����testdata(data).out.
		�ڱ�����,std.cppӦ����������:

		//Luogu P1001
		#include<bits/stdc++.h>
		using namespace std;

		int a,b;

		int main() {
			//����Ҫfreopen!
			cin>>a>>b;
			cout<<a+b;
			return 0;
		}

		�ر�ע��:��std.cpp�в���Ҫfreopen.
		*/
	}
	return 0;
}
