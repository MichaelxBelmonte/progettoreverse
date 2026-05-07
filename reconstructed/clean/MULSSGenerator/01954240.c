// Function: FUN_01954240
// Address: 01954240
// Size: 968 bytes
// Class: MULSSGenerator

void FUN_01954240(uint32_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t lVar4;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar5;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    if (0 < *(int *)(local_80 + 0xc)) {
      lVar4 = 0;
      do {
        uVar1 = *(void*)(*(int64_t *)(local_80 + 0x10) + lVar4 * 8);
        cVar2 = FUN_019415b0();
        uVar5 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          local_a0 = 0;
          local_a8 = uVar1;
          FUN_01941ba0(extraout_XMM0_Da,&local_a8);
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_012c6b00(param_1);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar5 = FUN_00d50b20();
          }
        }
        local_90 = 0;
        local_98 = uVar1;
        FUN_01941c70(uVar5,&local_98);
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6b00(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6b00(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}

