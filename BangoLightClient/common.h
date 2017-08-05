#ifndef _COMMON_
#define _COMMON_

#pragma once

#ifndef WIN32
#define SOCKET void*
#include <inttypes.h>
#include "minwindef.h"
#define __stdcall
#endif


static __int64 g_nNeedExp[] = {
	0, 5, 24, 60, 160,
		328, 542, 814, 1157, 1588,
		2250, 3086, 4135, 5444, 7068,
		9126, 11660, 14769, 18572, 23214,
		29155, 36409, 45245, 55988, 69026, 
		85569, 105656, 130009, 159494, 195150, 
		238225, 290216, 352918, 428488, 519513, 
		629149, 761081, 919784, 1110624, 1340045, 
		1615778, 1947099, 2345141, 2823265, 3397501, 
		4087087, 4915108, 5909267, 7102808, 8535623, 
		10255633, 12320243, 14798389, 17772795, 21342730, 
		25627317, 30769501, 36940820, 44347118, 53235407, 
		63902104, 76702906, 92064653, 110499551, 132622249, 
		159170373, 191028978, 229260177, 275138508, 330193415, 
		// �ٲ�
		396260232,	1188853398,	1426699190,	1712116603,	2054620005, 
		2465626643 ,2958837208 ,3550692535 ,4260921625 ,5113199283 ,
		6135935388 ,7363221560 ,8835967855 ,10603266353 ,12724027540 ,
		15268944005 ,18322846853 ,21987533410 ,26385160468 ,31662316180 ,
		37994906328 ,45594017848 ,54712955065 ,65655683173 ,78786960398 ,
		94544496618 ,113453543683 ,136144403815 ,163373439683 ,196048286480 ,
};

static BYTE g_byNeedPU[] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8
};

static BYTE g_byNeedPUEx[] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8
};

// Stat-up
static WORD FIND_NEED_PU(WORD cur, BYTE add) {
	WORD needPU=0;
	for ( ; add > 0; add--) {
		needPU += g_byNeedPU[cur++];
	}
	return needPU;
}

static WORD FIND_NEED_PU_EX(WORD cur, BYTE add) {
	WORD needPU=0;
	for ( ; add > 0; add--) {
		needPU += g_byNeedPUEx[cur++];
	}
	return needPU;
}

static int g_denoHP[] = { 10, 14, 13, 13 };
static int g_denoMP[] = { 13, 10, 12, 12 };

// (struct) /////////////////////////////////////////////////////////
struct DATE_TIME
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

struct NPC_DESC
{
	WORD wIndex;
	int nShape;
	int nHtml;
	int nX, nY, nZ;
	int nDirX, nDirY;
};

struct D2S_LOADPLAYER_DESC
{
	int nAID, nPID;
	WORD wStats[5];
	WORD wCurHP, wCurMP;
	__int64 n64Exp;
	WORD wPUPoint, wSUPoint, wContribute;
	int nAnger, nX, nY, nZ;
	BYTE byLevel, byClass, byJob;
	BYTE byFace, byHair;
	const char* szName;
};

struct FUSION_DESC
{
	BYTE byLevel;
	WORD wMeele, wMagic, wDefense, wAbsorb;
	BYTE byDodge, byHit, byHP, byMP;
	BYTE byStats[5];
};

struct ITEMINFO_DESC
{
	int nIID;
	WORD wIndex;
	int nNum, nInfo;
	BYTE byPrefix, byCurEnd, byMaxEnd, byXAttack, byXMagic, byXDefense, byXHit, byXDodge, byExplosiveBlow;
	FUSION_DESC fuse;
	BYTE byShot;
	WORD wPerforation;
	int nGongLeft, nGongRight;
};

//#if defined( MAINSVR) || defined( DBSVR)

struct BASEPROPERTY
{
	int prty[5];	// Str, Hth, Int, Wis, Dex
	int nHP;
	int nMP;
};

#define GAME_HERO 0x80

static BASEPROPERTY g_baseproperty[] = {
	18, 16, 8, 8, 10, 180, 120,		// knight
		8, 10, 18, 16, 8, 170, 140,		// mage
		14, 10, 8, 10, 18, 160, 160,	// archer
		14, 10, 8, 10, 18, 160, 160,	// thief
};
//#endif

// (define) /////////////////////////////////////////////////////////
#define COUNTRY(country) (country == g_nCountry)
#define COUNTRYMASK(mask) (mask & (1 << g_nCountry))

#define MAX_CHARACTER 5
#define MAX_PROTECT 30
#define MAX_NUM 0x7fffffff
#define INVALID_PROPERTY 0xffffffff
#define MAX_INVENTORY 60
#define MAX_INVENTORYEX 72
#define MAX_STORAGE 100
#define CLASS_NUM 3
#define BOOSTDECMP 6
#define MAX_BULLETININFO 20
#define NULL_CHECK( value) if( value == 0) return
#define MAX_BUY_ITEM_EACH	9999

// Length
#define LEN_ID				16
#define LEN_PWD				16
#define LEN_NMID			16
#define LEN_NMPWD			8
#define LEN_ACCOUNT			16
#define LEN_NAME			24
#define LEN_PLAYERNAME		20
#define LEN_GUILDNAME		16
#define LEN_NEWPLAYERNAME	14
#define LEN_NEWGUILDNAME	14
#define LEN_RANKNAME		14
#define LEN_ITEMNAME		30
#define LEN_FILENAME		20
#define LEN_PATH			128
#define LEN_CHATTING		128
#define LEN_MYTELPTNAME		20
#define LEN_GUILDNOTICE		180
#define LEN_MLMNOTICE		180
#define LEN_STALLTITLE		64

#define MAX_SHORTCUT		40
#define MAX_FRD				30

#define MAIL_MAX			100
#define MAIL_MAX_LEN		512
#define MAIL_MAX_LOAD		50
#define MAIL_COST_GENERAL	5
#define MAIL_COST_PARCEL	100

// Map
#define MAP_NONE			0x00000000
#define MAP_FIELD			0x00000001
#define MAP_DUNGEON			0x00000002

// NPC General State
#define NGS_ONMIRROR		0x00000001
#define NGS_ONMIRROREX		0x00000002
#define NGS_THRONEEFFECT1	0x00000004
#define NGS_THRONEEFFECT2	0x00000008
#define NGS_OPENDOOR		0x00000010	//�ó�����2 �� ������ ON
#define NGS_SIEGEGUNSET		0x00000020	//�������� ��ġ��
#define NGS_SIEGEGUNUSED	0x00000040	//�������� ��ġ��


// Character General State
#define CGS_KNEE				0x00000001
#define CGS_KO					0x00000002
#define CGS_REST				0x00000004
#define CGS_ONREVIVAL			0x00000008
#define CGS_ONSTALL				0x00000010
#define CGS_FISH				0x00000020
#define CGS_COOKING				0x00000040
#define CGS_ONPVP				0x00000080
#define CGS_ONPK				0x00000100
#define CGS_ONTRANSFORM			0x00000200
#define CGS_WAR_UNFURLSTANDARD	0x00000400
#define CGS_PKSTATEOPEN			0x00000800
#define CGS_ONPORTAL			0x00001000
#define CGS_INVINCIBLE			0x00002000
#define CGS_PREASCENSION		0x00004000
#define CGS_OPENBOX				0x00008000
#define CGS_ASCENSION			0x00010000
#define CGS_LORDDECLARE			0x00020000
#define CGS_PET_FALCON 			0x00040000	// PET ��
#define CGS_PET_OWL 			0x00080000	// PET �ξ���
#define CGS_PET_CROW 			0x00100000	// PET ���
#define CGS_SIEGEGUNCONTROL		0x00040000	// �������Ⱑ �������϶�
#define CGS_SIEGEGUNDIE			0x00080000	// ���� ���Ⱑ ��ü�Ǵ� ����

#define CGS_DARK				0x00100000	// ���漮	// ���սý���
#define CGS_SAINT				0x00200000	// �ż���
#define CGS_FLAME				0x00400000	// ȭ����
#define CGS_ICE					0x00800000	// ������
#define CGS_LIGHT				0x01000000	// ���ڼ�
#define CGS_POISON				0x02000000	// ���
#define CGS_PARAL				0x04000000	// ����
#define CGS_POWER				0x08000000	// ��
#define CGS_TECH				0x10000000	// �����
#define CGS_FANTA				0x20000000	// �ź�
#define CGS_BLOOD				0x40000000	// ������
#define CGS_MIX_LEVEL2			0x80000000	// ����2�ܰ�

#define CGS_MIX_HALFSETDEF_46  __int64(0x00000001) << 32	// ȭ�� ������Ʈ 46��
#define CGS_MIX_FULLSETDEF_46  __int64(0x00000002) << 32	// ȭ�� ����Ʈ
#define CGS_MIX_HALFSETDEF_50  __int64(0x00000004) << 32	// ȭ�� ������Ʈ 50��
#define CGS_MIX_FULLSETDEF_50  __int64(0x00000008) << 32	// ȭ�� ����Ʈ
#define CGS_MIX_HALFSETDEF_55  __int64(0x00000010) << 32	// ȭ�� ������Ʈ 55��
#define CGS_MIX_FULLSETDEF_55  __int64(0x00000020) << 32	// ȭ�� ����Ʈ
#define CGS_MIX_HALFSETDEF_60  __int64(0x00000040) << 32	// ȭ�� ������Ʈ 60��
#define CGS_MIX_FULLSETDEF_60  __int64(0x00000080) << 32	// ȭ�� ����Ʈ

#define CGS_EVENT_HALLOWEEN_GHOST_1		 __int64(0x00000100) << 32	// �ҷ��� �̺�Ʈ. ����
#define CGS_EVENT_HALLOWEEN_GHOST_2		 __int64(0x00000200) << 32	// �ҷ��� �̺�Ʈ. ����
#define CGS_EVENT_HALLOWEEN_GHOST_3		 __int64(0x00000400) << 32	// �ҷ��� �̺�Ʈ. ����
#define CGS_EVENT_HALLOWEEN_WITCH_1		 __int64(0x00000800) << 32	// �ҷ��� �̺�Ʈ. ����
#define CGS_EVENT_HALLOWEEN_WITCH_2		 __int64(0x00001000) << 32	// �ҷ��� �̺�Ʈ. ����
#define CGS_EVENT_HALLOWEEN_WITCH_3		 __int64(0x00002000) << 32	// �ҷ��� �̺�Ʈ. ����
#define CGS_EVENT_HALLOWEEN_PUMPKIN_1    __int64(0x00004000) << 32	// �ҷ��� �̺�Ʈ. ȣ��
#define CGS_EVENT_HALLOWEEN_PUMPKIN_2    __int64(0x00008000) << 32	// �ҷ��� �̺�Ʈ. ȣ��
#define CGS_EVENT_HALLOWEEN_PUMPKIN_3    __int64(0x00010000) << 32	// �ҷ��� �̺�Ʈ. ȣ��
#define CGS_EVENT_HALLOWEEN_MIX		(CGS_EVENT_HALLOWEEN_GHOST_1|CGS_EVENT_HALLOWEEN_GHOST_2|CGS_EVENT_HALLOWEEN_GHOST_3|\
									 CGS_EVENT_HALLOWEEN_WITCH_1|CGS_EVENT_HALLOWEEN_WITCH_2|CGS_EVENT_HALLOWEEN_WITCH_3|\
									 CGS_EVENT_HALLOWEEN_PUMPKIN_1|CGS_EVENT_HALLOWEEN_PUMPKIN_2|CGS_EVENT_HALLOWEEN_PUMPKIN_3)	 

