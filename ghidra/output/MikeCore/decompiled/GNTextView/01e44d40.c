// Function: FUN_01e44d40
// Address: 01e44d40
// Size: 1330 bytes
// Class: GNTextView


/* WARNING: Removing unreachable block (ram,0x01e44f32) */
/* WARNING: Removing unreachable block (ram,0x01e44ed6) */
/* WARNING: Removing unreachable block (ram,0x01e44ee3) */
/* WARNING: Removing unreachable block (ram,0x01e44f40) */
/* WARNING: Removing unreachable block (ram,0x01e44f60) */
/* WARNING: Removing unreachable block (ram,0x01e44f42) */
/* WARNING: Removing unreachable block (ram,0x01e44f62) */
/* WARNING: Removing unreachable block (ram,0x01e44ead) */
/* WARNING: Removing unreachable block (ram,0x01e44e62) */
/* WARNING: Removing unreachable block (ram,0x01e44e6b) */
/* WARNING: Removing unreachable block (ram,0x01e4515b) */
/* WARNING: Removing unreachable block (ram,0x01e45164) */

void FUN_01e44d40(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong *unaff_RDI;
  bool bVar7;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_78;
  char local_70;
  int local_60;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  cVar6 = (**(code **)(*unaff_RDI + 0x750))();
  if ((cVar6 != '\0') && (cVar6 = FUN_01e45650(), cVar6 == '\0')) {
    FUN_00d46dc0(DAT_02390124);
    lVar3 = DAT_027f3cb0;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
      lVar3 = DAT_027f3cb0;
    }
    DAT_027f3cb0 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = lVar3;
    (**(code **)(*unaff_RDI + 0x408))(&local_e8);
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_01f97770();
      FUN_01f97ed0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b00();
        local_60 = -1;
        do {
          local_60 = local_60 + 1;
          if (*(int *)(local_40 + 0xc) <= local_60) goto LAB_01e45140;
          FUN_01f97ea0();
          FUN_01f97ea0();
          lVar3 = local_d8;
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          cVar6 = (**(code **)(*local_50 + 0x50))();
          if (cVar6 == '\0') {
            bVar7 = false;
          }
          else {
            FUN_01f97e70();
            FUN_01f97e70();
            bVar7 = local_100 != local_110;
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        } while (!bVar7);
        FUN_01f983b0();
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01f995d0();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e45140:
        FUN_01f99ba0();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)unaff_RDI[6];
  plVar1 = unaff_RDI;
  while (plVar4 = plVar5, plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar4[6];
    plVar1 = plVar4;
    if ((longlong *)plVar4[6] == plVar4) {
      plVar5 = plVar4;
    }
  }
  cVar6 = (**(code **)(*plVar1 + 0x4b8))();
  if (cVar6 == '\0') {
    bVar2 = true;
    bVar7 = true;
    plVar1 = (longlong *)unaff_RDI[6];
  }
  else {
    FUN_00d50b00();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d8fb90();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar7 = false;
    plVar1 = (longlong *)unaff_RDI[6];
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x758))();
    bVar7 = bVar2;
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (!bVar7) {
    FUN_00d50b20();
  }
  return;
}


