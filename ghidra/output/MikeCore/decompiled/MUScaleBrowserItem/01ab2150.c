// Function: FUN_01ab2150
// Address: 01ab2150
// Size: 513 bytes
// Class: MUScaleBrowserItem


undefined8 FUN_01ab2150(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_88;
  undefined1 local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    return 0;
  }
  FUN_01aa3f90();
  plVar6 = local_58;
  if ((local_50 == '\0') &&
     (((local_58 != (longlong *)0x0 && (FUN_00d50b00(), local_50 != '\0')) &&
      (local_58 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar3 != '\0') {
    local_88 = plVar6;
    local_80 = 0;
    FUN_01ab2a40(param_1,&local_88);
    plVar2 = local_58;
    if (plVar6 == local_58) {
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
      plVar6 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
    }
    cVar3 = FUN_00ce6e30();
    if (cVar3 == '\0') {
      FUN_00d50b20();
      return 0;
    }
  }
  cVar3 = (**(code **)(*plVar6 + 0x398))();
  if (((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar6 + 0x3a0))(), cVar3 == '\0')) ||
     ((cVar3 = FUN_00ce6e30(), cVar3 == '\0' || (lVar1 = *param_2, lVar1 == 0)))) {
LAB_01ab2338:
    uVar5 = 0;
  }
  else {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_3c = 0;
    lVar7 = 0;
    local_48 = lVar1;
    do {
      local_40 = (int)lVar7;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_01b53440();
        goto LAB_01ab2338;
      }
      local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
      FUN_01aa3f90();
      local_60 = '\0';
      local_68 = plVar6;
      uVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while ((char)uVar4 == '\0');
    FUN_01b53440();
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  }
  FUN_00d50b20();
  return uVar5;
}