#define CGS_BATTLEFIELD_RED				__int64(0x00020000) << 32	// �ó�����3 ������� ȫ��
#define CGS_BATTLEFIELD_BLUE			__int64(0x00040000) << 32	// �ó�����3 ������� û��
#define CGS_BATTLEFIELD					(CGS_BATTLEFIELD_RED | CGS_BATTLEFIELD_BLUE)	// �ó�����3 �������
#define CGS_TOWERBURNING_1				__int64(0x00080000) << 32	// ž�� HP�� ���� %�����϶� ��Ÿ����
#define CGS_TOWERBURNING_2				__int64(0x00100000) << 32	// ž�� HP�� ���� %�����϶� ��Ÿ����
#define CGS_MIX (CGS_DARK|CGS_SAINT|CGS_FLAME|CGS_ICE|CGS_LIGHT|CGS_POISON|CGS_PARAL|CGS_POWER|CGS_TECH|CGS_FANTA|CGS_BLOOD)

// CGS �߰��� �߰�!! ã�ƺ��ÿ�~
#define CGS_PRAYCASTING					__int64(0x00200000) << 32	// ��� ĳ���� ��
#define CGS_PRAY						__int64(0x00400000) << 32	// ��� ����
#define CGS_LOADPROTECTLEADER			__int64(0x00800000) << 32	// ���� ��ȣ ��� ������ Ŭ���Ҽ� �ִ� ����ڸ� �����ϱ� ���� ����



// Character Magic State
#define CMS_BOOST			0x00000001
#define CMS_MOVESPEED		0x00000002
#define CMS_STONE			0x00000004
#define CMS_MEDITATION		0x00000008
#define CMS_FATALCHANCE	    0x00000010
#define CMS_REVIVALSEQUELA	0x00000020
#define CMS_ATTACKUP		0x00000040
#define CMS_MAGICUP			0x00000080
#define CMS_STUN			0x00000100
#define CMS_MOVESTOP		0x00000200
#define CMS_HITUP			0x00000400
#define CMS_ATTACKMINUP		0x00000800
#define CMS_POISON			0x00001000
#define CMS_HASTE			0x00002000
#define CMS_PROTECT			0x00004000
#define CMS_PROTECTRANGE	0x00008000
#define CMS_MAGICSTOP		0x00010000
//#define CMS_CUTEXPHALF		0x00020000		// not used
//#define CMS_KILLEDNOCOUNT	0x00040000		// not used
#define CMS_HIDE         	0x00080000
#define CMS_HP              0x00100000
#define CMS_MP              0x00200000
#define CMS_ATTACKSPEED     0x00400000
#define CMS_HITUPPER        0x00800000
#define CMS_DAMAGEDEX       0x01000000
#define CMS_HITNICE         0x02000000
#define CMS_DODGEALL        0x04000000
#define CMS_FATALNICE       0x08000000
#define CMS_SLEEP           0x10000000
#define CMS_DEFENSEPER      0x20000000
#define CMS_CTDEFENSEPER    0x40000000
#define CMS_SUFFERING       0x80000000
#define CMS_INCHANTWEAPON   __int64(0x00000001) << 32
#define CMS_AURADEFENSE     __int64(0x00000002) << 32
#define CMS_CTHEALING       __int64(0x00000004) << 32
#define CMS_SPIRITDMG       __int64(0x00000008) << 32
#define CMS_FLAGMSPEED      __int64(0x00000010) << 32
#define CMS_FLAGATTACK      __int64(0x00000020) << 32
#define CMS_FLAGMAGIC       __int64(0x00000040) << 32
#define CMS_FLAGDEFENSE     __int64(0x00000080) << 32
#define CMS_FLAGRESIST      __int64(0x00000100) << 32
#define CMS_FLAGHP          __int64(0x00000200) << 32

#define CMS_SILENCESHOT     __int64(0x00000400) << 32
#define CMS_MANABURN        __int64(0x00000800) << 32
#define CMS_POISONCLOUD     __int64(0x00001000) << 32 
#define CMS_DESTROYSIGHT    __int64(0x00002000) << 32
#define CMS_DO_UPABSORB     __int64(0x00004000) << 32
#define CMS_DO_UPRESISTALL  __int64(0x00008000) << 32
#define CMS_HIDE_CANNON		__int64(0x00010000) << 32
#define CMS_MIX_LIGHT		__int64(0x00020000) << 32
#define CMS_MIX_ICE			__int64(0x00040000) << 32




#define CMS_HALLOWEEN_ATTACKUP		__int64(0x00080000) << 32
#define CMS_HALLOWEEN_MAGICUP		__int64(0x00100000) << 32

#define CMS_ATTACK_UP			__int64(0x00200000) << 32	// ũ�������� �̺�Ʈ ������ ���� ���ݷ� ��


#define CMS_CANNON_MASK		(CMS_HIDE_CANNON | CMS_HIDE)

#define CMSEX_STREN_STR			0x00000001
#define CMSEX_STREN_HTH			0x00000002
#define CMSEX_STREN_DEX			0x00000004
#define CMSEX_STREN_INT			0x00000008
#define CMSEX_STREN_FATAL		0x00000010
#define CMSEX_BERSERK			0x00000020
#define CMSEX_CTDEFLIGHTNING	0x00000040
#define CMSEX_CTDEFICE			0x00000080
#define CMSEX_CTDEFFIRE			0x00000100
#define CMSEX_CTACCURACY		0x00000200
#define CMSEX_CTBATTLE			0x00000400
#define CMSEX_SHIELDRESILIENCE	0x00000800
#define CMSEX_RESIST_LIGHTNING	0x00001000
#define CMSEX_RESIST_ICE		0x00002000
#define CMSEX_RESIST_FIRE		0x00004000
#define CMSEX_RESIST_CURSE		0x00008000
#define CMSEX_RESIST_PALSY		0x00010000
#define CMSEX_EMERGENCYESCAPE	0x00020000
#define CMSEX_CLOUDSIGHT		0x00040000
#define CMSEX_MESH_CHANCE      	0x00080000
#define CMSEX_MESH_STR         	0x00100000
#define CMSEX_MESH_HTH         	0x00200000
#define CMSEX_MESH_DEX         	0x00400000
#define CMSEX_MESH_INT         	0x00800000
#define CMSEX_MESH_WIS         	0x01000000
#define CMSEX_MESH_DEFENSE     	0x02000000
#define CMSEX_VANISHCONFI      	0x04000000
#define CMSEX_PET_HP			0x08000000
#define CMSEX_PET_MP			0x10000000
#define CMSEX_PET_ATTACK		0x20000000
#define CMSEX_PET_DEPENSE		0x40000000
#define CMSEX_HYDROCHLORICACID	0x80000000
#define CMSEX_ACCURACY_RATE		__int64(0x00000001) << 32	// ũ�������� �̺�Ʈ ������ ���� ���� ���� ���
#define CMSEX_CRITICAL_HIT		__int64(0x00000002) << 32	// ũ�������� �̺�Ʈ ������ ���� ġ��Ÿ Ȯ�� ����


// Character Etc. State
#define CES_TRADEASKED			0x00000001
#define CES_TRADEDISPLAY		0x00000002
#define CES_TRADEAGREED			0x00000004
#define CES_REVIVALASKED		0x00000008
#define CES_KILLEDATPVP			0x00000010
#define CES_KILLEDATONPK		0x00000020
#define CES_KILLEDATOFFPK 		0x00000040
#define CES_KILLEDATCUTEXPHALF	0x00000080
#define CES_KILLEDATCASTLEWARPK	0x00000100
#define CES_BOKJOOMUNYOPEN		0x00000200	// ���ָӴϸ� ���� �ִ� ����
#define CES_DANJIOPEN			0x00000400	// ��,�������� ���� �ִ� ����
#define CES_SIEGEGUNSET			0x00000800	// ���� ���⸦ ��ġ�ϰ� �ִ� ����
#define CES_KILLEDATBATTLEFIELD 0x00001000

// Character Buff State
#define CBS_PCROOM          	__int64(0x00000001)
#define CBS_EXPADD130       	__int64(0x00000002)
#define CBS_MONEYADD120     	__int64(0x00000004)
#define CBS_FISHADD200      	__int64(0x00000008)
#define CBS_DROPUPCHARMARMOR	__int64(0x00000010)
#define CBS_DROPUPCHARMORNAMENT	__int64(0x00000020)
#define CBS_DROPUPCHARMWEAPON	__int64(0x00000040)
#define CBS_CUTEXPHALF			__int64(0x00000080)
#define CBS_KILLEDNOCOUNT		__int64(0x00000100)
#define CBS_PAY_UPATTACK		__int64(0x00000200)
#define CBS_PAY_CUTDAMAGE		__int64(0x00000400)
#define CBS_PAY_UPXBLOW3		__int64(0x00000800)
#define CBS_PAY_UPXBLOW5		__int64(0x00001000)
#define CBS_PAY_AUTOREFRESH		__int64(0x00002000)
#define CBS_PAY_UPHIT			__int64(0x00004000)
#define CBS_PAY_UPDODGE			__int64(0x00008000)
#define CBS_PAY_PERFECTDEF		__int64(0x00010000)
#define CBS_PAY_DRAINHP			__int64(0x00020000)
#define CBS_PAY_UPSTR			__int64(0x00040000)
#define CBS_PAY_UPHTH			__int64(0x00080000)
#define CBS_PAY_UPINT			__int64(0x00100000)
#define CBS_PAY_UPWIS			__int64(0x00200000)
#define CBS_PAY_UPDEX			__int64(0x00400000)
#define CBS_PLAYERNAMECHANGED	__int64(0x00800000)
#define CBS_GUILDNAMECHANGED	__int64(0x01000000)
#define CBS_LUCKYKEY			__int64(0x02000000)
#define CBS_LUCKYSTONE1			__int64(0x04000000)
#define CBS_LUCKYSTONE2			__int64(0x08000000)
#define CBS_CHANGEFACE			__int64(0x10000000)

