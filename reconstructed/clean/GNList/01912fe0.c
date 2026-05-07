// Function: FUN_01912fe0
// Address: 01912fe0
// Size: 997 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


float FUN_01912fe0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  void* pVar5;
  void *pvVar6;
  uint64_t uVar7;
  void* in_ECX;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  double dVar9;
  int64_t local_80;
  char local_78;
  int local_6c;
  int64_t *local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  
  lVar2 = g_027e02b8;
  if (*(int64_t *)(this_ptr + 0x50) == 0) {
    return 0.0;
  }
  if (*arg1 == 0) {
    bVar1 = true;
    local_68 = (int64_t *)0x0;
    iVar3 = 1;
  }
  else {
    if (g_027e02b8 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_00d91bc0(param_1,&local_80);
    plVar8 = local_48;
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) {
        plVar8 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_68 = plVar8;
    if (plVar8 == (int64_t *)0x0) {
      bVar1 = true;
    }
    else {
      if (0 < *(int *)((int64_t)plVar8 + 0xc)) {
        FUN_018c3210();
        local_60 = *(int64_t *)plVar8[2];
        local_58 = 0;
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        (**(code **)(*local_48 + 0x380))();
        FUN_00e7d780();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (*(int *)((int64_t)plVar8 + 0xc) < 2) {
          bVar1 = false;
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_00d8d560();
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          if (2 < *(int *)((int64_t)plVar8 + 0xc)) {
            FUN_00d8d560();
          }
          bVar1 = false;
        }
        goto LAB_019131d0;
      }
      bVar1 = false;
    }
    iVar3 = 1;
  }
LAB_019131d0:
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_016caec0();
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c47d0(0,uVar7);
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  iVar4 = FUN_0123ffa0();
  if (iVar4 < iVar3) {
    iVar3 = FUN_0123ffa0();
  }
  if (local_48 == (int64_t *)0x0) {
    pVar5 = 4;
  }
  else {
    pVar5 = FUN_0123ff00();
  }
  local_6c = iVar3 + -1;
  FUN_00e7c260();
  FUN_00e7bcc0();
  FUN_00e7b820();
  pvVar6 = _pthread_getspecific(pVar5);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (double)FUN_016c46a0(0,0);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return (float)dVar9;
}

