// Function: FUN_0071d920
// Address: 0071d920
// Size: 2925 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"


/* WARNING: Removing unreachable block (ram,0x0071da24) */
/* WARNING: Removing unreachable block (ram,0x0071da29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0071d920(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  double dVar9;
  undefined8 uVar10;
  undefined8 local_218;
  longlong *local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong *local_1c0;
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
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    dVar9 = (double)FUN_00e7d6f0();
    if ((dVar9 - *(double *)(unaff_RDI + 0xa0)) * DAT_023907c0 < DAT_023b74a0) {
      uVar7 = 0;
    }
    else {
      uVar10 = FUN_00e7d6f0();
      *(undefined8 *)(unaff_RDI + 0xa0) = uVar10;
      plVar1 = *(longlong **)(unaff_RDI + 0x68);
      FUN_00097120();
      plVar8 = DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar8 = DAT_02802688;
        if (cVar4 != '\0') {
          plVar8 = *(longlong **)(unaff_RDI + 0x68);
        }
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_88 = '\0';
      local_90 = 0;
      local_58 = plVar8;
      FUN_00da5ad0();
      local_78 = local_98 != '\0';
      local_80 = local_a0;
      if ((bool)local_78) {
        local_98 = '\0';
      }
      local_70 = FUN_00da7170();
      FUN_00da7180();
      if (local_80 != 0) {
        do {
          local_98 = '\0';
          local_a0 = 0;
          FUN_01f27fe0();
          FUN_00281390();
          FUN_00e6dc80(&local_218,&local_a0);
          plVar1 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 == (longlong *)0x0) {
            if (local_58 != (longlong *)0x0) {
              uVar10 = FUN_00d50b00();
              local_1a0 = 0;
              local_198 = '\0';
              FUN_00093ce0(uVar10,&local_1a0);
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if (unaff_RDI != 0) {
                FUN_00d50b20();
              }
              lVar2 = DAT_027258a0;
              local_190 = local_90;
              local_188 = '\0';
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_02725918;
              local_180 = lVar2;
              local_178 = '\x01';
              if (DAT_02725918 != 0) {
                FUN_00d50b00();
              }
              local_170 = lVar3;
              local_168 = '\x01';
              local_160 = 0;
              local_158 = '\0';
              FUN_00d31230(&local_160,&local_170);
              local_c0 = local_68;
              local_b8 = 0;
              lVar2 = DAT_027258a0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_60 = '\0';
              }
              local_b8 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_b8 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_02725920;
              local_148 = '\x01';
              local_150 = lVar2;
              if (DAT_02725920 != 0) {
                FUN_00d50b00();
              }
              local_140 = lVar3;
              local_138 = '\x01';
              local_130 = 0;
              local_128 = '\0';
              FUN_00d31230(&local_130,&local_140);
              local_b0 = local_50;
              local_a8 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_a8 = '\x01';
              uVar10 = FUN_004ae0b0(&local_b0,&local_c0);
              plVar8 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar10 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_118 = '\0';
              local_120 = 0;
              FUN_00093ce0(uVar10,&local_120);
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_158 != '\0') && (local_160 != 0)) {
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
              FUN_01e54790();
            }
          }
          else {
            uVar10 = FUN_01e697d0();
            local_210 = plVar1;
            local_208 = '\0';
            FUN_01e69930(uVar10,0);
            if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_a0 != 0) {
              FUN_01f27fe0();
              FUN_00281390();
              plVar8 = local_40;
              FUN_00dbbbc0();
              lVar2 = local_50;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00e658e0(local_218);
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            lVar2 = DAT_02725930;
            if (local_58 != (longlong *)0x0) {
              if (DAT_02725930 != 0) {
                FUN_00d50b00();
              }
              local_200 = lVar2;
              local_1f8 = '\x01';
              local_1f0 = 0;
              local_1e8 = '\0';
              local_1e0 = 0;
              local_1d8 = '\0';
              FUN_01e4fcf0(&local_1e0,&local_1f0);
              plVar8 = local_40;
              if ((DAT_0270e710 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
              pplVar6 = &DAT_02802688;
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x360))();
                cVar4 = FUN_00e85ea0();
                pplVar6 = &local_40;
                if (cVar4 == '\0') {
                  pplVar6 = &DAT_02802688;
                }
              }
              plVar1 = *pplVar6;
              if (*(char *)(pplVar6 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar6 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (plVar1 != (longlong *)0x0) {
                FUN_00dbbbc0();
                plVar8 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_0054d030();
                if (plVar8 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar10 = FUN_00d50b00();
                local_1d0 = 0;
                local_1c8 = '\0';
                uVar10 = FUN_00093ce0(uVar10,&local_1d0);
                if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                  uVar10 = FUN_00d50b20();
                }
                if (unaff_RDI != 0) {
                  uVar10 = FUN_00d50b20();
                }
                local_1b8 = '\0';
                local_1b0 = 0;
                local_1a8 = '\0';
                local_1c0 = plVar1;
                FUN_00093ce0(uVar10,&local_1b0);
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01e54790();
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00da7180();
          if (local_80 == 0) break;
          local_80 = 0;
          if (local_78 == '\0') {
            local_78 = '\0';
            break;
          }
          FUN_00d50b20();
          local_78 = '\0';
        } while (local_80 != 0);
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar7 & 0xffffffff;
}


