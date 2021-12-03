#include<iostream>
#include"Equation.h"
#ifndef H_GL_PROBLEME
#define H_GL_PROBLEME


class Problem{
    Problem();
    virtual ~Problem(){};
    public:
    virtual void solve();


    private:
    Equation m_eq;
    
    ITimeDiscretization* m_discretiz;
    


};
#endif
