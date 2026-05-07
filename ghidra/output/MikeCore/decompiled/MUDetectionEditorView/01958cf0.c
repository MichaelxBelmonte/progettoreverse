// Function: FUN_01958cf0
// Address: 01958cf0
// Size: 894 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01958cf0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  bool bVar9;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((DAT_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01958d4a:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01958d4a;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(undefined1 *)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)pplVar6;
  if (plVar1 == (longlong *)0x0) {
LAB_01958f66:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = DAT_026fb9e0;
    if (bVar9) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar8 == 0) {
LAB_01958f79:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_026fb9d0;
      if (!bVar9) goto LAB_01958f66;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar8 == 0) goto LAB_01958f79;
      FUN_00d50b00();
    }
    *unaff_RDI = lVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


