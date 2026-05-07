// Function: FUN_0027f1f0
// Address: 0027f1f0
// Size: 4760 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"


/* WARNING: Removing unreachable block (ram,0x0027f3c2) */
/* WARNING: Removing unreachable block (ram,0x0027f3ce) */
/* WARNING: Removing unreachable block (ram,0x0027f286) */
/* WARNING: Removing unreachable block (ram,0x0027f28b) */
/* WARNING: Removing unreachable block (ram,0x0027f427) */
/* WARNING: Removing unreachable block (ram,0x0027f433) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0027f1f0(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong *local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  int local_13c;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    local_98 = '\0';
    local_a0 = 0;
    FUN_00da5ad0();
    local_88 = local_68 != '\0';
    local_90 = local_70;
    if ((bool)local_88) {
      local_68 = '\0';
    }
    local_80 = FUN_00da7170();
    FUN_00da7180();
    pcVar3 = DAT_02682d10;
    while (local_90 != 0) {
      FUN_01f27fe0();
      local_a8 = *(longlong *)(local_70 + 0x128);
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_68 = '\0';
      local_70 = 0;
      FUN_00e65ef0(&local_13c,&local_70);
      lVar2 = DAT_027258a0;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_0027f510;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0027f390:
        uVar11 = FUN_01e697d0();
        FUN_01e69930(uVar11,0);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = FUN_00e6d780();
        if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
          lVar2 = DAT_02725930;
          if (DAT_02725930 != 0) {
            FUN_00d50b00();
          }
          local_2c0 = 0;
          local_2b8 = '\0';
          local_2b0 = 0;
          local_2a8 = '\0';
          FUN_01e4fcf0(&local_2b0,&local_2c0);
          plVar10 = local_40;
          if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_02726298 = FUN_00015ff0();
            _DAT_02726280 = "MDURLOpenedController";
            _DAT_02726288 = 0x90;
            _DAT_02726290 = FUN_00098280;
            _DAT_027262a0 = 0;
            uRam00000000027262a8 = 0;
            _DAT_027262b0 = 0;
            uRam00000000027262b8 = 0;
            _DAT_027262c0 = 0;
            uRam00000000027262c8 = 0;
            _DAT_027262d0 = 0;
            uRam00000000027262d8 = 0;
            _DAT_027262e0 = 0;
            uRam00000000027262e8 = 0;
            _DAT_027262f0 = 0;
            uRam00000000027262f8 = 0;
            _DAT_02726300 = 0;
            uRam0000000002726308 = 0;
            _DAT_02726310 = 0;
            uRam0000000002726318 = 0;
            _DAT_02726320 = 0;
            uRam0000000002726328 = 0;
            _DAT_02726330 = 0;
            uRam0000000002726338 = 0;
            _DAT_02726340 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (longlong **)&DAT_02802688;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar9 = &local_40;
            if (cVar5 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
          local_78 = *pplVar9;
          if (*(char *)(pplVar9 + 1) == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar9 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2a8 != '\0') && (local_2b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_2b8 != '\0') && (local_2c0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (local_78 != (longlong *)0x0) {
            FUN_00dbbbc0();
            local_138 = local_40;
            local_130 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_130 = '\x01';
            FUN_0054d030();
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e56750();
            plVar10 = local_40;
            if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            plVar8 = local_40;
            lVar2 = DAT_026e1090;
            if (DAT_026e1090 != 0) {
              FUN_00d50b00();
            }
            local_2a0 = lVar2;
            local_298 = '\x01';
            FUN_01cb6670();
            local_128 = local_50;
            local_120 = 0;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_120 = '\x01';
            (**(code **)(*plVar8 + 0x638))();
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            uVar12 = (**(code **)(*local_40 + 0x4d8))();
            uVar11 = param_2;
            uVar15 = in_XMM1_Dc;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (longlong *)FUN_00e8fc40();
            FUN_00152930();
            (**(code **)(*plVar7 + 0x18))();
            FUN_01d4ed60(param_2);
            FUN_01d52700();
            FUN_01e5ca90();
            (**(code **)(*local_50 + 0x640))();
            plVar8 = local_40;
            FUN_01d52740();
            local_118 = local_60;
            local_110 = 0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_110 = '\x01';
            uVar13 = FUN_01d530c0();
            uVar16 = uVar11;
            uVar14 = FUN_01d530c0();
            (**(code **)(*plVar8 + 0x410))(uVar13,uVar16,uVar14,uVar11,uVar16,uVar15);
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52770();
            plVar8 = (longlong *)FUN_00e8fc40();
            FUN_0006daf0();
            *(undefined4 *)(plVar8 + 0x27) = 0;
            plVar8[0x2e] = 0;
            *(undefined4 *)(plVar8 + 0x2f) = 0;
            plVar8[0x30] = 0;
            *(undefined1 *)(plVar8 + 0x31) = 0;
            plVar8[0x28] = 0;
            plVar8[0x29] = 0;
            *(undefined4 *)(plVar8 + 0x2a) = 0;
            plVar8[0x2b] = 0;
            plVar8[0x2c] = 0;
            *(undefined8 *)((longlong)plVar8 + 0x165) = 0;
            *(undefined8 *)((longlong)plVar8 + 0x18c) = 0;
            *(undefined8 *)((longlong)plVar8 + 0x194) = 0;
            *(undefined8 *)((longlong)plVar8 + 0x199) = 0;
            plVar8[0x35] = 0;
            plVar8[0x36] = 0;
            plVar8[0x37] = 0;
            plVar8[0x38] = 0;
            *plVar8 = (longlong)&DAT_02682cf8;
            plVar8[2] = (longlong)&DAT_026837c0;
            plVar8[0x39] = 0;
            plVar8[0x3a] = 0;
            *(undefined4 *)(plVar8 + 0x3b) = 0;
            plVar8[0x3c] = 0;
            plVar8[0x3d] = 0;
            *(undefined2 *)(plVar8 + 0x3e) = 0;
            (*pcVar3)();
            local_288 = '\0';
            local_290 = plVar7;
            FUN_01d56f30();
            if ((local_288 != '\0') && (local_290 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d57ee0();
            (**(code **)(*plVar8 + 0x4d0))(uVar12);
            (**(code **)(*plVar8 + 0x558))();
            FUN_01d57ec0();
            FUN_01e5ca90();
            local_278 = '\0';
            local_270 = 0;
            local_268 = '\0';
            local_280 = plVar8;
            (**(code **)(*local_40 + 0x468))(&local_270,3);
            if ((local_268 != '\0') && (local_270 != 0)) {
              FUN_00d50b20();
            }
            if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            FUN_01e43460();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_260 = 0;
            local_258 = '\0';
            FUN_01f27fe0();
            local_108 = local_40;
            local_100 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_100 = '\x01';
            local_248 = '\0';
            local_250 = 0;
            FUN_01e57a30(&local_250,&local_108);
            if ((local_248 != '\0') && (local_250 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_258 != '\0') && (local_260 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50130();
            FUN_00d50b20();
            FUN_00d50b20();
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        if (local_40 != (longlong *)0x0) goto LAB_0027f390;
LAB_0027f510:
        if (local_13c == 1) {
          local_240 = local_a0;
          local_238 = '\0';
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10b0;
          local_230 = lVar2;
          local_228 = '\x01';
          if (DAT_026e10b0 != 0) {
            FUN_00d50b00();
          }
          local_220 = lVar4;
          local_218 = '\x01';
          local_210 = 0;
          local_208 = '\0';
          FUN_00d31230(&local_210,&local_220);
          local_f8 = local_50;
          local_f0 = 0;
          lVar2 = DAT_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
              lVar2 = DAT_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_f0 = '\x01';
          DAT_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_f0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10b8;
          local_1f8 = '\x01';
          local_200 = lVar2;
          if (DAT_026e10b8 != 0) {
            FUN_00d50b00();
          }
          local_1f0 = lVar4;
          local_1e8 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          FUN_00d31230(&local_1e0,&local_1f0);
          local_e8 = local_60;
          local_e0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_e0 = '\x01';
          FUN_004ae0b0(&local_e8,&local_f8);
          plVar10 = local_40;
          if (local_40 == (longlong *)0x0) {
            bVar1 = false;
            plVar10 = (longlong *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e8 != '\0') && (local_1f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1f8 != '\0') && (local_200 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if ((local_218 != '\0') && (local_220 != 0)) {
            FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1d0 = local_a0;
          local_1c8 = '\0';
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10c0;
          local_1c0 = lVar2;
          local_1b8 = '\x01';
          if (DAT_026e10c0 != 0) {
            FUN_00d50b00();
          }
          local_1b0 = lVar4;
          local_1a8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          FUN_00d31230(&local_1a0,&local_1b0);
          local_d8 = local_50;
          local_d0 = 0;
          lVar2 = DAT_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
              lVar2 = DAT_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_d0 = '\x01';
          DAT_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_d0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10c8;
          local_188 = '\x01';
          local_190 = lVar2;
          if (DAT_026e10c8 != 0) {
            FUN_00d50b00();
          }
          local_180 = lVar4;
          local_178 = '\x01';
          local_170 = 0;
          local_168 = '\0';
          FUN_00d31230(&local_170,&local_180);
          local_c8 = local_60;
          local_c0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_c0 = '\x01';
          FUN_004ae0b0(&local_c8,&local_d8);
          plVar10 = local_40;
          if (local_40 == (longlong *)0x0) {
            bVar1 = false;
            plVar10 = (longlong *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
        }
        if (plVar10 != (longlong *)0x0) {
          local_158 = '\0';
          local_160 = 0;
          FUN_01f27fe0();
          local_b8 = local_40;
          local_b0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_148 = '\0';
          local_150 = 0;
          FUN_01e57a30(&local_150,&local_b8);
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50130();
          if (bVar1) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      FUN_00da7180();
      if (local_90 == 0) break;
      local_90 = 0;
      if (local_88 == '\0') {
        local_88 = '\0';
        break;
      }
      FUN_00d50b20();
      local_88 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


