// Function: FUN_007586e0
// Address: 007586e0
// Size: 3572 bytes
// Class: MUAudioIOSlot

void FUN_007586e0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int iVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  uint uStack_3c;
  
  lVar2 = local_58;
  (**(code **)(*this_ptr + 0x628))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a11a0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713a10();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_70 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_016ae5f0();
  if ((cVar4 != '\0') && (cVar4 = FUN_00bd22a0(), cVar4 != '\0')) {
    FUN_003231a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      local_70 = 0;
    }
    else {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      uStack_3c = 0;
      while( true ) {
        lVar3 = local_a8;
        lVar6 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        lVar1 = *(int64_t *)(lVar2 + 0x10);
        local_58 = *(int64_t *)(lVar1 + 8 + lVar6 * 8);
        pvVar5 = _pthread_getspecific((void*)lVar1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4c40();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
            goto LAB_00758a50;
          }
LAB_00758970:
          bVar9 = -1 < (int)uStack_3c;
          uStack_3c = ~uStack_3c;
        }
        else {
          if (local_a8 == 0) goto LAB_00758970;
LAB_00758a50:
          local_a0 = '\0';
          local_a8 = 0;
          local_90 = -1;
          do {
            lVar6 = (int64_t)local_90;
            local_90 = local_90 + 1;
            iVar8 = *(int *)(lVar3 + 0xc);
            if (iVar8 <= local_90) break;
            lVar1 = *(int64_t *)(lVar3 + 0x10);
            local_a8 = *(int64_t *)(lVar1 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012eb770();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          } while (local_80 == 0);
          FUN_000be170();
          FUN_00d50b20();
          if (iVar8 <= local_90) goto LAB_00758970;
          bVar9 = (int)uStack_3c < 0;
        }
        if (uStack_3c != 0) {
          if (uStack_3c == 0 || bVar9) {
            uStack_3c = -uStack_3c;
          }
          else {
            local_40 = local_40 - uStack_3c;
            FUN_00d23690();
            uStack_3c = 0;
          }
        }
      }
      FUN_000be170();
    }
  }
  FUN_006dbab0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar2 = this_ptr[0x23];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_006dbab0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
      pVar7 = (void*)*(void*)(local_58 + 0x10);
      FUN_004fa310();
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      cVar4 = FUN_016ae5f0();
      if (cVar4 != '\0') {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6000();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 == 0) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4c40();
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fb230();
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
  }
  FUN_00d243f0();
  FUN_01f27fe0();
  FUN_00d50b00();
  FUN_000c4290();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(local_70 + 0xc); iVar8 = iVar8 + 1) {
      FUN_00518a80();
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}

