#include <bits/stdc++.h>

using namespace std;

struct distance_with_index{
	int index;
	double distance;
};

double vote(vector<distance_with_index> closest_k,vector<double> train_l){
	map<double, int> votes;
	for(int i=0;i<closest_k.size();i++){
		if(votes.count(train_l[closest_k[i].index]) == 0){
			votes[train_l[closest_k[i].index]]=1;
		}else{
			votes[train_l[closest_k[i].index]]+=1;
		}	
	}
	double res_label = 0;
	int count = 0;
	for ( const auto &[key, value]: votes ) {
        if(count<value){
			res_label = key;
			count = value;
		}
    }
	return res_label;
}
int main(){
    distance_with_index point_1;
    point_1.distance=12;
    point_1.index=1;

    distance_with_index point_2;
    point_2.distance=27;
    point_2.index=2;

    distance_with_index point_3;
    point_3.distance=3;
    point_3.index = 3; 

    distance_with_index point_4;
    point_4.distance=10;
    point_4.index=5;

    distance_with_index point_5;
    point_5.distance=27;
    point_5.index=4;

    distance_with_index point_6;
    point_6.distance=6;
    point_6.index = 6;   

    vector<distance_with_index> closest{point_1,point_2,point_3,point_4,point_5,point_6};
    vector<double> label{-3 , -3 , -3 , 1 , 1 , -3};
    cout <<"Vote is:" << vote(closest,label) <<endl;
    return 0;
}