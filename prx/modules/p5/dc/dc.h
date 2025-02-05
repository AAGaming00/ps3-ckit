#ifdef GAME_P5
#ifndef DC_H
#define DC_H

void dcInit( void );
void dcShutdown( void );


// PS3 system includes
#include "lib/common.h"
#include "lib/shk.h"

#include "modules/p5/p5.h"

typedef struct btlUnitList6
{
    btlUnit_Unit* EnemyBtlUnit[6];
}btlUnitList6;


typedef struct 
{
    u32 field00;
    btlUnit_Unit* field04;
} EnemyPersonaFunctionStruct3;

typedef struct
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    EnemyPersonaFunctionStruct3* field18;
} EnemyPersonaFunctionStruct2;

typedef struct
{
    u32 field00;
    u32 field04;
    u32 field08;
    EnemyPersonaFunctionStruct2* field0c;
} EnemyPersonaFunctionStruct1;

typedef struct EncounterFuncStruct
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 field1c;
    u32 field20;
    u32 field24;
    u32 field28;
    u32 field2c;
    u32 field30;
    u32 field34;
    u32 field38;
    u32 field3c;
    u32 field40;
    u32 field44;
    u32 field48;
    u32 field4c;
    u32 field50;
    u32 field54;
    u32 field58;
    u32 field5c;
    u32 field60;
    u32 field64;
    u32 field68;
    u32 field6c;
    u32 field70;
    u32 field74;
    u32 field78;
    u32 field7c;
    u32 field80;
    u32 field84;
    u32 field88;
    u32 field8c;
    u32 field90;
    u32 field94;
    u32 field98;
    u32 field9c;
    u32 fielda0;
    u32 fielda4;
    u32 fielda8;
    u32 fieldac;
    u32 fieldb0;
    u32 fieldb4;
    u32 fieldb8;
    u32 fieldbc;
    u32 fieldc0;
    u32 fieldc4;
    u32 fieldc8;
    u32 fieldcc;
    u32 fieldd0;
    u32 fieldd4;
    u32 fieldd8;
    u32 fielddc;
    u32 fielde0;
    u32 fielde4;
    u32 fielde8;
    u32 fieldec;
    u32 fieldf0;
    u32 fieldf4;
    u32 fieldf8;
    u32 fieldfc;
    u32 field100;
    u32 field104;
    u32 field108;
    u32 field10c;
    u32 field110;
    u32 field114;
    u32 field118;
    u32 field11c;
    u32 field120;
    u32 field124;
    u32 encounterIDLocal;
    u32 field12c;
    u32 field130;
    u32 field134;
    u32 field138;
    u32 field13c;
    u32 field140;
    u32 field144;
    u32 field148;
    u32 field14c;
    u32 field150;
    u32 field154;
    u32 field158;
    u32 field15c;
    u32 field160;
    u32 field164;
    u32 field168;
    u32 field16c;
    u32 field170;
    u32 field174;
    u32 field178;
    u32 field17c;
    u32 field180;
    u32 field184;
    u32 field188;
    u32 field18c;
    u32 field190;
    u32 field194;
    u32 field198;
    u32 field19c;
    u32 field1a0;
    u32 field1a4;
    u32 field1a8;
    u32 field1ac;
    u32 field1b0;
    u32 field1b4;
    u32 field1b8;
    u32 field1bc;
    u32 field1c0;
    u32 field1c4;
    u32 field1c8;
    u32 field1cc;
    u32 field1d0;
    u32 field1d4;
    u32 field1d8;
    u32 field1dc;
    u32 field1e0;
    u32 field1e4;
    u32 field1e8;
    u32 field1ec;
    u32 field1f0;
    u32 field1f4;
    u32 field1f8;
    u32 field1fc;
    u32 field200;
    u32 field204;
    u32 field208;
    u32 field20c;
    u32 field210;
    u32 field214;
    u32 field218;
    u32 field21c;
    u32 field220;
    u32 field224;
    u32 field228;
    u32 field22c;
    u32 field230;
    u32 field234;
    u32 field238;
    u32 field23c;
    u32 field240;
    u32 field244;
    u32 field248;
    u32 field24c;
    u32 field250;
    u32 field254;
    u32 field258;
    u32 field25c;
    u32 field260;
    u32 field264;
    u32 field268;
    u32 field26c;
    u32 field270;
    u32 field274;
    u32 field278;
    u32 field27c;
    u32 field280;
    u32 field284;
    u32 field288;
    u32 field28c;
    u32 field290;
    u32 field294;
    u32 field298;
    u32 field29c;
    u32 field2a0;
    u32 field2a4;
    u32 field2a8;
    u32 field2ac;
    u32 field2b0;
    u32 field2b4;
    u32 field2b8;
    u32 field2bc;
    u32 field2c0;
    u32 field2c4;
    u32 field2c8;
    u32 field2cc;
    u32 field2d0;
    u32 field2d4;
    u32 field2d8;
    u32 field2dc;
    u32 field2e0;
    u32 field2e4;
    u32 field2e8;
    u32 field2ec;
    u32 field2f0;
    u32 field2f4;
    u32 field2f8;
    u32 field2fc;
    u32 field300;
    u32 field304;
    u32 field308;
    u32 field30c;
    u32 field310;
    u32 field314;
    u32 field318;
    u32 field31c;
    u32 field320;
    u32 field324;
    u32 field328;
    u32 field32c;
    u32 field330;
    u32 field334;
    u32 field338;
    u32 field33c;
    u32 field340;
    u32 field344;
    u32 field348;
    u32 field34c;
    u32 field350;
    u32 field354;
    u32 field358;
    u32 field35c;
    u32 field360;
    u32 field364;
    u32 field368;
    u32 field36c;
    u32 field370;
    u32 field374;
    u32 field378;
    u32 field37c;
    u32 field380;
    u32 field384;
    u32 field388;
    u32 field38c;
    u32 field390;
    u32 field394;
    u32 field398;
    u32 field39c;
    u32 field3a0;
    u32 field3a4;
    u32 field3a8;
    u32 field3ac;
    u32 field3b0;
    u32 field3b4;
    u32 field3b8;
    u32 field3bc;
    u32 field3c0;
    u32 field3c4;
    u32 field3c8;
    u32 field3cc;
    u32 field3d0;
    u32 field3d4;
    u32 field3d8;
    u32 field3dc;
    u32 field3e0;
    u32 field3e4;
    u32 field3e8;
    u32 field3ec;
    u32 field3f0;
    u32 field3f4;
    u32 field3f8;
    u32 field3fc;
    u32 field400;
    u32 field404;
    u32 field408;
    u32 field40c;
    u32 field410;
    u32 field414;
    u32 field418;
    u32 field41c;
    u32 field420;
    u32 field424;
    u32 field428;
    u32 field42c;
    u32 field430;
    u32 field434;
    u32 field438;
    u32 field43c;
    u32 field440;
    u32 field444;
    u32 field448;
    u32 field44c;
    u32 field450;
    u32 field454;
    u32 field458;
    u32 field45c;
    u32 field460;
    u32 field464;
    u32 field468;
    u32 field46c;
    u32 field470;
    u32 field474;
    u32 field478;
    u32 field47c;
    u32 field480;
    u32 field484;
    u32 field488;
    u32 field48c;
    u32 field490;
    u32 field494;
    u32 field498;
    u32 field49c;
    u32 field4a0;
    u32 field4a4;
    u32 field4a8;
    u32 field4ac;
    u32 field4b0;
    u32 field4b4;
    u32 field4b8;
    u32 field4bc;
    u32 field4c0;
    u32 field4c4;
    u32 field4c8;
    u32 field4cc;
    u32 field4d0;
    u32 field4d4;
    u32 field4d8;
    u32 field4dc;
    u32 field4e0;
    u32 field4e4;
    u32 field4e8;
    u32 field4ec;
    u32 field4f0;
    u32 field4f4;
    u32 field4f8;
    u32 field4fc;
    u32 field500;
    u32 field504;
    u32 field508;
    u32 field50c;
    u32 field510;
    u32 field514;
    u32 field518;
    u32 field51c;
    u32 field520;
    u32 field524;
    u32 field528;
    u32 field52c;
    u32 field530;
    u32 field534;
    u32 field538;
    u32 BGMID;
    u32 field540;
    u32 field544;
    u32 field548;
    u32 field54c;
    u32 field550;
    u32 field554;
    u32 field558;
    u32 field55c;
    u32 field560;
    u32 field564;
    u32 field568;
    u32 field56c;
    u32 field570;
    u32 field574;
    u32 field578;
    u32 field57c;
    u32 field580;
    u32 field584;
    u32 field588;
    u32 field58c;
    u32 field590;
    u32 field594;
    u32 field598;
    u32 field59c;
    u32 field5a0;
    u32 field5a4;
    u32 field5a8;
    u32 field5ac;
    u32 field5b0;
    u32 field5b4;
    u32 field5b8;
    u32 field5bc;
    u32 field5c0;
    u32 field5c4;
    u32 field5c8;
    u32 field5cc;
    u32 field5d0;
    u32 field5d4;
    u32 field5d8;
    u32 field5dc;
    u32 field5e0;
    u32 field5e4;
    u32 field5e8;
    u32 field5ec;
    u32 field5f0;
    u32 field5f4;
    u32 field5f8;
    u32 field5fc;
} EncounterFuncStruct;

