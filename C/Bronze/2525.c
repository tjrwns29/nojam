#include <stdio.h>

int main() {
	int NowTimeHour, NowTimeMinute, TurnaroundTime;
	int SumNowTimeMinute;

	scanf("%d %d", &NowTimeHour, &NowTimeMinute);
	scanf("%d", &TurnaroundTime);
	SumNowTimeMinute = NowTimeMinute + TurnaroundTime;
	if (SumNowTimeMinute < 60) {
		printf("%d %d", NowTimeHour, SumNowTimeMinute);
	}
	while (SumNowTimeMinute >= 60) {
		NowTimeHour += 1;
		SumNowTimeMinute -= 60;
		if (SumNowTimeMinute >= 60) {
			continue;
		}
		if (NowTimeHour >= 24) {
			NowTimeHour -= 24;
		}
		printf("%d %d", NowTimeHour, SumNowTimeMinute);
	}
}