#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.3A/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT33A
{
	TEST_CLASS(UT33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair t(1, 1), f(1, 1);

			Assert::AreEqual(t.GetHrn(), f.GetHrn());
		}
	};
}