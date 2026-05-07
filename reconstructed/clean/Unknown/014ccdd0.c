// Function: FUN_014ccdd0
// Address: 014ccdd0
// Size: 749 bytes
// Class: Unknown

void FUN_014ccdd0(void* param_1,int64_t param_2)

{
  int iVar1;
  void *pvVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  double dVar6;
  double dVar7;
  double dVar8;
  int64_t *local_40;
  char local_38;
  
  if (arg1[0x25] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c3190();
    iVar4 = *(int *)((int64_t)local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar4 != 0) {
      (**(code **)(*arg1 + 0x378))();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      dVar6 = (double)(**(code **)(*plVar5 + 0x370))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018c3190();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_018c2fb0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_018c3150();
      iVar1 = (int)(((double)param_2 / dVar6 - dVar7) / dVar8);
      iVar4 = 0;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      iVar1 = *(int *)((int64_t)local_40 + 0xc) + -1;
      if (iVar4 < *(int *)((int64_t)local_40 + 0xc)) {
        iVar1 = iVar4;
      }
      lVar3 = *(int64_t *)(local_40[2] + (int64_t)iVar1 * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

