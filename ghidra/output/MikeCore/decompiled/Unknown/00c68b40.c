// Function: FUN_00c68b40
// Address: 00c68b40
// Size: 514 bytes
// Class: Unknown


undefined8 FUN_00c68b40(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  iVar1 = (int)param_1;
  uVar2 = *(uint *)(&DAT_0000205c + unaff_RDI);
  FUN_00c667a0(param_1,0xc);
  FUN_00c667a0();
  if (uVar2 != param_3) {
    FUN_00c667a0();
  }
  switch((int)*(short *)(unaff_RDI + 8) << 0x1e | (int)*(short *)(unaff_RDI + 8) - 0x10U >> 2) {
  case 0:
    if (param_3 * iVar1 != 0) {
      uVar2 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar2 = uVar2 + iVar1;
      } while (uVar2 < param_3 * iVar1);
    }
    break;
  case 1:
    FUN_00c6d170(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),uVar4,0);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    break;
  case 2:
    FUN_00c6d2a0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),uVar4,0);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    break;
  case 4:
    if (param_3 * iVar1 != 0) {
      uVar2 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar2 = uVar2 + iVar1;
      } while (uVar2 < param_3 * iVar1);
    }
  }
  return 0;
}


