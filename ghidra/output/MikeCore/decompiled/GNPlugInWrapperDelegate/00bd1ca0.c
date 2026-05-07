// Function: FUN_00bd1ca0
// Address: 00bd1ca0
// Size: 619 bytes
// Class: GNPlugInWrapperDelegate


void FUN_00bd1ca0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_438;
  char local_430;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (DAT_02802500 == '\0') {
    iVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x68) + 0x70))(param_1,0x400);
    if (iVar3 < 1) {
      iVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x68) + 0x78))();
      if (0 < iVar3) {
        FUN_00d920f0();
        lVar4 = DAT_028a5740;
        if (DAT_028a5740 != local_438) {
          if (local_430 == '\0') {
            if (local_438 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_438;
            }
          }
          else {
            local_430 = '\0';
            lVar4 = local_438;
          }
          bVar2 = DAT_028a5740 != 0;
          DAT_028a5740 = lVar4;
          if (bVar2) {
            FUN_00d50b20();
            lVar4 = local_438;
          }
        }
        if ((lVar4 != 0) && (DAT_028a5748 == '\0')) {
          DAT_028a5748 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_438;
        }
        if ((local_430 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d93730();
      lVar4 = DAT_028a5740;
      if (DAT_028a5740 != local_438) {
        if (local_430 == '\0') {
          if (local_438 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_438;
          }
        }
        else {
          local_430 = '\0';
          lVar4 = local_438;
        }
        bVar2 = DAT_028a5740 != 0;
        DAT_028a5740 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_438;
        }
      }
      if ((lVar4 != 0) && (DAT_028a5748 == '\0')) {
        DAT_028a5748 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_438;
      }
      if ((local_430 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
    DAT_02802500 = '\x01';
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = DAT_028a5740;
  if (DAT_028a5740 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


