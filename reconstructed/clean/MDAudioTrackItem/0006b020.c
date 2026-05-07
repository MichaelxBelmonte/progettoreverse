// Function: FUN_0006b020
// Address: 0006b020
// Size: 2257 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006b020(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  char *pcVar8;
  bool bVar9;
  double dVar10;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  double local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  double local_b0;
  uint64_t local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  double local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)((int64_t)this_ptr + 0x18a) == '\0') {
    return;
  }
  (**(code **)(*this_ptr + 0x948))();
  if (local_50 == 0.0) {
    bVar2 = false;
    bVar9 = false;
  }
  else if (this_ptr[0x33] == 0) {
    bVar2 = false;
    bVar9 = false;
  }
  else {
    FUN_00d50b00();
    bVar2 = true;
    bVar9 = true;
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (bVar9 = bVar2, local_50 != 0.0)) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    return;
  }
  plVar1 = (int64_t *)this_ptr[0x33];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_c8 = (double)(**(code **)(*plVar1 + 0x3b0))();
  FUN_00d50b20();
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_78 == 0) {
    bVar9 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x948))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    FUN_00d23310();
    dVar10 = local_50;
    local_40[0] = local_48[0];
    pcVar6 = local_40;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar10 == 0.0) {
      bVar9 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x948))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01327a50();
      FUN_00d23310();
      dVar10 = local_50;
      pcVar6 = local_38;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_38[0] = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar9 = CONCAT71(uStack_e7,local_e8) != 0;
      if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (dVar10 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar9) goto LAB_0006b8bc;
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  dVar10 = local_50;
  local_a0 = local_48[0];
  pcVar6 = &local_a0;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (dVar10 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_013dfcb0();
  lVar7 = local_78;
  if (local_78 == 0) {
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    lVar7 = 0;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_70 == '\0') || (local_78 == 0)) goto LAB_0006b4bc;
      FUN_00d50b20();
    }
    else {
      local_70 = '\0';
    }
    local_54 = 0;
  }
LAB_0006b4bc:
  if ((local_a0 != '\0') && (dVar10 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = lVar7;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if (local_78 == 0) {
    lVar7 = 0;
    local_a8 = 0;
    bVar9 = false;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    FUN_00d23310();
    dVar10 = local_50;
    local_e8 = local_48[0];
    pcVar6 = &local_e8;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (dVar10 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar10 == 0.0) {
      bVar9 = false;
      local_a8 = 0;
      lVar7 = 0;
    }
    else {
      local_b0 = dVar10;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      FUN_00d23310();
      dVar10 = local_50;
      pcVar6 = &local_c0;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_c0 = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (dVar10 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_011ef8d0();
      lVar7 = local_68;
      if (local_68 == 0) {
        lVar7 = 0;
        local_a8 = 0;
LAB_0006b6f4:
        bVar9 = lVar7 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_60 == '\0') {
          uVar5 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          goto LAB_0006b6f4;
        }
        local_60 = '\0';
        bVar9 = true;
        local_a8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      if ((local_c0 != '\0') && (dVar10 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      if (local_e8 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (double)FUN_0125a280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_013de8d0();
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    local_c8 = (local_c8 - local_b0) + dVar10;
  }
  lVar3 = local_90;
  if (((char)local_a8 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0' && lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_0006b8bc:
  if ((local_c8 != (double)this_ptr[0x2e]) || (NAN(local_c8) || NAN((double)this_ptr[0x2e]))) {
    (**(code **)(*this_ptr + 0x980))();
  }
  return;
}