typedef struct OkumuraSummonThingy
{
    u16 field00;
    u16 field02;
    u16 field04;
    u16 field06;
    u16 field08;
    u16 field0a;
    u16 field0c;
    u16 field0e;
    u16 field10;
    u16 field12;
    u16 field14;
    u16 field16;
    u16 field18;
    u16 field1a;
    u16 field1c;
    u16 field1e;
    u16 field20;
    u16 field22;
    u16 field24;
    u16 field26;
    u16 field28;
    u16 field2a;
    u16 field2c;
    u16 field2e;
    u16 field30;
    u16 field32;
    u16 field34;
    u16 field36;
    u16 field38;
    u16 field3a;
    u16 field3c;
    u16 field3e;
    u16 field40;
    u16 field42;
    u16 field44;
    u16 field46;
    u16 field48;
    u16 field4a;
    u16 field4c;
    u16 field4e;
    u16 field50;
    u16 field52;
    u16 field54;
    u16 field56;
    u16 field58;
    u16 field5a;
    u16 field5c;
    u16 field5e;
    u16 field60;
    u16 field62;
    u16 field64;
    u16 field66;
    u16 field68;
    u16 field6a;
    u16 field6c;
    u16 field6e;
} OkumuraSummonThingy;

typedef struct
{
    u16 field00;
    u16 field02;
    u16 field04;
    u16 encounterIDLocal;
} EncounterStructShort;

