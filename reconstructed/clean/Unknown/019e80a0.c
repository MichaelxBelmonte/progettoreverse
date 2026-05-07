// Function: FUN_019e80a0
// Address: 019e80a0
// Size: 832 bytes
// Class: Unknown

void FUN_019e80a0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  
  (**(code **)(*this_ptr + 0xa10))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *arg1;
  lVar2 = this_ptr[0x4c];
  lVar3 = lVar2;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x4c] = lVar1;
    lVar3 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = this_ptr[0x4c];
    }
  }
  if ((lVar3 != 0) && (local_50 != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_0125a280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    FUN_016c45d0(uVar9,0);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    uVar10 = FUN_016c46a0(0,0);
    fVar7 = (float)(**(code **)(*this_ptr + 0x938))(uVar9);
    fVar8 = (float)(**(code **)(*this_ptr + 0x938))(uVar10);
    uVar11 = uVar9;
    if ((fVar8 < fVar7) && (fVar7 - fVar8 < g_023942a8)) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_016cade0();
      uVar11 = uVar10;
      if (cVar4 == '\0') {
        uVar11 = uVar9;
      }
    }
    (**(code **)(&UNK_00001420 + *this_ptr))(uVar11);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    (**(code **)(&UNK_00001428 + *this_ptr))();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    (**(code **)(&UNK_00001430 + *this_ptr))();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}

