// Function: FUN_00773ea0
// Address: 00773ea0
// Size: 2232 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x00773f77) */
/* WARNING: Removing unreachable block (ram,0x00773f83) */

void FUN_00773ea0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0xd8) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar8 = *(longlong *)(unaff_RSI + 0xd8);
    *(longlong **)(unaff_RSI + 0xd8) = plVar5;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00dd6a00();
  lVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar8;
  FUN_0078d520();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar8 == 0) {
    uVar4 = FUN_01433c20();
    lVar1 = DAT_02729670;
    pVar7 = 0x774d98;
    switch(uVar4) {
    case 1:
      FUN_013fb3a0();
      if (local_40 == 0) {
        cVar3 = '\0';
      }
      else {
        FUN_013fb3a0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b660();
        if (local_1b8 == 0) {
          cVar3 = '\0';
        }
        else {
          FUN_013fb3a0();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0141b660();
          lVar1 = DAT_02729668;
          if (DAT_02729668 != 0) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02729670;
      if (cVar3 == '\0') {
        if (DAT_02729670 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02729680;
        local_128 = lVar1;
        local_120 = '\x01';
        if (DAT_02729680 != 0) {
          FUN_00d50b00();
        }
        local_118 = lVar2;
        local_110 = '\x01';
        local_108 = 0;
        local_100 = '\0';
        FUN_00d31230(&local_108,&local_118);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_02729670 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02729678;
        if (DAT_02729678 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar2;
        local_140 = '\x01';
        local_138 = 0;
        local_130 = '\0';
        FUN_00d31230(&local_138,&local_148);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      break;
    case 2:
      if (DAT_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02729678;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (DAT_02729678 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 3:
      if (DAT_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02729688;
      local_c8 = lVar1;
      local_c0 = '\x01';
      if (DAT_02729688 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 4:
      if (DAT_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02729690;
      local_98 = lVar1;
      local_90 = '\x01';
      if (DAT_02729690 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      FUN_00d31230(&local_78,&local_88);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      local_60 = '\0';
      local_58 = local_48;
      local_50 = '\0';
      local_68 = lVar8;
      FUN_0078d5d0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = lVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


