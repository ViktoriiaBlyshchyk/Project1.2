#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project1.2\Project1.2\Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Rectangle b;
			a = b.Init(2, 3);
			Assert::IsTrue(a);
		}
	};
}
