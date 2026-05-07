// Function: FUN_00c6dbc0
// Address: 00c6dbc0
// Size: 578 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c6dc35) */
/* WARNING: Removing unreachable block (ram,0x00c6dc3e) */
/* WARNING: Removing unreachable block (ram,0x00c6dd43) */
/* WARNING: Removing unreachable block (ram,0x00c6dd4c) */
/* WARNING: Removing unreachable block (ram,0x00c6dc9f) */
/* WARNING: Removing unreachable block (ram,0x00c6dca8) */

void FUN_00c6dbc0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  float fVar4;
  longlong local_60;
  char local_58;
  
  (**(code **)(*unaff_RDI + 0x3c8))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    (**(code **)(*unaff_RDI + 0x3c8))();
    cVar2 = FUN_00d7a850();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  (**(code **)(*unaff_RDI + 0x3d8))();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return;
  }
  if (0 < *(int *)(local_60 + 0xc)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_60 + 0x10) + lVar3 * 8);
      fVar4 = (float)(**(code **)(*plVar1 + 0x370))();
      if ((fVar4 == DAT_0239424c) && (!NAN(fVar4) && !NAN(DAT_0239424c))) {
        FUN_00c6f7c0();
        goto LAB_00c6ddb0;
      }
      (**(code **)(*plVar1 + 0x378))();
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(local_60 + 0xc));
  }
  FUN_00c6f7c0();
LAB_00c6ddb0:
  FUN_00d50b20();
  return;
}


