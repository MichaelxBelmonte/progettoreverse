// Function: FUN_000c7760
// Address: 000c7760
// Size: 521 bytes
// Class: GNRootView


/* WARNING: Removing unreachable block (ram,0x000c784d) */
/* WARNING: Removing unreachable block (ram,0x000c7856) */
/* WARNING: Removing unreachable block (ram,0x000c78cb) */
/* WARNING: Removing unreachable block (ram,0x000c78d4) */
/* WARNING: Removing unreachable block (ram,0x000c7810) */
/* WARNING: Removing unreachable block (ram,0x000c7819) */
/* WARNING: Removing unreachable block (ram,0x000c7929) */
/* WARNING: Removing unreachable block (ram,0x000c7936) */

ulonglong FUN_000c7760(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_40;
  char local_38;
  
  plVar2 = *(longlong **)(unaff_RDI + 0x158);
  (**(code **)(*plVar2 + 0x368))();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (*(longlong *)(unaff_RDI + 0x168) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
    lVar9 = -1;
LAB_000c77ac:
    do {
      lVar7 = (longlong)(int)lVar9;
      do {
        lVar9 = lVar7 + 1;
        if (*(int *)(lVar3 + 0xc) <= lVar9) goto LAB_000c794b;
        lVar1 = lVar7 * 8;
        lVar7 = lVar9;
      } while (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar1) + 0x308) != 0);
      FUN_0051be00();
      pVar6 = (pthread_key_t)lVar7;
      if (local_38 == '\0') goto LAB_000c77fd;
    } while (local_40 == (longlong *)0x0);
    goto LAB_000c7820;
  }
LAB_000c794b:
  (**(code **)(*plVar2 + 0x378))();
  return uVar8 & 0xffffffff;
LAB_000c77fd:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_000c7820:
    FUN_004f9670();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar4 != '\0') goto LAB_000c7940;
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  }
  goto LAB_000c77ac;
LAB_000c7940:
  FUN_00d50b20();
  uVar8 = 0;
  goto LAB_000c794b;
}


