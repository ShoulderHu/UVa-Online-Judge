#include <stdio.h>
#include <math.h>

#define EPSILON (1E-7)  

int main() {

	double W, L, x_max, x_min;

	while (scanf("%lf %lf", &L, &W) != EOF) {

		x_max = ((W + L) - sqrt(pow(W, 2) + pow(L, 2) - W*L)) / 6;
		x_min = L / 2 > W / 2 ? W / 2 : L / 2;
			
		printf("%.3lf 0.000 %.3lf\n", x_max + EPSILON, x_min + EPSILON);
		//�ѩ��D�å��ĥ�Special Judge�A�ݭn�b���G�[�W�@�ӫܤp���`�Ƥ~��AC�A�ӦbProgramming Challenges�W�[�W�ܤp���`�ƤϦӿ��~�C
	}

	return 0;
}