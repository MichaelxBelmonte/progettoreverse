// ===== MUPerformanceRenderer — Annotated small functions =====
// 4 readable functions
// Known properties: 2
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode

// ==================================================
// @00318bb0 (850 bytes) — calculation
// Known properties of MUPerformanceRenderer:
// _slaveTrackEndFadeMode, _slaveTrackStartFadeMode

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *this;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_58;
  char local_50;
  
  if (this[0xd] == 0) {
    return;
  }
  FUN_003187b0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00318ce5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
LAB_00318ce5:
    bVar2 = true;
    bVar1 = true;
    lVar5 = this[0xd];
    goto joined_r0x00318cef;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = this[0xd];
  }
  else {
    lVar5 = this[0xd];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_016ccf50();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    dVar6 = (double)(**(code **)(*this + 0x3b0))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar6);
    dVar7 = (double)FUN_016c26c0();
    dVar8 = (double)(**(code **)(*this + 0x408))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar8);
    dVar9 = (double)FUN_016c26c0();
    dVar10 = (double)(**(code **)(*this + 0x418))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c25f0(dVar10);
    dVar11 = (double)FUN_016c26c0();
    if ((dVar6 != dVar7) || (NAN(dVar6) || NAN(dVar7))) {
      (**(code **)(*this + 0x3a8))(dVar7);
    }
    if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) {
      if ((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) goto LAB_00318ecd;
    }
    (**(code **)(*this + 0x428))(dVar9,dVar11);
  }
LAB_00318ecd:
  bVar2 = false;
  bVar1 = false;
  lVar5 = this[0xd];
