// Function: FUN_019b9500
// Address: 019b9500
// Size: 1002 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019b98fa) */
/* WARNING: Removing unreachable block (ram,0x019b9907) */
/* WARNING: Removing unreachable block (ram,0x019b97fd) */
/* WARNING: Removing unreachable block (ram,0x019b9783) */
/* WARNING: Removing unreachable block (ram,0x019b978c) */
/* WARNING: Removing unreachable block (ram,0x019b9737) */
/* WARNING: Removing unreachable block (ram,0x019b9744) */
/* WARNING: Removing unreachable block (ram,0x019b9700) */
/* WARNING: Removing unreachable block (ram,0x019b9709) */
/* WARNING: Removing unreachable block (ram,0x019b98c0) */
/* WARNING: Removing unreachable block (ram,0x019b98cd) */
/* WARNING: Removing unreachable block (ram,0x019b980a) */
/* WARNING: Removing unreachable block (ram,0x019b9816) */
/* WARNING: Removing unreachable block (ram,0x019b9866) */
/* WARNING: Removing unreachable block (ram,0x019b986f) */
/* WARNING: Removing unreachable block (ram,0x019b95f4) */
/* WARNING: Removing unreachable block (ram,0x019b95fd) */
/* WARNING: Removing unreachable block (ram,0x019b9697) */
/* WARNING: Removing unreachable block (ram,0x019b96c0) */
/* WARNING: Removing unreachable block (ram,0x019b9587) */
/* WARNING: Removing unreachable block (ram,0x019b95b0) */
/* WARNING: Removing unreachable block (ram,0x019b9589) */
/* WARNING: Removing unreachable block (ram,0x019b95b2) */
/* WARNING: Removing unreachable block (ram,0x019b962b) */
/* WARNING: Removing unreachable block (ram,0x019b9638) */
/* WARNING: Removing unreachable block (ram,0x019b9699) */
/* WARNING: Removing unreachable block (ram,0x019b96c2) */

void FUN_019b9500(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int local_50;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      cVar2 = FUN_00d23d70();
      if (cVar2 == '\0') {
        FUN_00d21140();
      }
    }
    FUN_001159b0();
    if ((*unaff_RSI != 0) && (lVar1 = unaff_RDI[0x41], lVar1 != 0)) {
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
        cVar2 = FUN_00d23d70();
        if (cVar2 == '\0') {
          FUN_00d21140();
        }
      }
      FUN_001159b0();
    }
  }
  if (*(int *)((longlong)puVar3 + 0xc) != 0) {
    lVar1 = *unaff_RSI;
    FUN_00d243f0();
    if (unaff_RDI[0x94] != 0) {
      unaff_RDI[0x94] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x95] != 0) {
      unaff_RDI[0x95] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xb10))();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((*(char *)((longlong)unaff_RDI + 0x21c) == '\0') &&
       (cVar2 = (**(code **)((longlong)&dylib_command_000013a0.dylib.name.offset + *unaff_RDI))(),
       cVar2 == '\0')) {
      (**(code **)(*unaff_RDI + 0xa70))();
    }
    else {
      (**(code **)(*unaff_RDI + 0x620))();
    }
    (**(code **)(*unaff_RDI + 0xeb8))();
    (**(code **)(*unaff_RDI + 0x400))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


