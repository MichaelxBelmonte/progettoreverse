// Function: FUN_018b9f90
// Address: 018b9f90
// Size: 687 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x018ba1ba) */
/* WARNING: Removing unreachable block (ram,0x018ba1c3) */
/* WARNING: Removing unreachable block (ram,0x018ba13e) */
/* WARNING: Removing unreachable block (ram,0x018ba147) */
/* WARNING: Removing unreachable block (ram,0x018ba087) */
/* WARNING: Removing unreachable block (ram,0x018ba094) */
/* WARNING: Removing unreachable block (ram,0x018ba1ff) */
/* WARNING: Removing unreachable block (ram,0x018ba208) */

ulonglong FUN_018b9f90(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  longlong local_40;
  char local_38;
  
  lVar9 = *(longlong *)(unaff_RDI + 0x60);
  if ((lVar9 != 0) || (lVar9 = *(longlong *)(unaff_RDI + 0x58), lVar9 != 0)) {
    FUN_00d50b00();
  }
  if (lVar9 == 0) {
    uVar8 = 0;
    goto LAB_018ba22e;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 == 0) {
LAB_018ba224:
    uVar8 = 0;
  }
  else {
    plVar7 = *(longlong **)(unaff_RDI + 0x80);
    FUN_01152ba0();
    plVar10 = (longlong *)(unaff_RDI + 0x80);
    if (plVar7 == (longlong *)0x0) {
LAB_018ba00d:
      plVar7 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = plVar10;
      if (cVar3 == '\0') goto LAB_018ba00d;
    }
    lVar9 = local_40;
    if (*plVar7 == 0) {
      plVar1 = (longlong *)*plVar10;
      FUN_011611c0();
      pVar6 = (pthread_key_t)plVar7;
      if (plVar1 == (longlong *)0x0) {
LAB_018ba0d0:
        plVar10 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_018ba0d0;
      }
      if (*plVar10 == 0) goto LAB_018ba224;
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893ab0();
      if (local_40 == 0) goto LAB_018ba14e;
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)plVar7);
      pVar6 = (pthread_key_t)plVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017d3de0();
      if (local_40 == 0) {
LAB_018ba14e:
        bVar2 = false;
        lVar9 = 0;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    if (lVar9 == 0) goto LAB_018ba224;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c71e0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (local_40 == 0) {
LAB_018ba217:
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_018ba224;
    }
    if (*(int *)(local_40 + 0xc) < 2) {
      FUN_00d50b20();
      goto LAB_018ba217;
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    if (bVar2) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_018ba22e:
  return uVar8 & 0xffffffff;
}


