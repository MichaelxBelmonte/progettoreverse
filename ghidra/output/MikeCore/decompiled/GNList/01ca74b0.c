// Function: FUN_01ca74b0
// Address: 01ca74b0
// Size: 762 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01ca7665) */
/* WARNING: Removing unreachable block (ram,0x01ca766e) */
/* WARNING: Removing unreachable block (ram,0x01ca7567) */
/* WARNING: Removing unreachable block (ram,0x01ca7570) */
/* WARNING: Removing unreachable block (ram,0x01ca76f9) */
/* WARNING: Removing unreachable block (ram,0x01ca7702) */

void FUN_01ca74b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  lVar2 = DAT_026fceb8;
  plVar1 = (longlong *)*param_2;
  if (DAT_026fceb8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fcec0;
  if (cVar4 == '\0') {
    plVar1 = (longlong *)*param_2;
    if (DAT_026fcec0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027eda00;
    lVar2 = DAT_027ed9f8;
    if (cVar4 == '\0') {
      plVar1 = (longlong *)*param_2;
      if (DAT_027eda00 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027eda08;
      if (cVar4 == '\0') {
        plVar1 = (longlong *)*param_2;
        if (DAT_027eda08 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          (*(code *)PTR__objc_release_024a99a0)();
          lVar2 = DAT_02774da0;
          if (DAT_02774da0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d90eb0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          local_40 = *param_2;
          if ((char)param_2[1] != '\0') {
            *unaff_RDI = local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            *(undefined1 *)(param_2 + 1) = 0;
            return;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          FUN_00e1ccf0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          (*(code *)PTR__objc_release_024a99a0)();
        }
      }
      else {
        FUN_00e1ccf0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        (*(code *)PTR__objc_release_024a99a0)();
      }
    }
    else {
      if (DAT_027ed9f8 != 0) {
        FUN_00d50b00();
      }
      (*(code *)PTR__objc_release_024a99a0)();
      local_40 = lVar2;
    }
  }
  else {
    FUN_00e1ccf0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    (*(code *)PTR__objc_release_024a99a0)();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


