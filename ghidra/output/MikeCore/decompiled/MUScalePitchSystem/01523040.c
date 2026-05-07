// Function: FUN_01523040
// Address: 01523040
// Size: 798 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x015230b5) */
/* WARNING: Removing unreachable block (ram,0x015230be) */

longlong * FUN_01523040(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  short sVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_68 = 0;
    local_60 = '\0';
    FUN_016c2780(param_1,&local_68);
    lVar3 = local_58;
    pVar9 = (pthread_key_t)param_1;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caa50();
    lVar8 = *(longlong *)(**(longlong **)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + 0x10);
    sVar11 = *(short *)(lVar8 + 0x18);
    iVar12 = (int)*(short *)(lVar8 + 0x1a);
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    FUN_016c3060(uVar6,iVar12,0);
    pVar9 = (pthread_key_t)uVar6;
    iVar4 = *(int *)(unaff_RSI + 0x18);
    if (1 < iVar4) {
      uVar13 = 1;
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) +
                 (ulonglong)(uVar13 >> 10) * 8);
        lVar2 = *(longlong *)(lVar8 + 0x10);
        lVar14 = (ulonglong)(uVar13 & 0x3ff) * 0x20;
        iVar10 = (int)*(short *)(lVar2 + 0x1a + lVar14);
        sVar1 = *(short *)(lVar2 + 0x18 + lVar14);
        if ((iVar12 != iVar10) || (sVar11 != sVar1)) {
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
          lVar8 = lVar3;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          local_48 = lVar8;
          lVar8 = FUN_00e7cc50(*(undefined8 *)(lVar2 + 8 + lVar14));
          FUN_016c3060(lVar8,iVar10,0);
          iVar4 = *(int *)(unaff_RSI + 0x18);
          iVar12 = iVar10;
          sVar11 = sVar1;
        }
        pVar9 = (pthread_key_t)lVar8;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar4);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c30e0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c3130();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *unaff_RDI = lVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


