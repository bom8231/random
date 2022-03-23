#ifndef __RANDOM_H
#define __RANDOM_H

class Random {
	int start, end;

	public:
		Random();
		int next();
		int nextInRange(int s, int e); //범위 가져와서 랜덤 정수 리턴

};

#endif