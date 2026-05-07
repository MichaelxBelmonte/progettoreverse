// Function: FUN_006559b0
// Address: 006559b0
// Size: 856 bytes
// Class: GNInfoController


/* WARNING: Removing unreachable block (ram,0x00655c2b) */
/* WARNING: Removing unreachable block (ram,0x00655c34) */
/* WARNING: Removing unreachable block (ram,0x00655bf8) */
/* WARNING: Removing unreachable block (ram,0x00655c01) */
/* WARNING: Removing unreachable block (ram,0x00655aeb) */
/* WARNING: Removing unreachable block (ram,0x00655b02) */
/* WARNING: Removing unreachable block (ram,0x00655b07) */
/* WARNING: Removing unreachable block (ram,0x00655b0f) */
/* WARNING: Removing unreachable block (ram,0x00655b19) */
/* WARNING: Removing unreachable block (ram,0x00655c08) */
/* WARNING: Removing unreachable block (ram,0x00655b33) */
/* WARNING: Removing unreachable block (ram,0x00655b40) */
/* WARNING: Removing unreachable block (ram,0x00655b52) */
/* WARNING: Removing unreachable block (ram,0x00655b5f) */
/* WARNING: Removing unreachable block (ram,0x00655c0e) */
/* WARNING: Removing unreachable block (ram,0x00655cd8) */
/* WARNING: Removing unreachable block (ram,0x00655ce1) */
/* WARNING: Removing unreachable block (ram,0x00655bc5) */
/* WARNING: Removing unreachable block (ram,0x00655bce) */
/* WARNING: Removing unreachable block (ram,0x00655a78) */
/* WARNING: Removing unreachable block (ram,0x00655a81) */
/* WARNING: Removing unreachable block (ram,0x00655a02) */
/* WARNING: Removing unreachable block (ram,0x00655a0b) */
/* WARNING: Removing unreachable block (ram,0x00655b85) */
/* WARNING: Removing unreachable block (ram,0x00655b92) */
/* WARNING: Removing unreachable block (ram,0x00655cb0) */
/* WARNING: Removing unreachable block (ram,0x00655cb9) */

void FUN_006559b0(undefined8 param_1)

{
  bool bVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5e0))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_0063f230();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00655c86;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00655c86;
  FUN_0021c9b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00752180();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00655aa4;
    }
  }
  else {
LAB_00655aa4:
    if ((local_40 == 0) || (local_40 == 0)) {
LAB_00655c5e:
      if (local_40 == 0) goto LAB_00655c6f;
    }
    else {
      FUN_00d3ecf0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00108380();
      if (local_40 == 0) {
        bVar1 = false;
        lVar2 = 0;
      }
      else {
        bVar1 = true;
        lVar2 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00108e20(param_1,0);
      if (lVar2 == 0) goto LAB_00655c5e;
      FUN_00637870();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_00655cbe;
        }
      }
      else if (local_40 != 0) {
LAB_00655cbe:
        FUN_006e32e0();
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
LAB_00655c6f:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00655c86:
  FUN_00d50b20();
  return;
}


