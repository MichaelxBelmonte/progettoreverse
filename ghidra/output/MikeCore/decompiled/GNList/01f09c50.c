// Function: FUN_01f09c50
// Address: 01f09c50
// Size: 510 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01f09e03) */
/* WARNING: Removing unreachable block (ram,0x01f09e0c) */

void FUN_01f09c50(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong unaff_RDI;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  iVar2 = FUN_01d3a5a0();
  if (iVar2 == 1) {
    return;
  }
  iVar2 = FUN_01d3a5a0();
  if (iVar2 == 5) {
    return;
  }
  iVar2 = FUN_01d3a5a0();
  if (iVar2 == 6) {
    return;
  }
  iVar2 = FUN_01d3a5a0();
  if (iVar2 == 7) {
    return;
  }
  FUN_01f27fe0();
  *(undefined1 *)(local_30 + 0xf8) = 0;
  if (local_28 != '\0') {
    FUN_00d50b20();
  }
  iVar2 = FUN_01d3a5a0();
  if ((((iVar2 == 4) || (iVar2 = FUN_01d3a5a0(), iVar2 == 2)) ||
      (iVar2 = FUN_01d3a5a0(), iVar2 == 8)) ||
     ((iVar2 = FUN_01d3a5a0(), iVar2 == 0xe || (iVar2 = FUN_01d3a5a0(), iVar2 == 9)))) {
    *(undefined1 *)(unaff_RDI + 0x1c8) = 1;
    FUN_01f27fe0();
    *(undefined1 *)(local_30 + 0xf8) = 1;
    if (local_28 != '\0') {
      FUN_00d50b20();
    }
  }
  if (DAT_027fefc0 != '\0') {
    FUN_01da4890();
    if (local_28 == '\0') {
      if (local_30 == 0) goto LAB_01f09e19;
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_30 == 0) goto LAB_01f09e19;
    FUN_01d8b200();
    local_40 = local_30;
    local_38 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_38 = '\x01';
    FUN_01da94b0(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01f09e19:
  FUN_01f27fe0();
  cVar1 = *(char *)(local_30 + 0xf8);
  if (local_28 != '\0') {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 0x1c8) = 0;
  }
  return;
}


