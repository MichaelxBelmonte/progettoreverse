// ===== MUScaleRulerView — Annotated small functions =====
// 9 readable functions

// ==================================================
// @01ad48c0 (2515 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong this;
  undefined4 uVar5;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01cb4790();
  (**(code **)(*local_58 + 0x370))();
  FUN_01d44d80(DAT_023b160c);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(this + 0x260) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 0x240) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 0x248) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 600) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 0x228) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 0x250) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 0x238) + 0x9d8))();
  (**(code **)(**(longlong **)(this + 0x278) + 0x9d8))();
  plVar1 = *(longlong **)(this + 0x228);
  FUN_016ab300();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01770c90();
  local_b8 = local_58;
  local_b0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_b0 = '\x01';
  FUN_016ac280(uVar5,&local_b8);
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(this + 0x250);
  FUN_016ab300();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_0173b6f0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01736d70();
  local_98 = local_58;
  local_90 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_90 = '\x01';
  FUN_016ac280(uVar5,&local_98);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(this + 0x238);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01768510();
  local_88 = local_40;
  local_80 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b14f90();
  (**(code **)(**(longlong **)(this + 0x260) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x240) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x248) + 0x998))();
  (**(code **)(**(longlong **)(this + 600) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x228) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x250) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x238) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x278) + 0x998))();
  (**(code **)(**(longlong **)(this + 0x270) + 0x998))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01ad6540 (2130 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01ad46e0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0173f680();
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_017708d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    lVar1 = **(longlong **)(*(longlong *)(this + 0x2b8) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (*(int *)(lVar1 + 0xc) == 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d8ede0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01735c40();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = DAT_027e3c28;
      if (DAT_027e3c28 != 0) {
        FUN_00d50b00();
      }
      FUN_01735120();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01735c40();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01735120();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017551c0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174bd90();
  FUN_01ad48c0();
  FUN_00d50b20();
  return;
}




// ==================================================
// @01ad8590 (1565 bytes) — calculation

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  char unaff_SIL;
  longlong *this;
  bool bVar11;
  float fVar12;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01a1d6e0();
  lVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)(*local_58 + 0xe30))();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (lVar9 = lVar8, *(int *)(lVar8 + 0xc) == 0)) {
    FUN_01a1d6e0();
    (**(code **)(*local_58 + 0xe70))();
    lVar9 = local_40;
    if (lVar8 == local_40) {
LAB_01ad86b5:
      lVar9 = lVar8;
      if (local_38 != '\0') {
LAB_01ad86bb:
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
          lVar8 = lVar9;
          goto LAB_01ad86b5;
        }
        if (local_38 == '\0') goto LAB_01ad86c9;
        goto LAB_01ad86bb;
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_01ad86c9:
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0xc) == 0) goto LAB_01ad8b6a;
  local_48 = CONCAT44(local_48._4_4_,(int)this[0x30]);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = (undefined8 *)this[0x3a];
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this[0x3a] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  bVar1 = *(byte *)((longlong)this + 0x1d9);
  local_70 = 0;
  lVar8 = this[0x3a];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  pVar10 = (pthread_key_t)bVar1;
  local_78 = lVar8;
  FUN_01759fb0(*(undefined4 *)((longlong)this + 0x1dc),(float)local_48 * DAT_02420c90,&local_78
               ,(char)this[0x37]);
  lVar8 = this[0x36];
  lVar9 = lVar8;
  if (lVar8 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar9 = 0;
        goto LAB_01ad8817;
      }
      FUN_00d50b00();
      lVar8 = this[0x36];
      this[0x36] = local_40;
      lVar9 = local_40;
    }
    else {
      local_38 = '\0';
      lVar9 = local_40;
LAB_01ad8817:
      this[0x36] = lVar9;
    }
    pVar10 = (pthread_key_t)lVar8;
    if (lVar8 != 0) {
      FUN_00d50b20();
      lVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = local_58;
  plVar3 = (longlong *)this[0x39];
  if (plVar3 != local_58) {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    this[0x39] = (longlong)plVar4;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  lVar8 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01ad8901;
    }
    bVar11 = true;
  }
  else {
LAB_01ad8901:
    bVar11 = lVar8 == 0;
    if ((this[0x36] != 0) && (lVar8 != 0)) {
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar10 = (pthread_key_t)local_48;
      }
      fVar12 = (float)FUN_0173e3a0();
      iVar5 = FUN_00e7d780(fVar12 / DAT_023908e0);
      if (iVar5 == 0) {
        bVar11 = false;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0174dc60();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173ecc0((float)iVar5 * DAT_023908e0);
        bVar11 = false;
      }
    }
  }
  if (unaff_SIL != '\0') {
    FUN_01ad3320();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((int)this[0x32] != -1000000) {
      *(undefined4 *)(this + 0x32) = 0xfff0bdc0;
      (**(code **)(*this + 0x620))();
    }
    *(undefined1 *)((longlong)this + 0x1da) = 1;
    local_60 = 0;
    lVar8 = this[0x36];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar8;
    FUN_0173b120();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = local_88;
    local_38 = '\0';
    FUN_01ad60d0(1,1);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar11) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ad8b6a:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01ad5a70 (1510 bytes) — calculation

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong this;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar21;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_13;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  
  uVar7 = FUN_01adad50();
  local_38._0_4_ = in_XMM1._0_4_;
  local_28._0_4_ = (undefined4)uVar7;
  auVar22 = in_XMM1;
  if (*(longlong **)(this + 0x238) != (longlong *)0x0) {
    auVar8._0_8_ = (**(code **)(**(longlong **)(this + 0x238) + 0x4d8))();
    auVar8._8_8_ = extraout_XMM0_Qb_00;
    auVar8 = blendps(auVar8,ZEXT416((uint)((float)local_28._0_4_ + 0.0 + DAT_02390d00)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(DAT_02390d34 + (float)local_38._0_4_)),1);
    (**(code **)(**(longlong **)(this + 0x238) + 0x4d0))(auVar8._0_8_);
    (**(code **)(**(longlong **)(this + 0x238) + 0x998))();
    FUN_01e058a0();
  }
  if (*(longlong **)(this + 0x240) != (longlong *)0x0) {
    auVar9._0_8_ = (**(code **)(**(longlong **)(this + 0x240) + 0x4d8))();
    auVar9._8_8_ = extraout_XMM0_Qb_01;
    auVar34._4_12_ = in_XMM1._4_12_;
    auVar34._0_4_ = (float)local_38._0_4_ + DAT_02390d34;
    local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_28._8_4_ = (undefined4)extraout_XMM0_Qb;
    local_28._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar2._4_4_ = local_28._4_4_;
    auVar2._0_4_ = (float)local_28._0_4_ + 0.0 + DAT_02390d00;
    auVar2._8_4_ = local_28._8_4_;
    auVar2._12_4_ = local_28._12_4_;
    auVar8 = blendps(auVar9,auVar2,1);
    auVar22 = blendps(auVar22,auVar34,1);
    (**(code **)(**(longlong **)(this + 0x240) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int *)(this + 0x284) == 0) {
    local_28._8_8_ = 0;
    local_28._0_8_ = DAT_023dccec;
    local_38._8_8_ = 0;
    local_38._0_8_ = DAT_023dccf4;
    plVar1 = *(longlong **)(this + 0x270);
    auVar8 = auVar22;
    goto joined_r0x01ad5bb3;
  }
  auVar10._0_8_ = FUN_01e3f820();
  auVar10._8_8_ = extraout_XMM0_Qb_02;
  iVar6 = *(int *)(this + 0x284);
  fVar30 = (float)((ulonglong)auVar10._0_8_ >> 0x20);
  fVar21 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
  if (iVar6 == 3) {
    auVar8 = auVar22;
    FUN_01e3f820();
    auVar8 = blendps(auVar8,_DAT_0241c700,0xd);
    iVar6 = *(int *)(this + 0x284);
    auVar23._0_4_ = auVar8._0_4_ + (float)auVar10._0_8_;
    auVar23._4_4_ = auVar8._4_4_ + fVar30;
    auVar23._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb_02;
    auVar23._12_4_ = auVar8._12_4_ + fVar21;
    if (iVar6 == 1) goto LAB_01ad5bd6;
LAB_01ad5bd2:
    if (iVar6 == 0) goto LAB_01ad5bd6;
    auVar8 = auVar23;
    FUN_01e3f820();
    if (*(int *)(this + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar31 = blendps(auVar8,_DAT_0241c710,0xd);
  }
  else {
    auVar23._0_4_ = (float)DAT_023dccf4 + (float)auVar10._0_8_;
    auVar23._4_4_ = (float)(DAT_023dccf4 >> 0x20) + fVar30;
    auVar23._8_4_ = (float)extraout_XMM0_Qb_02 + 0.0;
    auVar23._12_4_ = fVar21 + 0.0;
    if (iVar6 != 1) goto LAB_01ad5bd2;
LAB_01ad5bd6:
    auVar31._8_8_ = 0;
    auVar31._0_8_ = DAT_023dccf4;
  }
  auVar24._0_4_ = auVar23._0_4_ + auVar31._0_4_;
  auVar24._4_4_ = auVar23._4_4_ + auVar31._4_4_;
  auVar24._8_4_ = auVar23._8_4_ + auVar31._8_4_;
  auVar24._12_4_ = auVar23._12_4_ + auVar31._12_4_;
  auVar8 = blendps(auVar24,auVar10,2);
  local_38 = blendps(auVar22,_DAT_0241c720,0xd);
  plVar1 = *(longlong **)(this + 0x270);
  local_28 = auVar8;
joined_r0x01ad5bb3:
  if (plVar1 != (longlong *)0x0) {
    auVar22._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
    auVar22._8_8_ = extraout_XMM0_Qb_03;
    auVar8 = blendps(auVar8,local_38,0xd);
    auVar22 = blendps(auVar22,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    (**(code **)(**(longlong **)(this + 0x270) + 0x4d0))(auVar22._0_8_);
  }
  if (*(longlong **)(this + 0x278) != (longlong *)0x0) {
    auVar11._0_8_ = (**(code **)(**(longlong **)(this + 0x278) + 0x4d8))();
    auVar11._8_8_ = extraout_XMM0_Qb_04;
    auVar35._4_12_ = local_38._4_12_;
    auVar35._0_4_ = local_38._0_4_ + DAT_02390124;
    auVar3._4_4_ = local_28._4_4_;
    auVar3._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar3._8_4_ = local_28._8_4_;
    auVar3._12_4_ = local_28._12_4_;
    auVar22 = blendps(auVar11,auVar3,1);
    auVar8 = blendps(auVar8,auVar35,1);
    (**(code **)(**(longlong **)(this + 0x278) + 0x4d0))(auVar22._0_8_);
  }
  if (*(longlong *)(this + 0x230) != 0) {
    local_38._0_8_ = FUN_01adabe0();
    local_38._8_8_ = extraout_XMM0_Qb_05;
    auVar22 = auVar8;
    auVar12._0_8_ = (**(code **)(**(longlong **)(this + 0x230) + 0x4d8))();
    auVar12._8_8_ = extraout_XMM0_Qb_06;
    auVar8 = blendps(auVar22,auVar8,0xd);
    auVar22 = blendps(auVar12,local_38,0xd);
    (**(code **)(**(longlong **)(this + 0x230) + 0x4d0))(auVar22._0_8_);
  }
  if ((*(int *)(this + 0x284) == 1) || (*(int *)(this + 0x284) == 0)) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = DAT_023dccec;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = DAT_023dccf4;
  }
  else {
    auVar13._0_8_ = FUN_01e3f820();
    auVar13._8_8_ = extraout_XMM0_Qb_07;
    if (*(int *)(this + 0x284) == 3) {
      auVar22 = auVar8;
      FUN_01e3f820();
      auVar25 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar25._8_8_ = 0;
      auVar25._0_8_ = DAT_023dccf4;
    }
    auVar26._0_4_ = auVar25._0_4_ + (float)auVar13._0_8_;
    auVar26._4_4_ = auVar25._4_4_ + (float)((ulonglong)auVar13._0_8_ >> 0x20);
    auVar26._8_4_ = auVar25._8_4_ + (float)extraout_XMM0_Qb_07;
    auVar26._12_4_ = auVar25._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
    auVar27 = blendps(auVar26,auVar13,2);
    auVar36 = blendps(auVar8,_DAT_0241c710,0xd);
  }
  fVar30 = auVar36._0_4_;
  local_38 = ZEXT416((uint)(DAT_0239011c * fVar30));
  local_28._4_12_ = auVar27._4_12_;
  local_28._0_4_ = auVar27._0_4_ + DAT_0239011c * fVar30;
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_28 = auVar27;
  }
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_38 = auVar36;
  }
  if (*(longlong **)(this + 0x248) != (longlong *)0x0) {
    auVar14._0_8_ = (**(code **)(**(longlong **)(this + 0x248) + 0x4d8))();
    auVar14._8_8_ = extraout_XMM0_Qb_08;
    auVar22 = blendps(auVar14,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    auVar27 = blendps(auVar27,ZEXT416((uint)(DAT_02390124 + (float)local_38._0_4_)),1);
    (**(code **)(**(longlong **)(this + 0x248) + 0x4d0))(auVar22._0_8_);
  }
  if (*(longlong **)(this + 0x250) != (longlong *)0x0) {
    auVar15._0_8_ = (**(code **)(**(longlong **)(this + 0x250) + 0x4d8))();
    auVar15._8_8_ = extraout_XMM0_Qb_09;
    auVar37._4_12_ = local_38._4_12_;
    auVar37._0_4_ = (float)local_38._0_4_ + DAT_02390124;
    auVar4._4_4_ = local_28._4_4_;
    auVar4._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar4._8_4_ = local_28._8_4_;
    auVar4._12_4_ = local_28._12_4_;
    auVar22 = blendps(auVar15,auVar4,1);
    auVar27 = blendps(auVar27,auVar37,1);
    (**(code **)(**(longlong **)(this + 0x250) + 0x4d0))(auVar22._0_8_);
  }
  if ((*(int *)(this + 0x284) == 1) || (*(int *)(this + 0x284) == 0)) {
    local_28._8_8_ = 0;
    local_28._0_8_ = DAT_023dccec;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = DAT_023dccf4;
    auVar22 = auVar27;
  }
  else {
    auVar16._0_8_ = FUN_01e3f820();
    auVar16._8_8_ = extraout_XMM0_Qb_10;
    if (*(int *)(this + 0x284) == 3) {
      auVar22 = auVar27;
      FUN_01e3f820();
      auVar28 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = DAT_023dccf4;
    }
    auVar29._0_4_ = auVar28._0_4_ + (float)auVar16._0_8_;
    auVar29._4_4_ = auVar28._4_4_ + (float)((ulonglong)auVar16._0_8_ >> 0x20);
    auVar29._8_4_ = auVar28._8_4_ + (float)extraout_XMM0_Qb_10;
    auVar29._12_4_ = auVar28._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_10 >> 0x20);
    auVar22 = blendps(auVar29,auVar16,2);
    auVar32 = blendps(auVar27,_DAT_0241c710,0xd);
    local_28 = auVar22;
  }
  fVar30 = auVar32._0_4_;
  local_38 = ZEXT416((uint)(DAT_0239011c * fVar30));
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_38 = auVar32;
  }
  if (*(longlong **)(this + 0x260) != (longlong *)0x0) {
    auVar17._0_8_ = (**(code **)(**(longlong **)(this + 0x260) + 0x4d8))();
    auVar17._8_8_ = extraout_XMM0_Qb_11;
    auVar8 = blendps(auVar17,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(DAT_02390124 + (float)local_38._0_4_)),1);
    (**(code **)(**(longlong **)(this + 0x260) + 0x4d0))(auVar8._0_8_);
  }
  if (*(longlong **)(this + 0x228) != (longlong *)0x0) {
    auVar18._0_8_ = (**(code **)(**(longlong **)(this + 0x228) + 0x4d8))();
    auVar18._8_8_ = extraout_XMM0_Qb_12;
    auVar38._4_12_ = local_28._4_12_;
    auVar38._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar8 = blendps(auVar18,auVar38,1);
    auVar5._4_4_ = local_38._4_4_;
    auVar5._0_4_ = (float)local_38._0_4_ + DAT_02390124;
    auVar5._8_4_ = local_38._8_4_;
    auVar5._12_4_ = local_38._12_4_;
    auVar22 = blendps(auVar22,auVar5,1);
    (**(code **)(**(longlong **)(this + 0x228) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int *)(this + 0x284) == 3) {
    local_38._0_8_ = FUN_01e3f820();
    local_38._8_8_ = extraout_XMM0_Qb_13;
    auVar22 = blendps(auVar22,_DAT_0241c700,0xd);
    plVar1 = *(longlong **)(this + 600);
    local_28 = auVar22;
  }
  else {
    local_38._8_8_ = 0;
    local_38._0_8_ = DAT_023dccec;
    local_28._8_8_ = 0;
    local_28._0_8_ = DAT_023dccf4;
    plVar1 = *(longlong **)(this + 600);
  }
  if (plVar1 != (longlong *)0x0) {
    auVar19._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
    auVar19._8_8_ = extraout_XMM0_Qb_14;
    auVar8 = blendps(auVar19,ZEXT416((uint)((float)local_38._0_4_ + 0.0)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(DAT_02390124 + (float)local_28._0_4_)),1);
    (**(code **)(**(longlong **)(this + 600) + 0x4d0))(auVar8._0_8_,auVar22._0_8_);
  }
  if (*(longlong **)(this + 0x268) != (longlong *)0x0) {
    auVar20._0_8_ = (**(code **)(**(longlong **)(this + 0x268) + 0x4d8))();
    auVar20._8_8_ = extraout_XMM0_Qb_15;
    auVar39._4_12_ = local_28._4_12_;
    auVar39._0_4_ = (float)local_28._0_4_ + DAT_023b36a8;
    auVar33._4_12_ = local_38._4_12_;
    auVar33._0_4_ = (float)local_38._0_4_ + DAT_02390d04;
    auVar8 = blendps(auVar20,auVar33,1);
    auVar22 = blendps(auVar22,auVar39,1);
                    /* WARNING: Could not recover jumptable at 0x01ad604d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(this + 0x268) + 0x4d0))(auVar8._0_8_,auVar22._0_8_);
    return;
  }
  return;
}




// ==================================================
// @01ad3e60 (1471 bytes) — calculation

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *arg1;
  longlong *this;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_XMM1_Dc;
  undefined4 uVar18;
  undefined4 in_XMM1_Dd;
  undefined4 uVar19;
  float fVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  lVar1 = *arg1;
  lVar7 = this[0x2a];
  FUN_01a1dca0();
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ad3ef6;
    FUN_00d50b00();
    local_34 = 0;
  }
  else if (local_48 == 0) {
LAB_01ad3ef6:
    local_34 = 0x2590801;
    FUN_00e828a0();
  }
  else {
    local_34 = 0;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    lVar6 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_b8 = DAT_027e3b30;
      if (DAT_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      plVar9 = &local_a8;
      FUN_00d41040(plVar9,&local_b8);
      pVar8 = (pthread_key_t)plVar9;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_98 = DAT_027e3b30;
      if (DAT_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      local_58 = local_88;
      local_50 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_50 = '\x01';
      plVar9 = &local_58;
      FUN_00d41430(plVar9,&local_98);
      param_1 = (pthread_key_t)plVar9;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (lVar1 == lVar7) goto LAB_01ad43e2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  lVar1 = this[0x58];
  lVar7 = lVar1;
  if (lVar1 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar7 = 0;
        goto LAB_01ad4222;
      }
      FUN_00d50b00();
      lVar1 = this[0x58];
      this[0x58] = local_48;
      lVar7 = local_48;
    }
    else {
      local_40 = '\0';
      lVar7 = local_48;
LAB_01ad4222:
      this[0x58] = lVar7;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ad46e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_01743090();
  if (*(int *)((longlong)this + 0x184) != iVar4) {
    *(int *)((longlong)this + 0x184) = iVar4;
    uVar21 = DAT_023dccf4;
    uVar10 = DAT_023dccec;
    if ((*(int *)((longlong)this + 0x284) != 1) && (*(int *)((longlong)this + 0x284) != 0)
       ) {
      uVar10 = FUN_01e3f820();
      if (*(int *)((longlong)this + 0x284) == 3) {
        uVar14 = uVar13;
        uVar17 = uVar16;
        uVar18 = in_XMM1_Dc;
        uVar19 = in_XMM1_Dd;
        FUN_01e3f820();
        auVar22._4_4_ = uVar17;
        auVar22._0_4_ = uVar14;
        auVar22._8_4_ = uVar18;
        auVar22._12_4_ = uVar19;
        auVar11 = blendps(auVar22,_DAT_0241c700,0xd);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_023dccf4;
      }
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar10;
      auVar12._0_4_ = auVar11._0_4_ + (float)uVar10;
      auVar12._4_4_ = auVar11._4_4_ + (float)((ulonglong)uVar10 >> 0x20);
      auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb;
      auVar12._12_4_ = auVar11._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar11 = blendps(auVar12,auVar2,2);
      auVar3._4_4_ = uVar16;
      auVar3._0_4_ = uVar13;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar22 = blendps(auVar3,_DAT_0241c710,0xd);
      uVar21 = auVar22._0_8_;
      uVar10 = auVar11._0_8_;
    }
    fVar20 = (float)uVar21;
    fVar15 = fVar20 * DAT_0239011c;
    if ((fVar20 == 0.0) && (!NAN(fVar20))) {
      fVar15 = fVar20;
    }
    (**(code **)(*this + 0x618))(uVar10,fVar15);
  }
  FUN_01ad3320();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((int)this[0x32] != -1000000) {
    *(undefined4 *)(this + 0x32) = 0xfff0bdc0;
    (**(code **)(*this + 0x620))();
  }
  *(undefined4 *)((longlong)this + 0x194) = 0xfff0bdc0;
LAB_01ad43e2:
  FUN_01ad48c0();
  FUN_01ad5a70();
  (**(code **)(*this + 0x620))();
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01ad9840 (1076 bytes) — calculation

{
  char cVar1;
  char in_CL;
  char in_DL;
  longlong *arg1;
  undefined8 *this;
  longlong local_38;
  char local_30;
  
  if (*arg1 != 0) {
    FUN_01d488d0();
    (**(code **)(*(longlong *)*this + 0x3a0))();
  }
  if (in_DL != '\0') {
    if (in_CL == '\0') {
      FUN_01cfbee0(param_1,param_1,param_1);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*this + 0x3a8))();
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*this + 0x370))(0,DAT_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*this + 0x3a8))();
        (**(code **)(*(longlong *)*this + 0x370))(0,DAT_02390d00);
      }
    }
    else {
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*this + 0x370))(0,DAT_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*this + 0x3a8))();
        (**(code **)(*(longlong *)*this + 0x370))(0,DAT_02390d00);
      }
      FUN_01cfbee0(param_1,param_1,param_1);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*this + 0x3a8))();
    }
  }
  return;
}




// ==================================================
// @01ada2c0 (798 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  longlong *arg1;
  longlong *this;
  undefined4 uVar3;
  longlong *local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = FUN_01ad9100();
  if (cVar2 == '\0') {
    (**(code **)(*this + 0x640))();
    local_80 = *arg1;
    local_78 = '\0';
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*local_40 + 0x528))(param_1,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d39800(param_1,param_2,DAT_023908d8);
    plVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfbee0(DAT_02390120,DAT_02390120,DAT_02390120);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    uVar3 = (**(code **)(*this + 0x640))();
    local_a0 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*local_c0 + 0x3b0))(uVar3,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = plVar1;
    local_88 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a8))();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01ad9f80 (514 bytes) — calculation

{
  char cVar1;
  undefined8 *this;
  float local_98;
  longlong local_40;
  char local_38;
  
  cVar1 = FUN_01ad9100();
  local_98 = param_3;
  if (cVar1 == '\0') {
    FUN_01cfc9f0(DAT_02391090 + param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_3 = param_3 + _DAT_023b1620;
    (**(code **)(*(longlong *)*this + 0x3f8))(param_3,param_4);
    local_98 = param_3 + _DAT_0241c730;
  }
  FUN_01cfc9f0(param_1 + _DAT_0241c6c4,param_2);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*this + 0x3f8))(local_98,param_4);
  return;
}




// ==================================================
// @019e84b0 (511 bytes) — calculation

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong *arg1;
  longlong this;
  longlong local_38;
  char local_30;
  
  if ((*(longlong *)(this + 0x278) != 0) &&
     (FUN_01e1e360(), *(longlong *)(this + 0x278) != 0)) {
    *(undefined8 *)(this + 0x278) = 0;
    FUN_00d50b20();
  }
  lVar5 = *arg1;
  if (lVar5 == *(longlong *)(this + 0x260)) {
    return;
  }
  if (*(longlong *)(this + 0x260) != 0) {
    *(undefined8 *)(this + 0x260) = 0;
    FUN_00d50b20();
    lVar5 = *arg1;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(longlong *)(this + 0x268);
  if (lVar3 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x268) = lVar5;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  pVar4 = 0;
  FUN_01e1eb80(DAT_023942d0);
  lVar5 = *(longlong *)(this + 0x278);
  lVar3 = lVar5;
  if (lVar5 == local_38) goto LAB_019e85d5;
  lVar3 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar3 = 0;
      goto LAB_019e858a;
    }
    FUN_00d50b00();
    lVar5 = *(longlong *)(this + 0x278);
    *(longlong *)(this + 0x278) = local_38;
  }
  else {
    local_30 = '\0';
LAB_019e858a:
    *(longlong *)(this + 0x278) = lVar3;
  }
  pVar4 = (pthread_key_t)lVar5;
  if (lVar5 != 0) {
    FUN_00d50b20();
    lVar3 = local_38;
  }
LAB_019e85d5:
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar1 = FUN_01326de0();
  *(undefined4 *)(this + 0x270) = uVar1;
  FUN_00d50b20();
  return;
}