#define CBS_UPHIT				__int64(0x20000000)			// ������������ ���
#define CBS_UPATTACK			__int64(0x40000000)			// ���ݷ�(����/����) ���
#define CBS_CUTDAMAGE			__int64(0x80000000)			// ��� �������� ����
#define CBS_UPXBLOW5			__int64(0x00000001) << 32	// ���ݹߵ� Ȯ�� ����
#define CBS_UPSTR				__int64(0x00000002) << 32	// 3 ����	BUFF_PAY_UPSTR	60
#define CBS_UPHTH				__int64(0x00000004) << 32	// 5 ����	BUFF_PAY_UPHTH	61
#define CBS_UPINT				__int64(0x00000008) << 32	// 3 ����	BUFF_PAY_UPINT	62
#define CBS_UPWIS				__int64(0x00000010) << 32	// 5 ����	BUFF_PAY_UPWIS	63
#define CBS_UPDEX				__int64(0x00000020) << 32	// 3 ����	BUFF_PAY_UPDEX	64
#define CBS_GUNNERY				__int64(0x00000040) << 32	// �������� �ð��� ����
#define CBS_EXPADD110_1			__int64(0x00000080) << 32	// ���޷��� �̺�Ʈ 1
#define CBS_EXPADD110_2			__int64(0x00000100) << 32	// ���޷��� �̺�Ʈ 2
#define CBS_EXPADD110_3			__int64(0x00000200) << 32	// ���޷��� �̺�Ʈ 3
#define CBS_RETURNCOOLTIME		__int64(0x00000400) << 32	// ��ȯ ��Ÿ��
#define CBS_ATK10				__int64(0x00000800) << 32	// ���ݷ� 10%
#define CBS_POWER_UP			__int64(0x00001000) << 32	// ���ݷ� ���.
#define CBS_EXP_UP				__int64(0x00002000) << 32	// ����ġ ���.
#define CBS_GUILD_DEF_UP		__int64(0x00004000) << 32	// ������, ���� ���
#define CBS_BLOW_UP				__int64(0x00008000) << 32	// ũ�������� �̺�Ʈ ������ ���� ���� �ߵ� Ȯ��
#define CBS_PKPENALTY			__int64(0x00010000) << 32	// �ڰ��ý��� ���Ƽ ���� 1�ܰ�
//(CBS_PKPENALTY1 | CBS_PKPENALTY2 | CBS_PKPENALTY3 | CBS_PKPENALTY4 | CBS_PKPENALTY5)

// Monster AI
#define AI_NONE				0x00000000
#define AI_PASSIVE			0x00000001
#define AI_AGGRESSIVE		0x00000002

// Item Info
#define ITEM_PUTON			0x00000001
#define ITEM_SETGEM			0x00000002
#define ITEM_ONTRADE		0x00000004
#define ITEM_CHEAT			0x00000008
#define ITEM_STORAGE		0x00000010
#define ITEM_TRANSFORM		0x00000020
#define ITEM_PROTECTED		0x00000040
#define ITEM_OWN			0x00000080

#define ITEM_MIX_DARK		0x00000100	// ���漮	// ���սý���
#define ITEM_MIX_SAINT		0x00000200	// �ż���
#define ITEM_MIX_FLAME		0x00000400	// ȭ����
#define ITEM_MIX_ICE		0x00000800	// ������
#define ITEM_MIX_LIGHT		0x00001000	// ���ڼ�
#define ITEM_MIX_POISON		0x00002000	// ���
#define ITEM_MIX_PARAL		0x00004000	// ����
#define ITEM_MIX_POWER		0x00008000	// ��
#define ITEM_MIX_TECH		0x00010000	// �����
#define ITEM_MIX_FANTA		0x00020000	// �ź�
#define ITEM_MIX_BLOOD		0x00040000	// ������
#define ITEM_MIX_LEVEL1		0x00080000	// ����1
#define ITEM_MIX_LEVEL2		0x00100000	// ����2
#define ITEM_MIX_FIREBALL	0x00200000	// ȭ��


#define ITEM_OWNMASK		( ITEM_CHEAT | ITEM_OWN)
#define ITEM_NOTMOVEMASK	( ITEM_PUTON | ITEM_OWNMASK)
#define ITEM_STORAGEMASK	( ITEM_OWNMASK | ITEM_TRANSFORM | ITEM_PROTECTED)
#define ITEM_MIX			( ITEM_MIX_DARK | ITEM_MIX_SAINT | ITEM_MIX_FLAME | ITEM_MIX_ICE | ITEM_MIX_LIGHT | ITEM_MIX_POISON | ITEM_MIX_PARAL | ITEM_MIX_POWER | ITEM_MIX_TECH | ITEM_MIX_FANTA | ITEM_MIX_BLOOD | ITEM_MIX_FIREBALL)

#define SVMAP_VERSION				1
#define SVMAP_SIZE					(SVMAP_TILE_SIZE * SVMAP_TILE_COUNT) // 8192
#define SVMAP_CELL_COUNT			(SVMAP_TILE_COUNT * SVMAP_CELL_COUNT_PER_TILE) // 1024
#define SVMAP_CELL_COUNT_PER_TILE	(SVMAP_TILE_SIZE / SVMAP_CELL_SIZE)	// 4
#define SVMAP_CELL_SIZE				8
#define SVMAP_TILE_COUNT			256
#define SVMAP_TILE_SIZE				32

#define MAX_PLAYER_SIGHT			1024
#define MAX_PLAYER_STEP				128

enum MOVE_ACTION_TYPE
{
	MV_AC_CREATE,
	MV_AC_DELETE,
	MV_AC_MOVE,
	MV_AC_NONE,
};

enum eSeverMapAttr
{
	SMA_NOTMOVEABLE = 0,	// �����°�
	SMA_PORTAL,				// ��Ż����
	SMA_VILLAGE,			// �����Ӽ�
	SMA_SAFETY,				// ��������
	SMA_ATTACK_CASTLE,		// ��������
	SMA_DEFENCE_CASTLE,		// ��������
	SMA_OBJECT				// ������Ʈ����

	/*
	������ �ʵ��� ������ �д� ������ Ʋ����.
	���������� ��Ÿ ����, ����, ����, ���� ������ �Ӽ��� ���� �ʾƼ� �׵��� ������ �������� ����.
	*/
};

// Class Specialty

// (enum) /////////////////////////////////////////////////////////
enum COUNTRY_CODE
{
	N_KR,
	N_CN,
	N_EN,
};

enum MAP_STATE
{
	MS_NONE,
	MS_QUAKE1,
	MS_QUAKE2,
	MS_QUAKE3,
	MS_QUAKE4,
	MS_TB_CREATE,
};

enum MONSTER_RACE
{
	MR_MAGUNI,
	MR_NOTMAGUNI,
	MR_CASTLESTANDARD,
	MR_CASTLEGATE,
	MR_ITEM,
	MR_MAGIC,
	MR_INACTIVE,
	MR_EGG,
	MR_COCOON,
	MR_FIREFLOWER,
	MR_SIEGEGUN,
	MR_TOWER,
	MR_PRAY,
	MR_PRAYDOOR,
};

enum DROPITEMMASK
{
	G1_WEAPON = 1,
	G1_ARMOR,
	G1_ENCHANT,
	G1_GENERAL,
	G1_ORNAMENT,
	G2W_1HAND = 1,
	G2W_2HAND,
	G2A_MAIN,
	G2A_SUB,
	G2E_PREFIX,
	G2E_UPGRADE,
	G2E_ETC,
	G2G_USABLE,
	G2G_UNUSABLE,
	G2G_QUEST,
	G2G_MONEY,
	G2G_ETC,
	G2O_TRINKET,
	G2O_NECKLACE,
	G2O_RING,
	G3W_SHORT = 1,
	G3W_LONG,
	G3A_UPPER,
	G3A_HELMET,
	G3A_GAUNTLET,
	G3A_BOOTS,
	G3A_LOWER,
	G3A_SHIELD,
	G3A_MASK,
	G3A_FLAG,
	G3A_TRANSFORM,
	G3E_CHARM_WEAPON,
	G3E_CHARM_ARMOR,
	G3E_CHARM_ORNAMENT,
	G3E_CHARM_ATTACK,
	G3E_CHARM_MAGIC,
	G3E_CHARM_DEFENSE,
	G3E_CHARM_HIT,
	G3E_CHARM_DODGE,
	G3E_REPAIRKIT,
	G3E_PROTECT,
	G4A_SWORD = 1,
	G4A_BOW,
	G4A_WAND,
};

enum SKILL_ADD_VALUE
{
	SAV_DAMAGELIGHTNINGADD,
	SAV_DAMAGEWIDEICE,
	SAV_DAMAGEWIDEFIRE,
	SAV_DAMAGEPOISON,
	SAV_HEALINGPARTY,
	SAV_DAMAGESUFFERING,
	SAV_DAMAGESPIRIT,
	SAV_DAMAGEWIDECHAINLIGHTNING,
	SAV_DAMAGEWIDEICEREQUIEM,
	SAV_DAMAGEWIDEEXPLOSIVEBURST,
	SAV_HEALINGPARTYPLUS,
	SAV_HEALINGPARTYINS,
	SAV_DAMAGEPOISONCLOUD,
	SAV_DAMAGEPULLSWING,
	SAV_DAMAGEWIDEMDORAGE,
	SAV_DAMAGEWIDEMDOFURY,
	SAV_DAMAGEWIDEMDOGROUNDFEAL,
	SAV_DAMAGEWIDEMDOASCENSION1,
	SAV_DAMAGEWIDEMDOASCENSION2,
	SAV_DAMAGEWIDETHUNDERSTORM, //������ǳ
	SAV_DAMAGEWIDEICESTORM,     //������ǳ
	SAV_DAMAGEWIDEFIRERAIN,  	//ȭ����ǳ
	SAV_DAMAGEWIDEOVERRUN,		//����Ǻг�
	SAV_DAMAGEWIDEMSWIING1,				//�ֵθ���1
	SAV_DAMAGEWIDEMSWIING2,				//�ֵθ���2
	SAV_DAMAGEWIDEMFURY, 
	SAV_DAMAGEWIDEFIREEXPLOSION,		//ȭ���� ����
	SAV_DAMAGEWIDESIEGEGUNBALL,			//�������� ��ź ����
	SAV_DAMAGEWIDEMVACCUMWAVE,			//������
	SAV_DAMAGEWIDEFUJIEXPLOSION,		//����������
	SAV_DAMAGEWIDEMSPRITOFGROUND,		//������ȥ
	SAV_DAMAGEWIDEMYAMATO,				//�߸��� ����
	SAV_DAMAGEWIDEMGHOST,				//��ȥ��
};

// MLM Flag
enum MLM_FLAG
{
	M_FEE = 0,	// fee
	M_GMASTER,	// great master
	M_MASTER,	// master
	M_FELLA,	// fellas
	M_PUPIL,	// pupils
	// client
	MLM_C_ASK1 = 0,
	MLM_C_INFO,
	MLM_C_ASK2,
	MLM_C_MSG,
	// authsvr
	MLM_A_SET = 0,
	MLM_A_INFO1,
	MLM_A_INFO2,
	MLM_A_RESET,
	MLM_A_SETBREAK,
	// mainsvr
	MLM_M_ASKRELATION = 0,
	MLM_M_REPLYFROMCLNT,
	MLM_M_REPLYFROMAUTH,
	MLM_M_BREAKRELATION,
	MLM_M_INFORELATION,
	MLM_M_CONFIRM,
	MLM_M_SETMSG,
	MLM_M_GETMSG,
	MLM_M_SENDMSG,
	// dbsvr
	MLM_D_INSERT = 0,
	MLM_D_BREAKONPUPIL,
	MLM_D_BREAKONMASTER,
	MLM_D_SAVEFEE,
	MLM_D_SETMSG,
	MLM_D_GETMSG,
	// mlm answer
	MLMA_SETFAIL = 0,
	MLMA_SETFIRST,
	MLMA_SETSECOND,
};

