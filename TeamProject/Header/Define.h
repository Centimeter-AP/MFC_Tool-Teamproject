#pragma once

extern HWND		g_hWnd;

#define		WINCX		800
#define		WINCY		600

#define		OBJ_NOEVENT		0
#define		OBJ_DEAD		1

#define		VK_MAX			0xff

#define		TILECX			32
#define		TILECY			32

#define		TILEX			40
#define		TILEY			40

#define		MIN_STR			64
#define		MAX_STR			256

#define		RUBY			0x01		// -> 0001
#define		DIAMOND			0x02		// -> 0010
#define		SAPPHIRE		0x04		// -> 0100

#define		OPTION_NOCOLLISION	0
#define		OPTION_COLLISION	1

#define		GROUND_ALL_CNT		28
#define		WALLBODY_ALL_CNT	6
#define		WALLHEAD_ALL_CNT	21
#define		ORE_DEFAULT_CNT		3
#define		ORE_SAND_CNT		0
#define		DECO_DEFAULT_CNT	12
#define		DECO_SAND_CNT		0
#define		DECO_DIRT_CNT		18







#define ERR_MSG(message)								\
::MessageBox(nullptr, message, L"error", MB_OK)

#define NO_COPY(ClassName)								\
ClassName(const ClassName&) = delete;					\
ClassName& operator=(const ClassName&) = delete;

#define DECLARE_SINGLETON(ClassName)					\
		NO_COPY(ClassName)								\
public :												\
	static ClassName* Get_Instance();					\
	static void		  Destroy_Instance();				\
private:												\
	static ClassName* m_pInstance;

#define IMPLEMENT_SINGLETON(ClassName)					\
ClassName* ClassName::m_pInstance = nullptr;			\
ClassName* ClassName::Get_Instance()					\
{														\
	if (nullptr == m_pInstance)							\
		m_pInstance = new ClassName;					\
	return m_pInstance;									\
}														\
void ClassName::Destroy_Instance()						\
{														\
	if(nullptr != m_pInstance)							\
	{													\
		delete m_pInstance;								\
		m_pInstance = nullptr;							\
	}													\
}




// ����� ���ÿ� �ʱ�ȭ �Ұ���, ���� ����� ���������� �ڷ���, ��������� ��ġ�ϴ� ���¿����� ��� ����