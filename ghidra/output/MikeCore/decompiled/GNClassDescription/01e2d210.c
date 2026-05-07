// Function: FUN_01e2d210
// Address: 01e2d210
// Size: 3705 bytes
// Class: GNClassDescription


/* WARNING: Removing unreachable block (ram,0x01e2dfc3) */
/* WARNING: Removing unreachable block (ram,0x01e2dfd0) */
/* WARNING: Removing unreachable block (ram,0x01e2de8e) */
/* WARNING: Removing unreachable block (ram,0x01e2de9a) */
/* WARNING: Removing unreachable block (ram,0x01e2de81) */
/* WARNING: Removing unreachable block (ram,0x01e2df52) */
/* WARNING: Removing unreachable block (ram,0x01e2df5f) */
/* WARNING: Removing unreachable block (ram,0x01e2ddc6) */
/* WARNING: Removing unreachable block (ram,0x01e2ddcf) */
/* WARNING: Removing unreachable block (ram,0x01e2dd18) */
/* WARNING: Removing unreachable block (ram,0x01e2dd21) */
/* WARNING: Removing unreachable block (ram,0x01e2d4c9) */
/* WARNING: Removing unreachable block (ram,0x01e2d36b) */
/* WARNING: Removing unreachable block (ram,0x01e2d377) */
/* WARNING: Removing unreachable block (ram,0x01e2d813) */
/* WARNING: Removing unreachable block (ram,0x01e2d81c) */
/* WARNING: Removing unreachable block (ram,0x01e2d6e5) */
/* WARNING: Removing unreachable block (ram,0x01e2d6f1) */
/* WARNING: Removing unreachable block (ram,0x01e2d5be) */
/* WARNING: Removing unreachable block (ram,0x01e2d2c6) */
/* WARNING: Removing unreachable block (ram,0x01e2d2cf) */
/* WARNING: Removing unreachable block (ram,0x01e2d3e0) */
/* WARNING: Removing unreachable block (ram,0x01e2d3e9) */
/* WARNING: Removing unreachable block (ram,0x01e2d6ce) */
/* WARNING: Removing unreachable block (ram,0x01e2d6d7) */
/* WARNING: Removing unreachable block (ram,0x01e2d74f) */
/* WARNING: Removing unreachable block (ram,0x01e2d75c) */
/* WARNING: Removing unreachable block (ram,0x01e2d761) */
/* WARNING: Removing unreachable block (ram,0x01e2d6b7) */
/* WARNING: Removing unreachable block (ram,0x01e2da45) */
/* WARNING: Removing unreachable block (ram,0x01e2da4e) */
/* WARNING: Removing unreachable block (ram,0x01e2dda5) */
/* WARNING: Removing unreachable block (ram,0x01e2ddaa) */
/* WARNING: Removing unreachable block (ram,0x01e2de30) */
/* WARNING: Removing unreachable block (ram,0x01e2df84) */
/* WARNING: Removing unreachable block (ram,0x01e2df91) */
/* WARNING: Removing unreachable block (ram,0x01e2deb7) */
/* WARNING: Removing unreachable block (ram,0x01e2debc) */
/* WARNING: Removing unreachable block (ram,0x01e2defc) */
/* WARNING: Removing unreachable block (ram,0x01e2df9b) */
/* WARNING: Removing unreachable block (ram,0x01e2dfa0) */
/* WARNING: Removing unreachable block (ram,0x01e2dfa8) */
/* WARNING: Removing unreachable block (ram,0x01e2dfba) */
/* WARNING: Removing unreachable block (ram,0x01e2dfad) */
/* WARNING: Removing unreachable block (ram,0x01e2df06) */
/* WARNING: Removing unreachable block (ram,0x01e2df0b) */
/* WARNING: Removing unreachable block (ram,0x01e2df16) */
/* WARNING: Removing unreachable block (ram,0x01e2dfe4) */
/* WARNING: Removing unreachable block (ram,0x01e2dff0) */
/* WARNING: Removing unreachable block (ram,0x01e2dba5) */
/* WARNING: Removing unreachable block (ram,0x01e2dbae) */
/* WARNING: Removing unreachable block (ram,0x01e2d9bc) */
/* WARNING: Removing unreachable block (ram,0x01e2d9c8) */
/* WARNING: Removing unreachable block (ram,0x01e2d55a) */
/* WARNING: Removing unreachable block (ram,0x01e2d563) */
/* WARNING: Removing unreachable block (ram,0x01e2d464) */
/* WARNING: Removing unreachable block (ram,0x01e2d4f2) */
/* WARNING: Removing unreachable block (ram,0x01e2d4ff) */
/* WARNING: Removing unreachable block (ram,0x01e2d9d6) */
/* WARNING: Removing unreachable block (ram,0x01e2d9e2) */
/* WARNING: Removing unreachable block (ram,0x01e2dbe0) */
/* WARNING: Removing unreachable block (ram,0x01e2dbe9) */
/* WARNING: Removing unreachable block (ram,0x01e2d84e) */
/* WARNING: Removing unreachable block (ram,0x01e2d857) */

