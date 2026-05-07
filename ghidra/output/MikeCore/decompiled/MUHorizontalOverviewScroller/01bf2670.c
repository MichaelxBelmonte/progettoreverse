// Function: FUN_01bf2670
// Address: 01bf2670
// Size: 1038 bytes
// Class: MUHorizontalOverviewScroller


/* WARNING: Removing unreachable block (ram,0x01bf29a6) */
/* WARNING: Removing unreachable block (ram,0x01bf29af) */
/* WARNING: Removing unreachable block (ram,0x01bf28b7) */
/* WARNING: Removing unreachable block (ram,0x01bf28c0) */
/* WARNING: Removing unreachable block (ram,0x01bf2a99) */
/* WARNING: Removing unreachable block (ram,0x01bf2aa9) */
/* WARNING: Removing unreachable block (ram,0x01bf29d5) */
/* WARNING: Removing unreachable block (ram,0x01bf29e2) */
/* WARNING: Removing unreachable block (ram,0x01bf280c) */
/* WARNING: Removing unreachable block (ram,0x01bf2840) */
/* WARNING: Removing unreachable block (ram,0x01bf280e) */
/* WARNING: Removing unreachable block (ram,0x01bf2842) */
/* WARNING: Removing unreachable block (ram,0x01bf28f7) */
/* WARNING: Removing unreachable block (ram,0x01bf2920) */
/* WARNING: Removing unreachable block (ram,0x01bf28f9) */
/* WARNING: Removing unreachable block (ram,0x01bf2922) */

void FUN_01bf2670(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_b0;
  char local_a8;
  int local_98;
  longlong local_88;
  char local_80;
  int local_70;
  undefined8 *local_40;
  
  lVar1 = *(longlong *)(unaff_RSI + 0x160);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002dff80();
  if ((local_a8 == '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  pcVar4 = DAT_02572370;
  bVar3 = true;
  local_40 = local_b0;
  do {
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
      puVar6 = (undefined8 *)0x0;
LAB_01bf2a06:
      if (bVar2) {
        if ((bVar3) || (local_40 == (undefined8 *)0x0)) {
LAB_01bf2a37:
          if (puVar6 == (undefined8 *)0x0) goto LAB_01bf273b;
        }
        else {
          bVar3 = true;
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
    }
    else {
      local_98 = -1;
      bVar2 = false;
      puVar6 = (undefined8 *)0x0;
LAB_01bf2808:
      while (lVar1 = local_88, local_98 = local_98 + 1,
            local_98 < *(int *)((longlong)local_40 + 0xc)) {
        FUN_01bbf570();
        if (local_80 == '\0') goto LAB_01bf28a0;
        if (local_88 != 0) goto LAB_01bf28c8;
      }
      FUN_002e0650();
      if (local_40 == puVar6) goto LAB_01bf2a06;
      if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = true;
      local_40 = puVar6;
      if (bVar2) goto LAB_01bf2a37;
      bVar3 = false;
    }
LAB_01bf273b:
    if (local_40 == (undefined8 *)0x0) {
      *unaff_RDI = local_b0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  } while( true );
LAB_01bf28a0:
  if (local_88 != 0) {
    FUN_00d50b00();
LAB_01bf28c8:
    local_80 = '\0';
    local_88 = 0;
    local_70 = -1;
    while( true ) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      local_88 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*pcVar4)();
        bVar2 = true;
      }
      FUN_00d21140();
      FUN_00d21140();
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  goto LAB_01bf2808;
}


