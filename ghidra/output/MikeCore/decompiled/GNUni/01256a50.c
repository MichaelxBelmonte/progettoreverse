// Function: FUN_01256a50
// Address: 01256a50
// Size: 613 bytes
// Class: GNUni


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01256a50(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 uVar4;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  uVar4 = FUN_00d6f370();
  lVar2 = DAT_027beb70;
  if (DAT_027beb70 != 0) {
    uVar4 = FUN_00d50b00();
  }
  DAT_028ac360 = FUN_00d70f90(uVar4,0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (DAT_028ac360 == '\0') {
    if (*(longlong *)(unaff_RDI + 0xf8) == 0) {
      return;
    }
    FUN_01256e40();
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xf8) != 0) {
    return;
  }
  *(undefined1 *)(unaff_RDI + 0x100) = 0;
  lVar2 = DAT_027beb68;
  if (DAT_027beb68 != 0) {
    FUN_00d50b00();
  }
  FUN_00083ea0(2,&stack0xffffffffffffff68);
  FUN_0036bfe0();
  local_28 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_28 = '\x01';
  local_30 = local_50;
  FUN_00da62d0(_DAT_02391038,&local_30);
  lVar1 = *(longlong *)(unaff_RDI + 0xf8);
  lVar3 = lVar1;
  if (lVar1 == local_40) goto LAB_01256c17;
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar3 = 0;
      goto LAB_01256bcc;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xf8);
    *(longlong *)(unaff_RDI + 0xf8) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01256bcc:
    *(longlong *)(unaff_RDI + 0xf8) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_40;
  }
LAB_01256c17:
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


