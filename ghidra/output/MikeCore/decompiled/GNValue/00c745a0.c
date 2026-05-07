// Function: FUN_00c745a0
// Address: 00c745a0
// Size: 512 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00c7468f) */
/* WARNING: Removing unreachable block (ram,0x00c74698) */
/* WARNING: Removing unreachable block (ram,0x00c74611) */
/* WARNING: Removing unreachable block (ram,0x00c7461a) */
/* WARNING: Removing unreachable block (ram,0x00c746ec) */
/* WARNING: Removing unreachable block (ram,0x00c746f5) */

ulonglong FUN_00c745a0(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  FUN_00ccb910();
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
    bVar1 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      uVar5 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00c7460b;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar1 = false;
    uVar5 = 0;
  }
LAB_00c7460b:
  if (plVar6 == (longlong *)0x0) {
    uVar4 = 0;
    goto LAB_00c74783;
  }
  uVar3 = FUN_00daa700();
  plVar7 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    plVar7 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_34 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00c74689;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = 0;
  }
LAB_00c74689:
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x368))();
    if ((local_a0 == '\0') || (local_a8 == 0)) {
      uVar4 = 0;
    }
    else {
      FUN_00d50b20();
      uVar4 = 0;
    }
  }
  else {
    local_50 = '\0';
    local_58 = plVar7;
    uVar2 = (**(code **)(*unaff_RDI + 0x618))(param_1,&local_58);
    *(undefined1 *)(unaff_RDI + 0xd) = uVar2;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar6 + 0x368))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = CONCAT71(uVar5,(char)unaff_RDI[0xd] != '\0');
    if ((char)local_34 == '\0') {
      FUN_00d50b20();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_00c74783:
  return uVar4 & 0xffffffff;
}


