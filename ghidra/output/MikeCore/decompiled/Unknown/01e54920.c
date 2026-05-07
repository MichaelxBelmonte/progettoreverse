// Function: FUN_01e54920
// Address: 01e54920
// Size: 2133 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e55071) */
/* WARNING: Removing unreachable block (ram,0x01e5507d) */
/* WARNING: Removing unreachable block (ram,0x01e54efc) */
/* WARNING: Removing unreachable block (ram,0x01e54f08) */
/* WARNING: Removing unreachable block (ram,0x01e54f3d) */
/* WARNING: Removing unreachable block (ram,0x01e54f49) */
/* WARNING: Removing unreachable block (ram,0x01e55118) */
/* WARNING: Removing unreachable block (ram,0x01e55124) */
/* WARNING: Removing unreachable block (ram,0x01e5515c) */
/* WARNING: Removing unreachable block (ram,0x01e55168) */
/* WARNING: Removing unreachable block (ram,0x01e54fbe) */
/* WARNING: Removing unreachable block (ram,0x01e54fcb) */
/* WARNING: Removing unreachable block (ram,0x01e54d39) */
/* WARNING: Removing unreachable block (ram,0x01e54d46) */
/* WARNING: Removing unreachable block (ram,0x01e54d06) */
/* WARNING: Removing unreachable block (ram,0x01e54d13) */
/* WARNING: Removing unreachable block (ram,0x01e54f8c) */
/* WARNING: Removing unreachable block (ram,0x01e54f99) */
/* WARNING: Removing unreachable block (ram,0x01e550dd) */
/* WARNING: Removing unreachable block (ram,0x01e550e6) */
/* WARNING: Removing unreachable block (ram,0x01e54e77) */
/* WARNING: Removing unreachable block (ram,0x01e54e94) */
/* WARNING: Removing unreachable block (ram,0x01e54c82) */
/* WARNING: Removing unreachable block (ram,0x01e54c8e) */
/* WARNING: Removing unreachable block (ram,0x01e54c07) */
/* WARNING: Removing unreachable block (ram,0x01e54c24) */
/* WARNING: Removing unreachable block (ram,0x01e54c09) */
/* WARNING: Removing unreachable block (ram,0x01e54c26) */
/* WARNING: Removing unreachable block (ram,0x01e54cbf) */
/* WARNING: Removing unreachable block (ram,0x01e54ccb) */
/* WARNING: Removing unreachable block (ram,0x01e54e79) */
/* WARNING: Removing unreachable block (ram,0x01e54e96) */
/* WARNING: Removing unreachable block (ram,0x01e55009) */
/* WARNING: Removing unreachable block (ram,0x01e55015) */

void FUN_01e54920(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  bool bVar6;
  bool bVar7;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_70;
  char local_68;
  longlong local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (((((char)unaff_RDI[8] == '\0') || (unaff_RDI[3] == 0)) ||
      (cVar2 = FUN_01e5c800(), cVar2 == '\0')) || (iVar3 = FUN_01d3a5a0(), iVar3 != 2))
  goto LAB_01e55133;
  FUN_01d3b5d0();
  if (local_70 == (longlong *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01d3b5d0();
    iVar3 = FUN_00d8c7a0();
    if (iVar3 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01d3b5d0();
      cVar2 = FUN_00d8ca70();
      bVar6 = cVar2 == '\x1b';
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3b5d0();
  iVar3 = FUN_00d8c7a0();
  if (iVar3 == 0) {
LAB_01e54a47:
    FUN_01d3b5d0();
    iVar4 = FUN_00d8c7a0();
    if (iVar4 == 0) {
      bVar7 = false;
    }
    else {
      FUN_01d3b5d0();
      cVar2 = FUN_00d8ca70();
      bVar7 = cVar2 == ' ';
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 != 0) goto LAB_01e54ac1;
  }
  else {
    FUN_01d3b5d0();
    cVar2 = FUN_00d8ca70();
    bVar7 = true;
    if (cVar2 != '\r') goto LAB_01e54a47;
LAB_01e54ac1:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027f3d68;
  if (bVar6) {
    if (DAT_027f3d68 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027f0d08;
    if (DAT_027f0d08 != 0) {
      FUN_00d50b00();
    }
    FUN_00083ea0(2);
    FUN_000b6830();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if (((char)local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = local_40;
      local_58 = -1;
      while( true ) {
        local_50 = 0;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(local_40 + 0xc) <= local_58) break;
        local_70 = *(longlong **)(*(longlong *)(local_40 + 0x10) + 8 + lVar5 * 8);
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar2 = (**(code **)(*unaff_RDI + 0x3b8))();
        if (cVar2 != '\0') {
          (**(code **)(*unaff_RDI + 0x3b8))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00018280();
          FUN_00d50b20();
          return;
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_027f3d70;
  if (bVar7) {
    if (DAT_027f3d70 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027f3d60;
    if (DAT_027f3d60 != 0) {
      FUN_00d50b00();
    }
    FUN_00083ea0(2);
    FUN_000b6830();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if (((char)local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_58 = -1;
      while( true ) {
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        iVar3 = *(int *)(local_40 + 0xc);
        if (iVar3 <= local_58) break;
        local_70 = *(longlong **)(*(longlong *)(local_40 + 0x10) + 8 + lVar5 * 8);
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar2 = (**(code **)(*unaff_RDI + 0x3b8))();
        if (cVar2 != '\0') {
          (**(code **)(*unaff_RDI + 0x3b8))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          break;
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
      if (local_58 < iVar3) {
        return;
      }
    }
  }
  FUN_01da4890();
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01e550eb;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_01e550eb:
    (**(code **)(*local_70 + 0x3c0))();
    FUN_00d50b20();
    return;
  }
LAB_01e55133:
  FUN_01d82ea0();
  return;
}


