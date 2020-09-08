#include<iostream>
#include"Barak.h"
using namespace std;

int main() {
	Doctor docror("Doctor",45, 67);
	Marine marine("Marin",34, 56);
	CrazyDoctor crDoc("Crazy Doctor", 78, 34);
	Barracks barakks;
	barakks.addUnit(&docror);
	barakks.addUnit(&marine);
	barakks.addUnit(&crDoc);
	barakks.print();

	
}