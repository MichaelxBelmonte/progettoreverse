// Function: FUN_00527070
// Address: 00527070
// Size: 979 bytes
// Class: GNString


void FUN_00527070(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *unaff_RDI;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00b34cb0();
  (**(code **)(*local_50 + 0x88))();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00b67c20();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00527142;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00527142:
    cVar2 = FUN_00b67e20();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*plVar4 + 0x3a0))();
      plVar3 = plVar4;
      if (cVar2 == '\0') {
        (**(code **)(*plVar4 + 0x3f0))();
        plVar3 = local_40;
        plVar1 = plVar4;
        if (plVar4 != local_40) {
          if (local_38 != '\0') {
            FUN_00d50b20();
            goto LAB_005271ee;
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar1 = plVar3;
          plVar4 = local_40;
        }
        plVar3 = plVar1;
        if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_005271ee:
      FUN_01f27fe0();
      (**(code **)(*local_70 + 0x458))();
      local_80 = local_50;
      local_78 = 0;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = '\x01';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_80);
      plVar4 = plVar3;
      if (local_40 == plVar3) {
LAB_00527288:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_00527288;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*plVar4 + 0x3a0))();
      if ((cVar2 != '\0') || (cVar2 = (**(code **)(*plVar4 + 0x420))(), cVar2 != '\0'))
      goto LAB_005272fc;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
LAB_005272fc:
      FUN_01f27fe0();
      (**(code **)(*local_70 + 0x758))();
      local_60 = local_50;
      local_58 = 0;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar4 + 0x400))(param_1,&local_60);
      plVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*plVar4 + 0x3a0))();
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*plVar4 + 0x420))(), cVar2 == '\0')) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        FUN_00d50b20();
      }
      else {
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    FUN_00d50b20();
    goto LAB_00527429;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00527429:
  FUN_00d50b20();
  return;
}


