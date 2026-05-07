// Function: FUN_016d4550
// Address: 016d4550
// Size: 2732 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016d4550(undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  double dVar12;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  longlong local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  longlong local_160;
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  double local_140;
  double local_138;
  double local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  double local_e8;
  ulonglong uStack_e0;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  int local_80;
  pthread_key_t local_7c;
  longlong local_78;
  undefined8 *local_70;
  char local_68 [8];
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  local_7c = (pthread_key_t)param_1;
  local_80 = param_2;
  pvVar2 = _pthread_getspecific(local_7c);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = *unaff_RSI;
  local_120 = '\0';
  FUN_01901690();
  puVar7 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (undefined8 *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)puVar7 + 0xc) < 2) goto LAB_016d4fed;
  local_e8 = (double)CONCAT44(local_e8._4_4_,param_3);
  bVar9 = local_80 != 0;
  bVar10 = local_7c != 0;
  if (local_7c == 1) {
    FUN_016d53b0();
    local_78 = (longlong)local_70;
    param_1 = local_70;
    if (local_70 == (undefined8 *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
      if (local_68[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    local_c0 = 0;
    local_78 = 0;
  }
  local_b4 = 0xffffffff;
  lVar8 = **(longlong **)((longlong)puVar7 + 0x10);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_38 = lVar8;
  FUN_00d23340();
  puVar1 = local_70;
  lVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_68[0]);
  plVar6 = &local_90;
  if (local_68[0] != '\0') {
    plVar6 = (longlong *)local_68;
  }
  local_90 = CONCAT71(local_90._1_7_,local_68[0]);
  *(char *)plVar6 = '\0';
  if ((local_68[0] != '\0') && (puVar1 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (longlong)puVar1;
  if (((char)local_90 == '\0') && (puVar1 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)lVar8);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar8 = local_38;
  }
  uVar11 = FUN_019079b0();
  local_d0 = FUN_016cbad0(uVar11,0);
  pvVar2 = _pthread_getspecific((pthread_key_t)lVar8);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = local_38;
  local_110 = '\0';
  local_130 = (double)FUN_018fde50();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)lVar8);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar8 = local_38;
  }
  uVar11 = FUN_019079b0();
  FUN_016d5810(extraout_XMM0_Qa,uVar11);
  local_c8 = (longlong)local_70;
  if ((local_68[0] == '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  pVar5 = (pthread_key_t)lVar8;
  if ((bVar10 & (bVar9 | local_e8._0_1_)) != 0) {
    if (local_80 == 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar8 = local_40;
      }
      lVar3 = FUN_019079b0();
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar8);
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar8 = local_38;
      }
      local_a0 = FUN_019079b0();
      local_70 = (undefined8 *)lVar3;
      FUN_00e7b970();
      local_90 = (longlong)local_70;
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar8);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar8 = local_40;
      }
      local_e8 = (double)FUN_01907950();
      uStack_e0 = extraout_XMM0_Qb;
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar8);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar8 = local_38;
      }
      pVar5 = (pthread_key_t)lVar8;
      local_140 = (double)FUN_01907950();
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_108 = local_40;
      local_100 = '\0';
      local_138 = (double)FUN_018fde50();
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      dVar12 = (double)FUN_00e7c860();
      dVar12 = ((local_e8 - local_140) / (DAT_023b4df8 / ((local_138 + local_130) * DAT_023942d0)))
               / dVar12;
      auVar13._8_8_ = _UNK_023945b8 & uStack_e0 | _UNK_023945c8;
      auVar13._0_8_ = (double)(_DAT_023945b0 & (ulonglong)dVar12 | _DAT_023945c0) + dVar12;
      auVar13 = roundsd(auVar13,auVar13,0xb);
      local_a0 = CONCAT44(local_a0._4_4_,(int)auVar13._0_8_);
      local_70 = (undefined8 *)local_d0;
      FUN_00e7c2a0();
      FUN_00e7b970();
    }
    else {
      local_70 = (undefined8 *)local_d0;
      FUN_00e7c2a0();
    }
    local_e8 = (double)local_70;
    if (2 < *(int *)((longlong)puVar7 + 0xc)) {
      lVar8 = 1;
      do {
        lVar3 = *(longlong *)(*(longlong *)((longlong)puVar7 + 0x10) + lVar8 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_016d5920();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (longlong)*(int *)((longlong)puVar7 + 0xc) + -1);
    }
    local_180 = local_40;
    local_178 = 0;
    pVar5 = 0;
    FUN_016d5bb0(0,&local_180);
  }
  local_170 = (longlong)puVar7;
  local_168 = 0;
  FUN_016d5ce0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_150 = local_38;
  local_148 = local_40;
  pVar5 = 2;
  FUN_00083ea0(2,&local_148);
  uVar11 = FUN_016cef10();
  local_b0 = local_a0;
  local_a8 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      uVar11 = FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_a8 = '\x01';
  FUN_01901690(uVar11,&local_b0);
  if (puVar7 == (undefined8 *)local_90) {
LAB_016d4cc1:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = (undefined8 *)local_90;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_016d4cc1;
    }
    FUN_00d50b20();
    local_88 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (undefined8 *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_f0 = '\0';
  pVar5 = local_7c;
  local_f8 = (longlong)puVar7;
  FUN_01905110(local_130,1);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar5 = (pthread_key_t)local_38;
  }
  FUN_019079b0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  local_70 = (undefined8 *)FUN_0165cf20(0,0);
  local_90 = CONCAT44(local_90._4_4_,2);
  FUN_00e7c280();
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar5 = (pthread_key_t)local_40;
  }
  FUN_019079b0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  local_70 = (undefined8 *)FUN_0165cf20(0,0);
  local_a0 = CONCAT44(local_a0._4_4_,2);
  uVar11 = FUN_00e7c260();
  FUN_016d62b0(uVar11,local_70);
  uVar11 = FUN_016d63b0();
  if (local_7c == 1) {
    local_160 = local_78;
    local_158 = 0;
    FUN_016d6df0(uVar11,1);
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (local_c8 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
LAB_016d4fed:
  FUN_00d50b20();
  return;
}


