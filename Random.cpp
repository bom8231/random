#include "Random.h"
#include <stdlib.h> 
#include <iostream>
#include <ctime>

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
  return rand();// 0에서 RAND_MAX사이의난수생성
}

int Random::nextInRange(int s, int e) {
 return rand()%(e-s+1)+s; //s에서 e까지의 난수 생성 
}

