// Function: FUN_00703c00
// Address: 00703c00
// Size: 620 bytes
// Class: MDAudioTrackItem


/* WARNING: Removing unreachable block (ram,0x00703dec) */
/* WARNING: Removing unreachable block (ram,0x00703df5) */
/* WARNING: Removing unreachable block (ram,0x00703e2e) */
/* WARNING: Removing unreachable block (ram,0x00703e37) */
/* WARNING: Removing unreachable block (ram,0x00703c60) */
/* WARNING: Removing unreachable block (ram,0x00703c69) */

ulonglong FUN_00703c00(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  longlong *unaff_RDI;
  bool bVar5;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00703c71;
    }
LAB_00703cd9:
    bVar2 = true;
LAB_00703cde:
    lVar1 = unaff_RDI[2];
  }
  else {
    if (local_48 == 0) goto LAB_00703cd9;
LAB_00703c71:
    FUN_0063f230();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_0063f230();
      cVar3 = FUN_00212c70();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      unaff_RBX = 0;
      if (cVar3 != '\0') goto LAB_00703e4c;
      goto LAB_00703cde;
    }
    bVar2 = false;
    lVar1 = unaff_RDI[2];
    unaff_RBX = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_007035b0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    unaff_RBX = 0;
  }
  else {
    bVar5 = *(int *)(local_48 + 0xc) != 0;
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar5);
    if ((bVar5) && (param_2 != '\0')) {
      cVar3 = (**(code **)(*unaff_RDI + 0x650))(param_1,1);
      if (cVar3 == '\0') {
        unaff_RBX = 0;
      }
      else {
        uVar4 = (**(code **)(*unaff_RDI + 0x668))(param_1,1);
        unaff_RBX = (ulonglong)uVar4;
      }
    }
    FUN_00d50b20();
  }
LAB_00703e4c:
  if (!bVar2) {
    FUN_00d50b20();
  }
  return unaff_RBX & 0xffffffff;
}


