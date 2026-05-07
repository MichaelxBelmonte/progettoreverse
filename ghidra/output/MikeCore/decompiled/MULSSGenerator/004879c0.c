// Function: FUN_004879c0
// Address: 004879c0
// Size: 2967 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004879c0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
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
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_58;
  char local_50 [8];
  longlong *plVar7;
  char local_40;
  char local_38;
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  plVar5 = unaff_RDI;
  plVar7 = unaff_RDI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_58 == plVar5) {
      if (((local_38 == '\0') && (local_58 != (longlong *)0x0)) && (local_50[0] != '\0'))
      goto LAB_00487a57;
    }
    else {
      plVar5 = local_58;
      plVar7 = local_58;
      if (local_50[0] == '\0') {
        if (local_38 == '\0') {
          pcVar3 = &stack0xffffffffffffffc8;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &stack0xffffffffffffffc8;
        }
      }
      else {
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
LAB_00487a57:
        local_38 = '\x01';
        pcVar3 = local_50;
      }
      *pcVar3 = '\0';
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffb8;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38 == '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00487b03;
    }
    if (plVar5 == (longlong *)0x0) {
LAB_00487b03:
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x498))();
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x498))();
          plVar4 = unaff_RDI + 0x1a;
          local_118 = 0;
          (**(code **)(unaff_RDI[0x1a] + 0x10))();
          FUN_00d50b00();
          local_118 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          local_120 = plVar4;
          FUN_002771e0();
          uVar6 = FUN_00e86210();
          local_1d0 = DAT_027086f8;
          if (DAT_027086f8 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_1c8 = '\x01';
          FUN_00c841b0(uVar6,&local_1d0);
          local_b8 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_b8 = '\x01';
          local_c0 = plVar7;
          FUN_00cbad30(&local_c0,&local_1e0,4);
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
            (**(code **)(*local_120 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_108 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_108 = '\x01';
          local_1c0 = 0;
          local_1b8 = '\0';
          local_110 = plVar4;
          if ((DAT_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            _DAT_027e77e8 = FUN_0015ef90();
            _DAT_027e77d0 = "MULSSGenerator";
            _DAT_027e77d8 = 0x70;
            _DAT_027e77e0 = FUN_0015ef30;
            _DAT_027e77f0 = 0;
            uRam00000000027e77f8 = 0;
            _DAT_027e7800 = 0;
            uRam00000000027e7808 = 0;
            _DAT_027e7810 = 0;
            uRam00000000027e7818 = 0;
            _DAT_027e7820 = 0;
            uRam00000000027e7828 = 0;
            _DAT_027e7830 = 0;
            uRam00000000027e7838 = 0;
            _DAT_027e7840 = 0;
            uRam00000000027e7848 = 0;
            _DAT_027e7850 = 0;
            uRam00000000027e7858 = 0;
            _DAT_027e7860 = 0;
            uRam00000000027e7868 = 0;
            _DAT_027e7870 = 0;
            uRam00000000027e7878 = 0;
            _DAT_027e7880 = 0;
            uRam00000000027e7888 = 0;
            _DAT_027e7890 = 0;
            ___cxa_guard_release();
          }
          uVar6 = FUN_00e86210();
          local_1b0 = DAT_02708700;
          if (DAT_02708700 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_1a8 = '\x01';
          FUN_00c841b0(uVar6,&local_1b0);
          local_a8 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_a8 = '\x01';
          local_b0 = plVar7;
          FUN_00cbad30(&local_b0,&local_1c0,4);
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
            (**(code **)(*local_110 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_f8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_f8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          local_100 = plVar4;
          FUN_002771e0();
          uVar6 = FUN_00e86210();
          local_190 = DAT_02708708;
          if (DAT_02708708 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_188 = '\x01';
          FUN_00c841b0(uVar6,&local_190);
          local_98 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_98 = '\x01';
          local_a0 = plVar7;
          FUN_00cbad30(&local_a0,&local_1a0,4);
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
            (**(code **)(*local_100 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_e8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_e8 = '\x01';
          local_180 = 0;
          local_178 = '\0';
          local_f0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_170 = DAT_027ebef0;
          if (DAT_027ebef0 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_168 = '\x01';
          FUN_00c841b0(uVar6,&local_170);
          local_88 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_88 = '\x01';
          local_90 = plVar7;
          FUN_00cbad30(&local_90,&local_180,4);
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            (**(code **)(*local_f0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_d8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_d8 = '\x01';
          local_160 = 0;
          local_158 = '\0';
          local_e0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_150 = DAT_02708710;
          if (DAT_02708710 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_148 = '\x01';
          FUN_00c841b0(uVar6,&local_150);
          local_78 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = '\x01';
          local_80 = plVar7;
          FUN_00cbad30(&local_80,&local_160,4);
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            (**(code **)(*local_e0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_c8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_c8 = '\x01';
          local_140 = 0;
          local_138 = '\0';
          local_d0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_130 = DAT_02708718;
          if (DAT_02708718 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_128 = '\x01';
          FUN_00c841b0(uVar6,&local_130);
          local_68 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68 = '\x01';
          local_70 = plVar7;
          FUN_00cbad30(&local_70,&local_140,4);
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            (**(code **)(*local_d0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          *(undefined1 *)(unaff_RDI + 0x1b) = 1;
        }
      }
      FUN_0047dd70();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


