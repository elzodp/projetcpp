#include<iostream>
#ifndef H_GL_EQUATION
#define H_GL_EQUATION


class Equation{
    Equation(){};
    virtual ~Equation(){};
    public:
        virtual void compute(double tmp);

    private:
        double m_i=0.0;
        


};

#endif
