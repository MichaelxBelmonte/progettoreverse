// Function: FUN_00ac8330
// Address: 00ac8330
// Size: 804 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00ac8330(char *param_1,mode_t param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  int *unaff_RSI;
  byte *unaff_RDI;
  undefined4 uVar8;
  int local_48;
  
  if ((*unaff_RDI & 1) == 0) {
    iVar2 = _mkdir(param_1,param_2);
    uVar6 = (ulong)param_1;
  }
  else {
    iVar2 = _mkdir(param_1,param_2);
    uVar6 = (ulong)param_1;
  }
  if (iVar2 == 0) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (unaff_RSI != (int *)0x0) {
      *unaff_RSI = 0;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      if ((DAT_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *(undefined ***)(unaff_RSI + 2) = &DAT_02754560;
    }
    goto LAB_00ac8481;
  }
  piVar4 = ___error();
  iVar2 = *piVar4;
  if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    DAT_02754568 = 0x8fafd21e25c5e09b;
    uVar6 = 0x2520080;
    DAT_02754560 = &DAT_02520080;
    ___cxa_guard_release();
  }
  FUN_00ac92d0();
  if (local_48 == 3) {
    if (unaff_RSI != (int *)0x0) {
      *unaff_RSI = 0;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      if ((DAT_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      goto LAB_00ac847b;
    }
  }
  else {
    if (unaff_RSI == (int *)0x0) {
      ___cxa_allocate_exception();
      puVar5 = operator_new(uVar6);
      puVar5[3] = 0x7463657269645f65;
      puVar5[2] = 0x74616572633a3a6d;
      puVar5[1] = 0x6574737973656c69;
      *puVar5 = 0x663a3a74736f6f62;
      *(undefined4 *)((longlong)puVar5 + 0x1f) = 0x79726f74;
      *(undefined1 *)((longlong)puVar5 + 0x23) = 0;
      if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      uVar1 = (**(code **)(DAT_02754560 + 0x30))();
      uVar8 = FUN_00ac4640((ulonglong)CONCAT14(uVar1,iVar2));
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar8,FUN_00ac46f0);
    }
    if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      DAT_02754568 = 0x8fafd21e25c5e09b;
      DAT_02754560 = &DAT_02520080;
      ___cxa_guard_release();
    }
    *unaff_RSI = iVar2;
    uVar1 = (**(code **)(DAT_02754560 + 0x30))();
    *(undefined1 *)(unaff_RSI + 1) = uVar1;
LAB_00ac847b:
    *(undefined ***)(unaff_RSI + 2) = &DAT_02754560;
  }
  uVar7 = 0;
LAB_00ac8481:
  return uVar7 & 0xffffffff;
}


