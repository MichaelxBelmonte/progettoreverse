// Function: FUN_01bd8c50
// Address: 01bd8c50
// Size: 557 bytes
// Class: MULSSGenerator

void FUN_01bd8c50(uint64_t param_1,float param_2)

{
  int iVar1;
  int iVar2;
  char in_DL;
  int64_t lVar3;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar4;
  int iVar5;
  uint64_t local_40;
  uint8_t local_38;
  
  lVar4 = *(int64_t *)(this_ptr + 0x90);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d8))();
  iVar5 = 1;
  if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4a0))();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0 && 0.0 < param_2) {
      iVar1 = FUN_00e7d780(param_2 / g_0241df1c);
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
    }
  }
  if (in_DL == '\0') {
    FUN_00c8e340();
  }
  iVar1 = *(int *)(local_40 + 0x18);
  lVar4 = (int64_t)iVar1;
  iVar2 = iVar1 + 3;
  if (-1 < lVar4) {
    iVar2 = iVar1;
  }
  if (3 < lVar4) {
    iVar2 = iVar2 >> 2;
    lVar3 = 0;
    do {
      if (*(int *)(*(int64_t *)(local_40 + 0x10) + lVar3 * 4) == unaff_ESI) goto LAB_01bd8de0;
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  FUN_00c8e340(iVar2,1);
  *(int *)(*(int64_t *)(local_40 + 0x10) + lVar4) = unaff_ESI;
LAB_01bd8de0:
  while( true ) {
    iVar1 = *(int *)(local_40 + 0x18);
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 >> 2 <= iVar5) break;
    FUN_00e7b4e0();
    FUN_00c921e0();
  }
  FUN_01bd0ba0();
  FUN_00d50b20();
  return;
}

