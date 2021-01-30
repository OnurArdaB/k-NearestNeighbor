#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;
double distance(char option,vector<double> p1, vector<double> p2){
	double distance = 0;
	if(option=='e'){
		for(int i=0; i<p1.size();i++){
			distance+=pow((p1[i]-p2[i]),2);
		}
	}else{
		for(int i=0; i<p1.size();i++){
            distance+=abs(p1[i]-p2[i]);
        }	
	}
	return option=='e' ? sqrt(distance) : distance;
	
}
int main(){
        string wait;
        ifstream reader1("train_images.csv");
        ifstream reader2("test_images.csv");
        string line1,line2;
        reader1>>line1;
        reader2>>line2;
        
        cout <<line1<<endl;
        cout <<endl<<endl;
        cout <<line2<<endl;

        vector<double> vect_1{ 1,1,1,0.996078431372549,0.992156862745098,1,1,1,1,1,0.552941176470588,0.282352941176471,0.56078431372549,0.784313725490196,0.909803921568627,0.717647058823529,0.6,0.352941176470588,0.372549019607843,0.890196078431372,1,1,1,0.996078431372549,1,1,1,1,1,1,1,1,0.996078431372549,1,1,0.905882352941176,0.262745098039216,0.36078431372549,0.635294117647059,0.466666666666667,0.4,0.341176470588235,0.0117647058823529,0.317647058823529,0.466666666666667,0.349019607843137,0.490196078431373,0.517647058823529,0.486274509803922,0.741176470588235,1,1,0.996078431372549,1,1,1,1,1,1,0.992156862745098,1,0.96078431372549,0.384313725490196,0.152941176470588,0.113725490196078,0.184313725490196,0.443137254901961,0.741176470588235,0.549019607843137,0.415686274509804,0.0980392156862745,0.254901960784314,0.231372549019608,0.223529411764706,0.325490196078431,0.129411764705882,0.580392156862745,0.352941176470588,0.172549019607843,1,1,1,1,1,1,1,1,1,1,0.537254901960784,0.16078431372549,0.317647058823529,0.341176470588235,0.572549019607843,0.215686274509804,0.513725490196078,0.411764705882353,0.43921568627451,0.772549019607843,0.752941176470588,0.650980392156863,0.462745098039216,0.619607843137255,0.341176470588235,0.458823529411765,0.443137254901961,0.235294117647059,0.388235294117647,1,1,1,1,1,1,1,1,0.901960784313726,0.450980392156863,0.725490196078431,0.686274509803922,0.831372549019608,0.72156862745098,0.623529411764706,0.635294117647059,0.407843137254902,0.525490196078431,0.227450980392157,0.43921568627451,0.580392156862745,0.67843137254902,0.603921568627451,0.564705882352941,0.686274509803922,0.462745098039216,0.243137254901961,0.184313725490196,0.976470588235294,1,1,1,1,1,1,1,0.709803921568627,0.23921568627451,0.580392156862745,0.427450980392157,0.301960784313726,0.274509803921569,0.286274509803922,0.698039215686274,0.274509803921569,0.145098039215686,0.176470588235294,0.313725490196078,0.317647058823529,0.0784313725490197,0.149019607843137,0.149019607843137,0.494117647058824,0.294117647058823,0.176470588235294,0.184313725490196,0.650980392156863,1,1,1,1,1,1,1,0.298039215686275,0.164705882352941,0.203921568627451,0.305882352941176,0.105882352941176,0.247058823529412,0.243137254901961,0.364705882352941,0.43921568627451,0.325490196078431,0.231372549019608,0.196078431372549,0.290196078431373,0.294117647058823,0.450980392156863,0.474509803921569,0.309803921568627,0.23921568627451,0.329411764705882,0.333333333333333,0.745098039215686,1,1,1,1,1,1,1,0.27843137254902,0.23921568627451,0.101960784313725,0.180392156862745,0.309803921568627,0.223529411764706,0.494117647058824,0.109803921568628,0.117647058823529,0.450980392156863,0.231372549019608,0.490196078431373,0.298039215686275,0.431372549019608,0.572549019607843,0.690196078431373,0.286274509803922,0.125490196078431,0.356862745098039,0.235294117647059,0.0862745098039216,1,1,1,1,1,1,0.850980392156863,0.294117647058823,0.305882352941176,0.164705882352941,0.207843137254902,0.376470588235294,0.494117647058824,0.615686274509804,0.298039215686275,0.415686274509804,0.647058823529412,0.266666666666667,0.172549019607843,0.76078431372549,0.474509803921569,0.643137254901961,0.776470588235294,0.537254901960784,0.168627450980392,0.137254901960784,0.145098039215686,0.188235294117647,1,1,1,1,1,1,0.552941176470588,0.396078431372549,0.443137254901961,0.286274509803922,0.141176470588235,0.490196078431373,0.654901960784314,0.682352941176471,0.796078431372549,0.788235294117647,0.584313725490196,0.635294117647059,0.568627450980392,0.376470588235294,0.129411764705882,0.109803921568628,0.674509803921569,0.541176470588235,0.00784313725490193,0.145098039215686,0.176470588235294,0.192156862745098,0.811764705882353,1,1,1,1,1,0.929411764705882,0.501960784313725,0.184313725490196,0.105882352941176,0.274509803921569,0.325490196078431,0.0588235294117647,0.643137254901961,0.505882352941176,0.184313725490196,0.352941176470588,0.396078431372549,0.164705882352941,0.16078431372549,0.101960784313725,0.156862745098039,0.313725490196078,0.129411764705882,0.2,0.4,0.490196078431373,0.509803921568627,0.847058823529412,1,1,1,1,1,1,1,1,0.890196078431372,1,0.168627450980392,0.105882352941176,0.333333333333333,0.133333333333333,0.196078431372549,0.117647058823529,0.105882352941176,0.176470588235294,0.301960784313726,0.16078431372549,0.650980392156863,0.541176470588235,0.164705882352941,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.231372549019608,0.447058823529412,0.780392156862745,0.309803921568627,0.176470588235294,0.356862745098039,0.364705882352941,0.643137254901961,0.470588235294118,0.231372549019608,0.380392156862745,0.729411764705882,0.290196078431373,1,1,0.988235294117647,0.992156862745098,0.988235294117647,1,1,1,1,1,1,1,0.996078431372549,1,1,0.411764705882353,0.254901960784314,0.654901960784314,0.803921568627451,0.431372549019608,0.23921568627451,0.376470588235294,0.529411764705882,0.466666666666667,0.188235294117647,0.0980392156862745,0.435294117647059,0.329411764705882,0.984313725490196,1,0.996078431372549,1,1,1,1,1,1,1,1,1,1,1,1,0.266666666666667,0.137254901960784,0.286274509803922,0.717647058823529,0.454901960784314,0.219607843137255,0.247058823529412,0.0901960784313726,0,0.0431372549019607,0.223529411764706,0.333333333333333,0.258823529411765,0.992156862745098,1,0.988235294117647,1,1,1,1,1,1,1,1,1,1,1,1,0.270588235294118,0.313725490196078,0.290196078431373,0.635294117647059,0.356862745098039,0.0980392156862745,0.474509803921569,0.4,0.443137254901961,0.462745098039216,0.690196078431373,0.43921568627451,0.282352941176471,1,1,0.992156862745098,1,1,1,1,1,1,1,1,1,1,1,1,0.635294117647059,0.717647058823529,0.435294117647059,0.458823529411765,0.356862745098039,0.556862745098039,0.513725490196078,0.615686274509804,0.686274509803922,0.776470588235294,0.619607843137255,0.458823529411765,0.513725490196078,0.984313725490196,1,0.988235294117647,1,1,1,1,1,1,1,1,1,1,1,1,0.415686274509804,0.329411764705882,0.615686274509804,0.725490196078431,0.294117647058823,0.403921568627451,0.109803921568628,0.32156862745098,0.43921568627451,0.294117647058823,0.282352941176471,0.501960784313725,0.192156862745098,0.850980392156863,1,0.980392156862745,1,1,1,1,1,1,1,1,0.996078431372549,1,1,1,0.235294117647059,0.176470588235294,0.113725490196078,0.556862745098039,0.266666666666667,0.12156862745098,0.176470588235294,0.250980392156863,0.290196078431373,0.12156862745098,0.168627450980392,0.223529411764706,0.325490196078431,0.858823529411765,1,0.976470588235294,1,1,1,1,1,1,1,1,0.996078431372549,1,1,1,0.4,0.227450980392157,0.329411764705882,0.313725490196078,0.368627450980392,0.329411764705882,0.219607843137255,0.12156862745098,0.266666666666667,0.192156862745098,0.247058823529412,0.309803921568627,0.298039215686275,0.811764705882353,1,0.976470588235294,0.996078431372549,1,1,1,1,1,1,1,1,1,1,1,0.294117647058823,0.235294117647059,0.466666666666667,0.0980392156862745,0.0588235294117647,0.419607843137255,0.2,0.450980392156863,0.32156862745098,0.219607843137255,0.243137254901961,0.388235294117647,0.164705882352941,0.854901960784314,1,0.980392156862745,1,1,1,1,1,1,1,1,1,0.996078431372549,1,1,0.411764705882353,0.603921568627451,0.717647058823529,0.345098039215686,0.380392156862745,0.627450980392157,0.305882352941176,0.0823529411764706,0.556862745098039,0.443137254901961,0.56078431372549,0.768627450980392,0.403921568627451,0.913725490196078,1,0.988235294117647,1,1,1,1,1,1,1,1,1,1,1,1,0.227450980392157,0.301960784313726,0.67843137254902,0.815686274509804,0.749019607843137,0.584313725490196,0.56078431372549,0.525490196078431,0.568627450980392,0.258823529411765,0.117647058823529,0.525490196078431,0.615686274509804,0.772549019607843,1,0.984313725490196,1,1,1,1,1,1,1,1,1,0.992156862745098,1,1,0.207843137254902,0.141176470588235,0.368627450980392,0.470588235294118,0.196078431372549,0.215686274509804,0.388235294117647,0.235294117647059,0.0941176470588235,0.0823529411764706,0.145098039215686,0.286274509803922,0.125490196078431,0.611764705882353,1,0.976470588235294,1,1,1,1,1,1,1,1,1,0.984313725490196,1,1,0.262745098039216,0.403921568627451,0.537254901960784,0.129411764705882,0.16078431372549,0.203921568627451,0.0862745098039216,0.113725490196078,0.243137254901961,0.215686274509804,0.32156862745098,0.792156862745098,0.349019607843137,0.619607843137255,1,0.976470588235294,1,1,1,1,1,1,1,1,1,0.988235294117647,1,0.992156862745098,0.286274509803922,0.403921568627451,0.8,0.650980392156863,0.317647058823529,0.282352941176471,0.341176470588235,0.56078431372549,0.572549019607843,0.290196078431373,0.333333333333333,0.466666666666667,0.576470588235294,0.764705882352941,1,0.984313725490196,1,1,1,1,1,1,1,1,1,0.992156862745098,1,0.980392156862745,0.23921568627451,0.243137254901961,0.2,0.592156862745098,0.545098039215686,0.0549019607843138,0.149019607843137,0.231372549019608,0.329411764705882,0.0235294117647059,0.188235294117647,0.227450980392157,0.207843137254902,0.823529411764706,1,0.988235294117647,1,1,1,1,1,1,1,1,1,1,0.996078431372549,1,1,1,0.913725490196078,0.917647058823529,0.901960784313726,0.729411764705882,0.796078431372549,0.823529411764706,0.709803921568627,0.847058823529412,0.988235294117647,1,1,1,1,0.996078431372549,1,1,1,1};
        vector<double> vect_2{1,1,1,1,1,1,1,0.964705882352941,0.968627450980392,1,1,0.866666666666667,0.886274509803922,0.972549019607843,1,0.956862745098039,0.905882352941176,1,1,0.988235294117647,0.988235294117647,0.996078431372549,1,0.996078431372549,0.996078431372549,1,1,1,1,1,0.984313725490196,1,1,0.996078431372549,1,1,1,1,1,0.827450980392157,0.654901960784314,0.611764705882353,0.52156862745098,0.517647058823529,0.686274509803922,1,1,1,1,0.996078431372549,0.996078431372549,0.996078431372549,1,1,1,1,1,1,0.996078431372549,0.992156862745098,1,1,1,0.988235294117647,0.819607843137255,0.317647058823529,0.0235294117647059,0.737254901960784,1,0.631372549019608,0.176470588235294,0.76078431372549,0.945098039215686,0.168627450980392,0.384313725490196,0.854901960784314,1,1,1,1,0.996078431372549,1,1,1,1,1,0.992156862745098,0.992156862745098,1,0.909803921568627,0.341176470588235,0.192156862745098,0.0509803921568628,0.0627450980392157,0.0666666666666667,0.16078431372549,0.509803921568627,0.76078431372549,0.556862745098039,0.709803921568627,0.47843137254902,0.0745098039215686,0.0666666666666667,0.0745098039215686,0.203921568627451,0.27843137254902,0.92156862745098,1,0.996078431372549,1,1,1,1,1,0.996078431372549,1,1,0.313725490196078,0.0392156862745098,0.125490196078431,0.188235294117647,0.196078431372549,0.192156862745098,0.152941176470588,0,0.0705882352941176,0.015686274509804,0.0901960784313726,0.125490196078431,0.168627450980392,0.215686274509804,0.196078431372549,0.152941176470588,0.0235294117647059,0.32156862745098,1,1,0.992156862745098,1,1,1,1,0.972549019607843,1,0.792156862745098,0.117647058823529,0.211764705882353,0.227450980392157,0.215686274509804,0.211764705882353,0.192156862745098,0.219607843137255,0.227450980392157,0.274509803921569,0.23921568627451,0.2,0.0901960784313726,0.113725490196078,0.0235294117647059,0.141176470588235,0.23921568627451,0.196078431372549,0.101960784313725,0.870588235294118,1,0.996078431372549,1,1,1,1,0.996078431372549,1,0.47843137254902,0.125490196078431,0.184313725490196,0.247058823529412,0.235294117647059,0.0862745098039216,0.113725490196078,0.152941176470588,0.250980392156863,0.176470588235294,0.262745098039216,0.0745098039215686,0.270588235294118,1,0.803921568627451,0.0823529411764706,0.188235294117647,0.184313725490196,0.0941176470588235,0.47843137254902,1,1,1,1,1,1,1,1,0.152941176470588,0.145098039215686,0.152941176470588,0.23921568627451,0.101960784313725,0.325490196078431,0.749019607843137,0.141176470588235,0.211764705882353,0.215686274509804,0.215686274509804,0.0313725490196078,0.733333333333333,0.717647058823529,0.788235294117647,0.352941176470588,0.0705882352941176,0.168627450980392,0.141176470588235,0.113725490196078,1,1,1,1,1,1,1,0.803921568627451,0.133333333333333,0.188235294117647,0.137254901960784,0.172549019607843,0.188235294117647,0.352941176470588,0.458823529411765,0.196078431372549,0.247058823529412,0.250980392156863,0.254901960784314,0.0901960784313726,0.533333333333333,0.556862745098039,0.737254901960784,0.32156862745098,0.0705882352941176,0.149019607843137,0.184313725490196,0.133333333333333,0.886274509803922,1,1,1,1,1,1,0.486274509803922,0.152941176470588,0.215686274509804,0.141176470588235,0.188235294117647,0.168627450980392,0.0941176470588235,0.113725490196078,0.243137254901961,0.16078431372549,0.12156862745098,0.192156862745098,0.203921568627451,0.0980392156862745,0.52156862745098,0.56078431372549,0.0823529411764706,0.12156862745098,0.16078431372549,0.2,0.12156862745098,0.517647058823529,1,1,1,1,1,1,0.235294117647059,0.168627450980392,0.2,0.172549019607843,0.203921568627451,0.196078431372549,0.215686274509804,0.27843137254902,0.164705882352941,0.364705882352941,0.458823529411765,0.243137254901961,0.188235294117647,0.203921568627451,0.0941176470588235,0.0392156862745098,0.184313725490196,0.137254901960784,0.172549019607843,0.203921568627451,0.141176470588235,0.298039215686275,1,1,1,1,1,0.968627450980392,0.274509803921569,0.250980392156863,0.145098039215686,0.0862745098039216,0.141176470588235,0.211764705882353,0.133333333333333,0.164705882352941,0.0352941176470588,0.552941176470588,0.501960784313725,0.686274509803922,0.494117647058824,0.0901960784313726,0.223529411764706,0.145098039215686,0.188235294117647,0.0745098039215686,0.109803921568628,0.137254901960784,0.152941176470588,0.325490196078431,0.917647058823529,1,1,1,1,0.917647058823529,0.984313725490196,0.980392156862745,0.749019607843137,0.372549019607843,0.12156862745098,0.12156862745098,0.435294117647059,0.266666666666667,0.227450980392157,0.172549019607843,0.188235294117647,0.270588235294118,0.247058823529412,0.176470588235294,0.168627450980392,0.145098039215686,0.117647058823529,0.0745098039215686,0.305882352941176,0.584313725490196,0.780392156862745,0.890196078431372,0.996078431372549,1,1,1,1,0.996078431372549,0.996078431372549,1,0.992156862745098,1,0.545098039215686,0.0117647058823529,0.623529411764706,0.529411764705882,0.8,0.713725490196078,0.725490196078431,0.517647058823529,0.690196078431373,0.701960784313725,0.749019607843137,0.364705882352941,0.0117647058823529,0.537254901960784,0.996078431372549,0.988235294117647,1,0.984313725490196,0.992156862745098,1,1,1,1,1,1,1,1,1,0.549019607843137,0.113725490196078,0.431372549019608,0.333333333333333,0.392156862745098,0.352941176470588,0.368627450980392,0.376470588235294,0.509803921568627,0.313725490196078,0.450980392156863,0.317647058823529,0.0745098039215686,0.627450980392157,1,0.992156862745098,0.992156862745098,1,1,1,1,1,1,1,1,0.996078431372549,0.992156862745098,1,0.486274509803922,0.117647058823529,0.2,0.149019607843137,0.133333333333333,0.137254901960784,0.149019607843137,0.12156862745098,0.0941176470588235,0.113725490196078,0.0705882352941176,0.203921568627451,0.0705882352941176,0.6,1,0.984313725490196,0.992156862745098,0.996078431372549,0.992156862745098,1,1,1,1,0.996078431372549,0.996078431372549,1,0.988235294117647,1,0.470588235294118,0.125490196078431,0.211764705882353,0.219607843137255,0.23921568627451,0.223529411764706,0.235294117647059,0.223529411764706,0.247058823529412,0.203921568627451,0.219607843137255,0.188235294117647,0.0941176470588235,0.56078431372549,1,0.984313725490196,1,1,1,1,1,1,1,0.996078431372549,0.996078431372549,1,0.996078431372549,1,0.474509803921569,0.125490196078431,0.219607843137255,0.192156862745098,0.219607843137255,0.211764705882353,0.215686274509804,0.203921568627451,0.192156862745098,0.188235294117647,0.176470588235294,0.192156862745098,0.109803921568628,0.533333333333333,1,0.988235294117647,1,1,0.996078431372549,1,1,1,1,1,1,1,0.996078431372549,1,0.454901960784314,0.125490196078431,0.223529411764706,0.2,0.215686274509804,0.211764705882353,0.215686274509804,0.211764705882353,0.2,0.192156862745098,0.184313725490196,0.192156862745098,0.101960784313725,0.498039215686275,1,0.984313725490196,1,1,1,1,1,1,1,1,1,1,0.996078431372549,1,0.431372549019608,0.125490196078431,0.235294117647059,0.196078431372549,0.211764705882353,0.211764705882353,0.215686274509804,0.2,0.2,0.192156862745098,0.172549019607843,0.196078431372549,0.0980392156862745,0.454901960784314,1,0.992156862745098,1,1,1,1,1,1,1,0.996078431372549,1,0.996078431372549,1,1,0.384313725490196,0.133333333333333,0.23921568627451,0.2,0.2,0.211764705882353,0.211764705882353,0.203921568627451,0.196078431372549,0.184313725490196,0.172549019607843,0.2,0.0980392156862745,0.419607843137255,1,0.992156862745098,1,0.996078431372549,0.996078431372549,1,1,1,1,0.996078431372549,0.996078431372549,0.996078431372549,1,1,0.349019607843137,0.137254901960784,0.23921568627451,0.203921568627451,0.203921568627451,0.196078431372549,0.203921568627451,0.203921568627451,0.192156862745098,0.188235294117647,0.168627450980392,0.2,0.0980392156862745,0.384313725490196,1,0.992156862745098,0.996078431372549,0.996078431372549,0.996078431372549,1,1,1,1,1,1,1,1,1,0.329411764705882,0.133333333333333,0.235294117647059,0.192156862745098,0.215686274509804,0.219607843137255,0.203921568627451,0.203921568627451,0.196078431372549,0.192156862745098,0.188235294117647,0.2,0.113725490196078,0.290196078431373,1,1,1,1,1,1,1,1,1,1,1,0.996078431372549,1,1,0.352941176470588,0.12156862745098,0.227450980392157,0.211764705882353,0.184313725490196,0.219607843137255,0.2,0.196078431372549,0.188235294117647,0.176470588235294,0.164705882352941,0.188235294117647,0.101960784313725,0.266666666666667,1,0.996078431372549,0.992156862745098,1,1,1,1,1,1,1,1,1,1,1,0.498039215686275,0.211764705882353,0.203921568627451,0.211764705882353,0.188235294117647,0.172549019607843,0.203921568627451,0.196078431372549,0.192156862745098,0.176470588235294,0.164705882352941,0.196078431372549,0.117647058823529,0.250980392156863,1,1,0.992156862745098,1,1,1,1,1,1,1,1,0.996078431372549,0.996078431372549,1,0.447058823529412,0.211764705882353,0.250980392156863,0.262745098039216,0.23921568627451,0.266666666666667,0.266666666666667,0.250980392156863,0.243137254901961,0.235294117647059,0.219607843137255,0.219607843137255,0.145098039215686,0.368627450980392,1,1,1,1,1,1,1,1,1,1,1,1,0.996078431372549,1,0.168627450980392,0.0588235294117647,0.164705882352941,0.0627450980392157,0.0862745098039216,0.0627450980392157,0.0941176470588235,0.0901960784313726,0.0745098039215686,0.0509803921568628,0.0392156862745098,0.12156862745098,0.0392156862745098,0.0823529411764706,1,0.988235294117647,1,1,1,1,1,1,1,1,1,1,1,1,0.854901960784314,0.729411764705882,0.631372549019608,0.517647058823529,0.501960784313725,0.458823529411765,0.458823529411765,0.443137254901961,0.431372549019608,0.470588235294118,0.509803921568627,0.596078431372549,0.658823529411765,0.780392156862745,1,1,1,1,1,1,1};
        cout << distance('e',vect_1,vect_2);
        cin >> wait;
}