#ifndef PID_H
#define PID_H

class PID {
public:
 double Kp;
  double Ki;
  double Kd;

  
    long counter;
  double errorSum;
  double minError;
  double maxError;

  
  double p_error;
  double i_error;
  double d_error;
  double prev_cte;


  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();

  /*
  *  Returns the average error.
  */
  double AverageError();

  /*
  * Returns the min error.
  */
  double MinError();

  /*
  * Returns the max error.
  */
  double MaxError();
};

#endif /* PID_H */