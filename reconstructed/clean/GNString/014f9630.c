// Function: FUN_014f9630
// Address: 014f9630
// Size: 522 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_014f9630(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t this_ptr;
  int iVar5;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    return;
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = *(int *)(local_40 + 0x18);
  iVar5 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  cVar3 = FUN_0124d250(0,0,iVar5 >> 2);
  if (cVar3 == '\0') goto LAB_014f9823;
  FUN_0152a660();
  FUN_0171a380();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_014f9767;
    }
  }
  else if (local_40 != 0) {
LAB_014f9767:
    lVar2 = *(int64_t *)(this_ptr + 0x80);
    if (lVar2 != local_40) {
      FUN_00d50b00();
      *(int64_t *)(this_ptr + 0x80) = local_40;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_014f9823;
  }
  FUN_011f1ac0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_014f97c5;
    }
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      *(void*)(this_ptr + 0x78) = 0;
      goto LAB_014f97fa;
    }
  }
  else {
    local_38 = '\0';
LAB_014f97c5:
    lVar2 = *(int64_t *)(this_ptr + 0x78);
    if (lVar2 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x78) = local_40;
      if (lVar2 != 0) {
LAB_014f97fa:
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_014f9823:
  FUN_00d50b20();
  return;
}

