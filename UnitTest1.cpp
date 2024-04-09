#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(6, function(5,0,2));
			Assert::AreEqual(8, function(5, 1, 1));
			Assert::AreEqual(4, function(1, 0, 2));
			Assert::AreEqual(3, function(1, 1, 1));
		}
		int function(int a, int b, int c)
		{
			if ((a > 1) && (b == 0))
			{
				c /= a;
			}
			if ((a == 5) || (c>1))
			{
				c += 1;
			}
			return c + a + b;
		}
	};
}
