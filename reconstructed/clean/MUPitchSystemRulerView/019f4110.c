// Function: FUN_019f4110
// Address: 019f4110
// Size: 1224 bytes
// Class: MUPitchSystemRulerView

uint64_t FUN_019f4110(uint64_t param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  void* pVar3;
  char *pcVar4;
  int64_t *this_ptr;
  uint64_t unaff_R15;
  uint64_t uVar5;
  int64_t local_c8;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 1) {
    (**(code **)(*this_ptr + 0xe20))();
    FUN_00d23310();
    pVar3 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01270ab0();
    if (local_48 == 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      uVar5 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),local_98 == 0);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar5 = 0;
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\x01' && (char)uVar5 == '\0') {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d50b00();
        FUN_01a43090(&stack0xffffffffffffff78,&local_c8);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    uVar5 = uVar5 ^ 1;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}

