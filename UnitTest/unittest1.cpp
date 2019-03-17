#include "stdafx.h"
#include "CppUnitTest.h"
#include "../next_day_time/pch.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			next_day_time n;

			string test1 = n.next(2000, 0, 15);
			Assert::AreEqual((string)"", test1);

			test1 = n.next(2000, 2, 28);
			Assert::AreEqual((string)"2000 2 29", test1);

			test1 = n.next(2000, 2, 29);
			Assert::AreEqual((string)"2000 3 1", test1);

			test1 = n.next(2000, 6, 30);
			Assert::AreEqual((string)"2000 7 1", test1);

			test1 = n.next(2000, 12, 31);
			Assert::AreEqual((string)"2001 1 1", test1);

			test1 = n.next(2000, 2, 30);
			Assert::AreEqual((string)"", test1);
		}

	};
}