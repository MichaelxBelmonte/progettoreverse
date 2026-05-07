// Function: FUN_01e46a20
// Address: 01e46a20
// Size: 764 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e46a20(void)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t in_R9;
  uint64_t uVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint64_t in_XMM3_Qa;
  uint32_t uVar10;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)arg1[6];
  plVar3 = arg1;
  while (plVar2 = plVar4, plVar2 != (int64_t *)0x0) {
    plVar4 = (int64_t *)plVar2[6];
    plVar3 = plVar2;
    if ((int64_t *)plVar2[6] == plVar2) {
      plVar4 = plVar2;
    }
  }
  cVar5 = (**(code **)(*plVar3 + 0x4b8))();
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00d50b00();
  (**(code **)(*arg1 + 0x7b0))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01e46ac8;
    }
LAB_01e46af5:
    bVar1 = true;
LAB_01e46b7d:
    (**(code **)(*arg1 + 0x660))((int)g_023b19a0,0);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    if (bVar1) goto LAB_01e46bb8;
  }
  else {
    if (local_40 == 0) goto LAB_01e46af5;
LAB_01e46ac8:
    cVar5 = FUN_01cf74d0();
    if (cVar5 == '\0') {
LAB_01e46b7a:
      bVar1 = false;
      goto LAB_01e46b7d;
    }
    FUN_01d3a560();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01e46b1e;
      }
      goto LAB_01e46b7a;
    }
    if (local_40 == 0) goto LAB_01e46b7a;
LAB_01e46b1e:
    iVar6 = FUN_01d3a5a0();
    if (((iVar6 != 1) && (iVar6 = FUN_01d3a5a0(), iVar6 != 5)) &&
       (iVar6 = FUN_01d3a5a0(), iVar6 != 6)) {
LAB_01e46b72:
      FUN_00d50b20();
      goto LAB_01e46b7a;
    }
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    cVar5 = FUN_00d05410((int)uVar9,0,*(void*)(local_40 + 0x114),in_XMM3_Qa,uVar9,
                         extraout_XMM0_Dc);
    uVar10 = (uint32_t)uVar9;
    if (cVar5 != '\0') goto LAB_01e46b72;
    FUN_01cf85d0(uVar10);
    (**(code **)(*arg1 + 0x660))((int)g_02390108,0);
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e46c63;
      FUN_00d50b00(uVar10);
    }
    else if (local_40 == 0) {
LAB_01e46c63:
      uVar9 = FUN_01e46ed0();
      uVar10 = extraout_XMM0_Dc_00;
      uVar7 = FUN_01d3b620();
      FUN_01d3b630();
      uVar8 = FUN_01d3b590();
      FUN_01d3c980((int)uVar9,uVar7,uVar8,in_R9,uVar9,uVar10);
      if ((local_40 != 0) && (local_38 == '\0')) {
        FUN_00d50b00();
      }
      FUN_01d3a5b0();
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e46bb8:
  FUN_00d50b20();
  return;
}

