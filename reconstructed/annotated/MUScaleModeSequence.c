// ===== MUScaleModeSequence — Annotated small functions =====
// 8 readable functions
// Known properties: 6
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade

// ==================================================
// @01b91920 (1487 bytes) — calculation
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong *arg1;
  ulonglong *this;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong local_58;
  char local_50;
  char local_41;
  ulonglong local_40;
  char local_38 [8];
  
  local_68 = param_2;
  FUN_01b920e0();
  uVar3 = local_58;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
    param_2 = local_68;
  }
  FUN_012521f0(param_2,0,&local_88,&local_70);
  uVar4 = local_40;
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_2 >> 8),local_38[0]);
  pcVar11 = &local_80;
  if (local_38[0] != '\0') {
    pcVar11 = local_38;
  }
  local_80 = local_38[0];
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (uVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 == '\0') && (uVar4 != 0)) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  if (uVar4 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  FUN_01b91500();
  if (local_40 != 0) {
    FUN_01b91500();
    uVar3 = local_58;
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_0173f250();
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') goto LAB_01b91ad5;
LAB_01b91bd9:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    goto LAB_01b91be8;
  }
LAB_01b91ad5:
  local_40 = local_68;
  FUN_00e7b970();
  local_a0 = local_40;
  local_40 = local_70;
  FUN_00e7b970();
  local_98 = local_40;
  local_40 = local_40 & 0xffffffff00000000;
  if (local_a0._4_4_ == 0) {
    iVar2 = (int)(local_98 >> 0x20);
  }
  else {
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
    iVar2 = local_98._4_4_;
  }
  if (iVar2 != 0) {
    local_58 = local_58 & 0xffffffff00000000;
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
  }
  local_50 = '\0';
  local_58 = 0;
  local_90 = local_88;
  local_a8 = local_70;
  FUN_01b920e0();
  uVar3 = local_40;
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar9 = &local_90;
  local_41 = FUN_01253c10(puVar9,&local_58,&local_a8,0);
  pVar8 = (pthread_key_t)puVar9;
  if ((local_38[0] != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  uVar5 = local_40;
  cVar6 = local_50;
  uVar3 = local_58;
  if (local_58 == local_40) {
    if ((local_50 == '\0') && (local_40 != 0)) {
      if (local_38[0] != '\0') goto LAB_01b91cbb;
      FUN_00d50b00();
      goto LAB_01b91cee;
    }
LAB_01b91cf2:
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_58 = uVar5;
      if ((cVar6 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01b91cee:
      local_50 = '\x01';
      goto LAB_01b91cf2;
    }
    local_58 = local_40;
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01b91cbb:
    local_50 = '\x01';
  }
  if (local_41 != '\0') {
    local_70 = local_90;
  }
  if (local_58 == 0) {
LAB_01b91e86:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    (**(code **)(*arg1 + 0xa48))();
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38[0] = '\0';
    uVar10 = local_68;
    local_40 = uVar4;
    FUN_012502a0(local_68,local_88,(char)arg1[0x36]);
    pVar8 = (pthread_key_t)uVar10;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = local_58;
    local_38[0] = '\0';
    FUN_012502a0(local_70,local_68,(char)arg1[0x36]);
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xa50))();
    uVar3 = local_58;
    if ((char)arg1[0x42] != '\0') {
      FUN_01b92310();
      FUN_01b92310();
      goto LAB_01b91e86;
    }
    *(undefined1 *)(this + 1) = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *this = uVar3;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      *this = local_58;
      *(undefined1 *)(this + 1) = 1;
      local_50 = '\0';
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01b91be8:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01b8fc70 (1336 bytes) — calculation
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *in_RCX;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong *arg1;
  longlong *this;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((longlong *)this[0x3f] == (longlong *)0x0) goto LAB_01b8fe49;
  plVar1 = (longlong *)*arg1;
  if (plVar1 == (longlong *)this[0x3f]) {
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
    goto LAB_01b8fe49;
  }
  if ((DAT_027be908 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar7 != 0)) {
    _DAT_027be858 = FUN_010ec850();
    _DAT_027be840 = "MUScaleModeSequence";
    _DAT_027be848 = 0x70;
    _DAT_027be850 = FUN_0124b550;
    _DAT_027be860 = 0;
    uRam00000000027be868 = 0;
    _DAT_027be870 = 0;
    uRam00000000027be878 = 0;
    _DAT_027be880 = 0;
    uRam00000000027be888 = 0;
    _DAT_027be890 = 0;
    uRam00000000027be898 = 0;
    _DAT_027be8a0 = 0;
    uRam00000000027be8a8 = 0;
    _DAT_027be8b0 = 0;
    uRam00000000027be8b8 = 0;
    _DAT_027be8c0 = 0;
    uRam00000000027be8c8 = 0;
    _DAT_027be8d0 = 0;
    uRam00000000027be8d8 = 0;
    _DAT_027be8e0 = 0;
    uRam00000000027be8e8 = 0;
    _DAT_027be8f0 = 0;
    uRam00000000027be8f8 = 0;
    _DAT_027be900 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b8fcdc:
    in_RCX = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    in_RCX = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b8fcdc;
  }
  if (*in_RCX != 0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
  }
LAB_01b8fe49:
  pVar10 = (pthread_key_t)in_RCX;
  local_68 = *param_2;
  local_60 = '\0';
  FUN_01b68d40(param_1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*this + 0xa78))();
  *(undefined1 *)(this + 0x40) = 1;
  if (this[0x3f] != 0) {
    FUN_00d50b00();
    lVar2 = this[0x3f];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar13 = local_48;
    pvVar8 = _pthread_getspecific(pVar10);
    lVar3 = local_48;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar13 = lVar3, lVar9 != 0)) {
      lVar13 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    iVar7 = *(int *)(*(longlong *)(lVar13 + 0x48) + 0x18);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar7 + 7U < 0xf) {
      lVar2 = this[0x3f];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = 0;
      FUN_01252670(0,0,0,0);
      lVar13 = local_48;
      pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar11 >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0173f250();
      *(undefined1 *)(this + 0x40) = uVar5;
      if ((local_38[0] != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  cVar6 = (**(code **)(*this + 0xa78))();
  if (cVar4 != cVar6) {
    (**(code **)(*this + 0x620))();
  }
  return;
}




// ==================================================
// @01b90580 (1272 bytes) — calculation
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong arg1;
  longlong *this;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(arg1 + 0x1f8) != 0) {
    uVar4 = param_1;
    FUN_00d50b00();
    pVar3 = (pthread_key_t)uVar4;
    FUN_00d50b20();
    lVar1 = *(longlong *)(arg1 + 0x1f8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_01246780();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(arg1 + 0x1f8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      if (param_1 >> 0x20 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01252670(0,0,0,0);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_012467d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(param_1,0,0,0);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_012467d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(arg1 + 0x208) + 0x390))();
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_012467d0();
  FUN_01246780();
  *this = local_48;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @0176cbc0 (1181 bytes) — calculation
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025fe2f0;
  FUN_0176d140();
  *(undefined1 *)(this + 8) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd738 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd700 = FUN_0013de80();
        _DAT_027cd6f8 = "_isCyclic";
        _DAT_027cd708 = 0;
        _DAT_027cd710 = 0x6200;
        _DAT_027cd718 = "bool";
        _DAT_027cd720 = 0;
        uRam00000000027cd728 = 0;
        _DAT_027cd730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0176d220();
  *(undefined4 *)(this + 10) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd7c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd790 = FUN_0013de80();
        _DAT_027cd788 = "_fundamentalIndex";
        _DAT_027cd798 = 0;
        _DAT_027cd7a0 = 0x6900;
        _DAT_027cd7a8 = "GNInt";
        _DAT_027cd7b0 = 0;
        uRam00000000027cd7b8 = 0;
        _DAT_027cd7c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x54) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d300();
    FUN_00e87980();
  }
  this[0xb] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_mode";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeDegree");
  }
  this[0xc] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  *(undefined1 *)(this + 0xd) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd990 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd958 = FUN_0013de80();
        _DAT_027cd950 = "_modeOffsetIsLocked";
        _DAT_027cd960 = 0;
        _DAT_027cd968 = 0x6200;
        _DAT_027cd970 = "bool";
        _DAT_027cd978 = 0;
        uRam00000000027cd980 = 0;
        _DAT_027cd988 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd9d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd9a0 = FUN_0013de80();
        _DAT_027cd998 = "_modeFundamentalOffset";
        _DAT_027cd9a8 = 0;
        _DAT_027cd9b0 = 0x6900;
        _DAT_027cd9b8 = "GNInt";
        _DAT_027cd9c0 = 0;
        uRam00000000027cd9c8 = 0;
        _DAT_027cd9d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0xe) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cda20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd9e8 = FUN_0013de80();
        _DAT_027cd9e0 = "_modeFundamentalFifthsDirection";
        _DAT_027cd9f0 = 0;
        _DAT_027cd9f8 = 0x6900;
        _DAT_027cda00 = "GNInt";
        _DAT_027cda08 = 0;
        uRam00000000027cda10 = 0;
        _DAT_027cda18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01b90da0 (1126 bytes) — calculation
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  longlong arg1;
  longlong *this;
  longlong lVar7;
  longlong local_48;
  char local_40;
  
  plVar1 = (longlong *)*param_2;
  FUN_0013de80();
  if (plVar1 == (longlong *)0x0) {
LAB_01b90de8:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01b90de8;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(arg1 + 0x1f8) == 0) {
LAB_01b90ece:
    bVar3 = false;
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(longlong *)(arg1 + 0x1f8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b90ece;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    if (local_48 == 0) {
      lVar7 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b91500();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01b91091;
    FUN_00d50b00();
LAB_01b90f99:
    FUN_01246780();
    (**(code **)(**(longlong **)(arg1 + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *this = local_48;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
  }
  else {
    if (local_48 != 0) goto LAB_01b90f99;
LAB_01b91091:
    if (lVar7 == 0) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      goto joined_r0x01b91165;
    }
    FUN_01246780();
    (**(code **)(**(longlong **)(arg1 + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *this = local_48;
    *(undefined1 *)(this + 1) = 1;
  }
  if ((bVar3) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01b91165:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b926b0 (909 bytes) — calculation
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *arg1;
  longlong this;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x1f8) == *arg1) {
    return;
  }
  if (*(longlong *)(this + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(longlong *)(this + 0x138) + 0x10))();
    FUN_00d50b00();
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01b927a0;
LAB_01b92792:
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01b92792;
LAB_01b927a0:
      lVar4 = 0;
    }
    FUN_00e8b9a0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((longlong *)(this + 0x138) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(this + 0x138) + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar4 = *arg1;
  lVar1 = *(longlong *)(this + 0x1f8);
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x1f8) = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *(longlong *)(this + 0x1f8);
    }
  }
  if (lVar2 == 0) {
    local_38 = 0;
    local_30 = '\0';
    FUN_01b6d800();
    if (local_30 == '\0') {
      return;
    }
    if (local_38 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*(longlong *)(this + 0x138) + 0x10))();
  FUN_00d50b00();
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      goto joined_r0x01b92927;
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
joined_r0x01b92927:
    if (lVar4 != 0) {
      local_40 = 0;
      FUN_00d50b00();
      goto LAB_01b92939;
    }
  }
  lVar4 = 0;
LAB_01b92939:
  local_40 = '\x01';
  pVar5 = 0x10;
  local_48 = lVar4;
  FUN_00e8b850(0x10,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((longlong *)(this + 0x138) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(this + 0x138) + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_38 = local_88;
  local_30 = '\0';
  FUN_01b6d800();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b91500 (641 bytes) — math_loop
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong arg1;
  longlong *this;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(arg1 + 0x1f8) == 0) {
LAB_01b916e8:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  lVar1 = *(longlong *)(arg1 + 0x1f8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  lVar2 = local_40;
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
  local_38 = '\0';
  local_40 = 0;
  do {
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      param_1 = FUN_00e7bdb0();
      cVar4 = FUN_01252960(param_1,uVar6,&local_40,0);
      if (cVar4 == '\0') {
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01b916e8;
      }
    } while (local_40 == 0);
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    lVar1 = *param_2;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = local_40;
  } while (local_68 != lVar1);
  *(undefined1 *)(this + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      *this = lVar3;
      *(undefined1 *)(this + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b91721;
    }
    *this = 0;
  }
  else {
    *this = local_40;
  }
  *(undefined1 *)(this + 1) = 1;
LAB_01b91721:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @0151f2d0 (519 bytes) — logic_branch
// Known properties of MUScaleModeSequence:
// _isCyclic, _fundamentalIndex, _modeOffsetIsLocked, _modeFundamentalOffset, _modeFundamentalFifthsDirection, _descriptionGrade

{
  int iVar1;
  
  if (DAT_0278c638 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0278c620 = _DAT_0238fcc0;
      uRam000000000278c624 = _UNK_0238fcc4;
      uRam000000000278c628 = _UNK_0238fcc8;
      uRam000000000278c62c = _UNK_0238fccc;
      DAT_0278c630 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0278c670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0278c640 = "MUDescriptionGrade";
      _DAT_0278c648 = 4;
      DAT_0278c64c = DAT_0278c630;
      _DAT_0278c650 = &DAT_0278c620;
      _DAT_0278c658 = &DAT_0278c5f0;
      _DAT_0278c660 = 0;
      uRam000000000278c668 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027c3270 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027be908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027be858 = FUN_010ec850();
          _DAT_027be840 = "MUScaleModeSequence";
          _DAT_027be848 = 0x70;
          _DAT_027be850 = FUN_0124b550;
          _DAT_027be860 = 0;
          uRam00000000027be868 = 0;
          _DAT_027be870 = 0;
          uRam00000000027be878 = 0;
          _DAT_027be880 = 0;
          uRam00000000027be888 = 0;
          _DAT_027be890 = 0;
          uRam00000000027be898 = 0;
          _DAT_027be8a0 = 0;
          uRam00000000027be8a8 = 0;
          _DAT_027be8b0 = 0;
          uRam00000000027be8b8 = 0;
          _DAT_027be8c0 = 0;
          uRam00000000027be8c8 = 0;
          _DAT_027be8d0 = 0;
          uRam00000000027be8d8 = 0;
          _DAT_027be8e0 = 0;
          uRam00000000027be8e8 = 0;
          _DAT_027be8f0 = 0;
          uRam00000000027be8f8 = 0;
          _DAT_027be900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027c3230 = "_descriptionGrade";
      _DAT_027c3238 = &DAT_027be840;
      _DAT_027c3240 = 0;
      _DAT_027c3248 = 0x6500;
      _DAT_027c3250 = "MUDescriptionGrade";
      _DAT_027c3258 = &DAT_0278c640;
      _DAT_027c3260 = 0;
      uRam00000000027c3268 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027c3230;
}



