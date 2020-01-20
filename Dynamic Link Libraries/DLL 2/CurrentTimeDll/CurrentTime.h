//CurrentTimeDll.h
#include <string>
namespace CurrentTime{

	class MyCurrentTime
	{
		
		public:
			
			static __declspec(dllexport) void DisplayCurrentTime();
		
	};

}