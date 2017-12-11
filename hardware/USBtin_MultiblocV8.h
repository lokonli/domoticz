#pragma once
#include <iostream>
#include <string>
#include "DomoticzHardware.h"
#include "hardwaretypes.h"

#define MAX_NUMBER_BLOC 		30

class USBtin_MultiblocV8 : public CDomoticzHardwareBase
{
	public:
		USBtin_MultiblocV8();
		~USBtin_MultiblocV8();
		bool WriteToHardware(const char *pdata, const unsigned char length);
		void ManageThreadV8(bool States);
		void Traitement_MultiblocV8(int IDhexNumber,unsigned int rxDLC, unsigned int Buffer_Octets[8]);
		void StopThread();
		bool StartThread();
		bool m_stoprequested;
		unsigned long V8switch_id_base;
		
	private:
		boost::shared_ptr<boost::thread> m_thread;
		void Do_Work();
		
		int sec_counter;
		int Asec_counter;
		int min_counter;
		int min_counter2;
		bool BOOL_TaskAGo;
		bool BOOL_TaskRqStorGo;
		bool BOOL_SendPushOffSwitch;
		int Sid_PushOff_ToSend;
		char CodeTouchePushOff_ToSend;
		
		char CommandBlocToSend;
		
		struct
		{
			long BlocID;
			int VersionH;
			int VersionM;
			int VersionL;
			int CongifurationCrc;
			int ConfigurationCHanged;
			int Status;
			int AliveFrameReceived;
			int NbAliveFrameReceived;
			bool ForceUpdateSTOR[12];
			
		} BlocList_CAN[MAX_NUMBER_BLOC]; //30 blocs Maxi
				
		void ClearingBlocList();
		void BlocList_CheckBloc();
		
		virtual bool writeFrame(const std::string&) = 0;
		
		bool BOOL_DebugInMultiblocV8;
		void SendRequest(int sID );
		
		void Traitement_Trame_Vie(const unsigned char RefBloc, const char Codage, const char Ssreseau,unsigned int rxDLC,unsigned int bufferdata[8]);
		void Traitement_Etat_S_TOR_Recu(const unsigned int FrameType,const unsigned char RefeBloc, const char Codage, const char Ssreseau, unsigned int bufferdata[8]);
		void Traitement_E_ANA_Recu(const unsigned int FrameType,const unsigned char RefBloc, const char Codage, const char Ssreseau, unsigned int bufferdata[8]);
		void Traitement_SFSP_Switch_Recu(const unsigned int FrameType,const unsigned char RefBloc, const char Codage, const char Ssreseau, unsigned int bufferdata[8]);
		
		bool CheckOutputChange(unsigned long sID,int OutputNumber,bool CdeReceive,int LevelReceive);
		void OutputNewStates(unsigned long sID,int OutputNumber,bool Comandeonoff,int Level );
		
		void BlocList_GetInfo(const unsigned char RefBloc, const char Codage, const char Ssreseau,unsigned int bufferdata[8]);
		
		void USBtin_MultiblocV8_Send_SFSPSwitch_OnCAN(long sID_ToSend,char CodeTouche);
		void USBtin_MultiblocV8_Send_CommandBlocState_OnCAN(long sID_ToSend,char Commande);
		void USBtin_MultiblocV8_Send_SFSP_LearnCommand_OnCAN(long baseID_ToSend,char Commande);
};