typedef struct fechance
{
    u16 field00;
    u16 field02;
    u16 field04;
    u16 field06;
    u16 field08;
    u16 field0a;
    u16 field0c;
    u16 field0e;
    u16 field10;
    u16 field12;
    u16 field14;
    u16 field16;
    u16 field18;
    u16 field1a;
    u16 field1c;
    u16 field1e;
    u16 field20;
    u16 field22;
    u16 field24;
    u16 field26;
    u16 field28;
    u16 field2a;
    u16 field2c;
    u16 field2e;
    u16 field30;
    u16 field32;
    u16 field34;
    u16 field36;
    u16 field38;
    u16 field3a;
    u16 field3c;
    u16 field3e;
    u16 field40;
    u16 field42;
    u16 field44;
    u16 field46;
    u16 field48;
    u16 field4a;
    u16 field4c;
    u16 field4e;
    u16 field50;
    u16 field52;
    u16 field54;
    u16 field56;
    u16 field58;
    u16 field5a;
    u16 field5c;
    u16 field5e;
    u16 field60;
    u16 field62;
    u16 field64;
    u16 field66;
    u16 field68;
    u16 field6a;
    u16 field6c;
    u16 field6e;
    u16 field70;
    u16 field72;
    u16 field74;
    u16 field76;
    u16 field78;
    u16 field7a;
    u16 field7c;
    u16 field7e;
    u16 field80;
    u16 field82;
    u16 field84;
    u16 field86;
    u16 field88;
    u16 field8a;
    u16 field8c;
    u16 field8e;
    u16 field90;
    u16 field92;
    u16 field94;
    u16 field96;
    u16 field98;
    u16 field9a;
    u16 field9c;
    u16 field9e;
    u16 fielda0;
    u16 fielda2;
    u16 fielda4;
    u16 fielda6;
    u16 fielda8;
    u16 fieldaa;
    u16 fieldac;
    u16 fieldae;
    u16 fieldb0;
    u16 fieldb2;
    u16 fieldb4;
    u16 fieldb6;
    u16 fieldb8;
    u16 fieldba;
    u16 fieldbc;
    u16 fieldbe;
    u16 fieldc0;
    u16 fieldc2;
    u16 fieldc4;
    u16 fieldc6;
    u16 fieldc8;
    u16 fieldca;
    u16 fieldcc;
    u16 fieldce;
    u16 fieldd0;
    u16 fieldd2;
    u16 fieldd4;
    u16 fieldd6;
    u16 fieldd8;
    u16 fieldda;
    u16 fielddc;
    u16 fieldde;
    u16 fielde0;
    u16 fielde2;
    u16 fielde4;
    u16 fielde6;
    u16 fielde8;
    u16 fieldea;
    u16 fieldec;
    u16 fieldee;
    u16 fieldf0;
    u16 fieldf2;
    u16 fieldf4;
    u16 fieldf6;
    u16 fieldf8;
    u16 fieldfa;
    u16 fieldfc;
    u16 fieldfe;
    u16 field100;
    u16 field102;
    u16 field104;
    u16 field106;
    u16 field108;
    u16 field10a;
    u16 field10c;
    u16 field10e;
    u16 field110;
    u16 field112;
    u16 field114;
    u16 field116;
    u16 field118;
    u16 field11a;
    u16 field11c;
    u16 field11e;
    u16 field120;
    u16 field122;
    u16 field124;
    u16 field126;
    u16 field128;
    u16 field12a;
    u16 field12c;
    u16 field12e;
    u16 field130;
    u16 field132;
    u16 field134;
    u16 field136;
    u16 field138;
    u16 field13a;
    u16 field13c;
    u16 field13e;
    u16 field140;
    u16 field142;
    u16 field144;
    u16 field146;
    u16 field148;
    u16 field14a;
    u16 field14c;
    u16 field14e;
    u16 field150;
    u16 field152;
    u16 field154;
    u16 field156;
    u16 field158;
    u16 field15a;
    u16 field15c;
    u16 field15e;
    u16 field160;
    u16 field162;
    u16 field164;
    u16 field166;
    u16 field168;
    u16 field16a;
    u16 field16c;
    u16 field16e;
    u16 field170;
    u16 field172;
    u16 field174;
    u16 field176;
    u16 field178;
    u16 field17a;
    u16 field17c;
    u16 field17e;
    u16 field180;
    u16 field182;
    u16 field184;
    u16 field186;
    u16 field188;
    u16 field18a;
    u16 field18c;
    u16 field18e;
    u16 field190;
    u16 field192;
    u16 field194;
    u16 field196;
    u16 field198;
    u16 field19a;
    u16 field19c;
    u16 field19e;
    u16 field1a0;
    u16 field1a2;
    u16 field1a4;
    u16 field1a6;
    u16 field1a8;
    u16 field1aa;
    u16 field1ac;
    u16 field1ae;
    u16 field1b0;
    u16 field1b2;
    u16 field1b4;
    u16 field1b6;
    u16 field1b8;
    u16 field1ba;
    u16 field1bc;
    u16 field1be;
    u16 field1c0;
    u16 field1c2;
    u16 field1c4;
    u16 field1c6;
    u16 field1c8;
    u16 field1ca;
    u16 field1cc;
    u16 field1ce;
    u16 field1d0;
    u16 field1d2;
    u16 field1d4;
    u16 field1d6;
    u16 field1d8;
    u16 field1da;
    u16 field1dc;
    u16 field1de;
    u16 field1e0;
    u16 field1e2;
    u16 field1e4;
    u16 field1e6;
    u16 field1e8;
    u16 field1ea;
    u16 field1ec;
    u16 field1ee;
    u16 field1f0;
    u16 field1f2;
    u16 field1f4;
    u16 field1f6;
    u16 field1f8;
    u16 field1fa;
    u16 field1fc;
    u16 field1fe;
} fechance;


