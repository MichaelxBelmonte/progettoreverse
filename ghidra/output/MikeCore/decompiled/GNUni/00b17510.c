// Function: FUN_00b17510
// Address: 00b17510
// Size: 2062 bytes
// Class: GNUni


void FUN_00b17510(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong local_188;
  longlong local_180;
  longlong local_178;
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
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((longlong *)*unaff_RDI == DAT_028a0d90) {
    return;
  }
  if (DAT_028a0d90 == (longlong *)0x0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*DAT_028a0d90 + 0x390))();
    if (cVar5 != '\0') {
      (**(code **)(*DAT_028a0d90 + 0x370))();
    }
    if (DAT_028a0d90 != (longlong *)0x0) {
      if (DAT_028a0d90[0x15] != 0) {
        DAT_028a0d90[0x15] = 0;
        FUN_00d50b20();
        if (DAT_028a0d90 == (longlong *)0x0) goto LAB_00b177c8;
      }
      cVar6 = (**(code **)(*DAT_028a0d90 + 0x5f8))();
      if (cVar6 != '\0') {
        (**(code **)(*DAT_028a0d90 + 0x5f0))();
      }
      if (DAT_028a0d90 != (longlong *)0x0) {
        cVar6 = (**(code **)(*DAT_028a0d90 + 0x5f8))();
        if (cVar6 != '\0') {
          FUN_00b173b0();
          lVar1 = DAT_0275e018;
          if (DAT_0275e018 != 0) {
            FUN_00d50b00();
          }
          local_c8 = local_48;
          local_d0 = lVar1;
          FUN_00083ea0(2,&local_d0);
          FUN_000b4da0();
          lVar2 = local_38;
          if (local_30 == '\0') {
            if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_30 = '\0';
          }
          local_b8 = (longlong *)&DAT_0253d630;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          local_b8 = &DAT_024c5048;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          lVar1 = DAT_0275e028;
          if (DAT_0275e028 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_0275e038;
          local_170 = lVar1;
          local_168 = '\x01';
          if (DAT_0275e038 != 0) {
            FUN_00d50b00();
          }
          local_160 = lVar3;
          local_158 = '\x01';
          FUN_01f6ca30();
          local_150 = lVar2;
          local_148 = '\0';
          (**(code **)(*local_b8 + 0x5d8))();
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        if (DAT_028a0d90 != (longlong *)0x0) {
          FUN_00d403d0();
          local_140 = DAT_02703b00;
          if (DAT_02703b00 != 0) {
            FUN_00d50b00();
          }
          plVar7 = DAT_028a0d90;
          local_138 = '\x01';
          local_60 = 0;
          if (DAT_028a0d90 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_68 = plVar7;
          local_60 = '\x01';
          local_130 = 0;
          local_128 = '\0';
          FUN_00d40470(&local_130,&local_68,3,3);
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
LAB_00b177c8:
  (**(code **)(*(longlong *)*unaff_RDI + 0x710))();
  plVar4 = DAT_028a0d90;
  plVar7 = (longlong *)*unaff_RDI;
  if (DAT_028a0d90 != plVar7) {
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    DAT_028a0d90 = plVar7;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar7 = (longlong *)*unaff_RDI;
  }
  if ((plVar7 != (longlong *)0x0) && (DAT_028a0d98 == '\0')) {
    DAT_028a0d98 = '\x01';
    FUN_00e8cb90();
  }
  if (DAT_028a0d90[0x15] != 0) {
    DAT_028a0d90[0x15] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a0d90 + 0x5e8))();
  cVar6 = (**(code **)(*DAT_028a0d90 + 0x5f8))();
  if (cVar6 == '\0') {
    (**(code **)(*DAT_028a0d90 + 0x5e0))();
    lVar1 = DAT_0275e010;
    if (DAT_0275e010 != 0) {
      FUN_00d50b00();
    }
    FUN_00b173b0();
    lVar2 = DAT_0275e018;
    if (DAT_0275e018 != 0) {
      FUN_00d50b00();
    }
    local_d0 = local_48;
    local_188 = lVar1;
    local_180 = local_c8;
    local_178 = lVar2;
    FUN_00b8f440(&local_180,&local_188,&local_178,4);
    FUN_000b4da0();
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_007f76c0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0275e028;
    if (DAT_0275e028 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_0275e040;
    local_120 = lVar1;
    local_118 = '\x01';
    if (DAT_0275e040 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    FUN_01f6ca30();
    local_100 = lVar3;
    local_f8 = '\0';
    (**(code **)(*local_b8 + 0x5d8))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*DAT_028a0d90 + 0x5d8))();
  }
  FUN_00d403d0();
  local_f0 = DAT_026d8900;
  if (DAT_026d8900 != 0) {
    FUN_00d50b00();
  }
  plVar7 = DAT_028a0d90;
  local_e8 = '\x01';
  local_50 = 0;
  if (DAT_028a0d90 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_58 = plVar7;
  local_50 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d40470(&local_e0,&local_58,3,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    (**(code **)(*DAT_028a0d90 + 0x368))();
  }
  return;
}


