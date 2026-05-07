// Function: FUN_006221a0
// Address: 006221a0
// Size: 880 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x006223a1) */
/* WARNING: Removing unreachable block (ram,0x006223ad) */
/* WARNING: Removing unreachable block (ram,0x006224b1) */
/* WARNING: Removing unreachable block (ram,0x006224ba) */

ulonglong FUN_006221a0(undefined8 param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined8 unaff_R15;
  ulonglong uVar5;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_006221fd;
    }
  }
  else if (local_48 != 0) {
LAB_006221fd:
    FUN_006f4810();
    FUN_01beea30();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),iVar1 < 2);
    if ((iVar1 < 2) && (param_2 != '\0')) {
      FUN_006f4810();
      FUN_002eacb0();
      iVar1 = *(int *)(local_48 + 0xc);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 == 0) {
        bVar2 = false;
        lVar4 = 0;
      }
      else {
        FUN_006f4810();
        FUN_002eacb0();
        FUN_00d23310();
        pcVar3 = local_38;
        if (local_40[0] != '\0') {
          pcVar3 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = local_48;
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_006f3f00();
      FUN_0078a130();
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_006f3f00();
      FUN_0074a910();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_006f4810();
      FUN_000ba510();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_002ea230();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
      if ((bVar2) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_006224fe;
  }
  uVar5 = 0;
LAB_006224fe:
  return uVar5 & 0xffffffff;
}