// FRD Flag
enum FRD_FLAG
{
	// msg	
	FRD_MSG_LIMITMAX = 0,   //�ο�����
	FRD_MSG_ALREADYINSERT,  //�̹� ��ϵǾ�����
	FRD_MSG_NOTEXISTPLAYER, //�����÷��̾�
	// client
	FRD_C_INSERT = 0, //bdsb
	FRD_C_DELETE,	  //bd
	FRD_C_LIST,	      //bb
	FRD_C_REFRESH,    //bbdb
	// mainsvr
	FRD_M_INSERT = 0, //bs
	FRD_M_DELETE,     //bbd
	FRD_M_PID,
	FRD_M_LOAD,	
	FRD_M_REFRESH,    //b
	// dbsvr
	FRD_D_INSERT = 0,
	FRD_D_DELETE,
	FRD_D_PID,
	FRD_D_LOAD,
};

// MAIL Flag
enum MAIL_FLAG
{
	MAIL_SR_SUCCESS = 0,
	MAIL_SR_LIMITMAX,
	MAIL_SR_NOTEXISTPLAYER,
	MAIL_SR_NOTENOUGHMONEY,
	MAIL_SR_NOTEXISTITEM,
	MAIL_SR_NOTGETMID,
	MAIL_SR_FAILSCANPLAYER,

	MAIL_SFLAG_NONE = 0,
	MAIL_SFLAG_READ,	
	MAIL_SFLAG_SENDPROC,	
	MAIL_SFLAG_ITEMRECVPROC,

	MAIL_SF_SUCCESS = 0,
	MAIL_SF_FAIL,

	MAIL_IRF_SUCCESS = 0,
	MAIL_IRF_FAIL,

	MAIL_CR_ITEMRECVPROC = 1,
	MAIL_CR_ALREADYRETURN,

	// msg
	MAIL_MSG_NEWMAIL = 0,
	MAIL_MSG_RETURN,          //d MID
	MAIL_MSG_DELETE,          //d 
	MAIL_MSG_SENDPROC,        // 
	MAIL_MSG_ITEMRECVPROC,    //d 
	MAIL_MSG_ALREADYRETURN,   //d
	MAIL_MSG_NOTENOUGHMONEY,  //d
	MAIL_MSG_ITEMRECVSUCCESS, //d
	MAIL_MSG_ITEMRECVNOSLOT,  //d
	MAIL_MSG_ITEMATSTALL,  //d

	// Type	
	MAIL_T_GENERAL = 0,
	MAIL_T_PARCEL,
	MAIL_T_RETURN,
	MAIL_T_PAY,	
	MAIL_T_NOTICE,
	// client
	MAIL_C_SEND_RESULT = 0, //bs
	MAIL_C_LIST,            //b dbbbdsdsdddwbdd     
	MAIL_C_MSG,	            //dbdwm or dbdwmwbbdbbbbbbbbbbb
	MAIL_C_UPDATEINFO,      //dbb
	// mainsvr
	MAIL_M_SEND = 0,        //c2s bswm bswmdwbdd
	MAIL_M_SEND_RESULT,	    //d2s
	MAIL_M_REFRESH,         //c2s
	MAIL_M_LOAD,            //d2s    
	MAIL_M_RETURNPROC,      //d2s	
	MAIL_M_CHECK_RESULT,    //d2s
	MAIL_M_GETMSG,          //c2s d
	MAIL_M_SETMSG,          //d2s
	MAIL_M_RETURN,          //c2s d
	MAIL_M_DELETE,          //c2s d
	MAIL_M_ITEMRECV,        //c2s d
	MAIL_M_ITEMRECV_RESULT, //d2s
	// dbsvr
	MAIL_D_SEND = 0,
	MAIL_D_SEND_FLAG,
	MAIL_D_LOAD,
	MAIL_D_RETURNPROC,
	MAIL_D_GETMSG,
	MAIL_D_RETURN,
	MAIL_D_DELETE,
	MAIL_D_ITEMRECV,
	MAIL_D_ITEMRECV_FLAG,
};

// Event Flag
enum EVENT_FLAG
{
	EF_INVALIDCARDID,	// not used
	EF_USEDCARDID,		// not used
	EF_NOMORECHANCE,	// not used
	EF_SUCCESS_CARDEVENT,	// not used
	EF_ALREADYRECOMMAND,	// �̹� �ٸ� ������ ��õ�ϼ̽��ϴ�.
	EF_INVALIDACCOUNT,		// �Է��� ������ �������� �ʰų� ��ȿ���� ���� �����Դϴ�.
	EF_INVALIDPLAYER,		// �̹� ��õ �Ǿ� �ֽ��ϴ�.		<- �̹� ��õ �Ǿ� ������ ���� �ڽ��ϴ�.
	EF_NOTNEWACCOUNT,		// ����� �ű� ������ �ƴմϴ�.
	EF_SAMEACCOUNT,			// �ڱ� �ڽ��� ��õ�� �� �����ϴ�.
	EF_SUCCESS_SPONSOREVENT, //�ش� ������ ���������� ��õ�Ǿ����ϴ�. 
	EF_OVERLEVEL10,
	EF_UNDERLEVEL16,
	EF_OVERPUPIL20,
	EF_ALREADYGOTMASTER,
	EF_REJECTEDTOBEMASTER,
	EF_PLAYERALREADYGOTMASTER,
	EF_CANTBREAKRELATION,
	EF_GOTPUPIL,
	EF_GOTMASTER,
	EF_GOT20KMONEYFOR16,
	EF_GOT20KMONEYFORPUPIL16,
	EF_BROKERELATION,
	EF_INVALIDMLMMSG,
	EF_MLMMSGUPDATED,
	EF_UNDERLEVEL10,
	EF_DEFICIENT_DICECOIN,
	EF_SUCCESS_DICEEVENT,
	EF_UNDERLEVEL20,			// ������ 20�̻����� ������. 
	EF_UNDERLEVEL30,			// ������ 30�̻����� ������.
	EF_UNDERLEVEL40,			// ��õ�ڰ� ���� 40�̻����� ������.
	EF_NOEVENTUSER,	// �̺�Ʈ ���� ����� �ƴҶ�
	EF_ITEMRECEIVE,	// ������ �̹� ����
	EF_LIMITCOUNT,  // ������ ����
	EF_NOTPLAY,		// �÷������� �ƴմϴ�.		<- �߰�
	
	// event bit
	EB_SPONSOR = 1,
	EB_MLM_MASTER = 2,
	EB_MLM_BROKEN = 4,
	// event answer
	EA_FROMDB = 0,
	EA_FROMAUTH,

	// event bit of 1�ֳ� �̺�Ʈ
    EB_REST_CHANCE	= 0x00000001,	// �޸� - ��ȸ�� ��
    EB_REST_L17	= 0x00000002,	// �޸� - LV17����
    EB_REST_L25	= 0x00000004,	// �޸� - LV25����
    EB_REST_L33	= 0x00000008,	// �޸� - LV33����
    EB_REST_L40	= 0x00000010,	// �޸� - LV40����
	EB_NEW_TELP_1	= 0x00000020,	// �ű� - �̵��ֹ���_������
	EB_NEW_TELP_2	= 0x00000040,	// �ű� - �̵��ֹ���_�׼�������
	EB_NEW_LV20_1	= 0x00000080,	// �ű� - LV20�޼�-����
	EB_NEW_LV20_2	= 0x00000100,	// �ű� - LV20�޼�-��1
	EB_NEW_LV20_3	= 0x00000200,	// �ű� - LV20�޼�-��2
	EB_NEW_LV20_4	= 0x00000400,	// �ű� - LV20�޼�-��3
	EB_NEW_LV20_5	= 0x00000800,	// �ű� - LV20�޼�-��4
	EB_NEW_LV20_6	= 0x00001000,	// �ű� - LV20�޼�-��5

	

};

// Difference Level Type
enum DIFF_LV_TYPE
{
	DLT_GRAY,
	DLT_BLUE,
	DLT_GREEN,
	DLT_YELLOW,
	DLT_ORANGE,
	DLT_RED,
	DLT_VIOLET,
};

// System Code
enum SYS_CODE
{
	SYS_PK,
	SYS_COSMO,
	SYS_BILLING,
	SYS_NMSOCKET,
	SYS_FLAG,	// not used
	SYS_ENG,	// not used
	SYS_FRD,
	SYS_NMBILLING,
	SYS_TESTSRV,
	SYS_WAR,
	SYS_MAIL,
	SYS_GAMBLE,	// ���ڽý���(������ȯ, ����, KAL21)
	SYS_WAR2,	// ������ 2�� ������Ʈ (��������)
	SYS_HACKSHIELD,	// HackShield�ٽǵ�
	SYS_HACKSHIELD_PACKET,	// HackShield�ٽǵ� ��Ŷ ��ȣȭ
	SYS_SET_DEFENCE,	// ��Ʈ ��,ȭ��
	SYS_BATTLEFIELD,	// �ó�����3 �������� �ý���
	SYS_TOWER_CRASH,	// �ó�����3 �����ı�
	SYS_HONOR,
	SYS_LOAD_PROTECT,	// �ó�����3 ���ֺ�ȣ
	SYS_SHOWDOWN,		//	������ �ý���.

	SYS_END,
};

// Event Code
enum EVENT_CODE
{
	EVENT_DOUBLEEXP,	// 0
	EVENT_DICE,
	EVENT_MORA,
	EVENT_SPONSOR,
	EVENT_CHANGEFACE,
	EVENT_MLM,			// 5	// don't delete!!!
	EVENT_SNOW,
	EVENT_THXGIVING,
	EVENT_ANNUAL,		// ���ȭ 1�ֳ�
	EVENT_NEWSERVER,	// �� ���� ����
	EVENT_FISHING,		// ���ÿ� �̺�Ʈ...	��ҵ�. 
	EVENT_CRAFTSMAN,	// ������ ��� �̺�Ʈ
	EVENT_POWERUP,		//	���ݷ� ��.
	EVENT_EXPUP,		//	����ġ ��.
	EVENT_NAMCHEON,		// ��õ�� ���� �̺�Ʈ
	EVENT_SNOWFALL,		// �� ������ �̺�Ʈ (õ��Ÿ��) 
	EVENT_CHRISTMAS,	// ũ�������� �̺�Ʈ 16 
	EVENT_NEWACCOUNT,	// ���� ��õ �̺�Ʈ		17
	EVENT_SLEEPINGACCOUNT, // �޸� ���� ���� �̺�Ʈ	18

	EVENT_END,
};
// Event Mora			( ���������� �̺�Ʈ Ÿ�� )
enum EventMora
{
	// Mora
	MORA_KAWI,			//	����
	MORA_BAWI,			//	����
	MORA_BO,			//	��
	// C2S
	MORA_IS,			//	���������� ��������.
	MORA_MORA,			//	����������.
	// S2C
	MORA_TIME,			//	���������� ������ �ð�.
	MORA_NO_TIME,		//	���������� �Ұ����� �ð�.
	MORA_SHOW,			//	���߹����� ���.
	MORA_LEVEL_LIMIT,	//	���������� �Ұ����� ����.
};

// ��õ�� ���� �̺�Ʈ 
enum EventNamCheon
{
	NAMCHEON_REFRESH,	// ��� ����
	NAMCHEON_MOVE,		// �̵�
	NAMCHEON_MOVE_END,	// �̵� �Ϸ�
	NAMCHEON_MOVE_FAILED, // �̵� ����
	NAMCHEON_LOGOUT,	// �÷��̾� ������ ����
};

