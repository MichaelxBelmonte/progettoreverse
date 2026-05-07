// Function: FUN_01f90590
// Address: 01f90590
// Size: 511 bytes
// Class: GNActionGroup


/* WARNING: Removing unreachable block (ram,0x01f9067d) */
/* WARNING: Removing unreachable block (ram,0x01f90686) */
/* WARNING: Removing unreachable block (ram,0x01f905d7) */
/* WARNING: Removing unreachable block (ram,0x01f905e0) */

undefined8 FUN_01f90590(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong *local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01eda7e0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x920))();
  FUN_01f8cb70();
  if (local_38 == (longlong *)0x0) {
    FUN_01f8bbb0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 == 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x10] + 0xa60))();
      goto LAB_01f90655;
    }
  }
  else if (local_30 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x10] + 0xa58))();
LAB_01f90655:
  if (local_38 != (longlong *)0x0) {
    FUN_01eda650();
    FUN_01eda7e0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01dd4c60();
    }
  }
  lVar1 = unaff_RDI[0x10];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x5e8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


