// Function: FUN_0063c780
// Address: 0063c780
// Size: 2519 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"


/* WARNING: Removing unreachable block (ram,0x0063cefc) */
/* WARNING: Removing unreachable block (ram,0x0063cf0c) */
/* WARNING: Removing unreachable block (ram,0x0063c7f8) */
/* WARNING: Removing unreachable block (ram,0x0063c7fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0063c780(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong **pplVar8;
  longlong unaff_RDI;
  undefined4 uVar9;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    local_70 = '\0';
    local_78 = 0;
    FUN_00da5ad0();
    local_60 = local_90 != '\0';
    local_68 = local_98;
    if ((bool)local_60) {
      local_90 = '\0';
    }
    local_58 = FUN_00da7170();
    FUN_00da7180();
    if (local_68 != 0) {
      do {
        local_90 = '\0';
        local_98 = 0;
        FUN_01f27fe0();
        FUN_00281390();
        FUN_00e70a20(1,&local_98);
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
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = DAT_027258a0;
        if (plVar1 == (longlong *)0x0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x180);
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_02725918;
          if (DAT_02725918 != 0) {
            FUN_00d50b00();
          }
          local_1c8 = lVar3;
          local_1c0 = '\x01';
          local_1b8 = 0;
          local_1b0 = '\0';
          FUN_00d31230(&local_1b8,&local_1c8);
          local_c8 = local_50;
          local_c0 = 0;
          lVar3 = DAT_027258a0;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              lVar3 = DAT_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_c0 = '\x01';
          DAT_027258a0 = lVar3;
          if (lVar3 != 0) {
            local_c0 = '\x01';
            FUN_00d50b00();
          }
          lVar5 = DAT_02725920;
          local_1a0 = '\x01';
          local_1a8 = lVar3;
          if (DAT_02725920 != 0) {
            FUN_00d50b00();
          }
          local_198 = lVar5;
          local_190 = '\x01';
          local_188 = 0;
          local_180 = '\0';
          FUN_00d31230(&local_188,&local_198);
          local_b8 = local_88;
          local_b0 = 0;
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_b0 = '\x01';
          FUN_004ae0b0(&local_b8,&local_c8);
          plVar2 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d50b00();
          local_178 = 0;
          local_170 = '\0';
          (**(code **)(*plVar1 + 0x448))(&local_178,&stack0xffffffffffffff08);
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          uVar9 = FUN_01e697d0();
          local_168 = plVar1;
          local_160 = '\0';
          FUN_01e69930(uVar9,0);
          if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_98 == 0) {
LAB_0063c99d:
            lVar4 = DAT_026d8ab8;
            if (DAT_026d8ab8 != 0) {
              FUN_00d50b00();
            }
            local_148 = lVar4;
            local_140 = '\x01';
            local_138 = 0;
            local_130 = '\0';
            local_128 = 0;
            local_120 = '\0';
            FUN_01e4fcf0(&local_128,&local_138);
            plVar1 = local_40;
            if ((DAT_0270e710 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
            pplVar8 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar8 = &local_40;
              if (cVar6 == '\0') {
                pplVar8 = (longlong **)&DAT_02802688;
              }
            }
            plVar1 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00dbbbc0();
              local_a8 = local_40;
              local_a0 = 0;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_a0 = '\x01';
              FUN_0054d030();
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar2 = *(longlong **)(unaff_RDI + 0x180);
              local_110 = '\0';
              local_118 = plVar1;
              FUN_00d50b00();
              local_108 = 0;
              local_100 = '\0';
              (**(code **)(*plVar2 + 0x448))(&local_108,&stack0xffffffffffffff18);
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if (unaff_RDI != 0) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            FUN_01f27fe0();
            FUN_00281390();
            local_158 = local_98;
            local_150 = '\0';
            cVar6 = FUN_00e6d4e0();
            if ((local_150 != '\0') && (local_158 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') goto LAB_0063c99d;
          }
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00da7180();
        if (local_68 == 0) break;
        local_68 = 0;
        if (local_60 == '\0') {
          local_60 = '\0';
          break;
        }
        FUN_00d50b20();
        local_60 = '\0';
      } while (local_68 != 0);
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}