// Chatting Type
enum CHAT_TYPE
{
	CHAT_COMMON,
	CHAT_WHISPER,
	CHAT_PARTY,
	CHAT_GUILD,
};

// Base Attribute
enum ATTR
{
	ATTR_PLAYER = 1,
	ATTR_MONSTER,
	ATTR_NPC,
	ATTR_ITEM,
};

// NPC Kind
enum NPC_KIND
{
	NK_MERCHANT,
	NK_INFORMANT,
	NK_GUARD,
	NK_QUEST,
	NK_SCENARIO,
	NK_TELEPORT,
	NK_DOOR,
	NK_SIEGEGUNSTONE,
	NK_RETURNPOINT,
	NK_NEWDOOR,
	NK_BATTLEFIELD,
	NK_MERCHANT_HONOR,
	NK_BATTLEFIELD_DOOR,
};

// Effect Type
enum EFFECT_TYPE
{
	E_NONE,
	E_HP,
	E_MP,
	E_LEVELUP,
	E_CHARM_1,	 //��Ȱ�ֹ���
	E_CHARM_2,	 //����������ֹ���
	E_CHARM_3,     //���ذ������ֹ���
	E_CHARM_4,     //�������������ֹ���
	E_CHARM_5,     //����������ֹ���
	E_CHARM_6,     //ȸ��������ֹ���
	E_CHARM_7,     //��޿Ϻ��ѹ�����ֹ���
	E_CHARM_8,     //���ü��������ֹ���
	E_POTION_1,    //ȣ���̹��鹰��
	E_POTION_2,    //�������ǹ���
	E_POTION_3,    //�������ǹ���
	E_POTION_4,    //�����ǹ���
	E_POTION_5,    //�����������ǹ���
	E_FLUTE_1,	   //��ȥ�ǻ��Ǹ�,���Ǹ�
	E_STONE_1,     //��ȹ�ǵ�
	E_STONE_2,     //�����ǵ�
	E_STONE_3,     //�����ǵ�
	E_LUCKYKEY,
	E_LUCKSTONE,
	E_DAMAGED,
	E_PET_HP,			// �� HP����
	E_PET_MP,			// �� MP����
	E_PET_MINMAXATTACK,	// �� �ּ� ���ݷ�����
	E_PET_DEFENSE,		// �� ��������
	E_MOD2NDJOB,		// ������ ��
	E_UPPER_CHANCE_STONE,	// ��ȸ�� ��
	E_GUNNERY,
	E_MIX_FLAME,	// ȭ����		// ���սý���
	E_MIX_ICE,		// ������
	E_MIX_LIGHT,	// ���ڼ�
	E_MIX_POISON,	// ���
	E_MIX_PARAL,	// ����
	E_TOOHON,		// ������ - ������ȥ
};

// Wear State
enum WEAR_STATE
{
	WS_WEAPON,
	WS_SHIELD,
	WS_HELMET,
	WS_UPPERARMOR,
	WS_LOWERARMOR,
	WS_GAUNTLET,
	WS_BOOTS,
	WS_PET,

	WS_MIRROR,
	WS_TAEGEUK,
	WS_TRIGRAM1,
	WS_TRIGRAM2,
	WS_TRIGRAM3,
	WS_TRIGRAM4,
	WS_TRIGRAM5,
	WS_TRIGRAM6,
	WS_TRIGRAM7,
	WS_TRIGRAM8,

	WS_RING,
	WS_NECKLACE,
	WS_TRINKET,
	WS_TRANSFORM,
	WS_MASK,
	WS_2HANDWEAPON,
	WS_STANDARD,
};

// player Class
enum PLAYER_CLASS
{
	PC_KNIGHT,
	PC_MAGE,
	PC_ARCHER,
	PC_THIEF,
	//PC_ASSASSIN,
	//PC_TALISMAN,
	//PC_SPIRITKNIGHT,
	//PC_MONK,
};

// Item Class
enum ITEM_CLASS
{
	IC_WEAPON,
	IC_DEFENSE,
	IC_ORNAMENT,
	IC_GENERAL,
	IC_QUEST,
	IC_MONEY,
	IC_TRANSFORM,
	IC_PET, // =?,

	IC_YINYANG,
};

enum ITEM_SUBCLASS
{
	ISC_SWORD,
	ISC_WAND,
	ISC_BOW,
	ISC_SHIELD,
	ISC_HELMET,
	ISC_UPPERARMOR,
	ISC_LOWERARMOR,
	ISC_GAUNTLET,
	ISC_BOOTS,
	ISC_RING,
	ISC_NECKLACE,
	ISC_TRINKET,
	ISC_REFRESH,
	ISC_CHARM,
	ISC_GEM,
	ISC_ETC,
	ISC_COIN,
	ISC_COMMON,
	ISC_REPAIR,
	ISC_COCOON,
	ISC_MASK,
	ISC_SWORD2HAND,
	ISC_STANDARD,

	ISC_DAGGER = 27,
	ISC_FISH, // =?

	ISC_YINYANGMIRROR,
	ISC_TAEGEUK,
	ISC_TRIGRAM1,
	ISC_TRIGRAM2,
	ISC_TRIGRAM3,
	ISC_TRIGRAM4,
	ISC_TRIGRAM5,
	ISC_TRIGRAM6,
	ISC_TRIGRAM7,
	ISC_TRIGRAM8,

	ISC_EGG,
};

// Resist Type
enum RESIST_TYPE
{
	RT_FIRE,
	RT_ICE,
	RT_LITNING,
	RT_CURSE,
	RT_PALSY,
};

// Action
enum ACTION_TYPE
{
	AT_COMMON,
	AT_GENERAL,
	AT_MOVE,
	AT_REST,
	AT_ATTACK,
	AT_SKILL,
	AT_DEFENSE,
	AT_DAMAGE,
	AT_KNEE,
	AT_DIE,
	AT_BEHEADED,
	AT_STALL,
	AT_PRETRANSFORM,
	AT_TRANSFORM,
	AT_REMOVE,
};

// Character Kind
enum CHAR_KIND
{
	CK_PLAYER,
	CK_MONSTER,
	CK_NPC,
	CK_HORSE,
};

// Character Admin Level
enum AdminType
{
	A_USER,
	A_BLOCKED,
	A_RESERVED1,
	A_ADMIN,	// �׽�Ʈ��
	A_GM,	// Game Master	
	A_SUPERADMIN,	// ������
	A_GM2,			// ��� 2
	A_SUPERADMIN2,	// ������ 2
};

enum ANSWER
{
	ANS_ERROR,
	ANS_OK,
	ANS_MLMOK,
	ANS_ERROR_DISSOLUTION,
};

enum LOGIN_ANS
{
	LA_ERROR,
	LA_OK,
	LA_WRONGID,
	LA_WRONGPWD,
	LA_SAMEUSER,
	LA_BLOCKED,
	LA_EXPIRED,
	LA_AGELIMITED,
	LA_NOTPERMITTED,
	LA_LOGINLATER,

	LA_CREATE_SECONDARY=12,
};

enum NEWPLAYER_ANS
{
	NA_ERROR,
	NA_OK,
	NA_WRONGCLASS,
	NA_OVERPLAYERNUM,
	NA_OCCUPIEDID,
	NA_WRONGPROPERTY,
	NA_NOTAVAILABLE,
};

enum COPYPLAYER_ANS
{
	CP_ERROR,
	CP_OK,
	CP_VALIDNAME,
	CP_OVERPLAYERNUM,
	CP_OCCUPIEDNAME,
	CP_INVALIDSERVER,
	CP_INVALIDPLAYER,
	CP_BLOCKEDPLAYER,
};

enum CLOSE_CONNECT
{
	CC_NORMAL,
	CC_KICK,
	CC_SAMEPLAYER,
	CC_SAMEUSER,
	CC_HACK,
	CC_EXPIRED,
	CC_OVERPOPULATION,
	CC_ERROR,
	CC_RELOGINFORCOPYPLAYER,
	CC_RESTOREPLAYER,	// ĳ�� ���� �� �������ϱ����� ��������
	CC_WRONG_PROTOCOL_VERSION,
	CC_DETECTED_HACK,
	CC_CHECKING,
};

enum LOGIN_TYPE
{
	LT_DELETED = 1,
	LT_BLOCKED = 2,
	//	LT_NOTPERMITTED = 4,
	LT_FREE = 8,
	LT_FLATRATE = 16,
	LT_PRORATE = 32,
	//	LT_PFIXCOST = 64,
	//	LT_PFIXAMOUNT = 128,
	LT_HOST = 256,
	LT_PCBANG = 512,
	LT_BILLINGMASK = (LT_PRORATE | LT_FLATRATE),
	LT_AUTHMASK = (LT_FREE | LT_BILLINGMASK),
};

enum TYPE_MAINLOG
{
	TML_PLAYER,	// 0
	TML_DELETEITEM,
	TML_INSERTITEM,
	TML_UPDATEITEMPID,
	TML_UPDATEITEMNUM,
	TML_PUTINSTORAGE,
	TML_PUTOUTSTORAGE,
	TML_QUEST,
	TML_ACCOUNT,
	TML_ENCHANTITEM,
	TML_UPDATETRANSFORM,	// 10
	TML_ALLIANCE,
	TML_CASTLEWAR,
	TML_UPGRADEITEM,
	TML_MAIL,
	TML_STOREDPROC,	// �������ν�������
	TML_COPYPLAYER,	// �׼� �÷��̾� ����
};

