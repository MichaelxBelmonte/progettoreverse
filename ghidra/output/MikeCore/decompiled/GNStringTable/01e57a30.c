// Function: FUN_01e57a30
// Address: 01e57a30
// Size: 677 bytes
// Class: GNStringTable


/* WARNING: Removing unreachable block (ram,0x01e57be7) */
/* WARNING: Removing unreachable block (ram,0x01e57b1c) */
/* WARNING: Removing unreachable block (ram,0x01e57b29) */
/* WARNING: Removing unreachable block (ram,0x01e57bf0) */
/* WARNING: Removing unreachable block (ram,0x01e57c37) */
/* WARNING: Removing unreachable block (ram,0x01e57c40) */

void FUN_01e57a30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0xc];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xc] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_2;
  lVar2 = unaff_RDI[0xd];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xd] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI == 0) {
    if (unaff_RDI[3] == 0) {
      (**(code **)(*unaff_RDI + 0x448))();
      lVar1 = unaff_RDI[3];
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = unaff_RDI[3];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (*param_1 == 0) {
      FUN_01e5bfa0();
    }
    else {
      FUN_01e5c1a0();
    }
    (**(code **)(*unaff_RDI + 0x598))();
    FUN_01e5d9c0();
    FUN_01f27fe0();
    FUN_01f45250();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5e740();
    (**(code **)(*unaff_RDI + 0x5a0))();
    param_2 = (longlong *)*param_2;
    FUN_00d50b00();
    (**(code **)(*param_2 + 0x440))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = unaff_RDI[2];
    if (lVar1 == 0) {
      (**(code **)(*unaff_RDI + 0x4c0))();
      lVar1 = unaff_RDI[2];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x598))();
    plVar3 = (longlong *)*unaff_RSI;
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x9a8))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