joined_r0x00318cef:
  if (lVar5 != 0) {
    this[0xd] = 0;
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0130f200 (733 bytes) — math_loop
// Known properties of MUPerformanceRenderer:
// _slaveTrackEndFadeMode, _slaveTrackStartFadeMode

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong this;
  undefined8 unaff_R13;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (*(char *)(this + 0x16a) != '\0') goto LAB_0130f371;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_0126cd60();
  if (cVar1 != '\0') goto LAB_0130f371;
  plVar5 = *(longlong **)(this + 0xa0);
  if ((DAT_027ab028 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027aaf78 = FUN_010f2dd0();
    _DAT_027aaf60 = "MUPerformanceRenderer";
    _DAT_027aaf68 = 0x218;
    _DAT_027aaf70 = FUN_0118be20;
    _DAT_027aaf80 = 0;
    uRam00000000027aaf88 = 0;
    _DAT_027aaf90 = 0;
    uRam00000000027aaf98 = 0;
    _DAT_027aafa0 = 0;
    uRam00000000027aafa8 = 0;
    _DAT_027aafb0 = 0;
    uRam00000000027aafb8 = 0;
    _DAT_027aafc0 = 0;
    uRam00000000027aafc8 = 0;
    _DAT_027aafd0 = 0;
    uRam00000000027aafd8 = 0;
    _DAT_027aafe0 = 0;
    uRam00000000027aafe8 = 0;
    _DAT_027aaff0 = 0;
    uRam00000000027aaff8 = 0;
    _DAT_027ab000 = 0;
    uRam00000000027ab008 = 0;
    _DAT_027ab010 = 0;
    uRam00000000027ab018 = 0;
    _DAT_027ab020 = 0;
    ___cxa_guard_release();
  }
  plVar7 = (longlong *)(this + 0xa0);
  if (plVar5 == (longlong *)0x0) {
LAB_0130f2af:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar5 = plVar7;
    if (cVar1 == '\0') goto LAB_0130f2af;
  }
  if (*plVar5 != 0) {
    FUN_00d50b00();
    uVar2 = FUN_012da350();
    uVar6 = (ulonglong)uVar2;
    FUN_00d50b20();
    goto LAB_0130f371;
  }
  plVar5 = (longlong *)*plVar7;
  if ((DAT_027b87a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027b86f8 = FUN_010f2dd0();
    _DAT_027b86e0 = "MUTrackRenderer";
    _DAT_027b86e8 = 0x180;
    _DAT_027b86f0 = FUN_011ce1c0;
    _DAT_027b8700 = 0;
    uRam00000000027b8708 = 0;
    _DAT_027b8710 = 0;
    uRam00000000027b8718 = 0;
    _DAT_027b8720 = 0;
    uRam00000000027b8728 = 0;
    _DAT_027b8730 = 0;
    uRam00000000027b8738 = 0;
    _DAT_027b8740 = 0;
    uRam00000000027b8748 = 0;
    _DAT_027b8750 = 0;
    uRam00000000027b8758 = 0;
    _DAT_027b8760 = 0;
    uRam00000000027b8768 = 0;
    _DAT_027b8770 = 0;
    uRam00000000027b8778 = 0;
    _DAT_027b8780 = 0;
    uRam00000000027b8788 = 0;
    _DAT_027b8790 = 0;
    uRam00000000027b8798 = 0;
    _DAT_027b87a0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_0130f333:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0130f333;
  }
  if (*plVar7 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_00d50b00();
    uVar2 = FUN_0130f200();
    uVar6 = (ulonglong)uVar2;
    FUN_00d50b20();
  }
LAB_0130f371:
  return uVar6 & 0xffffffff;
}




// ==================================================
// @01190a80 (532 bytes) — logic_branch
// Known properties of MUPerformanceRenderer:
// _slaveTrackEndFadeMode, _slaveTrackStartFadeMode

{
  int iVar1;
  
  if (DAT_027ab620 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ab610 = 0x100000000;
      _DAT_027ab618 = 2;
      DAT_027ab61c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ab658 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ab628 = "MUSlaveTrackStartAndEndFadeMode";
      _DAT_027ab630 = 3;
      DAT_027ab634 = DAT_027ab61c;
      _DAT_027ab638 = &DAT_027ab610;
      _DAT_027ab640 = &DAT_027ab5f0;
      _DAT_027ab648 = 0;
      uRam00000000027ab650 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027ab5e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027ab028 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027aaf78 = FUN_010f2dd0();
          _DAT_027aaf60 = "MUPerformanceRenderer";
          _DAT_027aaf68 = 0x218;
          _DAT_027aaf70 = FUN_0118be20;
          _DAT_027aaf80 = 0;
          uRam00000000027aaf88 = 0;
          _DAT_027aaf90 = 0;
          uRam00000000027aaf98 = 0;
          _DAT_027aafa0 = 0;
          uRam00000000027aafa8 = 0;
          _DAT_027aafb0 = 0;
          uRam00000000027aafb8 = 0;
          _DAT_027aafc0 = 0;
          uRam00000000027aafc8 = 0;
          _DAT_027aafd0 = 0;
          uRam00000000027aafd8 = 0;
          _DAT_027aafe0 = 0;
          uRam00000000027aafe8 = 0;
          _DAT_027aaff0 = 0;
          uRam00000000027aaff8 = 0;
          _DAT_027ab000 = 0;
          uRam00000000027ab008 = 0;
          _DAT_027ab010 = 0;
          uRam00000000027ab018 = 0;
          _DAT_027ab020 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027ab5a8 = "_slaveTrackStartFadeMode";
      _DAT_027ab5b0 = &DAT_027aaf60;
      _DAT_027ab5b8 = 0;
      _DAT_027ab5c0 = 0x6500;
      _DAT_027ab5c8 = "MUSlaveTrackStartAndEndFadeMode";
      _DAT_027ab5d0 = &DAT_027ab628;
      _DAT_027ab5d8 = 0;
      uRam00000000027ab5e0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027ab5a8;
}




// ==================================================
// @01190cc0 (532 bytes) — logic_branch
// Known properties of MUPerformanceRenderer:
// _slaveTrackEndFadeMode, _slaveTrackStartFadeMode

{
  int iVar1;
  
  if (DAT_027ab620 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ab610 = 0x100000000;
      _DAT_027ab618 = 2;
      DAT_027ab61c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ab658 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ab628 = "MUSlaveTrackStartAndEndFadeMode";
      _DAT_027ab630 = 3;
      DAT_027ab634 = DAT_027ab61c;
      _DAT_027ab638 = &DAT_027ab610;
      _DAT_027ab640 = &DAT_027ab5f0;
      _DAT_027ab648 = 0;
      uRam00000000027ab650 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027ab6a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027ab028 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027aaf78 = FUN_010f2dd0();
          _DAT_027aaf60 = "MUPerformanceRenderer";
          _DAT_027aaf68 = 0x218;
          _DAT_027aaf70 = FUN_0118be20;
          _DAT_027aaf80 = 0;
          uRam00000000027aaf88 = 0;
          _DAT_027aaf90 = 0;
          uRam00000000027aaf98 = 0;
          _DAT_027aafa0 = 0;
          uRam00000000027aafa8 = 0;
          _DAT_027aafb0 = 0;
          uRam00000000027aafb8 = 0;
          _DAT_027aafc0 = 0;
          uRam00000000027aafc8 = 0;
          _DAT_027aafd0 = 0;
          uRam00000000027aafd8 = 0;
          _DAT_027aafe0 = 0;
          uRam00000000027aafe8 = 0;
          _DAT_027aaff0 = 0;
          uRam00000000027aaff8 = 0;
          _DAT_027ab000 = 0;
          uRam00000000027ab008 = 0;
          _DAT_027ab010 = 0;
          uRam00000000027ab018 = 0;
          _DAT_027ab020 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027ab660 = "_slaveTrackEndFadeMode";
      _DAT_027ab668 = &DAT_027aaf60;
      _DAT_027ab670 = 0;
      _DAT_027ab678 = 0x6500;
      _DAT_027ab680 = "MUSlaveTrackStartAndEndFadeMode";
      _DAT_027ab688 = &DAT_027ab628;
      _DAT_027ab690 = 0;
      uRam00000000027ab698 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027ab660;
}



