// Function: FUN_016fd730
// Address: 016fd730
// Size: 1333 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016fd730(void* param_1,uint64_t param_2,int param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  char cVar4;
  uint32_t uVar5;
  void *pvVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  void* pVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar11;
  bool bVar12;
  char local_4c;
  uint64_t local_40;
  char local_38;
  
  lVar2 = local_40;
  pVar10 = param_1;
  if (param_3 != 0) {
    FUN_016d7580();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165d690();
  FUN_016d5810();
  lVar11 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_016fd828;
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
LAB_016fd828:
    lVar1 = **(int64_t **)(*(int64_t *)(this_ptr + 0x60) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar11 = lVar1;
    }
  }
  if (param_1 == 0) {
    FUN_016ebbb0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_016fda1b;
      }
    }
    else if (local_40 != 0) {
LAB_016fda1b:
      lVar2 = *arg1;
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_0165cf20(0,0);
      FUN_00e7c280();
      uVar8 = FUN_00e7bdb0();
      if (((uVar7 >> 0x20 == 0) || (uVar8 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0'))
      {
        FUN_00e7c260();
      }
      else {
        uVar7 = FUN_00e7bdb0();
      }
      *(uint64_t *)(lVar2 + 0x14) = uVar7;
      FUN_00d50b20();
      goto LAB_016fdc46;
    }
    lVar2 = *arg1;
    uVar9 = FUN_00e7bdb0();
    *(void*)(lVar2 + 0x14) = uVar9;
    goto LAB_016fdc46;
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    FUN_016efaf0();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01909dc0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar10 = 0;
  FUN_0165cf20(0,0);
  local_40._4_4_ = (int)(param_2 >> 0x20);
  iVar3 = local_40._4_4_;
  if (**(int64_t **)(*(int64_t *)(this_ptr + 0x60) + 0x10) == lVar11) {
    local_40._4_4_ = SUB84(lVar2,4);
    local_40 = CONCAT44(local_40._4_4_,4);
    if ((iVar3 == 0) || (cVar4 = FUN_00e7c6b0(), cVar4 != '\0')) goto LAB_016fd94e;
LAB_016fd9f0:
    bVar12 = false;
  }
  else {
    FUN_00e7b970();
    local_40 = CONCAT44(local_40._4_4_,4);
    if ((param_2 >> 0x20 != 0) && (cVar4 = FUN_00e7c6b0(), cVar4 == '\0')) goto LAB_016fd9f0;
LAB_016fd94e:
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fcb10();
    cVar4 = FUN_016fdd30();
    if (cVar4 == '\0') goto LAB_016fd9f0;
    FUN_016ebbb0();
    if (local_40 == lVar11) {
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar12 = lVar11 != 0;
      lVar11 = local_40;
      if (bVar12) {
        FUN_00d50b20();
      }
    }
    else {
      bVar12 = lVar11 != 0;
      lVar11 = local_40;
      if (bVar12) {
        FUN_00d50b20();
      }
    }
    bVar12 = true;
  }
  uVar5 = FUN_00d237a0();
  cVar4 = FUN_016fe3c0(param_1,uVar5,0);
  if (bVar12) {
    FUN_016feca0();
  }
  local_4c = (char)param_3;
  if (cVar4 == '\0') {
    if (((local_4c != '\0') && (*(int64_t *)(this_ptr + 0x88) != 0)) &&
       (*(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x10) + 0x10) != 0)) {
      FUN_016d7580();
    }
  }
  else if (local_4c != '\0') {
    FUN_016d8330();
  }
LAB_016fdc46:
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  return;
}

