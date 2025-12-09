#include "stats.h"

MovieStatistics::MovieStatistics(int num){
	nstudents=num;
	movies = new int [nstudents];
	cout<<"Input movies for every student"<<endl;
	for (int i=0;i<nstudents;i++){
		cout<<"Student N"<<i+1<<" has seen:";
		cin>>movies[i];
	}
}
double MovieStatistics::average(){
	double sum=0.0;
	for (int i=0;i<nstudents;i++)
		sum+=movies[i];
	return sum/static_cast<double>(nstudents);
}

int MovieStatistics::smallest(){
	int min=movies[0];
	for (int i=1;i<nstudents;i++)
		min=min>movies[i]?movies[i]:min;
	return min;
}
int MovieStatistics::highest(){
	int max=movies[0];
	for (int i=1;i<nstudents;i++)
		max=max<movies[i]?movies[i]:max;
	return max;
}
void MovieStatistics::print(){
	cout<<"Average rate for college students is "<<average()<<endl
		<<"Most films watched "<<highest()<<endl
		<<"Less films watched "<<smallest()<<endl;
}
MovieStatistics::~MovieStatistics(){
	delete[] movies;
	movies=NULL;
	cout<<"Done Succesfully.";
}
