// Function: FUN_01ecff20
// Address: 01ecff20
// Size: 512 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed0007) */
/* WARNING: Removing unreachable block (ram,0x01ed0010) */
/* WARNING: Removing unreachable block (ram,0x01ed0040) */
/* WARNING: Removing unreachable block (ram,0x01ed0049) */

void FUN_01ecff20(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02692468;
  puVar3[2] = &DAT_026927f8;
  puVar3[0xc] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  (*DAT_02692480)();
  lVar2 = DAT_027fe700;
  if (DAT_027fe700 != 0) {
    FUN_00d50b00();
  }
  FUN_01db9840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01db9690(DAT_023908e0);
  FUN_01db99c0();
  FUN_01dcbe90();
  plVar4 = (longlong *)FUN_001f28d0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_01ccad10();
  lVar2 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027fe708;
  if (DAT_027fe708 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\x01';
  local_30 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  local_38 = lVar1;
  (**(code **)(*plVar4 + 0x468))(&local_38,&local_48);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x478))();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


