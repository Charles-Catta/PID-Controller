#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  p_error = 0;
  i_error = 0;
  d_error = 0;
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  i_error = i_error + cte;
  d_error = cte - p_error;
  p_error = cte;
}

double PID::TotalError() {
  return -Kp * p_error - Ki * i_error - Kd * d_error;
}