enum TYTE_LOG					// A : Auth   D : DB
{
	TL_LOGIN,			// 0	// A
	TL_LOGOUT,					// A
	TL_CREATE,					// D ������ ���� ����
	TL_CREATE_CHEAT,			// D ������ ������ ����
	TL_DELETE,					// D ������ �ı�
	TL_UPDATEPID,				// D ������ ������ ��ȭ
	TL_UPDATENUM,				// D ������ ���� ��ȭ
	TL_BUY,						// D ������ ���
	TL_SELL,					// D ������ �ȱ�
	TL_USE,						// D ������ ���
	TL_TRADE,			// 10	// D ������ �ŷ�
	TL_DROP,					// D ������ ������
	TL_PICKUP,					// D ������ �ݱ�
	TL_PERMIT,					// A 
	TL_SKILLUP,					// D ��ų���� ��
	TL_STORAGE,					// D â��
	TL_QUEST,					// D ����Ʈ
	TL_SAVE_SP,					// D ��ų ����Ʈ
	TL_UPDATE_PRTY,				// D ���� ������Ʈ ����
	TL_BLOCK,					// A ���� ��
	TL_FREE,			// 20	// A ���� �� ����
	TL_CHARMING,				// D ���� ����
	TL_SETGEM,					// D �Ӽ��� �� ����
	TL_UPDATEEND,				// D ������
	TL_EVENT,					// D �̺�Ʈ ����
	TL_PARTYPICKUP,				// D ��Ƽ�� ������ ��й�
	TL_TRADEBYSTALL,			// D ����
	TL_CHANGEPREFIX,			// D ���λ� ��������
	TL_UPDATE_CHEAT,
	TL_EXPLEVEL,				// D 
	TL_SKILLREDISTRIBUTE,// 30	// D 
	TL_GUILD,					// D ������ ���
	TL_GUILD_EXP,				// D 
	TL_ALLIANCE_CREATE,			// D 
	TL_ALLIANCE_JOIN,			// D 
	TL_ALLIANCE_DELETE,			// D 
	TL_ALLIANCE_POSTPONE,		// D 
	TL_CASTLEWAR_ADD,			// D 
	TL_CASTLEWAR_END,			// D 
	TL_BLESS,					// D 
	TL_FORCEDIN,		// 40	// D ������ ���� �ڸ���
	TL_MLM,						// D 
	TL_BUYFORCEDIN,				// D ������ �����̿�
	TL_USEPAYITEM,				// D ��������� ���
	TL_UPDATEITEMINFO,			// D ������ ���
	TL_UPGRADE_DESTROY,			// D ������ ����
	TL_UPGRADE_RATE,			// D 
	TL_UPGRADE_LEVEL,			// D ����
	TL_MAIL_SEND,				// D ���� ����
	TL_MAIL_POSTAGEL,			// D �������� �� ��ݹ޴� ��
	TL_MAIL_ITEMSEND,	// 50	// D ����(������ ����)
	TL_MAIL_ITEMRECV,			// D ����(������ �ޱ�)
	TL_CHANGEFACE,				// D 
	TL_MOVEITEM,				// SQL �������ν��� (EXEC MoveItem PID, IID)
								// GETDATE(), nMainType=15, nType=53, nID1=PID, nID2=0, nIID= IID, nVal1=0, nVal2=0, nVal3=0, nVal4=0
	TL_HACKING,
	TL_BATTLEFIELD,				// �������
	TL_COPYPLAYER,				// �׼� �÷��̾� ���� 
	TL_COPYPLAYERITEM,				// �׼� �÷��̾� ����� ������ ���� 
	TL_CHANGEUSER,				// SQL �������ν��� (EXEC MoveItem PID, IID)
	TL_CHANGESERVER,				// SQL �������ν��� (EXEC MoveItem PID, IID)

};

enum PROPERTY_TYPE
{
	P_STR,	// 0
	P_HTH,
	P_INT,
	P_WIS,
	P_DEX,
	P_HP,
	P_MP,
	P_CURHP,
	P_CURMP,
	P_HIT,
	P_DODGE,	// 10
	P_MINATTACK,
	P_MAXATTACK,
	P_MINMAGIC,
	P_MAXMAGIC,
	P_DEFENSE,
	P_ABSORB,
	P_ASPEED,
	P_RESFIRE,
	P_RESICE,
	P_RESLITNING,	// 20
	P_RESCURSE,
	P_RESPALSY,
	P_PUPOINT,		// property upgrade point
	P_SUPOINT,	// skill upgrade point
	P_EXP,
	P_LEVEL,
	P_MINMAXATTACK,
	P_MINMAXMAGIC,
	P_RESISTALL,
	P_CONTRIBUTE,	// 30
	P_FATAL,
	P_MSPEED,
	P_BLOCK,
	P_HASTE,
	P_RAGE,
	P_MORTAL,
	P_HOST,	
	P_RANGE,
	P_MIX,
	P_CURHPR,		// 40
	P_CURMPR,


	P_PREFIX = 0xff,	// maximum
};

enum MESSAGE_TYPE
{
	MSG_SHUTDOWN_MIN,	// 0
	MSG_SHUTDOWN_SEC,
	MSG_SHUTDOWN_NOW,
	MSG_SHUTDOWN_CANCEL,
	MSG_INVALID_NAME,
	MSG_SAMEPLAYERONGAME,
	MSG_BLOCKEDPLAYER,
	MSG_FAILLOADPLAYER,
	MSG_NOTEXISTPLAYER,
	MSG_MOVEHACK,
	MSG_ALREADYPUTON,	// 10
	MSG_CANTDELPUTONITEM,
	MSG_CLASSLIMIT,
	MSG_CANTDROPPUTONITEM,
	MSG_DODGED,	// not use
	MSG_USERCOUNT,
	MSG_USERALLCOUNT,
	MSG_INVENISFULL,	// not use
	MSG_CURRENCY,
	MSG_DESTPLAYERONTRADE,
	MSG_NOTENOUGHPEERINVENSLOT,	// 20
	MSG_INVALID_ITEMLIST,
	MSG_TRADEAGREED,
	MSG_PRIORITYOFITEM,
	MSG_TOOFARFROMME,
	MSG_THEREISNOPLAYER,
	MSG_NEEDPUPOINT,
	MSG_NORIGHTOFPARTYHEAD,
	MSG_ASKJOINPARTY,
	MSG_JOINEDINPARTY,
	MSG_PARTYISFULL,	// 30
	MSG_JOINEDINOTHERPARTY,
	MSG_LEFTPARTY,
	MSG_EXILEDFROMPARTY,
	MSG_REJECTJOINPARTY,
	MSG_BECOMEPARTYHEAD,
	MSG_ENDPARTY,
	MSG_OFFLINE_OUTOFRANGE,
	MSG_SPECIALTYUP,
	MSG_NOTENOUGHSTORSLOT,
	MSG_NOTENOUGHINVENSLOT,	// 40
	MSG_SAVEDREVIVALPT,
	MSG_PARTYMEMGETITEM,
	MSG_EVENTRESULT,
	MSG_FISH_PROGRESS,					//	��������� ���۸޼���.
	MSG_SOLDOUT_SITEM,
	MSG_NOTENOUGH_SITEM,
	MSG_CANTBUY_SITEM,
	MSG_CHANGEDSTALLINFO,
	MSG_COOKING_PROGRESS,				//	�丮����� ���۸޼���.
	MSG_ALREADYENDEDSTALL,				//	50
	MSG_COOKING_SCARCE_MATERIALS,		//	�丮�� ������ �������� �ʽ��ϴ�.
	MSG_CANTPUTONSTALLITEM,
	MSG_ASKREVIVAL,
	MSG_ENCHANTFAILED,
	MSG_GIG_FAIL,						//	�ۻ� ���ÿ� �����߽��ϴ�.
	MSG_REALTIMEEVENT,					//	�ǽð��̺�Ʈ ġƮ ����.
	MSG_REALTIMEEVENT_START,			//	�ǽð��̺�Ʈ ���۸޼���
	MSG_REALTIMEEVENT_END,				//	�ǽð��̺�Ʈ ����޼���
	MSG_DONEINITSTAT,
	MSG_NOTREADYTOTRADE,	// 60
	MSG_NOTREADYTOPARTY,
	MSG_NOTREADYTOPVP,
	MSG_OFFLINE_OUTOFPVPRANGE,
	MSG_REJECTPVP,
	MSG_ONPVP,
	MSG_NOTENOUGHRAGE,
	MSG_NOTTRANSFORMAREA,
	MSG_INVALIDTILE,
	MSG_TAXRATE,
	MSG_INFOSYS,            // 70
	MSG_REVIVAL_FAIL,
	MSG_CHANT_ALREADYUSE,
	MSG_MLMLOGIN,
	MSG_ADDBSTATE,
	MSG_SUBBSTATE,
	MSG_CANTSAVEREVIVALPT,
	MSG_NOTTRANSFORMBYFLAG,	// ��������� �а��Ұ�
	MSG_CANTDROPFLAG,	// ��� Drop �Ұ�
	MSG_PUTOFFAFTER10SEC,	// ��������� 10�ʰ� ����Ұ�
	MSG_MYTELEPORTERROR,	// 80
	MSG_UPGRADELEVELSUBMONEY, //������׷��̵� ������
	MSG_UPGRADELEVELDESTORY,  //������׷��̵� ġ�������з� �ı�
	MSG_FRD,  //ģ��
	MSG_NOTSTALLATCASTLE,
	MSG_MAIL,
	MSG_ITEMMONSTERUSED,		// �������� : �ٸ� ����� ������Դϴ�
	MSG_ITEMMONSTEROPEN,		// �������� : �������ڸ� ���� �ֽ��ϴ�
	MSG_ITEMMONSTEROPENED,		// �������� : �������ڰ� ���Ƚ��ϴ�
	MSG_ITEMMONSTERCANCELED,	// �������� : �������� ���Ⱑ ��ҵǾ����ϴ�
	MSG_LUCKYBLOW,				// ����� �ϰ� + "b", nLBLevel	// 90
	MSG_ALREADYMIRRORSET,
	MSG_NOMIRROR,
	MSG_MIRRORSET,
	MSG_MIRRORBROKEN,
	MSG_TB_CREATE0,
	MSG_TB_CREATE1,
	MSG_TB_CREATE2,
	MSG_TB_CREATE3,
	MSG_TB_CREATE4,
	MSG_CHANGENAME,	// 100
	MSG_SKILLBUFFALREADYUSE,
	MSG_ALREADYCHANGEDFACE,
	MSG_FAIL_DELETEGUILDMASTER,
	MSG_INSUFFICIENTITEM,
	MSG_REMAINTIME,
	MSG_INIT_2ND_JOB,			// ������ ��, "bb" 0 : �Ϸ�,  1 : ����
	MSG_BILLINGEXTENDED,
	MSG_BILLINGTYPECHANGED,
	MSG_NOMOREPUTON,
	MSG_UPPER_CHANCE_STONE,	// 110	// ��ޱ�ȸ�� ��, "bb" 0 : �Ϸ�,  1 : ����
	MSG_EX_GEUMJUN_JAMOJUN,		// "bb"	0:��������, 1:�ڸ�������, 2:��������, 3:��ȯ����
	MSG_EVENT_LIMIT,	// �̺�Ʈ ����� �ƴ�
	MSG_ITEMDROP,		// "bbw"	b:����� ��ü 0->��� , w:ItemIndex
	MSG_EXISTPARTYONPK,		// ��Ƽ�� �ڰ��� �־� �̵��Ұ�
	MSG_NODOORKEY,	//���谡 �����ϴ�	//"w" ����index
	MGS_DOOROPEN,	//***(���̸�)�� �����ϴ�.	//"w" NPC ID
	MGS_DOORCLOSE,	//***(���̸�)�� �����ϴ�.	//"w" NPC ID
	//MSG_SIEGEGUN					//���� ���� ���� �޼���
	MSG_SIEGEGUNSETCANCEL,			//��ġ�� ��� �Ǿ����ϴ�. 
	MSG_SIEGEGUNIMPOSSIBLE,			//���� ��ġ�� �Ұ��� �մϴ�. 
	MSG_SIEGEGUNUSED,		// 120	//�̹� �ٸ� ����� ��ġ ���Դϴ�. 
	MSG_SIEGEGUNUNSETUSED,			//�̹� �ٸ� ����� ��ü ���Դϴ�.
	MSG_SIEGEGUNSETCLASS,			//���� 1��޸� ��ġ�� �����մϴ�. 
	MSG_SIEGEGUNCONDITION,			//��ᰡ �����մϴ�. 

	MSG_SIEGEGUNDIFFERNT,			//�ٸ� ���� ���� �����Դϴ�. 
	MSG_SIEGEGUNHANDLING,			//�̹� �ٸ� ����� ���� ���Դϴ�. 
	
