// Function: FUN_0150f500
// Address: 0150f500
// Size: 566 bytes
// Class: MUPercussivePitchSystem

void FUN_0150f500(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int64_t *plVar3;
  int iVar4;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  if (*(char *)((int64_t)this_ptr + 0xa1) != '\0') {
    *(void*)((int64_t)this_ptr + 0xa1) = 0;
    (**(code **)(*this_ptr + 0x380))();
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0150f6b5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0150f6b5;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_0150f640;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_0150f640:
        pvVar2 = _pthread_getspecific(param_1);
        plVar3 = local_68;
        if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
          plVar3 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar1 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0150f6b5:
  lVar1 = this_ptr[9];
  if (lVar1 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0xc); iVar4 = iVar4 + 1) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f500();
    }
    FUN_0131c770();
  }
  return;
}

