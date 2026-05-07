// ===== MUDetectionBaseInsp — Annotated small functions =====
// 4 readable functions

// ==================================================
// @01bfdce0 (741 bytes) — logic_branch

{
  int iVar1;
  
  if (DAT_028b61c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02731fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02731f10 = FUN_00335590();
          _DAT_02731ef8 = "MUDetectionBaseInsp";
          _DAT_02731f00 = 0xe0;
          _DAT_02731f08 = FUN_00825660;
          _DAT_02731f18 = 0;
          uRam0000000002731f20 = 0;
          _DAT_02731f28 = 0;
          _DAT_02731fa0 = 0;
          uRam0000000002731fa8 = 0;
          _DAT_02731fb0 = 0;
          DAT_02731fb2 = 1;
          _DAT_02731f30 = 0;
          uRam0000000002731f38 = 0;
          _DAT_02731f40 = 0;
          uRam0000000002731f48 = 0;
          _DAT_02731f50 = 0;
          uRam0000000002731f58 = 0;
          _DAT_02731f60 = 0;
          uRam0000000002731f68 = 0;
          _DAT_02731f70 = 0;
          uRam0000000002731f78 = 0;
          _DAT_02731f80 = 0;
          uRam0000000002731f88 = 0;
          _DAT_02731f90 = 0;
          uRam0000000002731f98 = 0;
          DAT_02731fbb = 0;
          _DAT_02731fb3 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b6180 = "handleBlendSpectrum";
      _DAT_028b6188 = &DAT_02731ef8;
      _DAT_028b6190 = 0;
      _DAT_028b6198 = &DAT_027e8888;
      _DAT_028b61a0 = FUN_01bfea10;
      _DAT_028b61a8 = FUN_01bfe630;
      _DAT_028b61b0 = 0;
      uRam00000000028b61b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b6208 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02731fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02731f10 = FUN_00335590();
          _DAT_02731ef8 = "MUDetectionBaseInsp";
          _DAT_02731f00 = 0xe0;
          _DAT_02731f08 = FUN_00825660;
          _DAT_02731f18 = 0;
          uRam0000000002731f20 = 0;
          _DAT_02731f28 = 0;
          _DAT_02731fa0 = 0;
          uRam0000000002731fa8 = 0;
          _DAT_02731fb0 = 0;
          DAT_02731fb2 = 1;
          _DAT_02731f30 = 0;
          uRam0000000002731f38 = 0;
          _DAT_02731f40 = 0;
          uRam0000000002731f48 = 0;
          _DAT_02731f50 = 0;
          uRam0000000002731f58 = 0;
          _DAT_02731f60 = 0;
          uRam0000000002731f68 = 0;
          _DAT_02731f70 = 0;
          uRam0000000002731f78 = 0;
          _DAT_02731f80 = 0;
          uRam0000000002731f88 = 0;
          _DAT_02731f90 = 0;
          uRam0000000002731f98 = 0;
          DAT_02731fbb = 0;
          _DAT_02731fb3 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b61c8 = "handlePatchTempo";
      _DAT_028b61d0 = &DAT_02731ef8;
      _DAT_028b61d8 = 0;
      _DAT_028b61e0 = &DAT_027e8888;
      _DAT_028b61e8 = FUN_01bfea10;
      _DAT_028b61f0 = FUN_01bfe550;
      _DAT_028b61f8 = 0;
      uRam00000000028b6200 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @01bfebb0 (678 bytes) — calculation

{
  void *pvVar1;
  longlong this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_01bfe010();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != 0) && (*(longlong *)(this + 0xe8) != 0)) {
    FUN_01bfe010();
    (**(code **)(&UNK_00001668 + *local_40))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_01bfe010();
      (**(code **)(&UNK_00001668 + *local_40))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar2 = (float)FUN_0132da20();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01bfe010();
      (**(code **)(&UNK_00001668 + *local_40))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar3 = (float)FUN_0132da70();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01bfe010();
      fVar4 = (float)FUN_01940ca0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (fVar2 <= fVar3) {
        fVar6 = fVar3 - fVar2;
        fVar3 = DAT_0239011c / (DAT_02390124 - fVar2);
        fVar5 = DAT_0239011c;
      }
      else {
        fVar6 = DAT_0239011c / fVar2;
        fVar5 = DAT_02390124;
      }
      if (fVar2 <= fVar4) {
        fVar7 = fVar4 - fVar2;
        fVar4 = DAT_0239011c / (DAT_02390124 - fVar2);
        fVar2 = DAT_0239011c;
      }
      else {
        fVar7 = DAT_0239011c / fVar2;
        fVar2 = DAT_02390124;
      }
      (**(code **)(**(longlong **)(this + 0xe8) + 0x928))(fVar5 - fVar3 * fVar6);
      FUN_01b8e060(fVar2 - fVar4 * fVar7);
    }
  }
  FUN_01bfe330();
  return;
}




// ==================================================
// @01bfef80 (587 bytes) — calculation

{
  int iVar1;
  void *pvVar2;
  longlong this;
  longlong *local_68;
  char local_60;
  longlong local_30;
  char local_28;
  
  if (param_2 != 0) {
    (**(code **)(**(longlong **)(this + 0xe8) + 0x930))();
    FUN_01b8e080();
    FUN_01bfe010();
    (**(code **)(&UNK_00001668 + *local_68))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132da20();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = FUN_01caecd0();
    if (iVar1 != 1) {
      iVar1 = FUN_01caecd0();
      if (iVar1 == 2) {
        FUN_01bfe010();
        FUN_01940b70();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01bfe010();
        FUN_01940c40();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return 1;
}




// ==================================================
// @0080bf20 (573 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_30;
  longlong local_28;
  
  if ((DAT_02731fc0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02731f10 = FUN_00335590();
    _DAT_02731ef8 = "MUDetectionBaseInsp";
    _DAT_02731f00 = 0xe0;
    _DAT_02731f08 = FUN_00825660;
    _DAT_02731f18 = 0;
    uRam0000000002731f20 = 0;
    _DAT_02731f28 = 0;
    _DAT_02731fa0 = 0;
    uRam0000000002731fa8 = 0;
    _DAT_02731fb0 = 0;
    DAT_02731fb2 = 1;
    _DAT_02731f30 = 0;
    uRam0000000002731f38 = 0;
    _DAT_02731f40 = 0;
    uRam0000000002731f48 = 0;
    _DAT_02731f50 = 0;
    uRam0000000002731f58 = 0;
    _DAT_02731f60 = 0;
    uRam0000000002731f68 = 0;
    _DAT_02731f70 = 0;
    uRam0000000002731f78 = 0;
    _DAT_02731f80 = 0;
    uRam0000000002731f88 = 0;
    _DAT_02731f90 = 0;
    uRam0000000002731f98 = 0;
    DAT_02731fbb = 0;
    _DAT_02731fb3 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02731fb3 == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    FUN_00825bb0();
    FUN_00825ee0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01bfdce0();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}



