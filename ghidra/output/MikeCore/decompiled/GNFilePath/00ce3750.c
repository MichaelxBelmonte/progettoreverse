// Function: FUN_00ce3750
// Address: 00ce3750
// Size: 1052 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce390a) */
/* WARNING: Removing unreachable block (ram,0x00ce3913) */
/* WARNING: Removing unreachable block (ram,0x00ce39d1) */
/* WARNING: Removing unreachable block (ram,0x00ce39de) */
/* WARNING: Removing unreachable block (ram,0x00ce3b02) */
/* WARNING: Removing unreachable block (ram,0x00ce395c) */
/* WARNING: Removing unreachable block (ram,0x00ce3968) */
/* WARNING: Removing unreachable block (ram,0x00ce3971) */
/* WARNING: Removing unreachable block (ram,0x00ce37a0) */

ulonglong FUN_00ce3750(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  longlong *local_70;
  char local_68;
  longlong *local_48;
  char local_40;
  undefined *local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  local_38 = (undefined *)0x0;
  plVar9 = (longlong *)0x0;
LAB_00ce37a5:
  plVar7 = (longlong *)((ulonglong)local_38 & 0xffffffff);
  uVar5 = FUN_00cddf30();
  cVar3 = (char)plVar7;
  if (local_48 == plVar9) {
    plVar2 = plVar9;
    if ((cVar3 == '\0') && (local_48 != (longlong *)0x0)) {
      local_38 = (undefined *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
      puVar6 = local_38;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) {
      local_38 = (undefined *)((ulonglong)local_38 & 0xffffffff);
    }
    else {
      FUN_00d50b20();
      local_38 = (undefined *)((ulonglong)local_38 & 0xffffffff);
    }
  }
  else {
    plVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar5 = FUN_00d50b00();
      }
      local_38 = (undefined *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((cVar3 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = (undefined *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((cVar3 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar9 = plVar2;
  if (plVar9 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar9 + 0x398))();
    if (cVar3 != '\0') goto LAB_00ce3b5a;
    cVar3 = (**(code **)(*plVar9 + 0x3a0))();
    if (cVar3 != '\0') goto LAB_00ce3a20;
  }
  FUN_00d8a060();
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = local_70;
  local_40 = '\0';
  FUN_00d23370();
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8ee20();
  plVar7 = (longlong *)*unaff_RDI;
  if (plVar7 == local_70) goto LAB_00ce3980;
  cVar3 = *(char *)(unaff_RDI + 1);
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_70;
  if ((cVar3 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  goto LAB_00ce39c2;
LAB_00ce3a20:
  local_38 = (undefined *)((ulonglong)local_38 & 0xffffffff);
  bVar10 = *(int *)((longlong)puVar4 + 0xc) == 0;
  uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),bVar10);
  cVar3 = (char)local_38;
  if (bVar10) goto joined_r0x00ce3b77;
  lVar1 = *(longlong *)puVar4[2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar9 + 0x400))();
  if (local_48 == plVar9) {
    if ((cVar3 == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_00ce3ad3;
      }
      goto LAB_00ce3aed;
    }
joined_r0x00ce3ae6:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = (undefined *)0x1;
      if (cVar3 != '\0') {
        FUN_00d50b20();
LAB_00ce3ad3:
        local_38 = (undefined *)0x1;
        goto joined_r0x00ce3ae6;
      }
    }
    else {
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
LAB_00ce3aed:
      local_40 = '\0';
      local_38 = (undefined *)0x1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar9 + 0x420))();
  if (cVar3 == '\0') goto LAB_00ce3b5a;
  FUN_00d23620();
  plVar7 = local_48;
  goto LAB_00ce3a20;
LAB_00ce3980:
  if ((*(char *)(unaff_RDI + 1) == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
LAB_00ce39c2:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  goto LAB_00ce37a5;
LAB_00ce3b5a:
  uVar8 = 0;
  cVar3 = (char)local_38;
joined_r0x00ce3b77:
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar8 & 0xffffffff;
}


