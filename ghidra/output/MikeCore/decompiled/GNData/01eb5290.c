// Function: FUN_01eb5290
// Address: 01eb5290
// Size: 1707 bytes
// Class: GNData
// String references:
//   ".%@"
//   "%@%I"


/* WARNING: Removing unreachable block (ram,0x01eb533d) */
/* WARNING: Removing unreachable block (ram,0x01eb5346) */
/* WARNING: Removing unreachable block (ram,0x01eb537a) */
/* WARNING: Removing unreachable block (ram,0x01eb537f) */

void FUN_01eb5290(void)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_c8 = 0;
  if ((local_70 == '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = '\0';
  local_c8 = '\x01';
  local_d0 = local_78;
  FUN_00e3f850();
  if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xa18))();
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)(*unaff_RDI + 0xa18))();
    cVar2 = '\x01';
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_b8 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_48;
    FUN_00e3f850();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &DAT_024c5048;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((unaff_RDI[10] != 0) && (iVar6 = FUN_00d8c7a0(), iVar6 != 0)) {
    local_f8 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_110 = DAT_027f0e20;
    local_f8 = '\x01';
    local_100 = unaff_RDI + 2;
    if (DAT_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_e8 = 0;
    lVar9 = unaff_RDI[10];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    local_f0 = lVar9;
    FUN_00e3fb50(&local_f0,&local_110);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
  }
  plVar7 = unaff_RDI + 2;
  lVar9 = 0;
  bVar3 = false;
  plVar8 = (longlong *)0x0;
  while( true ) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    iVar6 = *(int *)((longlong)local_78 + 0xc);
    if ((cVar2 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar6 <= lVar9) break;
    (**(code **)(*unaff_RDI + 0x4a0))();
    plVar1 = *(longlong **)(local_78[2] + lVar9 * 8);
    if (plVar8 == plVar1) {
      if ((!bVar3) && (plVar8 != (longlong *)0x0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar3 = true;
        plVar8 = plVar1;
      }
      else {
        bVar3 = true;
        plVar8 = plVar1;
      }
    }
    if ((cVar2 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_01d10140();
    if (cVar5 != '\0') {
      local_d8 = 0;
      (**(code **)(*plVar7 + 0x10))();
      FUN_00d50b00();
      lVar4 = DAT_027f0ae8;
      local_d8 = '\x01';
      local_e0 = plVar7;
      if (DAT_027f0ae8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar8 + 0xa88))();
      cVar2 = '\x02';
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      local_a8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_a8 = '\x01';
      local_b0 = local_48;
      (**(code **)(*plVar8 + 0x960))();
      local_98 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_88;
      FUN_00e3fb50(&local_a0,&local_b0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if (lVar4 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        (**(code **)(*local_e0 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar9 = lVar9 + 1;
  }
  (**(code **)(*unaff_RDI + 0xa18))();
  if ((cVar2 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_00e3faa0();
  }
  FUN_00e3faa0();
  if ((bVar3) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


