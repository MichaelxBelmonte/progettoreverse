// Function: FUN_01396e30
// Address: 01396e30
// Size: 976 bytes
// Class: GNDate


void FUN_01396e30(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
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
  
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    return;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  FUN_01394a40();
  plVar2 = local_50;
  local_a0 = DAT_027bf478;
  if (DAT_027bf478 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar2 + 0x400))(param_1,&local_a0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar2 + 0x398))();
  if (cVar3 != '\0') {
    local_90 = plVar2;
    local_88 = '\0';
    FUN_00ca94c0();
    plVar4 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      plVar4 = (longlong *)0x0;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
        if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01396f91;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = false;
    }
LAB_01396f91:
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00c94880();
      local_70 = local_50;
      local_68 = 0;
      plVar4 = DAT_027bf440;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar4 = DAT_027bf440;
        }
      }
      else {
        local_48 = '\0';
      }
      local_68 = '\x01';
      DAT_027bf440 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        local_68 = '\x01';
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar4;
      FUN_00ca0840(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x3f0))();
      (**(code **)(*local_b0 + 0x3b0))();
      FUN_00d468f0();
      local_60 = local_50;
      local_58 = 0;
      plVar4 = DAT_027bf448;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar4 = DAT_027bf448;
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      DAT_027bf448 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar4;
      FUN_00ca0840(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00ca5c10();
      local_80 = plVar2;
      local_78 = '\0';
      FUN_00c91c80();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*DAT_028acd10 + 0x378))();
      if (!bVar1) {
        FUN_00d50b20();
      }
      goto LAB_01396ff1;
    }
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
LAB_01396ff1:
  FUN_00d50b20();
  return;
}


