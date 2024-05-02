#ifndef SHAPE_SHAPE
#define SHAPE_SHAPE
#include <cstring>
namespace SHAPE
{
	class ClientData                      
	{
		protected:
			int code;
			char MSO[50];
			char Date[50];
			char SourceFile[50];
			char frequency[50];
			char filesize[50];
		   int record;
			int column;
			
		public:
			
			
			virtual void getinputs()=0;     
			virtual char *ToString()=0;
	};
	
	class Cox : public ClientData
	{
	
			
		public:
			
			void getinputs();
			char *ToString();
	};
	
	class Mediacom : public ClientData
	{

		public:
			
			void getinputs();
			char *ToString();
	};
	class Comcast : public ClientData
	{
			
		public:
			
			
			
			void getinputs();
			char *ToString();
	};


	class Charter : public ClientData
	{

		public:
			
			
			void getinputs();
		
			char *ToString();
	};
}

#endif

