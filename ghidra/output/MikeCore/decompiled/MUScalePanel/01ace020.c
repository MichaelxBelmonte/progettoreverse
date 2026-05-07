// Function: FUN_01ace020
// Address: 01ace020
// Size: 1018 bytes
// Class: MUScalePanel


/* WARNING: Removing unreachable block (ram,0x01ace0b5) */
/* WARNING: Removing unreachable block (ram,0x01ace0be) */

ulonglong FUN_01ace020(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0xe20))();
  plVar3 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_01ace406;
  }
  if ((*(int *)((longlong)plVar3 + 0xc) == 1) &&
     (cVar2 = (**(code **)(*unaff_RDI + 0x488))(), cVar2 != '\0')) {
    FUN_01a58dc0();
    pplVar7 = &local_48;
    (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0xd40))();
    plVar3 = local_48;
    FUN_00083c20();
    if (plVar3 == (longlong *)0x0) {
      pplVar7 = &DAT_02802688;
      plVar3 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01ace133;
LAB_01ace18a:
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') {
        pplVar7 = &DAT_02802688;
      }
      plVar3 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') goto LAB_01ace18a;
LAB_01ace133:
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    plVar5 = (longlong *)(ulonglong)param_2;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((plVar3 != (longlong *)0x0) && ((char)param_2 != '\0')) {
      FUN_01caec40();
      lVar1 = DAT_027e1e88;
      if (DAT_027e1e88 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acbed0();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = (longlong *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acce90();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_01ace3fc;
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_01ace3fc:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_01ace406:
  return uVar6 & 0xffffffff;
}


