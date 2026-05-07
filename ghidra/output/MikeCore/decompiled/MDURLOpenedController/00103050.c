// Function: FUN_00103050
// Address: 00103050
// Size: 3569 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"


/* WARNING: Removing unreachable block (ram,0x00103281) */
/* WARNING: Removing unreachable block (ram,0x0010328d) */
/* WARNING: Removing unreachable block (ram,0x00103132) */
/* WARNING: Removing unreachable block (ram,0x00103137) */
/* WARNING: Removing unreachable block (ram,0x001032de) */
/* WARNING: Removing unreachable block (ram,0x001032ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00103050(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong *local_260;
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
  longlong local_140;
  char local_138;
  int local_12c;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x68);
    FUN_00097120();
    local_60 = DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      local_60 = DAT_02802688;
      if (cVar5 != '\0') {
        local_60 = *(longlong *)(unaff_RDI + 0x68);
      }
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      local_a0 = '\0';
      local_a8 = 0;
      FUN_00da5ad0();
      local_90 = local_48 != '\0';
      local_98 = local_50;
      if ((bool)local_90) {
        local_48 = '\0';
      }
      local_88 = FUN_00da7170();
      FUN_00da7180();
      if (local_98 != 0) {
        do {
          FUN_01f27fe0();
          FUN_00281390();
          lVar4 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = '\0';
          local_50 = 0;
          FUN_00e65ef0(&local_12c,&local_50);
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) goto LAB_001033c0;
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00103250:
            uVar8 = FUN_01e697d0();
            FUN_01e69930(uVar8,0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            cVar5 = FUN_00e6d780();
            if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
              lVar2 = DAT_02725930;
              if (DAT_02725930 != 0) {
                FUN_00d50b00();
              }
              local_280 = 0;
              local_278 = '\0';
              local_270 = 0;
              local_268 = '\0';
              FUN_01e4fcf0(&local_270,&local_280);
              plVar1 = local_40;
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
              pplVar7 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar7 = &local_40;
                if (cVar5 == '\0') {
                  pplVar7 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = *pplVar7;
              if (*(char *)(pplVar7 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar7 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_268 != '\0') && (local_270 != 0)) {
                FUN_00d50b20();
              }
              if ((local_278 != '\0') && (local_280 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
                FUN_00dbbbc0();
                local_118 = local_40;
                local_110 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_110 = '\x01';
                uVar8 = FUN_0054d030();
                if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
                local_258 = '\0';
                local_250 = 0;
                local_248 = '\0';
                local_260 = plVar1;
                FUN_00093ce0(uVar8,&local_250);
                if ((local_248 != '\0') && (local_250 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          else {
            if (local_40 != (longlong *)0x0) goto LAB_00103250;
LAB_001033c0:
            local_120 = 0;
            uVar8 = FUN_00d50b00();
            local_120 = '\x01';
            local_240 = 0;
            local_238 = '\0';
            local_128 = unaff_RDI;
            FUN_00093ce0(uVar8,&local_240);
            if ((local_238 != '\0') && (local_240 != 0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = DAT_027258a0;
            if (local_12c == 1) {
              local_230 = local_a8;
              local_228 = '\0';
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10b0;
              local_220 = lVar2;
              local_218 = '\x01';
              if (DAT_026e10b0 != 0) {
                FUN_00d50b00();
              }
              local_210 = lVar3;
              local_208 = '\x01';
              local_200 = 0;
              local_1f8 = '\0';
              FUN_00d31230(&local_200,&local_210);
              local_f8 = local_80;
              local_f0 = 0;
              lVar2 = DAT_027258a0;
              if (local_78 == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_f0 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_f0 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10b8;
              local_1e8 = '\x01';
              local_1f0 = lVar2;
              if (DAT_026e10b8 != 0) {
                FUN_00d50b00();
              }
              local_1e0 = lVar3;
              local_1d8 = '\x01';
              local_1d0 = 0;
              local_1c8 = '\0';
              FUN_00d31230(&local_1d0,&local_1e0);
              local_e8 = local_70;
              local_e0 = 0;
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_e0 = '\x01';
              uVar8 = FUN_004ae0b0(&local_e8,&local_f8);
              local_108 = local_40;
              local_100 = 0;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar8 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_100 = '\x01';
              local_1b8 = '\0';
              local_1c0 = 0;
              FUN_00093ce0(uVar8,&local_1c0);
              if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_f0 != '\0') && (local_f8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1f8 != '\0') && (local_200 != 0)) {
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
            }
            else {
              local_1b0 = local_a8;
              local_1a8 = '\0';
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10c0;
              local_1a0 = lVar2;
              local_198 = '\x01';
              if (DAT_026e10c0 != 0) {
                FUN_00d50b00();
              }
              local_190 = lVar3;
              local_188 = '\x01';
              local_180 = 0;
              local_178 = '\0';
              FUN_00d31230(&local_180,&local_190);
              local_c8 = local_80;
              local_c0 = 0;
              lVar2 = DAT_027258a0;
              if (local_78 == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_c0 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_c0 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10c8;
              local_168 = '\x01';
              local_170 = lVar2;
              if (DAT_026e10c8 != 0) {
                FUN_00d50b00();
              }
              local_160 = lVar3;
              local_158 = '\x01';
              local_150 = 0;
              local_148 = '\0';
              FUN_00d31230(&local_150,&local_160);
              local_b8 = local_70;
              local_b0 = 0;
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_b0 = '\x01';
              uVar8 = FUN_004ae0b0(&local_b8,&local_c8);
              local_d8 = local_40;
              local_d0 = 0;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar8 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_d0 = '\x01';
              local_138 = '\0';
              local_140 = 0;
              FUN_00093ce0(uVar8,&local_140);
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
              if ((local_158 != '\0') && (local_160 != 0)) {
                FUN_00d50b20();
              }
              if ((local_168 != '\0') && (local_170 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_178 != '\0') && (local_180 != 0)) {
                FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00da7180();
          if (local_98 == 0) break;
          local_98 = 0;
          if (local_90 == '\0') {
            local_90 = '\0';
            break;
          }
          FUN_00d50b20();
          local_90 = '\0';
        } while (local_98 != 0);
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e54790();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}


