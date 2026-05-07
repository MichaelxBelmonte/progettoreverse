// Function: FUN_004f01b0
// Address: 004f01b0
// Size: 574 bytes
// Class: MUAudioFileSource

void FUN_004f01b0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int iVar3;
  int64_t *this_ptr;
  bool bVar4;
  double dVar5;
  double local_40;
  double local_38;
  
  lVar1 = *this_ptr;
  if (lVar1 == 0) {
    local_40 = 0.0;
    local_38 = 0.0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = 0.0;
      local_38 = 0.0;
    }
    else {
      bVar4 = true;
      local_38 = 0.0;
      iVar3 = 0;
      local_40 = 0.0;
      do {
        if (bVar4) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_012ebfe0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = (double)FUN_012ebd30();
          bVar4 = false;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_012ebfe0();
          if (dVar5 < local_40) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_012ebfe0();
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_012ebd30();
          if (local_38 < dVar5) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_38 = (double)FUN_012ebd30();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  FUN_00e7b500(local_40,local_38 - local_40);
  return;
}

