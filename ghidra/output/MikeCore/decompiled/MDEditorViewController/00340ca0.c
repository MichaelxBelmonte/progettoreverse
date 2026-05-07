// Function: FUN_00340ca0
// Address: 00340ca0
// Size: 1638 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"


/* WARNING: Removing unreachable block (ram,0x0034118b) */
/* WARNING: Removing unreachable block (ram,0x00341194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00340ca0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined4 extraout_XMM0_Da;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(&UNK_000018a0 + *unaff_RDI))();
  (**(code **)(&UNK_000018b0 + *unaff_RDI))();
  (**(code **)(*unaff_RDI + 0x970))();
  pplVar10 = &local_48;
  FUN_0197c0e0();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00340d24;
  }
  pplVar10 = &DAT_02802688;
LAB_00340d24:
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x970))();
  plVar3 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  local_58 = unaff_RDI;
  do {
    plVar9 = local_58;
    (**(code **)(*local_58 + 0x370))();
    plVar8 = local_48;
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        plVar8 = plVar9;
        goto LAB_00340e37;
      }
    }
    else {
      local_58 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00340e37:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      plVar9 = plVar8;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    pplVar10 = &DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar10 = &local_58;
      if (cVar4 == '\0') {
        pplVar10 = &DAT_02802688;
      }
    }
    plVar9 = local_58;
    if (*pplVar10 != (longlong *)0x0) {
      if ((local_38[0] == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00340fb0;
    }
    if (local_58 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
LAB_00340fb0:
      FUN_00d50b20();
      if ((plVar1 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
        if (plVar9 != (longlong *)0x0) {
          FUN_00227020();
          plVar8 = local_48;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_00227020();
            (**(code **)(&DAT_000015c0 + *unaff_RDI))();
            FUN_00440ba0();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar5 = (**(code **)(&DAT_000015c0 + *unaff_RDI))();
        *(undefined4 *)(unaff_RDI + 0xc2) = uVar5;
        iVar6 = (**(code **)(&DAT_000015c0 + *(longlong *)unaff_RDI[0xaa]))();
        *(int *)((longlong)unaff_RDI + 0x614) = iVar6;
        if ((int)unaff_RDI[0xc2] != iVar6) {
          FUN_00502230(extraout_XMM0_Da,iVar6);
        }
      }
      plVar8 = (longlong *)unaff_RDI[0xaa];
      if ((DAT_0271a0b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_0272a1e8 = FUN_000914a0();
        _DAT_0272a1d0 = "MDEditorView";
        _DAT_0272a1d8 = 0x560;
        _DAT_0272a1e0 = FUN_0034df50;
        _DAT_0272a1f0 = 0;
        uRam000000000272a1f8 = 0;
        _DAT_0272a200 = 0;
        _DAT_0272a278 = 0;
        uRam000000000272a280 = 0;
        _DAT_0272a288 = 0;
        DAT_0272a28a = 1;
        _DAT_0272a208 = 0;
        uRam000000000272a210 = 0;
        _DAT_0272a218 = 0;
        uRam000000000272a220 = 0;
        _DAT_0272a228 = 0;
        uRam000000000272a230 = 0;
        _DAT_0272a238 = 0;
        uRam000000000272a240 = 0;
        _DAT_0272a248 = 0;
        uRam000000000272a250 = 0;
        _DAT_0272a258 = 0;
        uRam000000000272a260 = 0;
        _DAT_0272a268 = 0;
        uRam000000000272a270 = 0;
        DAT_0272a293 = 0;
        _DAT_0272a28b = 0;
        ___cxa_guard_release();
      }
      plVar2 = DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar2 = DAT_02802688;
        if (cVar4 != '\0') {
          plVar2 = (longlong *)unaff_RDI[0xaa];
        }
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_00001670 + *plVar2))();
      plVar8 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_000bda90();
      FUN_00108380();
      plVar2 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0193a890();
      uVar5 = FUN_000bda90();
      FUN_00108e20(uVar5,1);
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar8 + 0x3c8))();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


