// Function: FUN_004566f0
// Address: 004566f0
// Size: 804 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_004566f0(double param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t lVar4;
  int64_t this_ptr;
  byte bVar5;
  int iVar6;
  int64_t lVar7;
  double dVar8;
  double dVar9;
  uint64_t uVar10;
  double dVar11;
  double local_98;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  
  lVar7 = *(int64_t *)(this_ptr + 0x60);
  if ((lVar7 != 0) || (lVar7 = *(int64_t *)(this_ptr + 0x30), lVar7 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(this_ptr + 0x70) == 2) {
    lVar4 = *(int64_t *)(this_ptr + 0x60);
    if (lVar4 == 0) {
      lVar4 = *(int64_t *)(this_ptr + 0x30);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar4 = *(int64_t *)(lVar4 + 0x308);
    FUN_00d50b20();
    if (lVar4 == 0) goto LAB_0045676d;
  }
  else {
LAB_0045676d:
    FUN_00b34cb0();
    cVar1 = (**(code **)(*local_70 + 0x38))();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_013201a0();
      local_98 = param_1;
      if (*(int64_t *)(this_ptr + 0x68) != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = (double)FUN_01656080(param_1);
      }
      FUN_00b34cb0();
      dVar9 = local_98 - dVar8;
      dVar11 = 0.0;
      if (0.0 <= dVar9) {
        dVar11 = dVar9;
      }
      (**(code **)(*local_70 + 0x40))
                (~-(uint64_t)(dVar9 < 0.0) & (uint64_t)dVar8 |
                 (uint64_t)local_98 & -(uint64_t)(dVar9 < 0.0),dVar11);
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        (**(code **)(*local_70 + 0x10))();
        FUN_00d50b20();
      }
      uVar10 = FUN_00e7d6f0();
      *(void*)(this_ptr + 0x78) = uVar10;
      goto LAB_004569fe;
    }
  }
  FUN_00453670();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_004568fe;
    }
  }
  else if (local_70 != (int64_t *)0x0) {
LAB_004568fe:
    if (*(int *)((int64_t)local_70 + 0xc) < 1) {
      bVar5 = 0;
    }
    else {
      iVar6 = 0;
      bVar5 = 0;
      do {
        FUN_0053a8d0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar2 = FUN_002dcda0(param_1);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        bVar5 = bVar5 | bVar2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((int64_t)local_70 + 0xc));
      bVar5 = bVar5 & 1;
    }
    FUN_0015ee90();
    FUN_00d50b20();
    if (bVar5 != 0) {
      FUN_00324d40();
    }
  }
  if (lVar7 == 0) {
    return;
  }
LAB_004569fe:
  FUN_00d50b20();
  return;
}

