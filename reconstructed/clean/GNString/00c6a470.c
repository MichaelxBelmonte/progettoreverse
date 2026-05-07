// Function: FUN_00c6a470
// Address: 00c6a470
// Size: 1073 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00c6a470(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  uint64_t uVar8;
  size_t sVar9;
  int64_t this_ptr;
  int64_t lVar10;
  uint32_t uVar11;
  double local_res8;
  int local_res14;
  size_t local_res24;
  
  *(int *)(&g_00002068 + this_ptr) = (int)(int64_t)local_res8;
  *(size_t *)(&g_00002064 + this_ptr) = local_res24;
  sVar7 = local_res14 - 1;
  if (sVar7 < 4) {
    sVar7 = sVar7 * 0x10;
    *(short *)(this_ptr + 8) = (short)(0x20001800140010 >> ((byte)sVar7 & 0x3f));
  }
  *(void*)(this_ptr + 0xc) = 0;
  *(void*)(this_ptr + 0x14) = 0;
  *(size_t *)(&g_00002060 + this_ptr) = local_res24 * *(int *)(&g_0000205c + this_ptr) * 5 + 1
  ;
  sVar9 = local_res24;
  pvVar1 = _calloc(sVar7,local_res24);
  *(void **)(this_ptr + 0x20) = pvVar1;
  pvVar2 = _calloc(sVar7,sVar9);
  *(void **)(this_ptr + 0x28) = pvVar2;
  pvVar3 = _calloc(sVar7,sVar9);
  *(void **)(this_ptr + 0x30) = pvVar3;
  pvVar4 = _calloc(sVar7,sVar9);
  *(void **)(this_ptr + 0x38) = pvVar4;
  pvVar5 = _calloc(sVar7,sVar9);
  *(void **)(this_ptr + 0x40) = pvVar5;
  pvVar6 = _calloc(sVar7,sVar9);
  *(void **)(this_ptr + 0x48) = pvVar6;
  uVar8 = 0xffffff94;
  if ((((pvVar1 != (void *)0x0) && (pvVar2 != (void *)0x0)) && (pvVar3 != (void *)0x0)) &&
     (((pvVar4 != (void *)0x0 && (pvVar6 != (void *)0x0)) && (pvVar5 != (void *)0x0)))) {
    if (0 < (int)local_res24) {
      lVar10 = 0;
      do {
        uVar11 = FUN_00c6b530();
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        FUN_00c6b530(uVar11,0x10);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(&g_00002064 + this_ptr));
    }
    uVar8 = 0;
  }
  return uVar8;
}

