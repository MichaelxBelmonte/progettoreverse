// Function: FUN_01e125e0
// Address: 01e125e0
// Size: 514 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e1264e) */
/* WARNING: Removing unreachable block (ram,0x01e12657) */
/* WARNING: Removing unreachable block (ram,0x01e126b7) */
/* WARNING: Removing unreachable block (ram,0x01e126c0) */

void FUN_01e125e0(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int extraout_var;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else if (*unaff_RSI == 0) {
    cVar2 = '\0';
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
    cVar2 = (**(code **)(*local_30 + 0x50))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x370))();
  if ((char)unaff_RDI[0x2a] != '\0') {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
    if (local_40 == 0) {
      bVar3 = 0;
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
      bVar3 = (**(code **)(*local_30 + 0x140))();
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 != 0) {
      FUN_01e12400();
    }
  }
  if ((int)unaff_RDI[0x2d] == 0) {
    iVar1 = *(int *)((longlong)unaff_RDI + 0x164);
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x388))();
    if (iVar1 <= extraout_var) goto LAB_01e127bf;
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x388))();
  }
  FUN_00e7b4e0();
  (**(code **)(*unaff_RDI + 0x968))();
LAB_01e127bf:
  (**(code **)(*unaff_RDI + 0x620))();
  (**(code **)(*unaff_RDI + 0x540))();
  return;
}


