// Function: FUN_012dfc10
// Address: 012dfc10
// Size: 566 bytes
// Class: MUAudioFileSource

void FUN_012dfc10(void* param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_48;
  char local_40;
  float local_34;
  
  local_34 = g_02394288;
  if ((*(int64_t *)(this_ptr + 0x60) == 0) || (*(int64_t *)(this_ptr + 0x58) == 0))
  goto LAB_012dfce8;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012dfcca;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      lVar5 = 0;
      bVar1 = false;
      bVar6 = false;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar5 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar6 = true;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar6 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_34 = g_02394288;
    if (bVar6) goto LAB_012dfccf;
  }
  else {
LAB_012dfcca:
    bVar1 = false;
    lVar5 = 0;
LAB_012dfccf:
    local_34 = 0.0;
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
LAB_012dfce8:
  FUN_012df4e0((double)local_34);
  return;
}

