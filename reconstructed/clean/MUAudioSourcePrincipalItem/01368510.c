// Function: FUN_01368510
// Address: 01368510
// Size: 3566 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01368510(int64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  bool bVar8;
  int64_t local_150;
  uint8_t local_148;
  int64_t local_140;
  uint8_t local_138;
  int64_t local_130;
  char local_128;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  lVar2 = local_68;
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_0141bab0();
  if (iVar4 != 1) {
    return;
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_0133aef0();
  FUN_013699d0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(local_68 + 0xc)) {
    lVar7 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar7 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_013295b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_68 + 0xc));
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  FUN_014bc070();
  FUN_014bc030();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  cVar3 = FUN_014bc070();
  if (cVar3 == '\0') {
    local_150 = *arg1;
    local_148 = 0;
    param_1 = 0;
    FUN_0135d2e0(0,&local_150);
    if (local_128 == '\0') {
      if (local_130 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_128 = '\0';
    }
    local_78 = *arg1;
    local_68 = local_130;
    local_70 = '\0';
    FUN_01346520();
    if (local_130 != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = lVar2;
    }
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    FUN_014e8b20();
    bVar8 = local_130 == 0;
    if (bVar8) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
      lVar7 = local_130;
    }
    local_60 = '\0';
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (!bVar8) {
      local_138 = 0;
      local_140 = lVar7;
      FUN_013293f0();
    }
    if (!bVar8 && lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01368bb7;
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  FUN_014bc340();
  lVar7 = local_68;
  if (local_68 == 0) {
    bVar8 = false;
    lVar7 = 0;
LAB_0136893e:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_60 == '\0') {
      FUN_00d50b00();
      bVar8 = true;
      goto LAB_0136893e;
    }
    bVar8 = true;
  }
  if (lVar7 == 0) {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = local_68;
    }
    FUN_014d19a0();
    if (local_68 == 0) {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      pvVar5 = _pthread_getspecific(0);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014d1b50();
      param_1 = local_68;
      goto LAB_01368bb7;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    bVar8 = true;
    lVar7 = local_68;
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = local_68;
  }
  FUN_014bc340();
  if (local_68 == lVar7) {
    bVar1 = bVar8;
    if ((bVar8) || (local_68 == 0)) {
LAB_01368b8d:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01368ba1;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      goto LAB_01368b8d;
    }
    bVar1 = true;
  }
  else {
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      bVar1 = true;
      lVar7 = local_68;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01368b8d;
    }
    bVar1 = true;
    lVar7 = local_68;
    if (bVar8) {
      FUN_00d50b20();
    }
LAB_01368ba1:
    if (lVar7 == 0) {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_68;
      }
      FUN_014d19a0();
      if (local_68 == 0) goto LAB_01368bb7;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((void*)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_68;
      }
      FUN_014bc2e0();
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc360();
      bVar1 = true;
    }
  }
  if (bVar1) {
    FUN_00d50b20();
  }
LAB_01368bb7:
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e0cc0();
  FUN_013359c0();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_013357a0();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    if (0 < *(int *)(local_68 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_70 == '\0') && (local_78 != 0)) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126f610();
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a5f0();
        FUN_0039e8b0();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_00e7bdb0();
        FUN_01287c80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_68 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

