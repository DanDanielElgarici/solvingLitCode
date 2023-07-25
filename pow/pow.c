#define EPSILON 0.00000001 

double myPow(double x, int n){
    if (n==0) return 1.0;
    if (-EPSILON <= x && x <= EPSILON) return 0.0;
    if (n<0) {
        long long tmp = n;
        tmp = -tmp;
        return 1.0/(x*myPow(x,--tmp));
    }
    double pow = myPow(x,n/2);
    if ( n%2 ) return pow*pow*x;
    return pow*pow;
}