	MSG_SIEGEGUNREMOVECLASS,		//���� 1��� �� ��ü �Ҽ� �ֽ��ϴ�. 
	MSG_SIEGEGUNREMOVEHANDLING,		//�ٸ� ����� ���� ���̶� ��ü �Ҽ� �����ϴ�. 
	MSG_SIEGEGUNREMOVECANCEL,		//��ü�� ��� �Ǿ����ϴ�. 

	MSG_SIEGEGUNSET,				//�̹� ���� ���Ⱑ ��ġ�Ǿ� �ֽ��ϴ�
	MSG_SIEGEGUNNOSKILL,			//���� ���� ���� ��ų�� �ʿ��մϴ�.
	//130
	MSG_SIEGEGUNGUILD,				//�ٸ� ���� �̹� "%s"���� ���� ���Ⱑ �����մϴ�.   "s", szGuildName	//130
	MSG_SIEGEGUNUNSETIMPOSSIBLE,	//���� ��ü�� �Ұ��� �մϴ�. 
	MSG_SIEGEGUNNOTGUILD,			//�ٸ����� ����� ��ü�� �� �����ϴ�.
	MSG_SIEGEGUNNORELATION,			//������ �����ϴ� �ο� �� ���ͺθ� ��ġ�� �����մϴ�.
	MSG_CANTSIEGEITEMUSE,			// "%s"�������� �������� ���۵Ǿ�� ����� �����մϴ�.
	MSG_LONGRESTUSER,				// �޸�����
	MSG_RETURNCOOLTIME,				// �����̵��� ���� ���� �ð��� "%d"�� ���ҽ��ϴ�. w:���� �ð�(�д���)
	MSG_MIXING,						// "b"	0:�����ۺ���/1:���ս���
	MSG_TOOHONBOSSPOP,				// ��ȥ�̺�Ʈ ������(����) ��
	//140
	MSG_FIREBALL,					// "b" 0:��������, 1 ���� ����, 2 �������ƴ� HWC
	MSG_PLAYTIMEWARNING,			// �÷��̽ð� 1�ð� ����� ���
	MGS_NEWDOOROPEN,	//***(���̸�)�� �����ϴ�.	//"w" NPC ID
	MGS_NEWDOORCLOSE,	//***(���̸�)�� �����ϴ�.	//"w" NPC ID
	MSG_EVENT_NOTLEVEL,	// ���� �̴�
	MSG_EVENT_FULL,		// ������ ����
	MSG_EVENT_RECEIVE,	// �̹� ����
	MSG_LIMIT_BATTLEFIELD,			// ���� �������϶����� �Ұ����մϴ�.
	MSG_BATTLEINPARTY,		// ��Ƽ�� �������� �ο��� �־� �̵��Ұ�
	MSG_NOPARTYWITHENEMY,			// ���� �������϶����� ������ ��Ƽ�� �Ұ��� �մϴ�.
	//150
	MSG_EVENT_SNOWFALL, // õ��Ÿ�� �̺�Ʈ ������ 1000�� ����� ���̳�����
	MSG_ADDBSTATEX,					// 
	MSG_HONORPOINT,			//"ds" ����, ĳ���̸�
	MSG_BEFOREWARREMAINSEC,			// "bd"	b:�������� (1:�����ı� 2:���ֺ�ȣ..) d:���� ��

	MSG_PRAYUSED,		// ����ǻ� : �ٸ� �÷��̾ �̹� ĳ���� ��.
	MSG_PRAYOPEN,		// ����ǻ� : ĳ���� ��.
	MSG_PRAYOPENED,		// ����ǻ� : ĳ���� �Ϸ�.
	MSG_PRAYCANCELED,	// ����ǻ� : ĳ���� ��� 
	MSG_PRAYALREADY,    // ����ǻ� : ������� �̹� ��� ����.
	MSG_PRAYSTATENOTUSE, // ������� ������ ��� X
	MSG_REVIVALITEMNOTUSE, // ���ְ� ��Ȱ �������� ����Ϸ� �Ҷ�. 
	MSG_REVIVALSKILLNOTUSE,	// ��Ȱ ��ų ���� ����� ���ֺ�ȣ�� �������� ���� �϶�.
};

// ���� ���.
enum GUILD_MEMBER_CLASS { 
	GUILD_LEADER = 1, 
	GUILD_SUBLEADER,
	GUILD_CENTURION,
	GUILD_TEN,
	GUILD_REGULAR,
	GUILD_TEMP,
	GUILD_CONSENT,
	GUILD_CONSENT_WAIT,
};

// ������ų.
enum GUILD_SKILL {
	GUILD_CONFLUX,			// �շ�.
	GUILD_BANISH,			// �߹�.
	GUILD_NOTICE,			// ����.
	GUILD_APPOINTMENT,		// �Ӹ�.
	GUILD_TITLE,			// ������.
};

#define GUILD_SUBLEADER_DEFAULT_SKILL	(1<<GUILD_CONFLUX) + (1<<GUILD_BANISH)
#define GUILD_CENTURION_DEFAULT_SKILL	(1<<GUILD_CONFLUX)
#define GUILD_TEN_DEFAULT_SKILL			(1<<GUILD_CONFLUX)
#define GUILD_REGULAR_DEFAULT_SKILL		0
#define GUILD_TEMP_DEFAULT_SKILL		0


enum GUILD_TYPE
{
	G_MSG,								// �޼���.(��������...)
	G_CREATE_TRIAL,						// ������ ����.
	G_CREATE_CONSENT,					// ��� ����â.
	G_CREATE_CONSENT_ANSWER,			// ��� ���� ���� ����.
	G_CREATE_CONSENT_COMPLET,			// ������ ���Ǽ� �Ϸ�.
	G_CREATE_GUILDNAME,					// ������ �̸�����.
	G_MEMBERINFO,						// ���� ����.
	G_ADMININFO,						// ������â.
	G_BASICINFO,						// ���⺻â.
	G_VIEW,								// ��� �̸��� ������ ���̴�/�Ⱥ��̴�
	G_SECESSION,						// ���Ż��.
	G_TODAYMESSAGE,						// ������
	G_EXPADD,							// ������ġ�߰�
	G_SETSKILLABLE,						// ����޺� ��ų ��.
	G_CONFLUX,							// ����շ�â
	G_CONFLUX_ANSWER,					// ����շ� ����.
	G_DISSOLUTION,						// ��� ��ü.
	G_ALLIANCEINFO,						// ���� ����.
	G_ALLIANCEANSWER,					// ���� ��û ����.
	G_WAR_DECLARE,						// ���� ����.
	G_WAR_DECLARE_LIST,					// ���� ����&���� ��� ����Ʈ.
	G_WAR_UNFURL,						// ������ ��� �����.
	G_WAR_UNFURL_CANCEL,				// ������ ��� ����� ���.
	G_CASTLEINFO,						// �� ���� ����.
	G_TAX_RATE_CONTROL,					// �� ���� ����.
	G_CASTLEGATENPC,					// �� NPC portal
	G_CASTLEGATE_SETLIMIT,				// ���� NPC ������� ��.
	G_TAX_LEVY,							// ���� ¡��.
	G_CHECK_STANDARD,				// �������� ����� Ȯ��
	G_SET_STANDARD,			// ����� ����
};

enum GUILD_MSG
{
	GMSG_CONTINUE,
	GMSG_ERROR,
	GMSG_CONNECT,						// �������� �����Ͽ����ϴ�.
	GMSG_DISCONNECT,					// �������� ������ �������ϴ�.
	GMSG_NOMEMBER,						// ������ �ƴմϴ�.
	GMSG_TODAYMESSAGE,					// ���޼����� ������.(������ ������:��������~~~)
	GMSG_DATE_LIMIT,					// �������� **/**/** **:** �� ������ ����շ��� �������� �����մϴ�.
	GMSG_CREATE_LEVEL_LIMIT,			// ������ ������ �����մϴ�.
	GMSG_CREATE_MONEY_LIMIT,			// ������ ����� �����մϴ�.
	GMSG_CREATE_POINT_LIMIT,			// ������ ���嵵�� �����մϴ�.
	GMSG_CREATE_NOPARTY,				// �������ô� ��Ƽ�� �����Ǿ� �մϴ�.
	GMSG_CREATE_NOHEAD,					// �δ� ���� ������ �常�� ������ �� �ֽ��ϴ�. ���� ����� ������ ���� �ƴմϴ�.
	GMSG_CREATE_NOFULLPARTY,			// �ּ� 6���� ������ ã�ƿ;� ���� ������ �����մϴ�.
	GMSG_CREATE_ALREADYMEMBER,			// ���� ������ �� �������� �̹� �ٸ� �ο� �Ҽӵǰų� ���������̱� ������ ���� ������ �Ұ����մϴ�
	GMSG_CREATE_CONSENTWAIT,			// (�ӽñ������� ���Ǹ� ��ٸ���.)
	GMSG_CREATE_ALREADYCANCEL,			// �̹� �������� ��҉���ϴ�.
	GMSG_CREATE_ALREADYCONSENT,			// �̹� ��嵿�Ǹ� �߽��ϴ�.
	GMSG_CREATE_CONSENT,				// ������ �����մϴ�/�������� �ʽ��ϴ�.
	GMSG_CREATE_INVALID_NAME,			// ����� ������ ����̸��Դϴ�.
	GMSG_CREATE_SAMENAME,				// �̹� ����ϰ� �ִ� ���� �̸��Դϴ�. �ٽ� �������ּ���.
	GMSG_CREATE_NOT_ALLCONSENT,			// ��� ���Ǽ��� �Ϸ���� �ʾҽ��ϴ�.
	GMSG_CREATE_COMPLET,				// ������尡 �Ἲ�Ǿ����ϴ�.
	GMSG_LACK_SKILL,					// ������ �����ϴ�.
	GMSG_CONFLUX_TEMPMEMBERFULL,		// �ӽñ������� �� �̻� ���� �� �����ϴ�.
	GMSG_CONFLUX_DISCONNECT,			// �������� �ʰų� ���� �÷��̾��Դϴ�.
	GMSG_CONFLUX_ALREADYMEMBER,			// ��� �÷��̾�� �̹� �ٸ� �ο� �Ҽӵǰų� ������ �������Դϴ�.
	GMSG_CONFLUX_OFFER_DISCONNECT,		// ���Խ�û�� �÷��̾ �����ӻ����Դϴ�.
	GMSG_CONFLUX_SENDOK,				// �����Կ��� �� ������ �����Ͽ����ϴ�.
	GMSG_CONFLUX_CANCEL,				// �����Բ��� ����� �� ���� ������ �����ϼ̽��ϴ�.
	GMSG_CONFLUX_U_ALREADYMEMBER,		// ����� �̹� �ٸ� �ο� �Ҽӵǰų� ������ �������Դϴ�.
	GMSG_CONFLUX_COMPLET,				// ��忡 �շ��Ǿ����ϴ�.
	GMSG_SECESSION_LEADER,				// �渶�� Ż���� �� �����ϴ�.
	GMSG_SECESSION,						// �������� ��忡�� Ż���Ͽ����ϴ�.
	GMSG_SECESSION_COMPLET,				// ��� Ż�� �Ǿ����ϴ�.
	GMSG_BANISH_LEADER,					// �渶�� �߹��� �� �����ϴ�.
	GMSG_BANISH,						// �������� ��忡�� �߹���߽��ϴ�.
	GMSG_BANISH_COMPLET,				// �߹��� �Ǿ����ϴ�.
	GMSG_APPOINTMENT_LEADER,			// �渶�� ������ �ٲܼ��� �Ӹ��Ҽ��� �����ϴ�.
	GMSG_APPOINTMENT_FULL,				// �� �̻� �Ӹ��� �� ���� �����Դϴ�.
	GMSG_SUBLEADER_DATE_LIMIT,			// �α渶�� ??/??/?? ??:?? ���Ŀ� �Ӹ��� �����մϴ�.
	GMSG_APPOINTMENT_MEMBERFULL,		// ����ο��� ����ã���ϴ�.
	GMSG_APPOINTMENT_SAMECLASS,			// �Ӹ��ҷ��� ���ް� ������ ������ �����ϴ�.
	GMSG_APPOINTMENT_COMPLET,			// �Ӹ��� �Ǿ����ϴ�.
	GMSG_DISSOLUTION,					// ��尡 ��ü�Ǿ����ϴ�.
	GMSG_DISSOLUTION_COMPLET,			// ��尡 ��ü �Ϸ�Ǿ����ϴ�.
	GMSG_TITLE_INVALID,					// ����� �� ���� ��Ī�Դϴ�.
	GMSG_TITLE_COMPLET,					// ��Ī ������ �Ϸ�Ǿ����ϴ�.
	GMSG_SETSKILL_COMPLET,				// ��� ������� ������ �Ϸ�Ǿ����ϴ�.
	GMSG_SETSTANDARD_COMPLET,			// ��� ���� ������ �Ϸ�Ǿ����ϴ�.
	GMSG_SETCONNECTTELL_SAME,			// ���ӿ��� �������� ����� �����ϴ�.
	GMSG_SETCONNECTTELL_COMPLET,		// ���ӿ��� ���� ������ �Ϸ�Ǿ����ϴ�.
	GMSG_HAVE_NO_EXP,					// ���� ����ġ�� �����ϴ�.
	GMSG_EXPADD,						// ���� ����ġ�� �����߽��ϴ�.
	GMSG_EXPFULL,						// �ΰ���ġ�� ���̻� ���� �� �� �����ϴ�
	GMSG_MEMBERLEVELUP,					// ��� �������� �����鿡�� �˸���.
	GMSG_UNKNOWN_CLASS,					// �� �� ���� ���޸��Դϴ�.
	GMSG_GUILDNOTICE_INVALID,			// ���������� Ư�����ڸ� ����� �� �����ϴ�.

