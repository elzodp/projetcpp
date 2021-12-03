#pragma once


ITimeDiscretization::ITimeDiscretization(tmp_i,tmp_f):tmp_i(tmp_i),tmp_f(tmp_f)
double ITimeDiscretization::get_i_tmp() const{
    return tmp_i;

}

double ITimeDiscretization::get_f_tmp() const{
    return tmp_f;

}

UniformTimeDiscretization::UniformTimeDiscretization(double tmp_iu,double tmp_fu):tmp_iu(tmp_i),tmp_fu(tmp_f),ITimeDiscretization(tmp_i(tmp_i),tmp_f(tmp_f)){

}



double UniformTimeDiscretization::get_pas_tmp const(double inc){
    return (tmp_f - tmp_i)/inc;
}

double ITimeDiscretization::nb_points(){

}

double ITimeDiscretization::iteration(double t){}



