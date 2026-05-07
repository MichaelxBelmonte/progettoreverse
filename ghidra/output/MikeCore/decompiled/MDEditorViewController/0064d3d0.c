// Function: FUN_0064d3d0
// Address: 0064d3d0
// Size: 1440 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDDocumentViewController"


/* WARNING: Removing unreachable block (ram,0x0064d59e) */
/* WARNING: Removing unreachable block (ram,0x0064d5a7) */
/* WARNING: Removing unreachable block (ram,0x0064d741) */
/* WARNING: Removing unreachable block (ram,0x0064d74e) */
/* WARNING: Removing unreachable block (ram,0x0064d7b6) */
/* WARNING: Removing unreachable block (ram,0x0064d7bf) */
/* WARNING: Removing unreachable block (ram,0x0064d5cd) */
/* WARNING: Removing unreachable block (ram,0x0064d494) */
/* WARNING: Removing unreachable block (ram,0x0064d4a0) */
/* WARNING: Removing unreachable block (ram,0x0064d459) */
/* WARNING: Removing unreachable block (ram,0x0064d462) */
/* WARNING: Removing unreachable block (ram,0x0064d4c2) */
/* WARNING: Removing unreachable block (ram,0x0064d4cb) */
/* WARNING: Removing unreachable block (ram,0x0064d6a7) */
/* WARNING: Removing unreachable block (ram,0x0064d6d0) */
/* WARNING: Removing unreachable block (ram,0x0064d6a9) */
/* WARNING: Removing unreachable block (ram,0x0064d6d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064d3d0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_a8;
  char local_a0;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar2 = local_58;
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_026d8470 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026fe6b8 = FUN_00015ff0();
    _DAT_026fe6a0 = "MDDocumentViewController";
    _DAT_026fe6a8 = 0x100;
    _DAT_026fe6b0 = FUN_00082e10;
    _DAT_026fe6c0 = 0;
    uRam00000000026fe6c8 = 0;
    _DAT_026fe6d0 = 0;
    _DAT_026fe748 = 0;
    uRam00000000026fe750 = 0;
    _DAT_026fe758 = 0;
    DAT_026fe75a = 1;
    _DAT_026fe6d8 = 0;
    uRam00000000026fe6e0 = 0;
    _DAT_026fe6e8 = 0;
    uRam00000000026fe6f0 = 0;
    _DAT_026fe6f8 = 0;
    uRam00000000026fe700 = 0;
    _DAT_026fe708 = 0;
    uRam00000000026fe710 = 0;
    _DAT_026fe718 = 0;
    uRam00000000026fe720 = 0;
    _DAT_026fe728 = 0;
    uRam00000000026fe730 = 0;
    _DAT_026fe738 = 0;
    uRam00000000026fe740 = 0;
    DAT_026fe763 = 0;
    _DAT_026fe75b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_0064d41f:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_0064d41f;
  }
  if (*plVar6 != 0) {
    FUN_006f3f00();
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x608))();
    FUN_00759c40();
    plVar6 = (longlong *)unaff_RDI[0x32];
    if (plVar6 == (longlong *)0x0) {
      if (local_58 != (longlong *)0x0) goto LAB_0064d654;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      if (plVar6 != local_58) goto LAB_0064d654;
      if (unaff_RDI[0x32] != 0) {
        unaff_RDI[0x32] = 0;
        FUN_00d50b20();
      }
    }
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0064d654:
    FUN_00d50130();
    lVar1 = unaff_RDI[0x20];
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = (longlong *)0x0;
      local_40 = -1;
      while( true ) {
        lVar5 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
        FUN_002218b0();
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a8 == plVar2) {
          FUN_01e51430();
        }
      }
      FUN_0065ca40();
    }
    (**(code **)(*plVar2 + 0x610))();
    iVar4 = *(int *)((longlong)local_58 + 0xc);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    if (iVar4 == 0) {
      FUN_00612250();
      (**(code **)(*local_58 + 0x5f8))();
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x688))();
    FUN_00d50b20();
    return;
  }
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_026f7020 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270aa58 = FUN_00015ff0();
    _DAT_0270aa40 = "MDEditorViewController";
    _DAT_0270aa48 = 0x1e8;
    _DAT_0270aa50 = FUN_00074eb0;
    _DAT_0270aa60 = 0;
    uRam000000000270aa68 = 0;
    _DAT_0270aa70 = 0;
    _DAT_0270aae8 = 0;
    uRam000000000270aaf0 = 0;
    _DAT_0270aaf8 = 0;
    DAT_0270aafa = 1;
    _DAT_0270aa78 = 0;
    uRam000000000270aa80 = 0;
    _DAT_0270aa88 = 0;
    uRam000000000270aa90 = 0;
    _DAT_0270aa98 = 0;
    uRam000000000270aaa0 = 0;
    _DAT_0270aaa8 = 0;
    uRam000000000270aab0 = 0;
    _DAT_0270aab8 = 0;
    uRam000000000270aac0 = 0;
    _DAT_0270aac8 = 0;
    uRam000000000270aad0 = 0;
    _DAT_0270aad8 = 0;
    uRam000000000270aae0 = 0;
    DAT_0270ab03 = 0;
    _DAT_0270aafb = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar3 != '\0') goto LAB_0064d55d;
  }
  plVar6 = &DAT_02802688;
LAB_0064d55d:
  if (*plVar6 != 0) {
    lVar1 = *unaff_RSI;
    lVar5 = unaff_RSI[1];
    if (((char)lVar5 != '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d23f50();
    (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x4a0))();
    if ((*(int *)(lVar1 + 0xc) == 0) &&
       ((**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x478))(), unaff_RDI[0x1c] != 0)) {
      unaff_RDI[0x1c] = 0;
      FUN_00d50b20();
    }
    FUN_00d50130();
    if (((char)lVar5 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


