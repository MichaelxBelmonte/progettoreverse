// Function: FUN_01c07800
// Address: 01c07800
// Size: 630 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01c07800(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void* pVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_98;
  char local_90;
  int64_t local_50;
  char local_48;
  
  if (*(int64_t *)(arg1 + 0x38) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2572358;
    *puVar2 = &g_02572358;
    (*g_02572370)();
    lVar1 = *(int64_t *)(arg1 + 0x38);
    *(void**)(arg1 + 0x38) = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017d5720();
    if (local_90 == '\0') {
      if (local_98 == 0) goto LAB_01c07a50;
      FUN_00d50b00();
    }
    else if (local_98 == 0) goto LAB_01c07a50;
    if (0 < *(int *)(local_98 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_00d50b00();
        FUN_01bb9520();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_01c0a2d0();
    FUN_00d50b20();
  }
LAB_01c07a50:
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

