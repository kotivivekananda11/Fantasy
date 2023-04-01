#pragma once
#include "Core.h"
namespace Fantasy {
	class FANTASY_API  Application
	{
		public:
			Application();
			virtual ~Application();
			void Run();
	};

	//To be Defined at CLIENT
	Application* CreateApplication();
}
