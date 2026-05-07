// Function: FUN_01742740
// Address: 01742740
// Size: 826 bytes
// Class: Unknown

int FUN_01742740(float param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void* in_ECX;
  int iVar8;
  int64_t *this_ptr;
  int iVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = this_ptr[0xb];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar4 = FUN_01742490(param_1,0);
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_017378b0();
  if (cVar3 == '\0') {
    lVar2 = this_ptr[0xc];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01770870();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    iVar8 = iVar4;
    if (cVar3 == '\0') {
      iVar5 = (**(code **)(*this_ptr + 0x380))();
      iVar6 = (**(code **)(*this_ptr + 0x388))();
    }
    else {
      iVar6 = 2000;
      iVar5 = -1000;
    }
    do {
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar8 = iVar8 + -1;
      cVar3 = FUN_017378b0();
      iVar9 = iVar4;
    } while ((cVar3 == '\0') && (iVar5 < iVar8));
    do {
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar9 = iVar9 + 1;
      cVar3 = FUN_017378b0();
    } while ((cVar3 == '\0') && (iVar9 < iVar6));
    if ((iVar5 == iVar8) && (iVar6 == iVar9)) {
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_017378b0();
      if (cVar3 == '\0') {
        pvVar7 = _pthread_getspecific(in_ECX);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_017378b0();
        if (cVar3 == '\0') goto joined_r0x01742a72;
      }
    }
    if (iVar5 == iVar8) {
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_017378b0();
      iVar4 = iVar9;
      if (cVar3 == '\0') goto joined_r0x01742a72;
    }
    if (iVar6 == iVar9) {
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_017378b0();
      iVar4 = iVar8;
      if (cVar3 == '\0') goto joined_r0x01742a72;
    }
    fVar10 = (float)FUN_01742280();
    fVar11 = (float)FUN_01742280();
    iVar4 = iVar9;
    if (param_1 - fVar10 < fVar11 - param_1) {
      iVar4 = iVar8;
    }
  }
joined_r0x01742a72:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return iVar4;
}

