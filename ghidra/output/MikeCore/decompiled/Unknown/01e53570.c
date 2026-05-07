// Function: FUN_01e53570
// Address: 01e53570
// Size: 833 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e53867) */
/* WARNING: Removing unreachable block (ram,0x01e53870) */

void FUN_01e53570(void)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  longlong *plVar4;
  int iVar5;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e5ca90();
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5b8))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01e53606;
    }
LAB_01e5363d:
    FUN_01e5ca90();
    (**(code **)(*local_80 + 0x4a0))();
    FUN_00d23310();
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = (longlong *)unaff_RDI[2];
    if (plVar4 == local_48) {
      if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar4 = (longlong *)unaff_RDI[2];
        }
      }
      else {
        local_38[0] = '\0';
      }
      unaff_RDI[2] = (longlong)local_48;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = true;
  }
  else {
    if (local_48 == (longlong *)0x0) goto LAB_01e5363d;
LAB_01e53606:
    plVar4 = (longlong *)unaff_RDI[2];
    bVar1 = false;
    if (plVar4 != local_48) {
      FUN_00d50b00();
      unaff_RDI[2] = (longlong)local_48;
      bVar1 = false;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  plVar4 = (longlong *)unaff_RDI[2];
  (**(code **)(*local_48 + 0x4d8))();
  (**(code **)(*plVar4 + 0x4d0))();
  FUN_01e59080();
  FUN_01e4cf40();
  plVar4 = (longlong *)unaff_RDI[2];
  uVar2 = FUN_01e5c720();
  FUN_01e5c7d0();
  (**(code **)(*plVar4 + 0x558))(uVar2);
  plVar4 = (longlong *)unaff_RDI[2];
  (**(code **)(*local_48 + 0x578))();
  (**(code **)(*plVar4 + 0x570))();
  FUN_01e3f2b0();
  FUN_01e3f240();
  if (!bVar1) {
    (**(code **)(*local_48 + 0x4a0))();
    iVar5 = *(int *)((longlong)local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (0 < iVar5) {
      do {
        (**(code **)(*local_48 + 0x4a0))();
        plVar4 = *(longlong **)local_48[2];
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar4 + 0x478))();
        (**(code **)(*(longlong *)unaff_RDI[2] + 0x450))();
        FUN_00d50b20();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (bVar1) goto LAB_01e53899;
    }
    FUN_00d50b20();
  }
LAB_01e53899:
  FUN_00d50b20();
  return;
}


