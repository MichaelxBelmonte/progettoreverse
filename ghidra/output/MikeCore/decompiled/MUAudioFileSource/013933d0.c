// Function: FUN_013933d0
// Address: 013933d0
// Size: 747 bytes
// Class: MUAudioFileSource


void FUN_013933d0(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar3 = DAT_028acd40;
  if (DAT_028acd40 != (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  FUN_00d6f370();
  local_70 = DAT_027bf420;
  if (DAT_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d704d0(&local_60,&local_70);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01393581:
    bVar2 = false;
  }
  else {
    local_50 = plVar3;
    local_48 = '\0';
    FUN_00cddf30();
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      plVar6 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        bVar1 = false;
        if ((local_38 == '\0') || (bVar1 = false, local_40 == (longlong *)0x0)) goto LAB_0139353e;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar2 = true;
      bVar1 = false;
    }
LAB_0139353e:
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar6 + 0x3a0))();
      if ((cVar5 != '\0') || (cVar5 = (**(code **)(*plVar6 + 0x428))(), cVar5 != '\0'))
      goto LAB_013935c7;
      if (bVar1) goto LAB_01393581;
      bVar2 = false;
      FUN_00d50b20();
    }
  }
  FUN_00b7b410();
  plVar6 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    bVar2 = true;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
  }
LAB_013935c7:
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar6 + 0x428))();
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  plVar4 = DAT_028acd40;
  if (cVar5 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_028acd40 != plVar6) &&
       (FUN_00d50b00(), DAT_028acd40 = plVar6, plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028acd48 == '\0') {
      DAT_028acd48 = '\x01';
      FUN_00e8cb90();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar2 = false;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return;
}


