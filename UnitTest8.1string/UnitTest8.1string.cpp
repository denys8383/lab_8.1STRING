#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            string testString = "++-==";      
            int count = Count(testString);
            Assert::AreEqual(5, count);
            
		}
	};
}
