/*
TODO 1:
Build a C-based Monte Carlo simulation engine that can generate random samples from relevant probability distributions 
(e.g., normal, exponential, Poisson) and perform calculations such as percentiles on these samples.


TODO2:
Simulate an insurance book. Can assume different distirbuttions and different parameters for each policyholder. Will allow calculating capital needed. 


TODO3:
Use statistical techniques to analyze the simulation results. Compute summary statistics, confidence intervals, and risk measures 
(e.g., Value at Risk or Conditional Tail Expectation) to draw meaningful conclusions about the actuarial problem.

TODO4:
Optimization (Optional):  include optimization techniques to find optimal strategies or allocations based on the simulation results
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define MAX 1000
#define MAX2 10000
#define MAX3 100000
#define MAX4 1000000
#define MAX5 10000000

//function prototypes
double normal(double mean, double std);
double exponential(double lambda);
double poisson(double lambda);
double uniform(double a, double b);
double mean(double *array, int size);
double std_dev(double *array, int size);
double median(double *array, int size);
double mode(double *array, int size);
double min(double *array, int size);
double max(double *array, int size);
double range(double *array, int size);
double percentile(double *array, int size, double p);
double variance(double *array, int size);
double skewness(double *array, int size);
double kurtosis(double *array, int size);
double covariance(double *array1, double *array2, int size);
double correlation(double *array1, double *array2, int size);
double *sort(double *array, int size);
double *histogram(double *array, int size, int bins);
double *pdf(double *array, int size, int bins);
double *cdf(double *array, int size, int bins);
double *pmf(double *array, int size, int bins);
double *cmf(double *array, int size, int bins);
double *ecdf(double *array, int size, int bins);
double *ecmf(double *array, int size, int bins);
double *ecpmf(double *array, int size, int bins);
double *ecpdf(double *array, int size, int bins);
double *ecpmf(double *array, int size, int bins);


int main(void) {

}
    
