#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	int n;
	cin>>n;
	cout<<n<<endl;
	//print p1
	cout<<0<<" "<<0<<" "<<endl;
	//print p2
	cout<<n-1<<" "<<n-1<<" "<<endl;
	for(int i=1;i<n-1;++i){
		cout<<i<<" "<<i<<" "<<endl;
	}
}
