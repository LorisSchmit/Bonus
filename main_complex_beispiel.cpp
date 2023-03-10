#include <iostream>
#include <string>
// header file for own complex number class
#include "complex.h"

using namespace std;

class MyComplex{
  public:
	MyComplex();
    MyComplex(float r, float i){
    	re = r;
    	im = i;
    }
    virtual ~MyComplex();
    float real(){
    	return re;
    }
    float imag(){
    	return im;
    }
  private:
    float re;
    float im;


};

void output_my_cplx(MyComplex &c,const std::string txt){
    cout<<txt<<": ("<<c.real()<<", "<<c.imag()<<")"<<endl;
}

int main(){
    MyComplex z1(2.,7.);
    MyComplex z2(42.,-9);
    MyComplex z3(-11.,19.);
    MyComplex z4,z5,z6,z7,z8,z9;

    output_my_cplx(z1,"z1 ");
    output_my_cplx(z2,"z2 ");
    output_my_cplx(z3,"z3 ");
    
    // Eigener Ausgabeoperator
    //cout<<"z1:"<<z1<<endl;
    //cout<<"z2:"<<z1<<endl;
    //cout<<"z3:"<<z1<<endl;
    
    z4=z1*z2;
    output_my_cplx(z4,"z4=z1*z2 =");
    z5=(z1+z2);
    output_my_cplx(z5,"z5=(z1+z2) =");
    z6=(z1+z2)*2.;
    output_my_cplx(z6,"z6=(z1+z2)*2. = ");
    z7=(z2+z3)*z1;
    output_my_cplx(z7,"z7=(z2+z3)*z1 = ");
    z8=z1+5.;
    output_my_cplx(z8,"z8=z1+5. = ");
    //z9=-z1+z2;
    //output_my_cplx(z9,"z9=-z1+z2 = ");
    //
    cout<<"Operator-Schreibweise:"<<endl;
    
    
    
    return 0;
}
