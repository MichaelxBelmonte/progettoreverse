// ===== MUBarSignature — Annotated small functions =====
// 10 readable functions

// ==================================================
// @01786b30 (1947 bytes) — calculation

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong this;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
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
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00e8b7a0();
  FUN_00c8e2b0(_DAT_02412520,0x30);
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *(longlong *)(this + 0x40);
  if (lVar5 == local_68) {
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(this + 0x40) = local_68;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(this + 0x54) = 3;
  *(undefined2 *)(this + 0x4c) = 0x101;
  uVar2 = FUN_00e7bcc0();
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined1 *)(this + 0x4e) = 1;
  plVar3 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(longlong **)(this + 0x60);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(this + 0x60) = plVar3;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(longlong **)(this + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,DAT_0238fee8);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_0238fee8,0);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 0x4f) = 1;
  plVar3 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(longlong **)(this + 0x68);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(this + 0x68) = plVar3;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(longlong **)(this + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_024111c0,DAT_0238fee8);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_023b7c08,DAT_0238fee8);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_023b4df8,DAT_023942d0);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_024124f0,DAT_023942d0);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_024124f8,0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 0x50) = 0;
  plVar3 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(longlong **)(this + 0x70);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(this + 0x70) = plVar3;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(longlong **)(this + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x70);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x70);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_0238fee8,DAT_0238fee8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 0x51) = 1;
  plVar3 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = *(longlong **)(this + 0x78);
  if (plVar6 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(this + 0x78) = plVar3;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = *(longlong **)(this + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))(0,0);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_02412500,DAT_02412508);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_023b2c70,DAT_0238fee8);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(this + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(longlong **)(this + 0x78);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x418))((int)DAT_023b3bc0,DAT_0238fee8);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ==================================================
