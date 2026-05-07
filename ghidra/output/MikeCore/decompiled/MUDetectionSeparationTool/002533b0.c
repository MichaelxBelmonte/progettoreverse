// Function: FUN_002533b0
// Address: 002533b0
// Size: 923 bytes
// Class: MUDetectionSeparationTool


/* WARNING: Removing unreachable block (ram,0x0025365a) */
/* WARNING: Removing unreachable block (ram,0x00253666) */
/* WARNING: Removing unreachable block (ram,0x0025371a) */
/* WARNING: Removing unreachable block (ram,0x00253726) */
/* WARNING: Removing unreachable block (ram,0x0025348e) */
/* WARNING: Removing unreachable block (ram,0x00253497) */
/* WARNING: Removing unreachable block (ram,0x0025351f) */
/* WARNING: Removing unreachable block (ram,0x00253528) */
/* WARNING: Removing unreachable block (ram,0x00253577) */
/* WARNING: Removing unreachable block (ram,0x002535a0) */
/* WARNING: Removing unreachable block (ram,0x00253579) */
/* WARNING: Removing unreachable block (ram,0x002535a2) */

void FUN_002533b0(void)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = local_78;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if (cVar2 == '\0') {
    if (*(longlong *)(unaff_RSI + 0x1c0) == 0) {
      local_40[0] = '\0';
      local_48 = 0;
    }
    else {
      FUN_006f3f00();
    }
    bVar3 = FUN_00751ba0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  else {
    bVar3 = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 == 0) || (*(longlong *)(unaff_RSI + 0xb8) == 0)) {
LAB_002534e5:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_004405c0();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_002534e5;
    FUN_00d50b00();
  }
  else if (local_78 == (longlong *)0x0) goto LAB_002534e5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_004b5af0();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_002536e7;
    FUN_00d50b00();
  }
  else if (local_78 == (longlong *)0x0) goto LAB_002536e7;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_60 = -1;
  while( true ) {
    lVar6 = (longlong)local_60;
    local_60 = local_60 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) <= local_60) break;
    local_78 = *(longlong **)(plVar1[2] + 8 + lVar6 * 8);
    iVar4 = FUN_003b7980();
    if (iVar4 == 2) {
      if (*(longlong *)(unaff_RSI + 0x1c0) == 0) {
        local_88 = '\0';
        local_90 = 0;
      }
      else {
        FUN_006f3f00();
      }
      FUN_0078bc40();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00274d30();
  FUN_00d50b20();
LAB_002536e7:
  FUN_01f27fe0();
  FUN_000c3e50();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


