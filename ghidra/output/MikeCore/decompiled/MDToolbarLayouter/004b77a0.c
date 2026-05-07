// Function: FUN_004b77a0
// Address: 004b77a0
// Size: 511 bytes
// Class: MDToolbarLayouter


/* WARNING: Removing unreachable block (ram,0x004b7870) */
/* WARNING: Removing unreachable block (ram,0x004b7879) */

void FUN_004b77a0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_004b5af0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_004b8550();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    uVar1 = *(uint *)(local_58 + 0xc);
    if (0 < (int)uVar1) {
      lVar2 = *(longlong *)(local_58 + 0x10);
      uVar4 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*(longlong *)(lVar2 + uVar5 * 8) + 0x20) = 0;
          *(undefined8 *)(*(longlong *)(lVar2 + 8 + uVar5 * 8) + 0x20) = 0;
          *(undefined8 *)(*(longlong *)(lVar2 + 0x10 + uVar5 * 8) + 0x20) = 0;
          *(undefined8 *)(*(longlong *)(lVar2 + 0x18 + uVar5 * 8) + 0x20) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar1 & 0xfffffffc) != (uint)uVar5);
      }
      if (uVar4 != 0) {
        uVar5 = uVar5 & 0xffffffff;
        do {
          *(undefined8 *)(*(longlong *)(lVar2 + uVar5 * 8) + 0x20) = 0;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    FUN_00274d30();
  }
  plVar3 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar3;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x10);
      goto joined_r0x004b795c;
    }
  }
  else {
joined_r0x004b795c:
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_004b796a;
    }
  }
  FUN_00d50b00();
LAB_004b796a:
  FUN_00ca1340();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_004b81e0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}