typedef struct
{
  /* data */
}ActiveCombatUnitStruct_Helper2;


typedef struct ActiveCombatUnitStruct
{
    u16 field00;
    u16 field02;
    u16 field04;
    u16 field06;
    u16 field08;
    u16 field0a;
    u16 field0c;
    u16 field0e;
    u16 field10;
    u16 field12;
    u16 field14;
    u16 field16;
    u16 field18;
    u16 field1a;
    u16 field1c;
    u16 field1e;
    u16 field20;
    u16 field22;
    u16 field24;
    u16 field26;
    u16 field28;
    u16 field2a;
    u16 field2c;
    u16 field2e;
    EnemyPersonaFunctionStruct2* field30;
    u16 field34;
    u16 field36;
    u16 field38;
    u16 field3a;
    u16 field3c;
    u16 field3e;
    u16 field40;
    u16 field42;
    u16 field44;
    u16 field46;
    u16 field48;
    u16 field4a;
    u16 field4c;
    u16 field4e;
    u16 field50;
    u16 field52;
    u16 field54;
    u16 field56;
    u16 field58;
    u16 field5a;
    u16 field5c;
    u16 field5e;
    u16 field60;
    u16 field62;
    u16 field64;
    u16 field66;
    u16 field68;
    u16 field6a;
    u16 field6c;
    u16 field6e;
    u16 field70;
    u16 field72;
    u16 field74;
    u16 field76;
    u16 field78;
    u16 field7a;
    u16 field7c;
    u16 field7e;
    u16 field80;
    u16 field82;
    u16 field84;
    u16 field86;
    u16 field88;
    u16 field8a;
    u16 field8c;
    u16 field8e;
    u16 field90;
    u16 field92;
    u16 field94;
    u16 field96;
    u16 field98;
    u16 field9a;
    u16 field9c;
    u16 field9e;
    u16 fielda0;
    u16 fielda2;
    u16 fielda4;
    u16 fielda6;
    u16 fielda8;
    u16 fieldaa;
    u16 fieldac;
    u16 fieldae;
    u16 fieldb0;
    u16 fieldb2;
    u16 fieldb4;
    u16 fieldb6;
    u16 fieldb8;
    u16 fieldba;
    u16 fieldbc;
    u16 fieldbe;
    u16 fieldc0;
    u16 fieldc2;
    u16 fieldc4;
    u16 fieldc6;
    u16 fieldc8;
    u16 fieldca;
    u16 fieldcc;
    u16 fieldce;
    u16 fieldd0;
    u16 fieldd2;
    u16 fieldd4;
    u16 fieldd6;
    u16 fieldd8;
    u16 fieldda;
    u16 fielddc;
    u16 fieldde;
    u16 fielde0;
    u16 fielde2;
    u16 fielde4;
    u16 fielde6;
    u16 fielde8;
    u16 fieldea;
    u16 fieldec;
    u16 fieldee;
    u16 fieldf0;
    u16 fieldf2;
    u16 fieldf4;
    u16 fieldf6;
    u16 fieldf8;
    u16 fieldfa;
    u16 fieldfc;
    u16 fieldfe;
    u16 field100;
    u16 field102;
    u16 field104;
    u16 field106;
    u16 field108;
    u16 field10a;
    u16 field10c;
    u16 field10e;
    u16 field110;
    u16 field112;
    u16 field114;
    u16 field116;
    u16 field118;
    u16 field11a;
    u16 field11c;
    u16 field11e;
    u16 field120;
    u16 field122;
    u16 field124;
    u16 field126;
    u16 field128;
    u16 field12a;
    u16 field12c;
    u16 field12e;
    u16 field130;
    u16 field132;
    u16 field134;
    u16 field136;
    u16 field138;
    u16 field13a;
    u16 field13c;
    u16 field13e;
    u16 field140;
    u16 field142;
    u16 field144;
    u16 field146;
    u16 field148;
    u16 field14a;
    u16 field14c;
    u16 field14e;
    u16 field150;
    u16 field152;
    u16 field154;
    u16 field156;
    u16 field158;
    u16 field15a;
    u16 field15c;
    u16 field15e;
    u16 field160;
    u16 field162;
    u16 field164;
    u16 field166;
    u16 field168;
    u16 field16a;
    u16 field16c;
    u16 field16e;
    u16 field170;
    u16 field172;
    u16 field174;
    u16 field176;
    u16 field178;
    u16 field17a;
    u16 field17c;
    u16 field17e;
    u16 field180;
    u16 field182;
    u16 field184;
    u16 field186;
    u16 field188;
    u16 field18a;
    u16 field18c;
    u16 field18e;
    u16 field190;
    u16 field192;
    u16 field194;
    u16 field196;
    u16 field198;
    u16 field19a;
    u16 field19c;
    u16 field19e;
    u16 field1a0;
    u16 field1a2;
    u16 field1a4;
    u16 field1a6;
    u16 field1a8;
    u16 field1aa;
    u16 field1ac;
    u16 field1ae;
    u16 field1b0;
    u16 field1b2;
    u16 field1b4;
    u16 field1b6;
    u16 field1b8;
    u16 field1ba;
    u16 field1bc;
    u16 field1be;
    u16 field1c0;
    u16 field1c2;
    u16 field1c4;
    u16 field1c6;
    u16 field1c8;
    u16 field1ca;
    u16 field1cc;
    u16 field1ce;
    u16 field1d0;
    u16 field1d2;
    u16 field1d4;
    u16 field1d6;
    u16 field1d8;
    u16 field1da;
    u16 field1dc;
    u16 field1de;
    u16 field1e0;
    u16 field1e2;
    u16 field1e4;
    u16 field1e6;
    u16 field1e8;
    u16 field1ea;
    u16 field1ec;
    u16 field1ee;
    u16 field1f0;
    u16 field1f2;
    u16 field1f4;
    u16 field1f6;
    u16 field1f8;
    u16 field1fa;
    u16 field1fc;
    u16 field1fe;
    u16 field200;
    u16 field202;
    u16 field204;
    u16 field206;
    u16 field208;
    u16 field20a;
    u16 field20c;
    u16 field20e;
    u16 field210;
    u16 field212;
    u16 field214;
    u16 field216;
    u16 field218;
    u16 field21a;
    u16 field21c;
    u16 field21e;
    u16 field220;
    u16 field222;
    u16 field224;
    u16 field226;
    u16 field228;
    u16 field22a;
    u16 field22c;
    u16 field22e;
    u16 field230;
    u16 field232;
    u16 field234;
    u16 field236;
    u16 field238;
    u16 field23a;
    u16 SkillID[9];
    u16 amountOfSkills;
    u16 field250;
    u16 field252;
    u16 field254;
    u16 field256;
    u16 field258;
    u16 field25a;
    u16 field25c;
    u16 field25e;
    u16 field260;
    u16 field262;
    u16 field264;
    u16 field266;
    u16 field268;
    u16 field26a;
    u16 field26c;
    u16 field26e;
    u16 field270;
    u16 field272;
    u16 field274;
    u16 field276;
    u16 field278;
    u16 field27a;
    u16 field27c;
    u16 field27e;
    u16 field280;
    u16 field282;
    u16 field284;
    u16 field286;
    u16 field288;
    u16 field28a;
    u16 field28c;
    u16 field28e;
    u16 field290;
    u16 field292;
    u16 field294;
    u16 field296;
    u16 field298;
    u16 field29a;
    u16 field29c;
    u16 field29e;
    u16 field2a0;
    u16 field2a2;
    u16 field2a4;
    u16 field2a6;
    u16 field2a8;
    u16 field2aa;
    u16 field2ac;
    u16 field2ae;
    u16 field2b0;
    u16 field2b2;
    u16 field2b4;
    u16 field2b6;
    u16 field2b8;
    u16 field2ba;
    u16 field2bc;
    u16 field2be;
    u16 field2c0;
    u16 field2c2;
    u16 field2c4;
    u16 field2c6;
    u16 field2c8;
    u16 field2ca;
    u16 field2cc;
    u16 field2ce;
    u16 field2d0;
    u16 field2d2;
    u16 field2d4;
    u16 field2d6;
    u16 field2d8;
    u16 field2da;
    u16 field2dc;
    u16 field2de;
    u16 field2e0;
    u16 field2e2;
    u16 field2e4;
    u16 field2e6;
    u16 field2e8;
    u16 field2ea;
    u16 field2ec;
    u16 field2ee;
    u16 field2f0;
    u16 field2f2;
    u16 field2f4;
    u16 field2f6;
    u16 field2f8;
    u16 field2fa;
    u16 field2fc;
    u16 field2fe;
    u16 field300;
    u16 field302;
    u16 field304;
    u16 field306;
    u16 field308;
    u16 field30a;
    u16 field30c;
    u16 field30e;
    u16 field310;
    u16 field312;
    u16 field314;
    u16 field316;
    u16 field318;
    u16 field31a;
    u16 field31c;
    u16 field31e;
    u16 field320;
    u16 field322;
    u16 field324;
    u16 field326;
    u16 field328;
    u16 field32a;
    u16 field32c;
    u16 field32e;
    u16 field330;
    u16 field332;
    u16 field334;
    u16 field336;
    u16 field338;
    u16 field33a;
    u16 field33c;
    u16 field33e;
    u16 field340;
    u16 field342;
    u16 field344;
    u16 field346;
    u16 field348;
    u16 field34a;
    u16 field34c;
    u16 field34e;
    u16 field350;
    u16 field352;
    u16 field354;
    u16 field356;
    u16 field358;
    u16 field35a;
    u16 field35c;
    u16 field35e;
    u16 field360;
    u16 field362;
    u16 field364;
    u16 field366;
    u16 field368;
    u16 field36a;
    u16 field36c;
    u16 field36e;
    u16 field370;
    u16 field372;
    u16 field374;
    u16 field376;
    u16 field378;
    u16 field37a;
    u16 field37c;
    u16 field37e;
    u16 field380;
    u16 field382;
    u16 field384;
    u16 field386;
    u16 field388;
    u16 field38a;
    u16 field38c;
    u16 field38e;
    u16 field390;
    u16 field392;
    u16 field394;
    u16 field396;
    u16 field398;
    u16 field39a;
    u16 field39c;
    u16 field39e;
    u16 field3a0;
    u16 field3a2;
    u16 field3a4;
    u16 field3a6;
    u16 field3a8;
    u16 field3aa;
    u16 field3ac;
    u16 field3ae;
    u16 field3b0;
    u16 field3b2;
    u16 field3b4;
    u16 field3b6;
    u16 field3b8;
    u16 field3ba;
    u16 field3bc;
    u16 field3be;
    u16 field3c0;
    u16 field3c2;
    u16 field3c4;
    u16 field3c6;
    u16 field3c8;
    u16 field3ca;
    u16 field3cc;
    u16 field3ce;
    u16 field3d0;
    u16 field3d2;
    u16 field3d4;
    u16 field3d6;
    u16 field3d8;
    u16 field3da;
    u16 field3dc;
    u16 field3de;
    u16 field3e0;
    u16 field3e2;
    u16 field3e4;
    u16 field3e6;
    u16 field3e8;
    u16 field3ea;
    u16 field3ec;
    u16 field3ee;
    u16 field3f0;
    u16 field3f2;
    u16 field3f4;
    u16 field3f6;
    u16 field3f8;
    u16 field3fa;
    u16 field3fc;
    u16 field3fe;
    u16 field400;
    u16 field402;
    u16 field404;
    u16 field406;
    u16 field408;
    u16 field40a;
    u16 field40c;
    u16 field40e;
    u16 field410;
    u16 field412;
    u16 field414;
    u16 field416;
    u16 field418;
    u16 field41a;
    u16 field41c;
    u16 field41e;
    u16 field420;
    u16 field422;
    u16 field424;
    u16 field426;
    u16 field428;
    u16 field42a;
    u16 field42c;
    u16 field42e;
    u16 field430;
    u16 field432;
    u16 field434;
    u16 field436;
    u16 field438;
    u16 field43a;
    u16 field43c;
    u16 field43e;
    u16 field440;
    u16 field442;
    u16 field444;
    u16 field446;
    u16 field448;
    u16 field44a;
    u16 field44c;
    u16 field44e;
    u16 field450;
    u16 field452;
    u16 field454;
    u16 field456;
    u16 field458;
    u16 field45a;
    u16 field45c;
    u16 field45e;
    u16 field460;
    u16 field462;
    u16 field464;
    u16 field466;
    u16 field468;
    u16 field46a;
    u16 field46c;
    u16 field46e;
    u16 field470;
    u16 field472;
    u16 field474;
    u16 field476;
    u16 field478;
    u16 field47a;
    u16 field47c;
    u16 field47e;
    u16 field480;
    u16 field482;
    u16 field484;
    u16 field486;
    u16 field488;
    u16 field48a;
    u16 field48c;
    u16 field48e;
    u16 field490;
    u16 field492;
    u16 field494;
    u16 field496;
    u16 field498;
    u16 field49a;
    u16 field49c;
    u16 field49e;
    u16 field4a0;
    u16 field4a2;
    u16 field4a4;
    u16 field4a6;
    u16 field4a8;
    u16 field4aa;
    u16 field4ac;
    u16 field4ae;
    u16 field4b0;
    u16 field4b2;
    u16 field4b4;
    u16 field4b6;
    u16 field4b8;
    u16 field4ba;
    u16 field4bc;
    u16 field4be;
    u16 field4c0;
    u16 field4c2;
    u16 field4c4;
    u16 field4c6;
    u16 field4c8;
    u16 field4ca;
    u16 field4cc;
    u16 field4ce;
    u16 field4d0;
    u16 field4d2;
    u16 field4d4;
    u16 field4d6;
    u16 field4d8;
    u16 field4da;
    u16 field4dc;
    u16 field4de;
    u16 field4e0;
    u16 field4e2;
    u16 field4e4;
    u16 field4e6;
    u16 field4e8;
    u16 field4ea;
    u16 field4ec;
    u16 field4ee;
    u16 field4f0;
    u16 field4f2;
    u16 field4f4;
    u16 field4f6;
    u16 field4f8;
    u16 field4fa;
    u16 field4fc;
    u16 field4fe;
    u16 field500;
    u16 field502;
    u16 field504;
    u16 field506;
    u16 field508;
    u16 field50a;
    u16 field50c;
    u16 field50e;
    u16 field510;
    u16 field512;
    u16 field514;
    u16 field516;
    u16 field518;
    u16 field51a;
    u16 field51c;
    u16 field51e;
    u16 field520;
    u16 field522;
    u16 field524;
    u16 field526;
    u16 field528;
    u16 field52a;
    u16 field52c;
    u16 field52e;
    u16 field530;
    u16 field532;
    u16 field534;
    u16 field536;
    u16 field538;
    u16 field53a;
    u16 field53c;
    u16 field53e;
    u16 field540;
    u16 field542;
    u16 field544;
    u16 field546;
    u16 field548;
    u16 field54a;
    u16 field54c;
    u16 field54e;
    u16 field550;
    u16 field552;
    u16 field554;
    u16 field556;
    u16 field558;
    u16 field55a;
    u16 field55c;
    u16 field55e;
    u16 field560;
    u16 field562;
    u16 field564;
    u16 field566;
    u16 field568;
    u16 field56a;
    u16 field56c;
    u16 field56e;
    u16 field570;
    u16 field572;
    u16 field574;
    u16 field576;
    u16 field578;
    u16 field57a;
    u16 field57c;
    u16 field57e;
    u16 field580;
    u16 field582;
    u16 field584;
    u16 field586;
    u16 field588;
    u16 field58a;
    u16 field58c;
    u16 field58e;
    u16 field590;
    u16 field592;
    u16 field594;
    u16 field596;
    u16 field598;
    u16 field59a;
    u16 field59c;
    u16 field59e;
    u16 field5a0;
    u16 field5a2;
    u16 field5a4;
    u16 field5a6;
    u16 field5a8;
    u16 field5aa;
    u16 field5ac;
    u16 field5ae;
    u16 field5b0;
    u16 field5b2;
    u16 field5b4;
    u16 field5b6;
    u16 field5b8;
    u16 field5ba;
    u16 field5bc;
    u16 field5be;
    u16 field5c0;
    u16 field5c2;
    u16 field5c4;
    u16 field5c6;
    u16 field5c8;
    u16 field5ca;
    u16 field5cc;
    u16 field5ce;
    u16 field5d0;
    u16 field5d2;
    u16 field5d4;
    u16 field5d6;
    u16 field5d8;
    u16 field5da;
    u16 field5dc;
    u16 field5de;
    u16 field5e0;
    u16 field5e2;
    u16 field5e4;
    u16 field5e6;
    u16 field5e8;
    u16 field5ea;
    u16 field5ec;
    u16 field5ee;
    u16 field5f0;
    u16 field5f2;
    u16 field5f4;
    u16 field5f6;
    u16 field5f8;
    u16 field5fa;
    u16 field5fc;
    u16 field5fe;
    u16 field600;
    u16 field602;
    u16 field604;
    u16 field606;
    u16 field608;
    u16 field60a;
    u16 field60c;
    u16 field60e;
    u16 field610;
    u16 field612;
    u16 field614;
    u16 field616;
    u16 field618;
    u16 field61a;
    u16 field61c;
    u16 field61e;
    u16 field620;
    u16 field622;
    u16 field624;
    u16 field626;
    u16 field628;
    u16 field62a;
    u16 field62c;
    u16 field62e;
    u16 field630;
    u16 field632;
    u16 field634;
    u16 field636;
    u16 field638;
    u16 field63a;
    u16 field63c;
    u16 field63e;
    u16 field640;
    u16 field642;
    u16 field644;
    u16 field646;
    u16 field648;
    u16 field64a;
    u16 field64c;
    u16 field64e;
    u16 field650;
    u16 field652;
    u16 field654;
    u16 field656;
    u16 field658;
    u16 field65a;
    u16 field65c;
    u16 field65e;
    u16 field660;
    u16 field662;
    u16 field664;
    u16 field666;
    u16 field668;
    u16 field66a;
    u16 field66c;
    u16 field66e;
    u16 field670;
    u16 field672;
    u16 field674;
    u16 field676;
    u16 field678;
    u16 field67a;
    u16 field67c;
    u16 field67e;
    u16 field680;
    u16 field682;
    u16 field684;
    u16 field686;
    u16 field688;
    u16 field68a;
    u16 field68c;
    u16 field68e;
    u16 field690;
    u16 field692;
    u16 field694;
    u16 field696;
    u16 field698;
    u16 field69a;
    u16 field69c;
    u16 field69e;
    u16 field6a0;
    u16 field6a2;
    u16 field6a4;
    u16 field6a6;
    u16 field6a8;
    u16 field6aa;
    u16 field6ac;
    u16 field6ae;
    u16 field6b0;
    u16 field6b2;
    u16 field6b4;
    u16 field6b6;
    u16 field6b8;
    u16 field6ba;
    u16 field6bc;
    u16 field6be;
    u16 field6c0;
    u16 field6c2;
    u16 field6c4;
    u16 field6c6;
    u16 field6c8;
    u16 field6ca;
    u16 field6cc;
    u16 field6ce;
    u16 field6d0;
    u16 field6d2;
    u16 field6d4;
    u16 field6d6;
    u16 field6d8;
    u16 field6da;
    u16 field6dc;
    u16 field6de;
    u16 field6e0;
    u16 field6e2;
    u16 field6e4;
    u16 field6e6;
    u16 field6e8;
    u16 field6ea;
    u16 field6ec;
    u16 field6ee;
    u16 field6f0;
    u16 field6f2;
    u16 field6f4;
    u16 field6f6;
    u16 field6f8;
    u16 field6fa;
    u16 field6fc;
    u16 field6fe;
    u16 field700;
    u16 field702;
    u16 field704;
    u16 field706;
    u16 field708;
    u16 field70a;
    u16 field70c;
    u16 field70e;
    u16 field710;
    u16 field712;
    u16 field714;
    u16 ActiveSkillID;
} ActiveCombatUnitStruct;

