#include<iostream>
int fact(int );
int main(){
	int no;
	std::cout<<"input the no you like:";
	std::cin>>no;
	std::cout<<"\nthe factorial of given no "<<no<<"is :"<<fact(no)<<std::endl;
	
	}
int fact(int x){
	int result = 1;
	while(x!=0){
		result = result*x;
		x--;
	}
	return result;
}
