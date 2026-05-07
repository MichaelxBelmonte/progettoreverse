// Function: FUN_01a0d330
// Address: 01a0d330
// Size: 2074 bytes
// Class: Unknown


void FUN_01a0d330(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar8;
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
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
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
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d23310();
  lVar2 = local_48;
  pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) goto LAB_01a0dafd;
  FUN_0006e1c0();
  local_50 = FUN_00e86210();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026d83d8;
  if (DAT_026d83d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  lVar5 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)(unaff_RDI + 0x1f8);
  local_98 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_190 = 0;
  local_188 = '\0';
  local_180 = lVar5;
  local_178 = '\0';
  local_a0 = plVar1;
  FUN_00cbadd0(&local_180,&local_190);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_026fe480;
  if (DAT_026fe480 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar2;
  local_168 = '\x01';
  FUN_00c841b0();
  lVar2 = local_48;
  if (lVar5 == local_48) {
LAB_01a0d5ee:
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar8 = lVar5 != 0;
      lVar5 = lVar2;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01a0d5ee;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_40[0] = '\0';
    lVar5 = lVar2;
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  local_148 = '\0';
  local_150 = lVar5;
  local_90 = plVar1;
  FUN_00cbadd0(&local_150,&local_160);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_026d8400;
  if (DAT_026d8400 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar2;
  local_138 = '\x01';
  FUN_00c841b0();
  lVar2 = local_48;
  if (lVar5 == local_48) {
LAB_01a0d74b:
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar8 = lVar5 != 0;
      lVar5 = lVar2;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01a0d74b;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_40[0] = '\0';
    lVar5 = lVar2;
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_118 = '\0';
  local_120 = lVar5;
  local_80 = plVar1;
  FUN_00cbadd0(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_026d83e8;
  if (DAT_026d83e8 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar2;
  local_108 = '\x01';
  FUN_00c841b0();
  lVar2 = local_48;
  if (lVar5 == local_48) {
LAB_01a0d89f:
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar8 = lVar5 != 0;
      lVar5 = lVar2;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01a0d89f;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_40[0] = '\0';
    lVar5 = lVar2;
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  local_e8 = '\0';
  local_f0 = lVar5;
  local_70 = plVar1;
  FUN_00cbadd0(&local_f0,&local_100);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_026d83e0;
  if (DAT_026d83e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = local_50;
  local_e0 = lVar2;
  local_d8 = '\x01';
  FUN_00c841b0();
  lVar2 = local_48;
  if (lVar5 == local_48) {
LAB_01a0d9f6:
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar8 = lVar5 != 0;
      lVar5 = lVar2;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01a0d9f6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_40[0] = '\0';
    lVar5 = local_48;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  local_b8 = '\0';
  local_c0 = lVar5;
  local_60 = plVar1;
  FUN_00cbadd0(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01a0dafd:
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_01a18830();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


