// Function: FUN_00502230
// Address: 00502230
// Size: 1082 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00502230(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_00502282:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00502282;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    if (param_2 != 0) {
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      plVar7 = unaff_RDI;
      do {
        uVar8 = (**(code **)(*plVar7 + 0x370))();
        plVar5 = local_48;
        if (local_48 == plVar7) {
          if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_00502357;
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar4 = local_38;
            }
            else {
              uVar8 = FUN_00d50b20();
              pcVar4 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              uVar8 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar7 = plVar5;
LAB_00502357:
            local_38[0] = '\x01';
            pcVar4 = local_40;
            plVar5 = plVar7;
          }
          *pcVar4 = '\0';
          plVar7 = plVar5;
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((DAT_026f7020 == '\0') &&
           (iVar3 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar3 != 0)) {
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
          uVar8 = ___cxa_guard_release();
        }
        plVar5 = &DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar5 = (longlong *)&stack0xffffffffffffffa0;
          uVar8 = extraout_XMM0_Da;
          if (cVar2 == '\0') {
            plVar5 = &DAT_02802688;
          }
        }
        if (*plVar5 != 0) {
          if ((local_38[0] == '\0') && (plVar7 != (longlong *)0x0)) {
            uVar8 = FUN_00d50b00();
          }
          if (unaff_RDI == (longlong *)0x0) goto LAB_005024ee;
          goto LAB_005024e6;
        }
      } while (plVar7 != (longlong *)0x0);
      plVar7 = (longlong *)0x0;
      if (unaff_RDI != (longlong *)0x0) {
LAB_005024e6:
        uVar8 = FUN_00d50b20();
      }
LAB_005024ee:
      if (plVar7 != (longlong *)0x0) {
        FUN_0023af30(uVar8,0);
        FUN_0023c090();
        FUN_0022da60();
        (**(code **)(*local_48 + 0x648))();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_01e42030();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0050257c;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_0050257c:
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  if ((local_48 == (longlong *)0x0) && (param_2 == 3)) {
    iVar3 = FUN_01ad3ca0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar3 != -1000000) {
      (**(code **)(*unaff_RDI + 0x960))();
      goto LAB_00502625;
    }
  }
  else if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (param_2 != 3) {
    FUN_01e40eb0();
    plVar7 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x968))();
    }
  }
LAB_00502625:
  FUN_0197b900();
  (**(code **)(&DAT_000015b8 + *local_48))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


