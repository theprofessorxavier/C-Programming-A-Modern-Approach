#include <stdio.h>

int main(void){
	int hour, min, con,a,b,c,d,e,f,g,h;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d",&hour, &min);
	con = hour*60+min;
	a = 8*60-con;b = 9*60+43-con;c = 11*60+19-con;
	d = 12*60+47-con;e = 14*60-con;f = 15*60+45-con;
	g = 19*60-con;h = 21*60+45-con;
	if(a>=0&&a<b&&a<c&&a<d&&a<e&&a<f&&a<g&&a<h){
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 p.m");
	}else if(b>=0&&b<a&&b<c&&b<d&&b<e&&b<f&&b<g&&b<h){
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 p.m");
	}else if(c>=0&&c<a&&c<b&&c<d&&c<e&&c<f&&c<g&&c<h){
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m");
	}else if(d>=0&&d<a&&d<b&&d<c&&d<e&&d<f&&d<g&&d<h){
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m");
	}else if(e>=0&&e<a&&e<b&&e<c&&e<d&&e<f&&e<g&&e<h){
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m");
	}else if(f>=0&&f<a&&f<b&&f<c&&f<d&&f<e&&f<g&&f<h){
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m");
	}else if(g>=0&&g<a&&g<b&&g<c&&g<d&&g<e&&g<f&&g<h){
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m");
	}else if(h>=0&&h<a&&h<b&&h<c&&h<d&&h<e&&h<f&&h<g){
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m");
	}
}