undefined8 * FUN_01e2d210(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  longlong *local_140;
  char local_138;
  longlong *local_78;
  char local_70;
  longlong *local_58;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_028b9590;
  if (DAT_028b9590 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_78 == (longlong *)0x0) {
    cVar6 = '\0';
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_70 = '\0';
    }
    local_38 = '\0';
    cVar6 = FUN_00c9ff50();
    local_40 = local_78;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar7 = DAT_028b9540;
  if (cVar6 != '\0') {
    FUN_000175c0();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    else {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    bVar1 = false;
    bVar8 = false;
    local_58 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    goto joined_r0x01e2dc4b;
  }
  if (DAT_028b9540 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar7;
  cVar6 = FUN_00c9ff50();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = DAT_028b9540;
  lVar2 = DAT_028b9520;
  if (cVar6 != '\0') {
    if (DAT_028b9540 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    local_50 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar1 = plVar7 != (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00c80cd0();
    local_58 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar8 = plVar7 != (longlong *)0x0;
    if ((local_58 == (longlong *)0x0) || (cVar6 = FUN_00c811c0(), cVar6 == '\0')) {
      *(undefined1 *)(unaff_RSI + 0x39) = 1;
      FUN_00d8ede0();
      lVar2 = DAT_027f3840;
      if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b00();
        lVar2 = DAT_027f3840;
      }
      DAT_027f3840 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      plVar7 = local_50;
    }
    else {
      FUN_00c811e0();
      bVar10 = plVar7 == (longlong *)0x0;
      if (bVar10) {
        plVar7 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0x18))();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (bVar10) {
        FUN_00d50b00();
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        plVar7 = local_50;
      }
      else {
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        plVar7 = local_50;
      }
    }
    goto joined_r0x01e2dc4b;
  }
  if (DAT_028b9520 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (plVar7 == (longlong *)0x0) {
    bVar9 = 1;
    bVar1 = false;
    plVar7 = (longlong *)0x0;
    bVar8 = false;
    local_58 = (longlong *)0x0;
    bVar10 = false;
  }
  else {
    FUN_00d50b00();
    lVar4 = DAT_028b9550;
    if (DAT_028b9550 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar7 + 0x50))();
    lVar5 = DAT_028b9570;
    if (cVar6 == '\0') {
      bVar8 = false;
      local_58 = (longlong *)0x0;
      bVar10 = false;
    }
    else {
      if (DAT_028b9570 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if (local_78 == plVar7) {
LAB_01e2d8a8:
        cVar6 = FUN_00c817a0();
        if (cVar6 == '\0') {
          bVar8 = false;
          local_58 = (longlong *)0x0;
          bVar10 = false;
        }
        else {
          FUN_00c80cd0();
          local_58 = local_140;
          if (local_140 == (longlong *)0x0) {
            bVar8 = false;
            local_58 = (longlong *)0x0;
          }
          else {
            if (local_138 != '\0') {
              bVar10 = true;
              bVar8 = true;
              goto LAB_01e2d9e7;
            }
            FUN_00d50b00();
            bVar8 = true;
          }
          bVar10 = local_58 != (longlong *)0x0;
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
          local_70 = '\0';
        }
        plVar7 = local_78;
        if (local_78 != (longlong *)0x0) goto LAB_01e2d8a8;
        plVar7 = (longlong *)0x0;
        bVar10 = false;
        local_58 = (longlong *)0x0;
        bVar8 = false;
      }
LAB_01e2d9e7:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    bVar9 = 0;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
      bVar1 = true;
      bVar9 = 0;
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_028b9520;
  if (bVar10) {
    FUN_00d8ede0();
    lVar2 = DAT_028b9530;
    if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b00();
      lVar2 = DAT_028b9530;
    }
    DAT_028b9530 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar8) {
      *unaff_RDI = local_58;
    }
    else {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_58;
    }
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar8 = false;
    goto joined_r0x01e2dc4b;
  }
  if (DAT_028b9520 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_78 == plVar7) {
    if ((bool)(bVar9 & local_78 != (longlong *)0x0)) {
      if (local_70 != '\0') goto LAB_01e2dc1a;
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = (bool)(bVar1 & plVar7 != (longlong *)0x0);
      bVar1 = true;
      plVar7 = local_78;
      if (bVar10) {
        FUN_00d50b20();
        goto LAB_01e2dc93;
      }
    }
    else {
      bVar10 = plVar7 != (longlong *)0x0;
      plVar7 = local_78;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_01e2dc1a:
      local_70 = '\0';
    }
    bVar1 = true;
  }
LAB_01e2dc93:
  lVar4 = DAT_028b9560;
  if (plVar7 == (longlong *)0x0) {
    cVar6 = '\0';
  }
  else {
    if (DAT_028b9560 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar7 + 0x50))();
    plVar3 = DAT_028b9580;
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      if (DAT_028b9580 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      cVar6 = FUN_00c9ff50();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    FUN_01cb4790();
    if (local_40 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x01e2dc4b;
    }
    FUN_00d50b00();
    plVar3 = DAT_028b9580;
    if (DAT_028b9580 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x3b8))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01d51d50();
    }
    FUN_01d51a40();
    if (local_40 != (longlong *)0x0) {
      *(undefined1 *)(local_40 + 0xc) = 1;
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != (longlong *)0x0) goto joined_r0x01e2dc4b;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x01e2dc4b:
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


