#include <iostream>
#include <sstream>
#include <vector>
#include <limits>
using namespace std;

struct Point {
	int x;
	int y;
	int c; //0 = red, 1 = blue, -1 infinity
};

int main(int argc, char* argv[]){
	vector <Point> points;
	int val,n;
	cin>>n;
	int x,y,c;
	for(int i=0;i<n;++i){
		cin>>x>>y>>c;
		Point mypoint = {x,y,c};
		points.push_back(mypoint);
	}

	//bruteforce procedure
	int count=0;
	for(int i=0;i<points.size();++i){
		if(points.at(i).c == 1){
			for(int j=i+1;j<points.size();++j){
				if(points.at(j).c == 0){
					count++;				
				}			
			}		
		}
	}
	cout<<count<<endl;
	return 0;
}
