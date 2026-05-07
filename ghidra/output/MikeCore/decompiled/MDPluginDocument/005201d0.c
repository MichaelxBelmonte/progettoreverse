// Function: FUN_005201d0
// Address: 005201d0
// Size: 924 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x00520235) */
/* WARNING: Removing unreachable block (ram,0x00520525) */
/* WARNING: Removing unreachable block (ram,0x00520241) */
/* WARNING: Removing unreachable block (ram,0x0052049f) */
/* WARNING: Removing unreachable block (ram,0x005204a8) */
/* WARNING: Removing unreachable block (ram,0x005202d0) */
/* WARNING: Removing unreachable block (ram,0x005202f0) */
/* WARNING: Removing unreachable block (ram,0x005202d2) */
/* WARNING: Removing unreachable block (ram,0x005202f2) */

void FUN_005201d0(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  longlong *local_b0;
  char local_a8;
  longlong local_70;
  char local_68;
  longlong *local_50;
  char local_48;
  int local_38;
  
  FUN_00b342a0();
  if ((*(longlong *)(unaff_RDI + 0x308) == 0) && (*(longlong *)(unaff_RDI + 0xe8) != 0)) {
    FUN_00b34cb0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00b34cb0();
      (**(code **)(*local_b0 + 0x70))();
      if (local_50 == (longlong *)0x0) {
        bVar2 = true;
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = local_50;
        if (local_48 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
        }
        else {
          local_48 = '\0';
          bVar2 = false;
        }
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        (**(code **)(*local_b0 + 0x10))();
        FUN_00d50b20();
      }
      lVar1 = DAT_0270b800;
      if (plVar5 != (longlong *)0x0) {
        if (DAT_0270b800 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d90eb0();
        if (cVar3 == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)(unaff_RDI + 0x248) != '\0';
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (bVar6) {
          FUN_0051c820();
          *(undefined2 *)(unaff_RDI + 0x24a) = 0;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (*(longlong **)(unaff_RDI + 0x278) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x370))();
    FUN_012dddb0();
    if (*(longlong *)(unaff_RDI + 0x278) != 0) {
      *(undefined8 *)(unaff_RDI + 0x278) = 0;
      FUN_00d50b20();
    }
  }
  if ((*(longlong **)(unaff_RDI + 0xe8) != (longlong *)0x0) &&
     ((**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x370))(),
     *(longlong *)(unaff_RDI + 0xe8) != 0)) {
    *(undefined8 *)(unaff_RDI + 0xe8) = 0;
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x2e8);
  if (lVar1 != 0) {
    local_48 = '\0';
    local_50 = (longlong *)0x0;
    local_38 = -1;
    while( true ) {
      lVar4 = (longlong)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_38) break;
      local_50 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_50 + 0x370))();
    }
    FUN_00540a20();
  }
  *(undefined8 *)(unaff_RDI + 0x240) = 0;
  *(undefined2 *)(unaff_RDI + 0x248) = 0;
  FUN_00d403d0();
  lVar1 = DAT_026fb7e0;
  if (DAT_026fb7e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffa0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


