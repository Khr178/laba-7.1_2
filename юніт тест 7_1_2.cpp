#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 7_1_2/лаба 7_1_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест712
{
	TEST_CLASS(юніттест712)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = { 1 };
			int** r = new int* [8];
			for (int i = 0; i < 8; i++)
				r[i] = new int[8];
			Create(r, 8, 8, 1, 1, 0, 0);
			int t = r[1][1];
			Assert::AreEqual(t, 1);
		}
	};
}
