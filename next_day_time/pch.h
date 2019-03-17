// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <time.h>
#include <string>
#include "sstream"
using namespace std;

// TODO: 添加要在此处预编译的标头
class next_day_time {
public:
	next_day_time() {};
	~next_day_time() {};

	string next(int year, int month, int day) {
		time_t t;
		time(&t);
		tm *ptm = localtime(&t);

		ptm->tm_year = year - 1900;
		ptm->tm_mon = month - 1;
		ptm->tm_mday = day;

		t = mktime(ptm);
		ptm = localtime(&t);

		if (ptm->tm_year == year - 1900 && ptm->tm_mon == month - 1 && ptm->tm_mday == day) {
			t += 24 * 3600;
			ptm = localtime(&t);
			cout << "The next day: " << ptm->tm_year + 1900 << " " << ptm->tm_mon + 1 << " " << ptm->tm_mday << endl;
			stringstream ss;
			ss << ptm->tm_year + 1900 << " " << ptm->tm_mon + 1 << " " << ptm->tm_mday; // testing output
			return ss.str();
		}
		else return "";
	};
};

#endif //PCH_H
