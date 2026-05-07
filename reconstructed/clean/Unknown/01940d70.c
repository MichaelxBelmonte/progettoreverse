// Function: FUN_01940d70
// Address: 01940d70
// Size: 576 bytes
// Class: Unknown

uint FUN_01940d70(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar5;
  float fVar6;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (!NAN(*(float *)(this_ptr + 0xad))) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar5 = (float)FUN_014bc1c0();
    if (*(float *)(this_ptr + 0xad) <= fVar5 && fVar5 != *(float *)(this_ptr + 0xad)) {
      plVar4 = (int64_t *)*arg1;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        plVar4 = (int64_t *)*arg1;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      fVar5 = (float)(**(code **)(*plVar4 + 0x3e0))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_013514c0();
      if (fVar6 <= fVar5) {
        plVar4 = (int64_t *)*arg1;
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          plVar4 = (int64_t *)*arg1;
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        fVar5 = (float)(**(code **)(*plVar4 + 0x3e0))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar6 = (float)FUN_013514d0();
        if (fVar5 <= fVar6) {
          (**(code **)(&UNK_00001668 + *this_ptr))();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a960();
          uVar1 = FUN_00d24090();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          return uVar1 ^ 1;
        }
      }
    }
  }
  return 0;
}

