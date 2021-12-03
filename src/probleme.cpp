
#include"probleme.h"
#pragma once

void Problem::solve(Equation m_equ){
	};


Problem::Problem(){
	m_discretiz=new UniformTimeDiscretization( 0,1,10){};
	
}



std::cout<<"--- compute equation at time : "<<(m_discretiz)->get_pas_tmp() << "---"<<std::endl;