	GMSG_SKILL_LEVEL_LIMIT,				// ��巹���� �����մϴ�.
	GMSG_ALLIANCE_U_ALREADY,			// ���ͽ�û�� �񵿸����̰ų� �����Ǹ��ֿ��� �մϴ�.
	GMSG_ALLIANCE_INVALID_DATE,			// ���ͽ�û�� 1�ϰ� 15�ϻ��̿��� �մϴ�.
	GMSG_ALLIANCE_DISCONNECT,			// �������� �ʴ� �ΰų� ���ְ� ���������� �ʽ��ϴ�.
	GMSG_ALLIANCE_ALREADY,				// �̹� �������Դϴ�.
	GMSG_ALLIANCE_OFFER,				// �����ΰ� ����/����/���� ����:���� ���� ������ ��û�߽��ϴ�. �����ҷ�?
	GMSG_ALLIANCE_OFFER_SEND,			// �����ο��� ������ ��û�߽��ϴ�.
	GMSG_ALLIANCE_FULL,					// �� �̻� ������ �� ���� �����ϴ�.
	GMSG_ALLIANCE_COMPLET,				// �����δ� �������� ���Ϳ� ����/����/���� ����:���� ������ ���Ϳ� �����߽��ϴ�.
	GMSG_ALLIANCE_CANCEL,				// �����δ� ������ �����߽��ϴ�.
	GMSG_ALLIANCE_EXPIRE,				// ���� �Ⱓ�� ����Ǿ����ϴ�.
	GMSG_ALLIANCE_NO_PERIOD,			// ���ͽ�û�� �� �� ���� �Ⱓ�Դϴ�.
	GMSG_ALLIANCE_POSTPONE,				// �������� ������ ���ͱⰣ�� ���������̹Ƿ� ����/����/���� ����:���� ���� ����˴ϴ�.

	GMSG_WARDECLARE_NO_PERIOD,			// ������ ��û�Ⱓ�� �ƴմϴ�.
	GMSG_WARDECLARE_NO_LEADER,			// ���ͽô� ���ָ��� �������� ��û�� �� �ֽ��ϴ�.
	GMSG_WARDECLARE_LORD,				// ����� ���Դϴ�.
	GMSG_WARDECLARE_ALLIANCE,			// ���ֿ� ���Ͱ����Դϴ�.
	GMSG_WARDECLARE_MONEY_LIMIT,		// ������ ����� �����մϴ�.
	GMSG_WARDECLARE_ALREADYDECLARE,		// �̹� �������� �����Ͽ����ϴ�.
	GMSG_WARDECLARE,					// �����ΰ� �������� �������� �����߽��ϴ�.
	GMSG_WARDECLARE_COUNT_OVER,			// �� �̻� ������ ��û�� ���� �� �����ϴ�.

	GMSG_WARBEGIN,						// �������� �������� ���ۉ���ϴ�.
	GMSG_WAREND_WIN,					// �������� �������� �¸��Ͽ����ϴ�.
	GMSG_WAREND_LOSE,					// �������� �������� ���Ͽ����ϴ�.
	GMSG_WARUNFURL_NO_DECLARE,			// �������� ������ ���� �ƴմϴ�.
	GMSG_WARUNFURL_ALREADY,				// �̹� �⸦ ����� ���Դϴ�.
	GMSG_WARUNFURL_STANDARDLIVE,		// ����� �ı��Ǳ� ������ ��ġ�� �� �����ϴ�.
	GMSG_WAR_UNFURLSTANDARD_BEGIN,		// �⸦ ����� ����.
	GMSG_WAR_UNFUELCOMPLET,				// XXX �ΰ� XXX ���� ����� ��ġ�Ͽ����ϴ�.

	GMSG_TAX_NO_LORD,					// ���ְ� �ƴմϴ�.
	GMSG_TAX_DEVIATE,					// �������� ������ ������ϴ�.
	GMSG_TAX_SET_RATE_COMPLET,			// ���������� �Ϸ����ϴ�.

	GMSG_GATE_LIMIT,					// �̵��� �� �����ϴ�.
	GMSG_SET_GATELIMIT_COMPLET,			// ���� ���� ������ �Ϸ�Ǿ����ϴ�.

	GMSG_WAR_NOPERIOD,					// ���������� �ƴմϴ�.
	GMSG_WAR_NO_LEADER,					// ������ ���ְ� �ƴմϴ�.
	GMSG_WAR_NO_RELATION,				// �������� ������ ���� �����Դϴ�.
	GMSG_CONFLUX_NOPERIOD,				// �� ���� ������ �������� ���� Ȥ�� ���������� ���� ���� �δ� �������Ⱓ, ������ �غ�Ⱓ���� �� �� �����ϴ�.
	GMSG_WARUNFURL_U_ALREADY,			// �ٸ� �ΰ� ���� ����� ��ġ�ϴ� ���Դϴ�. ������ ��ġ�� �� �����ϴ�.

	GMSG_GATE_LIMIT_GUILD,				// ���� ������ ���� �������� ����� �� �ֽ��ϴ�.
	GMSG_GATE_LIMIT_ALLIANCE,			// ���� ������ ���� �������� ���� ���� �������� ����� �� �ֽ��ϴ�

	GMSG_WAR_BROKEN_STANDARD,			// XXX���� XXX ���� ����� �ı� �Ǿ����ϴ� bbdsb
	GMSG_WAR_BROKEN_GATE,				// XXX���� ���� ������ �ı� �Ǿ����ϴ�
	GMSG_WAR_TIME,						// ������ ����ð��� ����(��/��) ���ҽ��ϴ�.
	GMSG_TAX_LEVY,						// ������ ??�� ¡���Ǿ����ϴ�.
	GMSG_SETSTANDARD_FAILED,		// �� ���� �ߺ� (���� ���� ����)
	GMSG_SETSTANDARD_FAILEDBYLEVEL,		// ���� ��巹�� ����
	GMSG_WAR_LORDDECLARE_TIME,			// ���ּ����� �ð�	bbbb
	GMSG_WAR_EXTENDED_TIME,				// ������ ����			bb
	GMSG_WAR_CHANGELORD,				// ���ְ� �ٲ�����ϴ�. bbds
	GMSG_DISSOLUTION_FAIL,			// ���� ������ �γ� �������� ��û�� �δ� ��ü�� �� �� �����ϴ�.
	GMSG_DISSOLUTION_FAIL_BATTLE,			// ���������� ��û�� �δ� ��ü�� �� �� �����ϴ�.
	GMSG_SECESSION_FAIL_BATTLE,			// ������������Ʈ�� ��ϵ� ������ Ż�� �Ұ����մϴ�.
};

enum PK_MSG
{
	PKMSG_ONPK,                         //b  1����� �ڰ� ���°� �Ǿ����ϴ�.
	PKMSG_ONPKAROUND,                   //b  1��ó�� �������� Ż�� ����ϰ� �ֽ��ϴ�.
	PKMSG_ONPKDIE,                      //b  1����� �ڰ� ���¿��� ������ ���Ͽ����ϴ�.
	PKMSG_PKDIE,                        //bd 1����� �ڰ� XXX���� ������ ���Ͽ����ϴ�.
	PKMSG_OFFPK,                        //b  1����� �ڰ� ���¸� �����Ͽ����ϴ�.
	PKMSG_ONPKKILL,                     //bd 1����� �ڰ� XXX �� ô���Ͽ� �׸��� ������ϴ�. ����� ������ �濡 ���� �˴ϴ�.
	PKMSG_LIMIT_OFFPKTICK,              //b  1�ڰ� ���´� ���� �� 1�ð�, Ȥ�� ������ ���� �� 180�� ���� ���º����� �Ҽ� �����ϴ�.	
	PKMSG_LIMIT_TRADESELF,              //b  1�ڰ� ���¿����� �ٸ� ������� �ŷ��� ��û�� �� �����ϴ�. ���� �ڰ� ���¸� �����ؾ� �մϴ�. 
	PKMSG_LIMIT_TRADEOTHER,             //b  1�ڰ� ������ ��󿡰Դ� �ŷ��� �Ұ����մϴ�.
};

enum SL_SECONDARY_LOGIN
{
	SL_CREATE_PASSWORD=1,
	SL_LOGIN=0,
	SL_CHANGE_PASSWORD=2,
	SL_RESULT_MSG=3,
};

enum MSL_SECONDARY_MSG
{
	MSL_NONE,
	MSL_WRONG_PWD,
	MSL_PWD_8_DIGIT_NUMBER=3,
	MSL_BLOCK,
	MSL_ALREADY_PWD,
	MSL_CREATE_PWD,
	MSL_SUCCESS,
};

enum MOVE_TYPE
{
	MOVE_ON,
	MOVE_STOP,
};

enum ITEM_FIND_OWNERSHIP
{
	IFO_ANY,
	IFO_MUSTOWN,
	IFO_CANTOWN,
};

#endif
