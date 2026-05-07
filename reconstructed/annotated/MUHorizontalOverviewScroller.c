// ===== MUHorizontalOverviewScroller — Annotated small functions =====
// 13 readable functions

// ==================================================
// @01bef350 (1326 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *arg1;
  longlong *this;
  ulonglong uVar10;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *arg1;
  if (lVar1 == 0) {
    if (this[0x2d] != 0) {
      this[0x2d] = 0;
      FUN_00d50b20();
    }
  }
  else if (param_2 == '\0') {
    if (param_1 == '\0') {
      local_50 = '\0';
      FUN_00d21140();
      lVar3 = *arg1;
      lVar2 = this[0x2d];
      local_58 = lVar1;
      if (lVar2 != lVar3) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        this[0x2d] = lVar3;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01beea30();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d214d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      local_58 = *arg1;
      local_50 = '\0';
      cVar5 = FUN_00d23d70();
      if (cVar5 == '\0') {
        local_58 = *arg1;
        local_50 = '\0';
        FUN_00d21140();
        lVar1 = *arg1;
        lVar3 = this[0x2d];
        if (lVar3 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          this[0x2d] = lVar1;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else if (param_3 == '\0') {
        local_58 = *arg1;
        local_50 = '\0';
        FUN_00d23f50();
      }
    }
  }
  else {
    if (this[0x2d] == 0) {
      uVar6 = 0;
    }
    else {
      FUN_01d2b630();
      lVar1 = this[0x2d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar6 = FUN_00d237a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((int)uVar6 < 0) goto LAB_01bef87a;
    }
    FUN_01d2b630();
    uVar7 = FUN_00d237a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((int)uVar7 < 0) goto LAB_01bef87a;
    uVar4 = uVar6;
    if ((int)uVar7 < (int)uVar6) {
      uVar4 = uVar7;
    }
    uVar10 = (ulonglong)uVar4;
    if ((int)uVar7 < (int)uVar6) {
      uVar7 = uVar6;
    }
    do {
      FUN_01d2b630();
      local_58 = *(longlong *)(*(longlong *)(local_78 + 0x10) + uVar10 * 8);
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = uVar10 + 1;
    } while (uVar7 + 1 != (int)uVar10);
  }
  FUN_01d2b630();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01bef788;
    }
  }
  else if (local_58 != 0) {
LAB_01bef788:
    if (0 < *(int *)(local_58 + 0xc)) {
      iVar9 = 0;
      do {
        cVar5 = FUN_00d23d70();
        if (cVar5 == '\0') {
          FUN_01bc08b0();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(local_58 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x9d0))();
  (**(code **)(*this + 0x400))();
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
LAB_01bef87a:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bf18f0 (1263 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *this;
  longlong local_a0;
  char local_98;
  int local_88;
  longlong local_60;
  char local_58;
  int local_48;
  
  lVar1 = local_a0;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
      goto LAB_01bf1974;
    }
  }
  else if (local_a0 != 0) {
LAB_01bf1974:
    local_98 = '\0';
    local_a0 = 0;
    local_88 = -1;
LAB_01bf19c4:
    while( true ) {
      lVar5 = local_60;
      lVar4 = (longlong)local_88;
      local_88 = local_88 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_88) break;
      local_a0 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      FUN_01bc08b0();
      FUN_01bc09c0();
      if (local_58 == '\0') goto LAB_01bf1a50;
      if (local_60 != 0) goto LAB_01bf1a80;
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x9d0))();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 == 0) goto LAB_01bf1e0a;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_01bf1e0a;
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar6 = 0;
    do {
      lVar1 = local_60;
      FUN_01bc09c0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_01bf1ce4;
        }
      }
      else if (local_60 != 0) {
LAB_01bf1ce4:
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar5 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_48) break;
          local_60 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
          cVar2 = FUN_00d23d70();
          if (cVar2 != '\0') {
            FUN_01bc1970(0,0,0);
          }
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_a0 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_01bf1e0a:
  (**(code **)(*this + 0xa20))();
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_01bf1a50:
  if (local_60 != 0) {
    FUN_00d50b00();
LAB_01bf1a80:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar4 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) break;
      local_60 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      cVar2 = FUN_00d23d70();
      if (cVar2 != '\0') {
        FUN_00d235a0();
      }
    }
    FUN_000840d0();
    FUN_00d50b20();
  }
  goto LAB_01bf19c4;
}




