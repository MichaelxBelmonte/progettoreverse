// Function: FUN_00456020
// Address: 00456020
// Size: 765 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00456020(double param_1)

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
  uint64_t uVar9;
  double dVar10;
  int64_t local_78;
  char local_70;
  double local_68;
  int64_t *local_60;
  char local_58;
  
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
    if (lVar4 == 0) goto LAB_0045609a;
  }
  else {
LAB_0045609a:
    FUN_00b34cb0();
    cVar1 = (**(code **)(*local_60 + 0x38))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      local_68 = param_1;
      if (*(int64_t *)(this_ptr + 0x68) != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_01656080(param_1);
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_01320130();
      FUN_00b34cb0();
      dVar10 = 0.0;
      if (0.0 <= dVar8 - local_68) {
        dVar10 = dVar8 - local_68;
      }
      (**(code **)(*local_60 + 0x40))(local_68,dVar10);
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        (**(code **)(*local_60 + 0x10))();
        FUN_00d50b20();
      }
      uVar9 = FUN_00e7d6f0();
      *(void*)(this_ptr + 0x78) = uVar9;
      goto LAB_00456308;
    }
  }
  FUN_00453670();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00456210;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00456210:
    if (*(int *)((int64_t)local_60 + 0xc) < 1) {
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
        bVar2 = FUN_002dcc00(param_1);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        bVar5 = bVar5 | bVar2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((int64_t)local_60 + 0xc));
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
LAB_00456308:
  FUN_00d50b20();
  return;
}

