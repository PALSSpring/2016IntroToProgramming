#include <iostream>
#include <time.h>

int fib(int nn) {
  if(nn==0 || nn==1)
  {
      return 1;
  }
  else
  {
      return fib(nn-1)+fib(nn-2);
  }
}

int pow(int base, int exp) {
    if(exp==0) {
        return 1;
    }
    else if(exp==1) {
        return base;
    }
    else if(exp%2==1) {
        return base * pow(base,exp-1);
    }
    else {
        int val = pow(base,exp/2);
        return val*val;
    }
}

int loopPow(int base, int exp) {
    int result = 1;
    while(exp>0) {
        result*=base;
        exp--;
    }
    return result;
}

int main() {
    clock_t tt;
    tt = clock();
    std::cout << pow(2,2147483647) << std::endl;
    std::cout << clock()-tt << std::endl;
    tt = clock();
    std::cout << loopPow(2,2147483647) << std::endl;
    std::cout << clock()-tt << std::endl;
    std::cout << CLOCKS_PER_SEC << std::endl;
}
