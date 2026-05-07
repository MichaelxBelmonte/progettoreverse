// Function: FUN_016f1400
// Address: 016f1400
// Size: 1266 bytes
// Class: Unknown

void FUN_016f1400(double param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void* in_ECX;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar7;
  double dVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t local_48;
  char local_40;
  
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bdb0();
  uVar5 = 0;
  dVar8 = (double)FUN_016c46a0(0,0);
  param_1 = param_1 - dVar8;
  FUN_016ccde0();
  if ((param_1 != 0.0) || (NAN(param_1))) {
    pvVar1 = _pthread_getspecific((void*)uVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901eb0(param_1);
  }
  lVar6 = *arg1;
  pvVar1 = _pthread_getspecific((void*)uVar5);
  if (pvVar1 != (void *)0x0) {
    lVar6 = *arg1;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x70);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar6;
  FUN_00c8e4f0();
  if (local_68[0] == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00d64850();
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  if (lVar2 != local_70) {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x70) = local_70;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) != 0) {
    do {
      uVar9 = FUN_00d23340();
      local_48 = CONCAT71(local_48._1_7_,local_68[0]);
      plVar3 = (int64_t *)local_68;
      if (local_68[0] == '\0') {
        plVar3 = &local_48;
      }
      *(void*)plVar3 = 0;
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if (((char)local_48 == '\0') && (local_70 != 0)) {
        uVar9 = FUN_00d50b00();
      }
      FUN_016d7fb0(uVar9,1);
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    } while (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) != 0);
  }
  lVar6 = *arg1;
  pvVar1 = _pthread_getspecific((void*)uVar5);
  if (pvVar1 != (void *)0x0) {
    lVar6 = *arg1;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
  }
  pVar4 = (void*)uVar5;
  lVar6 = *(int64_t *)(lVar6 + 0x60);
  if (lVar6 != 0) {
    FUN_00d50b00();
    pVar4 = (void*)uVar5;
    local_68[0] = '\0';
    local_50 = 0;
    local_58 = 0;
    local_60 = lVar6;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar7 = 0;
      do {
        pvVar1 = _pthread_getspecific((void*)uVar5);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        pvVar1 = _pthread_getspecific((void*)uVar5);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_0190a000();
        FUN_01909ea0(extraout_XMM0_Qa,uVar9);
        lVar2 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_016d8160();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar4 = (void*)uVar5;
        iVar7 = iVar7 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar7);
      } while (iVar7 < *(int *)(lVar6 + 0xc));
    }
    FUN_01708ee0();
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  FUN_016c2ef0();
  return;
}

