// Function: FUN_012a85e0
// Address: 012a85e0
// Size: 533 bytes
// Class: MUPulseAssignmentTarget


void FUN_012a85e0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012a8950();
  FUN_012a6b90();
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    FUN_012ddc30();
    lVar2 = *(longlong *)(unaff_RDI + 0xe8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012c5850();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
      *(undefined8 *)(unaff_RDI + 0xe8) = 0;
      FUN_00d50b20();
    }
  }
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc);
  while (iVar1 != 0) {
    FUN_012ddc30();
    FUN_00d23340();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_012c5850();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23740();
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc);
  }
  FUN_012ddc30();
  FUN_00d50b00();
  FUN_012c5710();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  *(undefined2 *)(unaff_RDI + 0x25e) = 0;
  *(undefined1 *)(unaff_RDI + 0x260) = 0;
  *(undefined1 *)(unaff_RDI + 0x262) = 0;
  return;
}


