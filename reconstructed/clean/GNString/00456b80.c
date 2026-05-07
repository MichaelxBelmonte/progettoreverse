// Function: FUN_00456b80
// Address: 00456b80
// Size: 792 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00456b80(double param_1,double param_2)

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
  uint64_t uVar8;
  double dVar9;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  double local_48;
  double local_40;
  
  lVar7 = *(int64_t *)(this_ptr + 0x60);
  if ((lVar7 != 0) || (lVar7 = *(int64_t *)(this_ptr + 0x30), lVar7 != 0)) {
    FUN_00d50b00();
  }
  local_40 = param_1;
  if (param_1 <= param_2) {
    local_40 = param_2;
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
    if (lVar4 == 0) goto LAB_00456c12;
  }
  else {
LAB_00456c12:
    FUN_00b34cb0();
    cVar1 = (**(code **)(*local_70 + 0x38))();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      local_48 = param_1;
      if (*(int64_t *)(this_ptr + 0x68) != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (double)FUN_01656080(param_1);
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01656080(local_40);
      }
      FUN_00b34cb0();
      dVar9 = 0.0;
      if (0.0 <= local_40 - local_48) {
        dVar9 = local_40 - local_48;
      }
      (**(code **)(*local_70 + 0x40))(local_48,dVar9);
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        (**(code **)(*local_70 + 0x10))();
        FUN_00d50b20();
      }
      uVar8 = FUN_00e7d6f0();
      *(void*)(this_ptr + 0x78) = uVar8;
      goto LAB_00456e88;
    }
  }
  FUN_00453670();
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_00456e88;
    FUN_00d50b00();
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_00456e88;
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
      bVar2 = FUN_002dcab0(param_1,local_40);
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
LAB_00456e88:
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}

