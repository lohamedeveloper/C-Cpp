#include<iostream>
#include<string>
#include<memory>

using namespace std;

class Entity{

public:
	Entity(){
		cout<<"Created Entity" << endl;
	}

	~Entity(){
		cout<<"Destroyed Entity" << endl;
	}
	void print(){

	}
};

int main(){

	//unique_ptr<Entity> entity(new Entity());
 	unique_ptr<Entity> entity= make_unique<Entity>();
 	entity->print();
 	cin.get();
}