// Function: FUN_00327aa0
// Address: 00327aa0
// Size: 2462 bytes
// Class: MDEditorViewController


void FUN_00327aa0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  undefined7 uVar5;
  undefined4 uVar6;
  undefined7 uVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  longlong *plVar11;
  bool bVar12;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
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
  longlong *local_60;
  char local_58;
  longlong local_50;
  longlong *local_48;
  char local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_01a3ce90();
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_48 + 0x450))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') goto LAB_00328424;
  local_50 = lVar3;
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = DAT_027024f0;
  if (DAT_027024f0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  plVar8 = local_48;
  if (local_48 == (longlong *)0x0) {
    bVar10 = 1;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar4 = FUN_00d50b00();
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      bVar10 = 0;
      if ((local_40 == '\0') || (bVar10 = 0, local_48 == (longlong *)0x0)) goto LAB_00327be8;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    bVar10 = 0;
  }
LAB_00327be8:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_98 = 0;
  plVar9 = (longlong *)(unaff_RDI + 0x138);
  (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  local_170 = plVar8;
  local_168 = '\0';
  local_a0 = plVar9;
  FUN_00cbad30(&local_170,&local_180,0xa0);
  if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = DAT_027024f8;
  if (DAT_027024f8 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar3;
  local_158 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
  uVar7 = (undefined7)((ulonglong)lVar3 >> 8);
  if (plVar8 == local_48) {
    uVar6 = local_34;
    if ((bool)(bVar10 & plVar8 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_00327d5f;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar7,1);
    }
LAB_00327dbd:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = plVar8 != (longlong *)0x0;
      uVar6 = (undefined4)CONCAT71(uVar7,1);
      plVar8 = plVar11;
      if (((byte)local_34 & bVar12) == 1) {
        FUN_00d50b20();
      }
      goto LAB_00327dbd;
    }
    bVar12 = plVar8 != (longlong *)0x0;
    plVar8 = plVar11;
    if (((byte)local_34 & bVar12) == 1) {
      FUN_00d50b20();
      uVar5 = extraout_var;
    }
LAB_00327d5f:
    local_40 = '\0';
    uVar6 = (int)CONCAT71(uVar5,1);
  }
  local_34 = uVar6;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  local_138 = '\0';
  local_140 = plVar8;
  local_90 = plVar9;
  FUN_00cbad30(&local_140,&local_150,0xa0);
  if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = DAT_02702500;
  if (DAT_02702500 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
  if (plVar8 == local_48) {
    plVar11 = plVar8;
    uVar6 = local_34;
    if (((char)local_34 == '\0') && (plVar8 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_00327f30;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar5,1);
    }
LAB_00327fa0:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar6 = (undefined4)CONCAT71(uVar5,1);
      if (((char)local_34 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00327fa0;
    }
    if (((char)local_34 != '\0') && (plVar8 != (longlong *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
LAB_00327f30:
    local_40 = '\0';
    uVar6 = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  local_34 = uVar6;
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  local_108 = '\0';
  local_110 = plVar11;
  local_80 = plVar9;
  FUN_00cbad30(&local_110,&local_120,0xa0);
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  local_100 = DAT_02702508;
  if (DAT_02702508 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar8 = local_48;
  if (plVar11 == local_48) {
    plVar8 = plVar11;
    if (((char)local_34 == '\0') && (plVar11 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_0032810a;
      local_38 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      FUN_00d50b00();
    }
    else {
      local_38 = local_34;
    }
LAB_00328171:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_34 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00328171;
    }
    if (((char)local_34 != '\0') && (plVar11 != (longlong *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
LAB_0032810a:
    local_40 = '\0';
    local_38 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  local_d8 = '\0';
  local_e0 = plVar8;
  local_70 = plVar9;
  FUN_00cbad30(&local_e0,&local_f0,0xa0);
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0015e380();
  FUN_00e86210();
  local_d0 = DAT_02702510;
  if (DAT_02702510 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
  if (plVar8 == local_48) {
    plVar11 = plVar8;
    if (((char)local_38 == '\0') && (plVar8 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_003282d3;
      local_34 = (undefined4)CONCAT71(uVar5,1);
      local_38 = 0;
      FUN_00d50b00();
    }
    else {
      local_34 = local_38;
    }
LAB_00328334:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      local_34 = (undefined4)CONCAT71(uVar5,1);
      if (((char)local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
        local_38 = (undefined4)CONCAT71(uVar5,1);
        uVar4 = FUN_00d50b20();
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
      goto LAB_00328334;
    }
    if (((char)local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
      local_38 = (undefined4)CONCAT71(uVar5,1);
      uVar4 = FUN_00d50b20();
    }
LAB_003282d3:
    local_40 = '\0';
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_a8 = '\0';
  local_b0 = plVar11;
  local_60 = plVar9;
  FUN_00cbad30(&local_b0,&local_c0,0xa0);
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if (((char)local_34 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00328424:
  FUN_00d50b20();
  return;
}


