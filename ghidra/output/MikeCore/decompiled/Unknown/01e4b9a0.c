// Function: FUN_01e4b9a0
// Address: 01e4b9a0
// Size: 639 bytes
// Class: Unknown


void FUN_01e4b9a0(void)

{
  uint uVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  longlong *local_98;
  char local_90 [8];
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined4 local_44;
  char local_38 [8];
  
  uVar1 = *(uint *)(*unaff_RDI + 0xc);
  if (1 < (int)uVar1) {
    lVar6 = 0;
    plVar5 = (longlong *)0x0;
    plVar3 = (longlong *)0x0;
    plVar4 = (longlong *)**(longlong **)(*unaff_RDI + 0x10);
    local_44 = unaff_ESI;
    if (plVar4 != (longlong *)0x0) goto LAB_01e4ba1e;
    while( true ) {
      plVar4 = *(longlong **)(*(longlong *)(*unaff_RDI + 0x10) + 8 + lVar6 * 8);
      if (plVar3 != plVar4) {
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar3 != (longlong *)0x0;
        plVar3 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      local_80 = '\0';
      local_88 = plVar3;
      (**(code **)(*plVar5 + 0x8a0))();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = '\0';
      local_78 = plVar5;
      (**(code **)(*plVar3 + 0x8a8))();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((ulonglong)uVar1 - 2 == lVar6) break;
      lVar6 = lVar6 + 1;
      plVar4 = *(longlong **)(*(longlong *)(*unaff_RDI + 0x10) + lVar6 * 8);
      if (plVar5 != plVar4) {
LAB_01e4ba1e:
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar5 != (longlong *)0x0;
        plVar5 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
    }
    if ((1 < (int)uVar1) && ((char)local_44 != '\0')) {
      FUN_00d23340();
      pcVar2 = local_38;
      if (local_90[0] != '\0') {
        pcVar2 = local_90;
      }
      local_38[0] = local_90[0];
      *pcVar2 = '\0';
      if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_98 == plVar5) {
        if ((local_38[0] != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar5 = local_98;
        if (local_38[0] == '\0') {
          if (local_98 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
      plVar4 = (longlong *)**(undefined8 **)(*unaff_RDI + 0x10);
      if (plVar3 != plVar4) {
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar3 = plVar4;
      }
      local_60 = '\0';
      local_68 = plVar3;
      (**(code **)(*plVar5 + 0x8a0))();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = '\0';
      local_58 = plVar5;
      (**(code **)(*plVar3 + 0x8a8))();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


