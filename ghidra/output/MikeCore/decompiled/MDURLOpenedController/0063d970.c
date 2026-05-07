// Function: FUN_0063d970
// Address: 0063d970
// Size: 2610 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"


/* WARNING: Removing unreachable block (ram,0x0063d9e8) */
/* WARNING: Removing unreachable block (ram,0x0063d9ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0063d970(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined8 local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    local_80 = '\0';
    local_88 = 0;
    FUN_00da5ad0();
    local_70 = local_90 != '\0';
    local_78 = local_98;
    if ((bool)local_70) {
      local_90 = '\0';
    }
    local_68 = FUN_00da7170();
    FUN_00da7180();
    if (local_78 != 0) {
      do {
        local_90 = '\0';
        local_98 = 0;
        local_1f0 = 0x4014000000000000;
        FUN_01f27fe0();
        FUN_00281390();
        FUN_00e6dc80(&local_1f0,&local_98);
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
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027258a0;
        if (plVar1 == (longlong *)0x0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x180);
          local_188 = local_88;
          local_180 = '\0';
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_02725918;
          local_178 = lVar3;
          local_170 = '\x01';
          if (DAT_02725918 != 0) {
            FUN_00d50b00();
          }
          local_168 = lVar4;
          local_160 = '\x01';
          local_158 = 0;
          local_150 = '\0';
          FUN_00d31230(&local_158,&local_168);
          local_b8 = local_60;
          local_b0 = 0;
          lVar3 = DAT_027258a0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              lVar3 = DAT_027258a0;
            }
          }
          else {
            local_58 = '\0';
          }
          local_b0 = '\x01';
          DAT_027258a0 = lVar3;
          if (lVar3 != 0) {
            local_b0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = DAT_02725920;
          local_140 = '\x01';
          local_148 = lVar3;
          if (DAT_02725920 != 0) {
            FUN_00d50b00();
          }
          local_138 = lVar4;
          local_130 = '\x01';
          local_128 = 0;
          local_120 = '\0';
          FUN_00d31230(&local_128,&local_138);
          local_a8 = local_50;
          local_a0 = 0;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_a0 = '\x01';
          FUN_004ae0b0(&local_a8,&local_b8);
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
          local_118 = 0;
          local_110 = '\0';
          (**(code **)(*plVar1 + 0x448))(&local_118,&stack0xffffffffffffff08);
          if ((local_110 != '\0') && (local_118 != 0)) {
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
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
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
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar8 = FUN_01e697d0();
          local_1e8 = plVar1;
          local_1e0 = '\0';
          FUN_01e69930(uVar8,0);
          if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_98 != 0) {
            FUN_01f27fe0();
            FUN_00281390();
            FUN_00dbbbc0();
            lVar3 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00e658e0((int)local_1f0);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar3 = DAT_02725930;
          if (DAT_02725930 != 0) {
            FUN_00d50b00();
          }
          local_1d8 = lVar3;
          local_1d0 = '\x01';
          local_1c8 = 0;
          local_1c0 = '\0';
          local_1b8 = 0;
          local_1b0 = '\0';
          FUN_01e4fcf0(&local_1b8,&local_1c8);
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
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00dbbbc0();
            plVar2 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_0054d030();
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = *(longlong **)(unaff_RDI + 0x180);
            local_1a0 = '\0';
            local_1a8 = plVar1;
            FUN_00d50b00();
            local_198 = 0;
            local_190 = '\0';
            (**(code **)(*plVar2 + 0x448))(&local_198,&stack0xfffffffffffffef8);
            if ((local_190 != '\0') && (local_198 != 0)) {
              FUN_00d50b20();
            }
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00da7180();
        if (local_78 == 0) break;
        local_78 = 0;
        if (local_70 == '\0') {
          local_70 = '\0';
          break;
        }
        FUN_00d50b20();
        local_70 = '\0';
      } while (local_78 != 0);
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}


