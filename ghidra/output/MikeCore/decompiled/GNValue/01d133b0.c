// Function: FUN_01d133b0
// Address: 01d133b0
// Size: 648 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01d13412) */

void FUN_01d133b0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if (local_40 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (local_38 != '\0') {
      plVar5 = (longlong *)0x0;
    }
  }
  else {
    plVar5 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar1 = DAT_027e7c20;
  if (plVar5 != (longlong *)0x0) {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar1;
    local_88 = '\x01';
    FUN_01ccaae0(param_1,&local_90);
    lVar1 = DAT_027edfc8;
    bVar6 = true;
    if (local_40 == (longlong *)0x0) {
      if (DAT_027edfc8 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_01ccaae0(param_1,&local_80);
      bVar6 = local_a0 != 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0xa20))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027ef7e8;
      if (DAT_027ef7e8 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar1;
      local_68 = '\x01';
      (**(code **)(*plVar5 + 0xa10))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_001f8a30();
      (**(code **)(*plVar5 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = plVar5;
      if (cVar2 == '\0') {
        plVar4 = DAT_02802688;
      }
      if (plVar4 != (longlong *)0x0) {
        local_58 = 0;
        (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
        FUN_00d50b00();
        local_58 = '\x01';
        local_60 = (longlong *)(unaff_RDI + 0x48);
        (**(code **)(*plVar5 + 0xae0))();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          (**(code **)(*local_60 + 0x10))();
          FUN_00d50b20();
        }
        uVar3 = FUN_01e05890();
        *(undefined1 *)(unaff_RDI + 0x58) = uVar3;
      }
    }
  }
  FUN_01cc9ce0();
  if ((local_40 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


