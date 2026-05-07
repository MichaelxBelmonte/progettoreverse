// Function: FUN_01dba5d0
// Address: 01dba5d0
// Size: 860 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01dba6a5) */
/* WARNING: Removing unreachable block (ram,0x01dba6b1) */
/* WARNING: Removing unreachable block (ram,0x01dba860) */
/* WARNING: Removing unreachable block (ram,0x01dba7a0) */
/* WARNING: Removing unreachable block (ram,0x01dba777) */
/* WARNING: Removing unreachable block (ram,0x01dba780) */
/* WARNING: Removing unreachable block (ram,0x01dba836) */
/* WARNING: Removing unreachable block (ram,0x01dba83f) */
/* WARNING: Removing unreachable block (ram,0x01dba8f6) */
/* WARNING: Removing unreachable block (ram,0x01dba8ff) */

void FUN_01dba5d0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  uVar3 = FUN_01dba1f0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dba6bf;
    uVar4 = FUN_00d50b00();
  }
  else {
    uVar4 = extraout_XMM0_Da;
    if (local_48 == 0) {
LAB_01dba6bf:
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_01dba6c4;
    }
  }
  lVar1 = DAT_027092b8;
  if (DAT_027092b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\0';
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_34 = 0;
LAB_01dba6c4:
  uVar4 = FUN_00d46dc0(*(undefined4 *)(unaff_RSI + 0x28));
  lVar1 = DAT_027f2350;
  if ((local_50 == '\0') && (local_58 != 0)) {
    uVar4 = FUN_00d50b00();
    lVar1 = DAT_027f2350;
  }
  DAT_027f2350 = lVar1;
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d46530();
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar1 = DAT_027f2358;
  if (DAT_027f2358 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d46530();
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar1 = DAT_027f2360;
  if (DAT_027f2360 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}


