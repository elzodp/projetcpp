#ifndef H_GL_ITIMEDISCRETIZATION
#define H_GL_ITIMEDISCRETIZATION
#include<iostream>




class ITimeDiscretization{
    public:
    ITimeDiscretization(double tmp_i,double tmp_f){};
    virtual ~ITimeDiscretization(){};
    //virtual double nb_points();
    //virtual iteration(double t);
    virtual double get_i_tmp();
    virtual double get_f_tmp();


    protected:
   // double t=0.0;
    double tmp_i=0.0;
    double tmp_f=0.0;


};

class UniformTimeDiscretization:public ITimeDiscretization{

    public:
    UniformTimeDiscretization(double tmp_iu,double tmp_fu,double etap);
    ~UniformTimeDiscretization(){};
    double get_pas_tmp (double etap) override;


    private:
    double tmp_iu=0.0;
    double tmp_fu=0.0;
    double etap=0.0;

};
#endif