// ==================================================
// @01bec670 (1168 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *arg1;
  longlong this;
  longlong lVar7;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar5 = *arg1;
  if (*(longlong *)(this + 0x1a0) == lVar5) {
    return;
  }
  if (*(longlong *)(this + 0x1a0) == 0) {
    lVar7 = 0;
    lVar2 = lVar7;
    if (lVar5 != 0) goto LAB_01bec78f;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b8 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_60 = 0;
    lVar5 = *(longlong *)(this + 0x1a0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar5;
    FUN_00d41040(&local_68,&local_b8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = *arg1;
    lVar7 = *(longlong *)(this + 0x1a0);
    lVar2 = lVar7;
    if (lVar7 != lVar5) {
LAB_01bec78f:
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x1a0) = lVar5;
      lVar2 = lVar5;
      if (lVar7 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(this + 0x1a0);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_40 = 0;
    lVar5 = *(longlong *)(this + 0x1a0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar5;
    FUN_00d41430(&local_48,&local_a8);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bece10();
  }
  if (*(longlong *)(this + 0x1b0) == 0) goto LAB_01bec9c1;
  FUN_00d50b00();
  FUN_00d50b20();
  FUN_01beab60();
  pplVar6 = &local_38;
  FUN_01d97e80();
  plVar1 = local_38;
  if ((DAT_02735a90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027359e0 = FUN_00835bf0();
    _DAT_027359c8 = "MUHorizontalOverviewScroller";
    _DAT_027359d0 = 0x248;
    _DAT_027359d8 = FUN_00835b60;
    _DAT_027359e8 = 0;
    uRam00000000027359f0 = 0;
    _DAT_027359f8 = 0;
    _DAT_02735a70 = 0;
    uRam0000000002735a78 = 0;
    _DAT_02735a80 = 0;
    DAT_02735a82 = 1;
    _DAT_02735a00 = 0;
    uRam0000000002735a08 = 0;
    _DAT_02735a10 = 0;
    uRam0000000002735a18 = 0;
    _DAT_02735a20 = 0;
    uRam0000000002735a28 = 0;
    _DAT_02735a30 = 0;
    uRam0000000002735a38 = 0;
    _DAT_02735a40 = 0;
    uRam0000000002735a48 = 0;
    _DAT_02735a50 = 0;
    uRam0000000002735a58 = 0;
    _DAT_02735a60 = 0;
    uRam0000000002735a68 = 0;
    DAT_02735a8b = 0;
    _DAT_02735a83 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bec918:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bec918;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_98 = *arg1;
    local_90 = '\0';
    FUN_01a12210();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01bec9c1:
  if (*(longlong *)(this + 0x1b8) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = *(longlong **)(this + 0x1b8);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_88 = *arg1;
    local_80 = '\0';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01beb250 (1101 bytes) — math_loop

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *arg1;
  longlong this;
  bool bVar7;
  longlong *local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined8 *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if ((*arg1 != 0) && (0 < *(int *)(*arg1 + 0xc))) {
    FUN_00d21370();
    if ((undefined8 *)*arg1 != (undefined8 *)0x0) {
      local_50 = 0;
      local_58 = (longlong *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = (undefined8 *)*arg1;
LAB_01beb325:
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (local_40 < *(int *)((longlong)local_48 + 0xc)) {
        local_58 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
        if (*(longlong *)(this + 0x160) != 0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = *(longlong *)(this + 0x160);
          while( true ) {
            lVar5 = (longlong)(int)local_78;
            iVar6 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar6);
            if (*(int *)(local_80 + 0xc) <= iVar6) break;
            local_90 = *(longlong **)(*(longlong *)(local_80 + 0x10) + 8 + lVar5 * 8);
            (**(code **)(*local_90 + 0x378))();
            plVar3 = local_58;
            plVar2 = local_68;
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 == plVar3) {
              local_68 = local_90;
              local_60 = '\0';
              FUN_00d21140();
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_01bc1260();
              (**(code **)(*local_68 + 0x5c0))();
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_002e0650();
              bVar7 = false;
              if (iStack_3c == 0) goto LAB_01beb325;
              goto LAB_01beb2f7;
            }
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar6 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar6 = 0;
              }
              local_78 = CONCAT44(iVar6,(int)local_78);
            }
          }
          FUN_002e0650();
        }
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = local_58;
        FUN_01be75f0(&local_b0,&local_c0);
        plVar2 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_90 = plVar2;
        local_88 = '\0';
        FUN_00d21140();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        bVar7 = iStack_3c == 0;
        if (!bVar7) {
LAB_01beb2f7:
          if (bVar7 || iStack_3c < 0) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        goto LAB_01beb325;
      }
      FUN_00083b20();
    }
  }
  local_98 = '\0';
  local_a0 = puVar4;
  FUN_01d2a8f0();
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = puVar4;
    if (0 < *(int *)((longlong)puVar4 + 0xc)) {
      lVar5 = 0;
      do {
        local_90 = *(longlong **)(puVar4[2] + lVar5 * 8);
        local_88 = '\0';
        local_58 = local_90;
        FUN_00d23f50();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_40 = (int)lVar5;
      } while (local_40 < *(int *)((longlong)puVar4 + 0xc));
    }
    FUN_002e0650();
  }
  puVar1 = *(undefined8 **)(this + 0x160);
  if (puVar1 != (undefined8 *)0x0) {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    iStack_3c = 0;
    local_38 = 0;
    local_48 = puVar1;
    for (lVar5 = 0; local_40 = (int)lVar5, local_40 < *(int *)((longlong)puVar1 + 0xc);
        lVar5 = lVar5 + 1) {
      local_58 = *(longlong **)(puVar1[2] + lVar5 * 8);
      FUN_00d50130();
    }
    FUN_002e0650();
  }
  local_50 = '\0';
  local_58 = puVar4;
  FUN_00d243f0();
  if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bf2670 (1038 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong arg1;
  undefined8 *this;
  undefined8 *local_b0;
  char local_a8;
  int local_98;
  longlong local_88;
  char local_80;
  int local_70;
  undefined8 *local_40;
  
  lVar1 = *(longlong *)(arg1 + 0x160);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002dff80();
  if ((local_a8 == '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  pcVar4 = DAT_02572370;
  bVar3 = true;
  local_40 = local_b0;
  do {
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
      puVar6 = (undefined8 *)0x0;
LAB_01bf2a06:
      if (bVar2) {
        if ((bVar3) || (local_40 == (undefined8 *)0x0)) {
LAB_01bf2a37:
          if (puVar6 == (undefined8 *)0x0) goto LAB_01bf273b;
        }
        else {
          bVar3 = true;
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
    }
    else {
      local_98 = -1;
      bVar2 = false;
      puVar6 = (undefined8 *)0x0;
LAB_01bf2808:
      while (lVar1 = local_88, local_98 = local_98 + 1,
            local_98 < *(int *)((longlong)local_40 + 0xc)) {
        FUN_01bbf570();
        if (local_80 == '\0') goto LAB_01bf28a0;
        if (local_88 != 0) goto LAB_01bf28c8;
      }
      FUN_002e0650();
      if (local_40 == puVar6) goto LAB_01bf2a06;
      if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = true;
      local_40 = puVar6;
      if (bVar2) goto LAB_01bf2a37;
      bVar3 = false;
    }
LAB_01bf273b:
    if (local_40 == (undefined8 *)0x0) {
      *this = local_b0;
      *(undefined1 *)(this + 1) = 1;
      return;
    }
  } while( true );
LAB_01bf28a0:
  if (local_88 != 0) {
    FUN_00d50b00();
LAB_01bf28c8:
    local_80 = '\0';
    local_88 = 0;
    local_70 = -1;
    while( true ) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      local_88 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*pcVar4)();
        bVar2 = true;
      }
      FUN_00d21140();
      FUN_00d21140();
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  goto LAB_01bf2808;
}




// ==================================================
// @01beeeb0 (942 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *arg1;
  longlong *this;
  undefined8 in_R9;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_40;
  char local_38;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3b590();
    cVar4 = FUN_01e420b0();
    if ((cVar4 == '\0') && ((int)this[0x3d] != 0)) {
      FUN_01e42250();
    }
    iVar5 = FUN_01d3b620();
    if (iVar5 == 2) {
      FUN_01bef350(0,0,1,in_R9,0,0);
    }
    else {
      uVar7 = FUN_01d3abf0();
      uVar9 = 0;
      uVar7 = FUN_00d05530(uVar7,0,DAT_023908d8);
LAB_01beefc0:
      do {
        do {
          do {
            (**(code **)(*this + 0x658))();
            lVar1 = *arg1;
            if (lVar1 == local_40) {
              if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_01bef082;
              lVar6 = lVar1;
              if (local_38 == '\0') {
                FUN_00d50b00();
                goto LAB_01bef07d;
              }
LAB_01bef025:
              *(undefined1 *)(arg1 + 1) = 1;
              if (lVar6 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            else {
              lVar3 = arg1[1];
              if (local_38 != '\0') {
                *arg1 = local_40;
                lVar6 = local_40;
                if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                  lVar6 = *arg1;
                }
                goto LAB_01bef025;
              }
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              *arg1 = local_40;
              if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
LAB_01bef07d:
              *(undefined1 *)(arg1 + 1) = 1;
LAB_01bef082:
              lVar1 = *arg1;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            if (iVar5 != 5) {
              FUN_01bef350(0,0,0);
              return;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          uVar8 = FUN_01d3abf0();
          cVar4 = FUN_00d05410(uVar8,uVar7,uVar9);
        } while (cVar4 != '\0');
        uVar8 = FUN_01e466c0(uVar8);
        (**(code **)(*this + 0x658))();
        lVar1 = *arg1;
        if (lVar1 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bef1bc;
            }
            goto LAB_01bef154;
          }
LAB_01bef15d:
          lVar1 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = local_40;
            if (((char)lVar3 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
LAB_01bef154:
            *(undefined1 *)(arg1 + 1) = 1;
            local_38 = '\0';
            goto LAB_01bef15d;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_40;
          if (((char)lVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01bef1bc:
          *(undefined1 *)(arg1 + 1) = 1;
          lVar1 = *arg1;
        }
        if (lVar1 == 0) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01beefc0;
        }
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      } while (iVar5 != 5);
      plVar2 = (longlong *)this[0x36];
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        FUN_01e48f80(uVar8);
        (**(code **)(*plVar2 + 0x928))();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01e459c0();
  }
  return;
}




// ==================================================
// @00836810 (861 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00835de0();
  *this = &DAT_0262a5e0;
  this[2] = &DAT_0262b168;
  this[0x3c] = &DAT_0262b1a8;
  this[0x3f] = &DAT_0262b1d8;
  this[0x40] = &DAT_0262b228;
  *(undefined4 *)(this + 0x46) = 0;
  if (DAT_02735a90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027359e0 = FUN_00835bf0();
      _DAT_027359c8 = "MUHorizontalOverviewScroller";
      _DAT_027359d0 = 0x248;
      _DAT_027359d8 = FUN_00835b60;
      _DAT_027359e8 = 0;
      uRam00000000027359f0 = 0;
      _DAT_027359f8 = 0;
      _DAT_02735a70 = 0;
      uRam0000000002735a78 = 0;
      _DAT_02735a80 = 0;
      DAT_02735a82 = 1;
      _DAT_02735a00 = 0;
      uRam0000000002735a08 = 0;
      _DAT_02735a10 = 0;
      uRam0000000002735a18 = 0;
      _DAT_02735a20 = 0;
      uRam0000000002735a28 = 0;
      _DAT_02735a30 = 0;
      uRam0000000002735a38 = 0;
      _DAT_02735a40 = 0;
      uRam0000000002735a48 = 0;
      _DAT_02735a50 = 0;
      uRam0000000002735a58 = 0;
      _DAT_02735a60 = 0;
      uRam0000000002735a68 = 0;
      DAT_02735a8b = 0;
      _DAT_02735a83 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02735a83 == '\0') {
    FUN_00836ba0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x234) = 0;
  if (DAT_02735a90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027359e0 = FUN_00835bf0();
      _DAT_027359c8 = "MUHorizontalOverviewScroller";
      _DAT_027359d0 = 0x248;
      _DAT_027359d8 = FUN_00835b60;
      _DAT_027359e8 = 0;
      uRam00000000027359f0 = 0;
      _DAT_027359f8 = 0;
      _DAT_02735a70 = 0;
      uRam0000000002735a78 = 0;
      _DAT_02735a80 = 0;
      DAT_02735a82 = 1;
      _DAT_02735a00 = 0;
      uRam0000000002735a08 = 0;
      _DAT_02735a10 = 0;
      uRam0000000002735a18 = 0;
      _DAT_02735a20 = 0;
      uRam0000000002735a28 = 0;
      _DAT_02735a30 = 0;
      uRam0000000002735a38 = 0;
      _DAT_02735a40 = 0;
      uRam0000000002735a48 = 0;
      _DAT_02735a50 = 0;
      uRam0000000002735a58 = 0;
      _DAT_02735a60 = 0;
      uRam0000000002735a68 = 0;
      DAT_02735a8b = 0;
      _DAT_02735a83 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02735a83 == '\0') {
    FUN_00836d30();
    FUN_00e87980();
  }
  *(undefined1 *)(this + 0x47) = 0;
  if (DAT_02735a90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027359e0 = FUN_00835bf0();
      _DAT_027359c8 = "MUHorizontalOverviewScroller";
      _DAT_027359d0 = 0x248;
      _DAT_027359d8 = FUN_00835b60;
      _DAT_027359e8 = 0;
      uRam00000000027359f0 = 0;
      _DAT_027359f8 = 0;
      _DAT_02735a70 = 0;
      uRam0000000002735a78 = 0;
      _DAT_02735a80 = 0;
      DAT_02735a82 = 1;
      _DAT_02735a00 = 0;
      uRam0000000002735a08 = 0;
      _DAT_02735a10 = 0;
      uRam0000000002735a18 = 0;
      _DAT_02735a20 = 0;
      uRam0000000002735a28 = 0;
      _DAT_02735a30 = 0;
      uRam0000000002735a38 = 0;
      _DAT_02735a40 = 0;
      uRam0000000002735a48 = 0;
      _DAT_02735a50 = 0;
      uRam0000000002735a58 = 0;
      _DAT_02735a60 = 0;
      uRam0000000002735a68 = 0;
      DAT_02735a8b = 0;
      _DAT_02735a83 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02735a83 == '\0') {
    FUN_00836ec0();
    FUN_00e87980();
  }
  FUN_00837050();
  return;
}




// ==================================================
// @01bee5d0 (663 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  longlong this;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  longlong local_58;
  char local_50;
  int local_40;
  double local_30;
  
  if (*(longlong *)(this + 0x1b0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(this + 0x1b0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bcf010();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      local_30 = 0.0;
      plVar2 = *(longlong **)(this + 0x1a0);
    }
    else {
      local_40 = -1;
      local_30 = 0.0;
      dVar5 = local_30;
      while (local_30 = dVar5, local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
        dVar3 = (double)FUN_01bc6390();
        dVar4 = (double)FUN_01bc6380();
        dVar5 = dVar3 + dVar4;
        if (dVar3 + dVar4 <= local_30) {
          dVar5 = local_30;
        }
      }
      FUN_000840d0();
      plVar2 = *(longlong **)(this + 0x1a0);
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar5 = (double)(**(code **)(*plVar2 + 0x368))();
    plVar2 = *(longlong **)(this + 0x1a0);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar3 = (double)(**(code **)(*plVar2 + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
    if (dVar5 + dVar3 < local_30) {
      plVar2 = *(longlong **)(this + 0x1a0);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      dVar4 = (double)(**(code **)(*plVar2 + 0x368))();
      FUN_00d50b20();
      plVar2 = *(longlong **)(this + 0x1a0);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      dVar5 = (dVar5 + dVar3) / DAT_02394de0;
      auVar6._8_8_ = _UNK_023945b8 & extraout_XMM0_Qb | _UNK_023945c8;
      auVar6._0_8_ = (double)(_DAT_023945b0 & (ulonglong)dVar5 | _DAT_023945c0) + dVar5;
      auVar6 = roundsd(auVar6,auVar6,0xb);
      (**(code **)(*plVar2 + 0x380))((auVar6._0_8_ * DAT_02394de0 + DAT_02394de0) - dVar4);
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0080f2b0 (581 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_288;
  
  if ((DAT_02735a90 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027359e0 = FUN_00835bf0();
    _DAT_027359c8 = "MUHorizontalOverviewScroller";
    _DAT_027359d0 = 0x248;
    _DAT_027359d8 = FUN_00835b60;
    _DAT_027359e8 = 0;
    uRam00000000027359f0 = 0;
    _DAT_027359f8 = 0;
    _DAT_02735a70 = 0;
    uRam0000000002735a78 = 0;
    _DAT_02735a80 = 0;
    DAT_02735a82 = 1;
    _DAT_02735a00 = 0;
    uRam0000000002735a08 = 0;
    _DAT_02735a10 = 0;
    uRam0000000002735a18 = 0;
    _DAT_02735a20 = 0;
    uRam0000000002735a28 = 0;
    _DAT_02735a30 = 0;
    uRam0000000002735a38 = 0;
    _DAT_02735a40 = 0;
    uRam0000000002735a48 = 0;
    _DAT_02735a50 = 0;
    uRam0000000002735a58 = 0;
    _DAT_02735a60 = 0;
    uRam0000000002735a68 = 0;
    DAT_02735a8b = 0;
    _DAT_02735a83 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02735a83 == '\0') {
    FUN_00835a90();
    FUN_00e87760();
    FUN_0050ed30();
    FUN_00d50c00();
    FUN_00836810();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_288 != 0) {
      FUN_00d50b20();
    }
    FUN_00836700();
    FUN_00836700();
  }
  return;
}




// ==================================================
// @01bf0b70 (550 bytes) — calculation

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  bool bVar5;
  longlong *this;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar6 [16];
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*this + 0x558))();
  FUN_01e40eb0();
  FUN_01e3f820();
  (**(code **)(*this + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x970))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01bf0c12;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01bf0c12:
    (**(code **)(*this + 0x640))();
    uVar4 = (**(code **)(*local_40 + 0x580))();
    (**(code **)(*this + 0x640))();
    uVar2 = (**(code **)(*local_70 + 0x578))();
    auVar3._8_4_ = extraout_XMM0_Dc;
    auVar3._0_8_ = uVar4;
    auVar3._12_4_ = extraout_XMM0_Dd;
    auVar6._8_4_ = extraout_XMM0_Dc_00;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = extraout_XMM0_Dd_00;
    auVar6 = insertps(auVar3,auVar6,0x10);
    (**(code **)(*local_40 + 0x4d0))(0,auVar6._0_8_);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01beab60();
    FUN_01d9ab80();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = false;
    goto LAB_01bf0ce6;
  }
  bVar5 = true;
LAB_01bf0ce6:
  FUN_01beab60();
  FUN_01d95060();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  lVar1 = this[0x3c];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d97920();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bf1150 (540 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong this;
  double dVar6;
  double dVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 extraout_XMM0_Qb_01;
  
  if (*(longlong *)(this + 0x1b0) != 0) {
    local_68._0_8_ = param_2;
    FUN_00d50b00();
    FUN_00d50b20();
    if ((*(longlong *)(this + 0x1a0) != 0) && (0.0 < param_2)) {
      lVar1 = *(longlong *)(this + 0x1b0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_78._0_8_ = FUN_01e436c0();
      local_78._8_8_ = extraout_XMM0_Qb;
      auVar11 = local_78;
      local_68._8_8_ = in_XMM1_Qb;
      auVar4 = local_68;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      dVar6 = (double)(**(code **)(**(longlong **)(this + 0x1a0) + 0x368))();
      dVar7 = (double)(**(code **)(**(longlong **)(this + 0x1a0) + 0x378))();
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_1;
      auVar9 = roundsd(ZEXT816(0),auVar9,9);
      dVar14 = (double)(-(ulonglong)(param_1 < dVar6) & auVar9._0_8_ |
                       ~-(ulonglong)(param_1 < dVar6) & (ulonglong)dVar6);
      dVar6 = dVar14 + dVar7;
      dVar13 = param_1 + param_2;
      if (dVar6 < dVar13) {
        dVar7 = (double)(**(code **)(**(longlong **)(this + 0x1a0) + 0x378))();
        auVar12._0_8_ = (dVar13 - dVar6) + dVar7;
        auVar12._8_8_ = 0;
        auVar9 = roundsd(auVar12,auVar12,10);
        dVar7 = auVar9._0_8_;
      }
      cVar5 = (**(code **)(**(longlong **)(this + 0x1a0) + 0x418))
                        (dVar14,dVar7,
                         SUB84((double)(((float)local_78._0_4_ + (float)local_68._0_4_ +
                                        DAT_02390d00) - (float)local_78._0_4_) / param_2,0));
      if (cVar5 != '\0') {
        *(undefined4 *)(this + 0x200) = 1;
        (**(code **)(**(longlong **)(this + 0x1a0) + 0x410))();
        FUN_01bece10();
      }
      uVar8 = (**(code **)(**(longlong **)(this + 0x1a0) + 0x390))(param_1);
      auVar10._0_8_ = (**(code **)(**(longlong **)(this + 0x1a0) + 0x390))(dVar13);
      auVar10._8_8_ = extraout_XMM0_Qb_01;
      auVar3._8_8_ = extraout_XMM0_Qb_00;
      auVar3._0_8_ = uVar8;
      auVar9 = blendps(auVar11,auVar3,1);
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)auVar10._0_8_ - (float)uVar8;
      blendps(auVar4,auVar11,1);
      plVar2 = *(longlong **)(this + 0x1b0);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_78._0_8_ = auVar9._0_8_;
      (**(code **)(*plVar2 + 0x518))(local_78._0_8_);
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01bf35c0 (527 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong *arg1;
  longlong *local_a8;
  char local_a0 [8];
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01cae990();
  pcVar5 = local_38;
  if (local_a0[0] != '\0') {
    pcVar5 = local_a0;
  }
  local_38[0] = local_a0[0];
  *pcVar5 = '\0';
  if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f2a20;
  if (DAT_027f2a20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  cVar2 = (**(code **)(*local_a8 + 0x50))();
  lVar1 = DAT_027e7ca0;
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    if (DAT_027e7ca0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    cVar2 = (**(code **)(*local_a8 + 0x50))();
    lVar1 = DAT_026de8c8;
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      if (DAT_026de8c8 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      cVar2 = (**(code **)(*local_a8 + 0x50))();
      lVar1 = DAT_02725a10;
      cVar3 = '\x01';
      if (cVar2 == '\0') {
        if (DAT_02725a10 != 0) {
          FUN_00d50b00();
        }
        local_68 = lVar1;
        local_60 = '\x01';
        cVar3 = (**(code **)(*local_a8 + 0x50))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_48 = *arg1;
    local_40 = '\0';
    uVar4 = FUN_01df5490();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = *arg1;
    local_50 = '\0';
    uVar4 = FUN_01d827c0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return uVar4;
}




// ==================================================
// @01beaed0 (501 bytes) — calculation

{
  longlong *this;
  undefined8 uVar1;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  longlong *local_38;
  char local_30;
  longlong *local_28;
  char local_20;
  
  if (this[0x36] != 0) {
    FUN_01beab60();
    if ((local_20 == '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_28 + 0x4d8))();
    if ((int)this[0x3d] == 0) {
      uVar1 = FUN_01e3f820();
      auVar2 = blendps(in_XMM1,_DAT_0241e210,0xd);
      (**(code **)(*local_28 + 0x4d0))(uVar1,auVar2._0_8_);
      FUN_01d97870();
      FUN_01cf9ad0();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      FUN_01cf3f20();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this + 0x9a0))();
      FUN_01f27fe0();
      (**(code **)(*local_38 + 0x450))();
      FUN_01dce540();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01e3f820();
      (**(code **)(*local_28 + 0x4d0))();
      FUN_01d97870();
      FUN_01cf9ad0();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      FUN_01cf3f20();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this + 0x9a0))();
      FUN_01dce540();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_28 + 0x928))();
    FUN_00d50b20();
  }
  return;
}



