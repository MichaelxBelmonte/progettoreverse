// Function: FUN_018b9f90
// Address: 018b9f90
// Size: 687 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_018b9f90(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void* pVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t local_40;
  char local_38;
  
  lVar9 = *(int64_t *)(this_ptr + 0x60);
  if ((lVar9 != 0) || (lVar9 = *(int64_t *)(this_ptr + 0x58), lVar9 != 0)) {
    FUN_00d50b00();
  }
  if (lVar9 == 0) {
    uVar8 = 0;
    goto LAB_018ba22e;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 == 0) {
LAB_018ba224:
    uVar8 = 0;
  }
  else {
    plVar7 = *(int64_t **)(this_ptr + 0x80);
    FUN_01152ba0();
    plVar10 = (int64_t *)(this_ptr + 0x80);
    if (plVar7 == (int64_t *)0x0) {
LAB_018ba00d:
      plVar7 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = plVar10;
      if (cVar3 == '\0') goto LAB_018ba00d;
    }
    lVar9 = local_40;
    if (*plVar7 == 0) {
      plVar1 = (int64_t *)*plVar10;
      FUN_011611c0();
      pVar6 = (void*)plVar7;
      if (plVar1 == (int64_t *)0x0) {
LAB_018ba0d0:
        plVar10 = &g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_018ba0d0;
      }
      if (*plVar10 == 0) goto LAB_018ba224;
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893ab0();
      if (local_40 == 0) goto LAB_018ba14e;
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      pvVar5 = _pthread_getspecific((void*)plVar7);
      pVar6 = (void*)plVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017d3de0();
      if (local_40 == 0) {
LAB_018ba14e:
        bVar2 = false;
        lVar9 = 0;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    if (lVar9 == 0) goto LAB_018ba224;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c71e0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (local_40 == 0) {
LAB_018ba217:
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_018ba224;
    }
    if (*(int *)(local_40 + 0xc) < 2) {
      FUN_00d50b20();
      goto LAB_018ba217;
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    if (bVar2) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_018ba22e:
  return uVar8 & 0xffffffff;
}

