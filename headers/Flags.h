////////////////// flage.h : Defines the initialization flags for the DLL. ///////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////AUTHOR : Sudheer HS	sudheer316@gmail.com////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////DATE : 6-apr-2006							////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////COMPANY : Maruthi Software Developers.,HASSAN - 573201 ,KARANATAKA, INDIA     ////////////////////////////////////////////////////////////////
////////////////Description : This processes key inputs and emulates kannada characters for the key pressed		////////////////////////////////////////////////////////////////
////////////////			 this reads the key pressed and then produces the required characters for kannada languagge		////////////////////////////////////////////////////////////////
////////////////Compiler Used : Microsoft Visual C++ 6.0////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	////////////////////////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////  This has been done as a project for Hampi University ,Hampi,INDIA ////////////////////////////////////////////////////////////////
////////////////  this is part of the free software Kuvempu Kannada Thantramsha,launched by Hampi University ////////////////////////////////////////////////////////////////
////////////////  This code as is with out any kind of warranty ,Using or modifing the code or the library without ////////////////////////////////////////////////////////////////
////////////////  the written permission by the university is prohibited,Any such illegal activities is punishable offence as per ////////////////////////////////////////////////////////////////
////////////////  the copy rights ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct kFlags
{
int n_back ;
int found;
int q_bit;

int f_bit ;
int s_bit ;
int p_bit ;

int g_bit ;
int c_bit ;
int o_bit ;

int x_bit ;
int so_bit ;
int b_bit;

int u_bit  ;
int ei_bit ;
int ipressed ;

int space_bit ;
int j_bit ;
int first_o ;

int derg_bit ;
int	derg_count ;
int spec_kgun ;

int spec_kgun_val;
int slash_bit ;
int i_flag ;

char previous_0 ;
char previous_1 ;
char previous_2 ;
char previous_3 ;

char last_consonant;
WPARAM lastglyph ;
int save_i;

int o_count ;
int y_bit  ;
int f_pressed_Once;

}kFlag = {
			-1,
			 0,
			 0,

			 0,
			 0,
			 0,
			 
			 0,
			 0,
			 0,
			 
			 0,
			 0,
			 0,
			 
			 0,
			 0,
			 0,
			 
			 0,
			 0,
			 0,
			 
			 1,
			 0 ,
			 0,
			 
			 0,
			 0,
			 0,

			 NULL,
			 NULL,
			 NULL,
			 
			 NULL,
			 NULL,
			 0,

			 0,
			 0,
			 0
	
};


void vClear_All_Flags()
{
				              kFlag.q_bit  = 0;
                              kFlag.f_bit = 0;
                              kFlag.s_bit = 0;
                              kFlag.p_bit = 0;
                              kFlag.g_bit = 0;
                              kFlag.c_bit = 0;
                              kFlag.o_bit = 0;
                              kFlag.x_bit = 0;
                              kFlag.so_bit = 0;
                              kFlag.b_bit = 0;
                              kFlag.u_bit  = 0;
                              kFlag.ei_bit = 0;
                              kFlag.ipressed = 0;
                              kFlag.space_bit = 0;
                              kFlag.j_bit = 0;
                              kFlag.first_o = 0;
//                            kFlag.derg_bit = 1;
//                            kFlag.derg_count ;
                              kFlag.spec_kgun = 0;
                              kFlag.spec_kgun_val;
                              kFlag.slash_bit = 0;
							  kFlag.f_pressed_Once = 0;
                              ClearQueue();
		
}

	