typedef struct struct20
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 TargetValue;
} struct20;

typedef struct struct40
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 field1c;
    u32 field20;
    u32 field24;
    u32 field28;
    u32 field2c;
    u32 field30;
    struct20* Pointer;
    u32 field38;
    u32 field3c;
} struct40;

typedef struct bossvtablestructA
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 field1c;
    u32 field20;
    u32 field24;
    u32 field28;
    u32 field2c;
    u32 field30;
    u32 field34;
    u32 field38;
    u8 field3c;
} bossvtablestructA;

typedef struct BossVtableBtlUnitList
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 field1c;
    u32 field20;
    u32 field24;
    u32 field28;
    u32 field2c;
    u32 field30;
    u32 field34;
    u32 field38;
    u32 field3c;
    u32 field40;
    u32 field44;
    u32 field48;
    u32 field4c;
    u32 field50;
    u32 field54;
    u32 field58;
    u32 field5c;
    u32 field60;
    u32 field64;
    u32 field68;
    u32 field6c;
    u32 field70;
    u32 field74;
    u32 field78;
    u32 field7c;
    u32 field80;
    u32 field84;
    u32 field88;
    u32 field8c;
    u32 field90;
    btlUnitList6* field94;
    u32 field98;
} BossVtableBtlUnitList;

