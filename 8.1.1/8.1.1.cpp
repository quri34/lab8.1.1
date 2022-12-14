#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.1/lab8.1.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My811
{
	TEST_CLASS(My811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* stringToTest = "+ - = +-= + -= +- = +_-_= + -=";

			int expectedCount = 3, actualCount = Count(stringToTest);

			Assert::AreEqual(expectedCount, actualCount);

		}
	};
}
