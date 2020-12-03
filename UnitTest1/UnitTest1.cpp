#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1_char/8.1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char k[] = { "*" };
			t = Count(k);
			Assert::AreEqual(t, 0);


		}
	};
}