// @01787e50 (1370 bytes) — math_loop

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong arg1;
  undefined8 *this;
  undefined4 uVar8;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  int local_74;
  undefined8 *local_70;
  char local_68;
  int local_48;
  
  local_a8 = param_1;
  local_80 = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar1 = *(longlong *)(arg1 + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d94d80(*(undefined4 *)(arg1 + 0xc),&stack0xffffffffffffffa0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((int)local_80 < 5) {
    iVar6 = 1;
    if (1 < 5 - (int)local_80) {
      iVar6 = 5 - (int)local_80;
    }
    do {
      FUN_00d8db40();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00d94d80();
  FUN_00d50b00();
  cVar3 = FUN_00d23d70();
  uVar8 = FUN_00d50b20();
  if (cVar3 != '\0') {
    FUN_01787bb0();
    uVar8 = FUN_00d94d80();
  }
  lVar1 = *(longlong *)(arg1 + 0x30);
  if (lVar1 != 0) {
    local_48 = -1;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8) + 0x20);
      local_98 = 1;
      local_a0 = &DAT_024c5048;
      local_88 = 0;
      if (lVar5 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar5;
      uVar8 = FUN_00d94d80(uVar8,&local_a0);
      local_a0 = &DAT_024c5048;
      if ((local_88 != '\0') && (local_90 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    FUN_01798230();
  }
  lVar1 = *(longlong *)(arg1 + 0x28);
  if (lVar1 != 0) {
    local_74 = (int)local_80 + 1;
    if ((int)local_80 < 0) {
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar6 = 0;
        do {
          FUN_00d8db40();
          local_b8 = *local_a8;
          local_b0 = 0;
          FUN_01787e50(&local_b8,local_74);
          puVar2 = local_a0;
          local_68 = 0;
          if (((char)local_98 == '\0') && (local_a0 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          local_70 = puVar2;
          local_68 = '\x01';
          FUN_00d8dbf0();
          lVar1 = local_80;
          if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar6 = 0;
        do {
          FUN_00d8db40();
          iVar7 = local_74;
          do {
            FUN_00d8db40();
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          local_b8 = *local_a8;
          local_b0 = 0;
          FUN_01787e50(&local_b8,local_74);
          puVar2 = local_a0;
          local_68 = 0;
          if (((char)local_98 == '\0') && (local_a0 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          local_70 = puVar2;
          local_68 = '\x01';
          FUN_00d8dbf0();
          lVar1 = local_80;
          if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_01798230();
  }
  FUN_00d8c7d0();
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01788a10 (938 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *this;
  int iVar5;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  local_c0 = 0;
  if (*param_4 != 0) {
    FUN_00d216c0();
    local_c0 = *param_4;
  }
  local_d0 = *param_2;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_017891f0(param_1,&local_d0,param_3,&local_c0);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_01788b06;
    }
  }
  else if (local_88 != 0) {
LAB_01788b06:
    cVar3 = FUN_01716c00();
    if (cVar3 == '\0') {
      FUN_01715620();
      FUN_017181f0();
      if (local_88 != 0) {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01788bb0;
      }
      bVar2 = false;
      lVar1 = *param_4;
    }
    else {
      FUN_01715620();
      FUN_017185b0();
      if (local_88 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
      }
LAB_01788bb0:
      lVar1 = *param_4;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        iVar5 = 0;
        do {
          cVar3 = FUN_01716c00();
          if (cVar3 == '\0') {
            FUN_01715620();
            FUN_017181f0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01715620();
            FUN_017185b0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((longlong)puVar4 + 0xc));
      }
      FUN_01a74380();
    }
    *(undefined1 *)(this + 1) = 0;
    if ((!bVar2) && (local_88 != 0)) {
      FUN_00d50b00();
    }
    *this = local_88;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
    goto LAB_01788d90;
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
LAB_01788d90:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01786580 (819 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong arg1;
  longlong *this;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027cee10;
  if (*param_2 != 0) {
    if (DAT_027cee10 != 0) {
      FUN_00d50b00();
    }
    FUN_00d91bc0();
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0xc) == 0) {
        *(undefined1 *)(this + 1) = 0;
        *this = 0;
      }
      else {
        FUN_00d8d560();
        FUN_0123ff10();
        if (*(int *)(lVar8 + 0xc) < 2) {
          iVar5 = FUN_00d8c7a0();
          if ((1 < iVar5) && (*(int *)(arg1 + 0xc) == 0)) {
            iVar5 = FUN_00d8c7a0();
            uVar6 = FUN_0123fcf0();
            uVar9 = (ulonglong)uVar6;
            if (0 < (int)uVar6) {
              do {
                uVar6 = (uint)uVar9;
                FUN_00d8cb40();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                iVar7 = FUN_00d8c7a0();
                if ((iVar7 < iVar5) && (cVar4 = FUN_00d8f400(), cVar4 != '\0')) {
                  FUN_00d8c7a0();
                  FUN_00d8c7a0();
                  FUN_00d97ce0();
                  FUN_00d8d560();
                  if ((local_38 != '\0') && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_0123ff10();
                  bVar2 = true;
                  bVar1 = true;
                }
                else {
                  bVar2 = false;
                  bVar1 = false;
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                  bVar1 = bVar2;
                }
                uVar9 = uVar9 >> 1;
              } while (!bVar1 && 1 < uVar6);
            }
          }
        }
        else {
          FUN_00d8d560();
        }
        FUN_0123ff30();
        FUN_0123fbe0();
        *(undefined1 *)(this + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *this = local_40;
            *(undefined1 *)(this + 1) = 1;
            goto LAB_017866e9;
          }
          local_40 = 0;
        }
        *this = local_40;
        *(undefined1 *)(this + 1) = 1;
      }
LAB_017866e9:
      FUN_00d50b20();
      return;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return;
}




// ==================================================
// @01c8d230 (769 bytes) — calculation

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  undefined8 *puVar8;
  longlong this;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  char local_38;
  
  local_50 = 0xffffffff;
  lVar1 = *(longlong *)(this + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar7 = (pthread_key_t)&local_70;
  FUN_016ca840();
  uVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_48 = FUN_0123ffd0();
  local_60 = local_70;
  local_58 = local_68;
  local_4c = local_50;
  lVar1 = *(longlong *)(this + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = &local_58;
  FUN_016ca950(puVar8,&local_60,&local_4c);
  uVar3 = local_40;
  pVar7 = (pthread_key_t)puVar8;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (((uVar3 != 0) && (local_40 = FUN_0123ffd0(), local_40 >> 0x20 != 0)) &&
     ((local_48._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
    local_48 = FUN_0123ffd0();
  }
  local_60 = local_70;
  local_58 = local_68;
  local_4c = local_50;
  lVar1 = *(longlong *)(this + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ca9d0(&local_58,&local_60,&local_4c);
  uVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (uVar4 != 0) {
    local_40 = FUN_0123ffd0();
    if (((local_40 >> 0x20 != 0) && (local_48._4_4_ != 0)) &&
       (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
      local_48 = FUN_0123ffd0();
    }
    FUN_00d50b20();
  }
  if (uVar3 != 0) {
    FUN_00d50b20();
  }
  if (uVar2 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}




// ==================================================
// @0178c570 (740 bytes) — calculation

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int extraout_var;
  ulonglong uVar5;
  pthread_key_t pVar6;
  undefined1 *arg1;
  longlong local_60;
  char local_58;
  int iStack_4c;
  int iStack_44;
  longlong local_40;
  char local_38;
  
  if (arg1 != (undefined1 *)0x0) {
    *arg1 = 1;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_01508650();
  if (param_2 == (ulonglong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    param_1 = 0;
    uVar4 = FUN_016c4630(0,2);
  }
  else {
    uVar4 = *param_2;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar6 = 0;
  FUN_016c47d0(0,uVar3);
  FUN_00e7bcc0();
  FUN_0123ffd0();
  FUN_00e7bdc0();
  iStack_44 = (int)(uVar4 >> 0x20);
  if (((((iStack_44 != 0) && (iStack_4c = (int)(uVar3 >> 0x20), iStack_4c != 0)) &&
       (cVar1 = FUN_00e7c020(), cVar1 != '\0')) &&
      ((FUN_00e7b970(), uVar4 >> 0x20 != 0 && (extraout_var != 0)))) &&
     (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01508740();
    uVar3 = uVar4;
    if (((arg1 != (undefined1 *)0x0) && (uVar5 >> 0x20 != 0)) &&
       ((iStack_44 != 0 && (cVar1 = FUN_00e7c020(), cVar1 == '\0')))) {
      *arg1 = 0;
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return uVar3;
}




// ==================================================
// @01786270 (723 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *this;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  plVar6 = (longlong *)*param_2;
  if ((DAT_026d8a28 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027ed1e8 = FUN_00d4fe50();
    _DAT_027ed1d0 = "MUBarSignature";
    _DAT_027ed1d8 = 0x18;
    _DAT_027ed1e0 = FUN_00092680;
    _DAT_027ed1f0 = 0;
    uRam00000000027ed1f8 = 0;
    _DAT_027ed200 = 0;
    _DAT_027ed278 = 0;
    uRam00000000027ed280 = 0;
    _DAT_027ed288 = 0;
    DAT_027ed28a = 2;
    _DAT_027ed208 = 0;
    uRam00000000027ed210 = 0;
    _DAT_027ed218 = 0;
    uRam00000000027ed220 = 0;
    _DAT_027ed228 = 0;
    uRam00000000027ed230 = 0;
    _DAT_027ed238 = 0;
    uRam00000000027ed240 = 0;
    _DAT_027ed248 = 0;
    uRam00000000027ed250 = 0;
    _DAT_027ed258 = 0;
    uRam00000000027ed260 = 0;
    _DAT_027ed268 = 0;
    uRam00000000027ed270 = 0;
    DAT_027ed293 = 0;
    _DAT_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_017862bd:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar3 == '\0') goto LAB_017862bd;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_017862e4:
    uVar4 = FUN_0123fef0();
    local_30 = FUN_0123ff00();
    local_38 = 2;
    local_40 = &DAT_024c3df0;
    local_34 = uVar4;
    FUN_00d8cb40(&DAT_024c3df0,&local_40);
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_017862e4;
  plVar6 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01786372;
  }
  param_2 = &DAT_02802688;
LAB_01786372:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      return;
    }
    *(undefined1 *)(this + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(undefined1 *)(this + 1) = 0;
  }
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01c8d6c0 (714 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong this;
  longlong **pplVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  bool bVar9;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  undefined7 uVar8;
  
  if (*(longlong *)(this + 0x180) == 0) {
    uVar7 = 0;
    goto LAB_01c8d8b2;
  }
  bVar9 = *(int *)(this + 0x18c) == 0;
  uVar8 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar7 = CONCAT71(uVar8,!bVar9);
  if (((bVar9) || (param_2 == '\0')) ||
     (uVar7 = CONCAT71(uVar8,1), *(longlong *)(this + 0x158) == 0)) goto LAB_01c8d8b2;
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar6 = &local_60;
  (**(code **)(**(longlong **)(this + 0x180) + 0x980))();
  plVar1 = local_60;
  if ((DAT_026d8a28 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027ed1e8 = FUN_00d4fe50();
    _DAT_027ed1d0 = "MUBarSignature";
    _DAT_027ed1d8 = 0x18;
    param_1 = 0x92680;
    _DAT_027ed1e0 = FUN_00092680;
    _DAT_027ed1f0 = 0;
    uRam00000000027ed1f8 = 0;
    _DAT_027ed200 = 0;
    _DAT_027ed278 = 0;
    uRam00000000027ed280 = 0;
    _DAT_027ed288 = 0;
    DAT_027ed28a = 2;
    _DAT_027ed208 = 0;
    uRam00000000027ed210 = 0;
    _DAT_027ed218 = 0;
    uRam00000000027ed220 = 0;
    _DAT_027ed228 = 0;
    uRam00000000027ed230 = 0;
    _DAT_027ed238 = 0;
    uRam00000000027ed240 = 0;
    _DAT_027ed248 = 0;
    uRam00000000027ed250 = 0;
    _DAT_027ed258 = 0;
    uRam00000000027ed260 = 0;
    _DAT_027ed268 = 0;
    uRam00000000027ed270 = 0;
    DAT_027ed293 = 0;
    _DAT_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01c8d76d:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c8d76d;
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
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(this + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = '\0';
    local_50 = plVar1;
    FUN_01703b00(&local_50,*(undefined8 *)(this + 0x188));
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(this + 0x1a8) != 0) {
      FUN_01c4e030();
    }
    lVar2 = *(longlong *)(this + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_01c453b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c886d0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01c8d8b2:
  return uVar7 & 0xffffffff;
}




// ==================================================
// @01787bb0 (573 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  longlong *arg1;
  longlong this;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int local_48;
  float local_34;
  
  fVar5 = DAT_0240b530;
  if (*(char *)(this + 0x52) != '\0') {
    fVar5 = 0.0;
  }
  iVar2 = *(int *)(this + 0x4c);
  iVar1 = *(int *)(this + 0x48);
  lVar3 = *(longlong *)(this + 0x28);
  if (lVar3 == 0) {
    local_34 = 0.0;
    lVar3 = 0;
  }
  else {
    local_48 = -1;
    local_34 = 0.0;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar3 + 0xc)) {
      fVar4 = (float)FUN_01787bb0();
      local_34 = local_34 + fVar4;
    }
    FUN_01798230();
    lVar3 = *(longlong *)(this + 0x28);
  }
  fVar5 = ((DAT_02390124 - (float)(iVar1 * iVar1) / DAT_023908ec) - (float)iVar2 / DAT_023908ec) -
          fVar5;
  if (*(int *)(lVar3 + 0xc) != 0) {
    local_34 = local_34 / (float)*(int *)(lVar3 + 0xc);
  }
  if ((double)fVar5 + DAT_023934c8 <= (double)local_34) {
    if (lVar3 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(lVar3 + 0xc); iVar2 = iVar2 + 1) {
        FUN_01787bb0();
      }
      FUN_01798230();
    }
  }
  else {
    local_34 = fVar5;
    if (*arg1 != 0) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
  }
  return local_34;
}




// ==================================================
// @0165f820 (516 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025ce298;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_026d8a28 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ed1e8 = FUN_00d4fe50();
      _DAT_027ed1d0 = "MUBarSignature";
      _DAT_027ed1d8 = 0x18;
      _DAT_027ed1e0 = FUN_00092680;
      _DAT_027ed1f0 = 0;
      uRam00000000027ed1f8 = 0;
      _DAT_027ed200 = 0;
      _DAT_027ed278 = 0;
      uRam00000000027ed280 = 0;
      _DAT_027ed288 = 0;
      DAT_027ed28a = 2;
      _DAT_027ed208 = 0;
      uRam00000000027ed210 = 0;
      _DAT_027ed218 = 0;
      uRam00000000027ed220 = 0;
      _DAT_027ed228 = 0;
      uRam00000000027ed230 = 0;
      _DAT_027ed238 = 0;
      uRam00000000027ed240 = 0;
      _DAT_027ed248 = 0;
      uRam00000000027ed250 = 0;
      _DAT_027ed258 = 0;
      uRam00000000027ed260 = 0;
      _DAT_027ed268 = 0;
      uRam00000000027ed270 = 0;
      DAT_027ed293 = 0;
      _DAT_027ed28b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ed28b == '\0') {
    FUN_0165fa50();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 2) = 0;
  if (DAT_026d8a28 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ed1e8 = FUN_00d4fe50();
      _DAT_027ed1d0 = "MUBarSignature";
      _DAT_027ed1d8 = 0x18;
      _DAT_027ed1e0 = FUN_00092680;
      _DAT_027ed1f0 = 0;
      uRam00000000027ed1f8 = 0;
      _DAT_027ed200 = 0;
      _DAT_027ed278 = 0;
      uRam00000000027ed280 = 0;
      _DAT_027ed288 = 0;
      DAT_027ed28a = 2;
      _DAT_027ed208 = 0;
      uRam00000000027ed210 = 0;
      _DAT_027ed218 = 0;
      uRam00000000027ed220 = 0;
      _DAT_027ed228 = 0;
      uRam00000000027ed230 = 0;
      _DAT_027ed238 = 0;
      uRam00000000027ed240 = 0;
      _DAT_027ed248 = 0;
      uRam00000000027ed250 = 0;
      _DAT_027ed258 = 0;
      uRam00000000027ed260 = 0;
      _DAT_027ed268 = 0;
      uRam00000000027ed270 = 0;
      DAT_027ed293 = 0;
      _DAT_027ed28b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ed28b == '\0') {
    FUN_0165fbe0();
    FUN_00e87980();
  }
  return;
}



