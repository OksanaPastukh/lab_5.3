#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.3/project5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const double x = 0;
			c = t(x);
				Assert::AreEqual(c, 0.0);
		}
	};
}
