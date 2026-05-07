// Function: FUN_016effc0
// Address: 016effc0
// Size: 3505 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016effc0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void*puVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar13;
  int64_t local_f8;
  char local_f0;
  uint64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_90;
  uint64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  char local_50;
  uint64_t local_48;
  char local_40;
  
  uVar7 = local_88;
  if (param_1 != 1) {
    return;
  }
  lVar11 = *arg1;
  if (*(uint64_t *)(lVar11 + 0xc) >> 0x20 == 0) {
LAB_016f00a5:
    if (*(uint64_t *)(lVar11 + 0x14) >> 0x20 == 0) {
LAB_016f00b2:
      bVar1 = false;
      local_48 = 0;
      goto LAB_016f0cfa;
    }
    if (*(char *)(this_ptr + 0x80) == '\x01') {
LAB_016f0116:
      local_48 = CONCAT44(local_48._4_4_,1);
      FUN_00e7c280();
    }
    else {
      FUN_00d64850();
      *(void*)(this_ptr + 0x80) = 1;
      FUN_00d64910();
      if (*(uint64_t *)(*arg1 + 0x14) >> 0x20 != 0) goto LAB_016f0116;
      FUN_00e7bdb0();
    }
    FUN_00e7c280();
    uVar7 = *(uint64_t *)(*arg1 + 0x14);
    if (uVar7 >> 0x20 == 0) {
      uVar7 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    local_48 = CONCAT44(local_48._4_4_,2);
    FUN_00e7c260();
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025fa538;
    uVar3 = _UNK_0239372c;
    uVar12 = _UNK_02393728;
    uVar13 = _UNK_02393724;
    *(void*)((int64_t)puVar8 + 0xc) = g_02393720;
    *(void*)(puVar8 + 2) = uVar13;
    *(void*)((int64_t)puVar8 + 0x14) = uVar12;
    *(void*)(puVar8 + 3) = uVar3;
    uVar13 = FUN_00d500e0();
    FUN_016bf110(uVar13,uVar7);
    FUN_016d9380();
    FUN_00d50b20();
    uVar10 = *(uint64_t *)(*arg1 + 0x14);
    pVar9 = (void*)(uVar10 >> 0x20);
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
    lVar11 = *arg1;
    if (*(uint64_t *)(lVar11 + 0xc) >> 0x20 == 0) goto LAB_016f00a5;
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
    if (*(int *)(*arg1 + 0x18) != 0) goto LAB_016f020e;
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
      local_58 = *(int64_t *)(this_ptr + 0x68);
      lVar11 = local_58;
      uVar13 = FUN_00e7b820();
      param_1 = (void*)lVar11;
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
    local_48 = *(uint64_t *)(this_ptr + 0x68);
    uVar10 = local_48;
    uVar13 = FUN_00e7b970();
    param_1 = (void*)uVar10;
    FUN_016da710(uVar13,local_88);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (*(int *)(*arg1 + 0x18) == 0) goto LAB_016f01d9;
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
      local_58 = *(int64_t *)(this_ptr + 0x68);
      uVar13 = (uint32_t)((uint64_t)local_58 >> 0x20);
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
    local_48 = *(uint64_t *)(*arg1 + 0x14);
    pVar9 = (void*)(local_48 >> 0x20);
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
      local_58 = *(int64_t *)(this_ptr + 0x68);
      lVar11 = local_58;
      uVar13 = FUN_00e7b970();
      pVar9 = (void*)lVar11;
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
  lVar11 = *arg1;
  uVar6 = FUN_00e7bdb0();
  *(void*)(lVar11 + 0x14) = uVar6;
  *(void*)(lVar11 + 0xc) = uVar6;
  if ((bVar1) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

