#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Arrange
			double x = 2;
			double eps = 0.0001;
			int n = 0;
			double s = 0;
			double expected = exp(-x);

			// Act
			double actual = S(x, eps, n, s);

			// Assert
			Assert::AreEqual(expected, actual, eps);
		}
	};
}
