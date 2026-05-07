// Function: FUN_00c77d90
// Address: 00c77d90
// Size: 752 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00c7804d) */
/* WARNING: Removing unreachable block (ram,0x00c78056) */
/* WARNING: Removing unreachable block (ram,0x00c77e0f) */
/* WARNING: Removing unreachable block (ram,0x00c77e18) */
/* WARNING: Removing unreachable block (ram,0x00c77f8b) */
/* WARNING: Removing unreachable block (ram,0x00c77f94) */
/* WARNING: Removing unreachable block (ram,0x00c77ec0) */
/* WARNING: Removing unreachable block (ram,0x00c77ec9) */
/* WARNING: Removing unreachable block (ram,0x00c77dcb) */
/* WARNING: Removing unreachable block (ram,0x00c77dd4) */

void FUN_00c77d90(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar5;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = local_38;
  FUN_00d747b0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02772188;
  if (*(longlong *)(unaff_RSI + 0x50) == 0) {
    if (DAT_02772188 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar1;
    local_30 = '\0';
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c798a0();
  if (local_38 == 0) {
    bVar5 = true;
  }
  else {
    FUN_00c798a0();
    iVar4 = FUN_00d8c7a0();
    bVar5 = iVar4 != 1;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02772190;
  if (bVar5) {
    if (DAT_02772190 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = FUN_00c7b220();
    if (cVar3 == '@') {
      FUN_00c798d0();
      if (local_38 == 0) {
        bVar5 = true;
      }
      else {
        FUN_00c798d0();
        iVar4 = FUN_00d8c7a0();
        bVar5 = iVar4 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02772198;
      if (bVar5) {
        if (DAT_02772198 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar1;
        local_30 = '\0';
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    cVar3 = FUN_00c7b220();
    if (cVar3 == 'e') {
      FUN_00c7b2a0();
      if (local_38 == 0) {
        bVar5 = true;
      }
      else {
        FUN_00c7b2a0();
        iVar4 = FUN_00d8c7a0();
        bVar5 = iVar4 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027721a0;
      if (bVar5) {
        if (DAT_027721a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


