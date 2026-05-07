// Function: FUN_00e6d7a0
// Address: 00e6d7a0
// Size: 626 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e6d8fa) */
/* WARNING: Removing unreachable block (ram,0x00e6d903) */
/* WARNING: Removing unreachable block (ram,0x00e6d97e) */
/* WARNING: Removing unreachable block (ram,0x00e6d987) */

void FUN_00e6d7a0(void)

{
  bool bVar1;
  char cVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = DAT_027ebc70;
    if (DAT_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_50 = 0;
    lVar3 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar3;
    FUN_00d41040(&local_58,&local_88);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e34b50();
    if (*(longlong *)(unaff_RDI + 0x48) != 0) {
      *(undefined8 *)(unaff_RDI + 0x48) = 0;
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00dcce00(0);
  if (local_38 == 0) {
    bVar1 = true;
    lVar3 = 0;
  }
  else {
    lVar3 = local_38;
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      local_30 = '\0';
      bVar1 = false;
    }
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00e34260();
  FUN_00dcd070();
  if (local_30 == '\0') {
    if (local_38 == 0) goto LAB_00e6d9f9;
    FUN_00d50b00();
  }
  else if (local_38 == 0) goto LAB_00e6d9f9;
  cVar2 = FUN_00e34250();
  if ((cVar2 == '\0') && (cVar2 = FUN_00e34240(), cVar2 == '\0')) {
    FUN_00e63050();
    if (*(longlong **)(unaff_RDI + 0x20) != (longlong *)0x0) {
      local_78 = local_38;
      local_70 = '\0';
      (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x398))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_00e6d9f9:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}