typedef struct shdHelper
{
    u32 field00;
    u32 field04;
    u32 field08;
    u32 field0c;
    u32 field10;
    u32 field14;
    u32 field18;
    u32 field1c;
    u32 field20;
    u32 field24;
    u32 field28;
    u32 field2c;
    u32 field30;
    u32 field34;
    u32 field38;
    u32 field3c;
    u32 field40;
    u32 field44;
    u32 field48;
    u32 field4c;
    u32 field50;
    u32 field54;
    u32 field58;
    u32 field5c;
    u32 field60;
    u32 field64;
    u32 field68;
    u32 field6c;
    u32 field70;
    u32 field74;
    u32 field78;
    u32 field7c;
    u32 field80;
    u32 field84;
    u32 field88;
    u32 field8c;
    u32 field90;
    u32 field94;
    u32 field98;
    u32 field9c;
    u32 fielda0;
    u32 fielda4;
    u32 fielda8;
    u32 fieldac;
    u32 fieldb0;
    u32 fieldb4;
    u32 fieldb8;
    u32 fieldbc;
    u32 fieldc0;
    u32 fieldc4;
    u32 fieldc8;
    u32 fieldcc;
    u32 fieldd0;
    u32 fieldd4;
    u32 fieldd8;
    u32 fielddc;
    u32 fielde0;
    u32 fielde4;
    u32 fielde8;
    u32 fieldec;
    u32 fieldf0;
    u32 fieldf4;
    u32 fieldf8;
    u32 fieldfc;
    u32 field100;
    u32 field104;
    u32 field108;
    u32 field10c;
    u32 field110;
    u32 field114;
    u32 field118;
    u32 field11c;
    u32 field120;
    u32 field124;
    u32 field128;
    u32 field12c;
    u32 field130;
    u32 field134;
    u32 field138;
    u32 field13c;
    u32 field140;
    u32 field144;
    u32 field148;
    u32 field14c;
    u32 field150;
    u32 field154;
    u32 field158;
    u32 field15c;
    u32 field160;
    u32 field164;
    u32 field168;
    u32 field16c;
    u32 field170;
    u32 field174;
    u32 field178;
    u32 field17c;
    u32 field180;
    u32 field184;
    u32 field188;
    u32 field18c;
    u32 field190;
    u32 field194;
    u32 field198;
    u32 field19c;
    u32 field1a0;
    u32 field1a4;
    u32 field1a8;
    u32 field1ac;
    u32 field1b0;
    u32 field1b4;
    u32 field1b8;
    u32 field1bc;
    u32 field1c0;
    u32 field1c4;
    u32 field1c8;
    u32 field1cc;
    u32 field1d0;
    u32 field1d4;
    u32 field1d8;
    u32 field1dc;
    u32 field1e0;
    u32 field1e4;
    u32 field1e8;
    u32 field1ec;
    u32 field1f0;
    u32 field1f4;
    u32 field1f8;
    u32 field1fc;
    u32 field200;
    u32 field204;
    u32 field208;
    u32 field20c;
    u32 field210;
    u32 field214;
    u32 field218;
    u32 field21c;
    u32 field220;
    u32 field224;
    u32 field228;
    u32 field22c;
    u32 field230;
    u32 field234;
    u32 field238;
    u32 field23c;
    u32 field240;
    u32 field244;
    u32 field248;
    u32 field24c;
    u32 field250;
    u32 field254;
    u32 field258;
    u32 field25c;
    u32 field260;
    u32 field264;
    u32 field268;
    u32 field26c;
    u32 field270;
    u32 field274;
    u32 field278;
    u32 field27c;
    u32 field280;
    u32 field284;
    u32 field288;
    u32 field28c;
    u32 field290;
    u32 field294;
    u32 field298;
    u32 field29c;
    u32 field2a0;
    u32 field2a4;
    u32 field2a8;
    u32 field2ac;
    u32 field2b0;
    u32 field2b4;
    u32 field2b8;
    u32 field2bc;
    u32 field2c0;
    u32 field2c4;
    u32 field2c8;
    u32 field2cc;
    u32 field2d0;
    u32 field2d4;
    u32 field2d8;
    u32 field2dc;
    u32 field2e0;
    u32 field2e4;
    u32 field2e8;
    u32 field2ec;
    u32 field2f0;
    u32 field2f4;
    u32 field2f8;
    u32 field2fc;
    u32 field300;
    u32 field304;
    u32 field308;
    u32 field30c;
    u32 field310;
    u32 field314;
    u32 field318;
    u32 field31c;
    u32 field320;
    u32 field324;
    u32 field328;
    u32 field32c;
    u32 field330;
    u32 field334;
    u32 field338;
    u32 field33c;
    u32 field340;
    u32 field344;
    u32 field348;
    u32 field34c;
    u32 field350;
    u32 field354;
    u32 field358;
    u32 field35c;
    u32 field360;
    u32 field364;
    u32 field368;
    u32 field36c;
    u32 field370;
    u32 field374;
    u32 field378;
    u32 field37c;
    u32 field380;
    u32 field384;
    u32 field388;
    u32 field38c;
    u32 field390;
    u32 field394;
    u32 field398;
    u32 field39c;
    u32 field3a0;
    u32 field3a4;
    u32 field3a8;
    u32 field3ac;
    u32 field3b0;
    u32 field3b4;
    u32 field3b8;
    u32 field3bc;
    u32 field3c0;
    u32 field3c4;
    u32 field3c8;
    u32 field3cc;
    u32 field3d0;
    u32 field3d4;
    u32 field3d8;
    u32 field3dc;
    u32 field3e0;
    u32 field3e4;
    u32 field3e8;
    u32 field3ec;
    u32 field3f0;
    u32 field3f4;
    u32 field3f8;
    u32 field3fc;
    u32 field400;
    u32 field404;
    u32 field408;
    u32 field40c;
    u32 field410;
    u32 field414;
    u32 field418;
    u32 field41c;
} shdHelper;

#endif
#endif