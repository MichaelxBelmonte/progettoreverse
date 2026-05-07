// Function: FUN_016effc0
// Address: 016effc0
// Size: 3505 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016f05d7) */
/* WARNING: Removing unreachable block (ram,0x016f05e4) */
/* WARNING: Removing unreachable block (ram,0x016f0c4d) */
/* WARNING: Removing unreachable block (ram,0x016f0c56) */
/* WARNING: Removing unreachable block (ram,0x016f0903) */
/* WARNING: Removing unreachable block (ram,0x016f090c) */
/* WARNING: Removing unreachable block (ram,0x016f07a7) */
/* WARNING: Removing unreachable block (ram,0x016f07b0) */
/* WARNING: Removing unreachable block (ram,0x016f0497) */
/* WARNING: Removing unreachable block (ram,0x016f04a0) */
/* WARNING: Removing unreachable block (ram,0x016f064e) */
/* WARNING: Removing unreachable block (ram,0x016f0657) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016effc0(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar13;
  longlong local_f8;
  char local_f0;
  ulonglong local_e8;
  char local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  ulonglong local_90;
  ulonglong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  char local_40;
  
  uVar7 = local_88;
  if (param_1 != 1) {
    return;
  }
  lVar11 = *unaff_RSI;
  if (*(ulonglong *)(lVar11 + 0xc) >> 0x20 == 0) {
LAB_016f00a5:
    if (*(ulonglong *)(lVar11 + 0x14) >> 0x20 == 0) {
LAB_016f00b2:
      bVar1 = false;
      local_48 = 0;
      goto LAB_016f0cfa;
    }
    if (*(char *)(unaff_RDI + 0x80) == '\x01') {
LAB_016f0116:
      local_48 = CONCAT44(local_48._4_4_,1);
      FUN_00e7c280();
    }
    else {
      FUN_00d64850();
      *(undefined1 *)(unaff_RDI + 0x80) = 1;
      FUN_00d64910();
      if (*(ulonglong *)(*unaff_RSI + 0x14) >> 0x20 != 0) goto LAB_016f0116;
      FUN_00e7bdb0();
    }
    FUN_00e7c280();
    uVar7 = *(ulonglong *)(*unaff_RSI + 0x14);
    if (uVar7 >> 0x20 == 0) {
      uVar7 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    local_48 = CONCAT44(local_48._4_4_,2);
    FUN_00e7c260();
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025fa538;
    uVar3 = _UNK_0239372c;
    uVar12 = _UNK_02393728;
    uVar13 = _UNK_02393724;
    *(undefined4 *)((longlong)puVar8 + 0xc) = _DAT_02393720;
    *(undefined4 *)(puVar8 + 2) = uVar13;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar12;
    *(undefined4 *)(puVar8 + 3) = uVar3;
    uVar13 = FUN_00d500e0();
    FUN_016bf110(uVar13,uVar7);
    FUN_016d9380();
    FUN_00d50b20();
    uVar10 = *(ulonglong *)(*unaff_RSI + 0x14);
    pVar9 = (pthread_key_t)(uVar10 >> 0x20);
    if (uVar10 >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
      local_48 = uVar10;
    }
    local_58 = CONCAT44(local_58._4_4_,1);
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_0165d690();
    pVar9 = 0;
    FUN_016d7110(0,uVar6);
    if ((local_80 == '\0') && (uVar7 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_80 == '\0') && (uVar7 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = '\0';
    pVar9 = 0;
    local_e8 = uVar7;
    FUN_01900ad0(0,&local_e8);
    if ((local_80 == '\0') && (uVar7 != 0)) {
      FUN_00d50b00();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = uVar7;
    local_d0 = uVar7;
    FUN_00083ea0(2,&local_d0);
    uVar13 = FUN_016cef10();
    local_c0 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_58;
    FUN_01901690(uVar13,&local_c8);
    if (local_48 == 0) {
      bVar1 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (uVar7 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
    }
    goto LAB_016f0cfa;
  }
  if (*(int *)(lVar11 + 0x18) != 0) {
    cVar4 = FUN_00e7c000();
    if (cVar4 != '\0') goto LAB_016f00b2;
    lVar11 = *unaff_RSI;
    if (*(ulonglong *)(lVar11 + 0xc) >> 0x20 == 0) goto LAB_016f00a5;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_0165d690();
  FUN_016da710(extraout_XMM0_Da,uVar6);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_016f0148;
    }
LAB_016f01e7:
    bVar1 = true;
    bVar2 = true;
    if (*(int *)(*unaff_RSI + 0x18) != 0) goto LAB_016f020e;
LAB_016f01d9:
    if (bVar2) {
LAB_016f01df:
      uVar10 = 0;
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_019079b0();
      local_58 = *(longlong *)(unaff_RDI + 0x68);
      lVar11 = local_58;
      uVar13 = FUN_00e7b820();
      param_1 = (pthread_key_t)lVar11;
      FUN_016da710(uVar13,local_48);
      uVar10 = local_88;
      if (local_80 == '\0') {
        if (local_88 == 0) goto LAB_016f01df;
        FUN_00d50b00();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    if ((local_80 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d0 = local_88;
    local_d8 = uVar10;
    FUN_00083ea0(2,&local_d0);
    uVar13 = FUN_016cef10();
    local_b0 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_b0 = '\x01';
    local_b8 = local_58;
    FUN_01901690(uVar13,&local_b8);
    if (local_48 == 0) {
      bVar1 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_88 == 0) goto LAB_016f01e7;
LAB_016f0148:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = FUN_019079b0();
    local_48 = *(ulonglong *)(unaff_RDI + 0x68);
    uVar10 = local_48;
    uVar13 = FUN_00e7b970();
    param_1 = (pthread_key_t)uVar10;
    FUN_016da710(uVar13,local_88);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (*(int *)(*unaff_RSI + 0x18) == 0) goto LAB_016f01d9;
LAB_016f020e:
    if (bVar1) {
LAB_016f0214:
      local_90 = 0;
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_019079b0();
      local_58 = *(longlong *)(unaff_RDI + 0x68);
      uVar13 = (undefined4)((ulonglong)local_58 >> 0x20);
      uVar12 = FUN_00e7b820();
      FUN_016da710(uVar12,uVar6);
      local_58._4_4_ = uVar13;
      if (local_80 == '\0') {
        if (local_88 == 0) goto LAB_016f0214;
        local_90 = local_88;
        FUN_00d50b00();
      }
      else {
        local_90 = local_88;
      }
    }
    local_48 = *(ulonglong *)(*unaff_RSI + 0x14);
    pVar9 = (pthread_key_t)(local_48 >> 0x20);
    if (local_48 >> 0x20 == 0) {
      local_48 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    local_58 = CONCAT44(local_58._4_4_,1);
    FUN_00e7c260();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_0165d690();
    FUN_016da710(extraout_XMM0_Da_00,uVar6);
    if (uVar7 == local_88) {
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar7 = local_88;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      else if (!bVar1) {
        FUN_00d50b20();
      }
    }
    if (uVar7 == 0) {
LAB_016f0b56:
      local_88 = 0;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_019079b0();
      local_58 = *(longlong *)(unaff_RDI + 0x68);
      lVar11 = local_58;
      uVar13 = FUN_00e7b970();
      pVar9 = (pthread_key_t)lVar11;
      FUN_016da710(uVar13,local_48);
      if (local_80 == '\0') {
        if (local_88 == 0) goto LAB_016f0b56;
        FUN_00d50b00();
      }
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = local_90;
    local_d0 = local_88;
    FUN_00083ea0(2,&local_d0);
    uVar13 = FUN_016cef10();
    local_a0 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_58;
    FUN_01901690(uVar13,&local_a8);
    if (local_48 == 0) {
      bVar1 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
LAB_016f0cfa:
  FUN_016ecb60(1,0,1);
  lVar11 = *unaff_RSI;
  uVar6 = FUN_00e7bdb0();
  *(undefined8 *)(lVar11 + 0x14) = uVar6;
  *(undefined8 *)(lVar11 + 0xc) = uVar6;
  if ((bVar1) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


