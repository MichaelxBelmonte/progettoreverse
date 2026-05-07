// Function: FUN_018c0160
// Address: 018c0160
// Size: 3401 bytes
// Class: GNString
// String references:
//   "GNString"
//   "MUTagBoolAttribute"
//   "MUTagFloatAttribute"
//   "MUTagIntegerAttribute"
//   "MUTagStringAttribute"


/* WARNING: Removing unreachable block (ram,0x018c0276) */
/* WARNING: Removing unreachable block (ram,0x018c03a5) */
/* WARNING: Removing unreachable block (ram,0x018c03b5) */
/* WARNING: Removing unreachable block (ram,0x018c020d) */
/* WARNING: Removing unreachable block (ram,0x018c0219) */
/* WARNING: Removing unreachable block (ram,0x018c0488) */
/* WARNING: Removing unreachable block (ram,0x018c0494) */
/* WARNING: Removing unreachable block (ram,0x018c0b08) */
/* WARNING: Removing unreachable block (ram,0x018c0b14) */
/* WARNING: Removing unreachable block (ram,0x018c03de) */
/* WARNING: Removing unreachable block (ram,0x018c03eb) */
/* WARNING: Removing unreachable block (ram,0x018c0566) */
/* WARNING: Removing unreachable block (ram,0x018c0573) */
/* WARNING: Removing unreachable block (ram,0x018c0280) */
/* WARNING: Removing unreachable block (ram,0x018c02a0) */
/* WARNING: Removing unreachable block (ram,0x018c0282) */
/* WARNING: Removing unreachable block (ram,0x018c02a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c0160(uint param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  pthread_key_t pVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  code *unaff_RSI;
  longlong unaff_RDI;
  float fVar11;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  int local_48;
  longlong *local_38;
  
  if (*(longlong *)(unaff_RDI + 0x40) == 0) {
LAB_018c0338:
    local_a0 = *param_2;
    local_98 = '\0';
    FUN_00d5adf0(param_1 & 0xff,&local_a0,param_3);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  uVar6 = param_1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c28f0();
  local_38 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_38 == (longlong *)0x0) goto LAB_018c0338;
  lVar5 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar5 == 0) {
LAB_018c0406:
    if (*(longlong *)unaff_RSI == 0) {
      if (local_38 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    pvVar3 = _pthread_getspecific(uVar6);
    plVar9 = local_38;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar9 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar9 + 0x368))();
    if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (local_60 != (longlong *)0x0) {
      FUN_018bfc40();
      FUN_00d50b20();
    }
    if (local_38 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00d50b00();
  local_58 = '\0';
  local_60 = (longlong *)0x0;
  local_48 = -1;
  do {
    lVar4 = (longlong)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(lVar5 + 0xc) <= local_48) {
      FUN_01894d60();
      uVar6 = (uint)lVar5;
      FUN_00d50b20();
      goto LAB_018c0406;
    }
    pcVar8 = *(code **)(lVar5 + 0x10);
    local_60 = *(longlong **)(pcVar8 + (lVar4 + 1) * 8);
    pvVar3 = _pthread_getspecific((pthread_key_t)pcVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018220f0();
    plVar9 = local_90;
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  } while (plVar9 != local_38);
  if ((DAT_027b4f58 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027b4ea8 = FUN_011b5ca0();
    _DAT_027b4e90 = "MUTagIntegerAttribute";
    _DAT_027b4e98 = 0xa0;
    pcVar8 = FUN_011bb5f0;
    _DAT_027b4ea0 = FUN_011bb5f0;
    _DAT_027b4eb0 = 0;
    uRam00000000027b4eb8 = 0;
    _DAT_027b4ec0 = 0;
    uRam00000000027b4ec8 = 0;
    _DAT_027b4ed0 = 0;
    uRam00000000027b4ed8 = 0;
    _DAT_027b4ee0 = 0;
    uRam00000000027b4ee8 = 0;
    _DAT_027b4ef0 = 0;
    uRam00000000027b4ef8 = 0;
    _DAT_027b4f00 = 0;
    uRam00000000027b4f08 = 0;
    _DAT_027b4f10 = 0;
    uRam00000000027b4f18 = 0;
    _DAT_027b4f20 = 0;
    uRam00000000027b4f28 = 0;
    _DAT_027b4f30 = 0;
    uRam00000000027b4f38 = 0;
    _DAT_027b4f40 = 0;
    uRam00000000027b4f48 = 0;
    _DAT_027b4f50 = 0;
    ___cxa_guard_release();
  }
  if (local_38 == (longlong *)0x0) {
LAB_018c0515:
    if (DAT_02802688 == (longlong *)0x0) goto LAB_018c05ca;
LAB_018c0587:
    pvVar3 = _pthread_getspecific((pthread_key_t)pcVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_018909b0();
    if (cVar1 != '\0') goto LAB_018c05ca;
    plVar9 = *(longlong **)unaff_RSI;
    if (plVar9 == (longlong *)0x0) goto LAB_018c09b7;
    FUN_00053ac0();
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    pcVar8 = unaff_RSI;
    if (cVar1 == '\0') {
      pcVar8 = (code *)&DAT_02802688;
    }
    if (((*(longlong *)pcVar8 == 0) || (iVar2 = FUN_00d45870(), iVar2 != 0)) ||
       (*(longlong *)unaff_RSI == 0)) goto LAB_018c09b7;
    *(longlong *)unaff_RSI = 0;
    if (unaff_RSI[8] != (code)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*local_38 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_018c0515;
    if (local_38 != (longlong *)0x0) goto LAB_018c0587;
LAB_018c05ca:
    if ((DAT_027b4a60 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_027d45d8 = FUN_011b5ca0();
      _DAT_027d45c0 = "MUTagFloatAttribute";
      _DAT_027d45c8 = 0xa0;
      pcVar8 = FUN_011bac20;
      _DAT_027d45d0 = FUN_011bac20;
      _DAT_027d45e0 = 0;
      uRam00000000027d45e8 = 0;
      _DAT_027d45f0 = 0;
      uRam00000000027d45f8 = 0;
      _DAT_027d4600 = 0;
      uRam00000000027d4608 = 0;
      _DAT_027d4610 = 0;
      uRam00000000027d4618 = 0;
      _DAT_027d4620 = 0;
      uRam00000000027d4628 = 0;
      _DAT_027d4630 = 0;
      uRam00000000027d4638 = 0;
      _DAT_027d4640 = 0;
      uRam00000000027d4648 = 0;
      _DAT_027d4650 = 0;
      uRam00000000027d4658 = 0;
      _DAT_027d4660 = 0;
      uRam00000000027d4668 = 0;
      _DAT_027d4670 = 0;
      uRam00000000027d4678 = 0;
      _DAT_027d4680 = 0;
      ___cxa_guard_release();
    }
    plVar9 = DAT_02802688;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar9 = DAT_02802688;
      if (cVar1 != '\0') {
        plVar9 = local_38;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_018909b0();
      if (cVar1 == '\0') {
        plVar9 = *(longlong **)unaff_RSI;
        if (plVar9 == (longlong *)0x0) goto LAB_018c09b7;
        FUN_00053ac0();
        (**(code **)(*plVar9 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pcVar8 = unaff_RSI;
        if (cVar1 == '\0') {
          pcVar8 = (code *)&DAT_02802688;
        }
        if (*(longlong *)pcVar8 == 0) goto LAB_018c09b7;
        fVar11 = (float)FUN_00d459e0();
        if (((fVar11 != 0.0) || (NAN(fVar11))) || (*(longlong *)unaff_RSI == 0)) goto LAB_018c09b7;
        *(longlong *)unaff_RSI = 0;
        if (unaff_RSI[8] != (code)0x0) {
          FUN_00d50b20();
        }
        goto LAB_018c09b4;
      }
    }
    if ((DAT_027b4938 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_027b4888 = FUN_011b5ca0();
      _DAT_027b4870 = "MUTagBoolAttribute";
      _DAT_027b4878 = 0xa0;
      pcVar8 = FUN_011ba8e0;
      _DAT_027b4880 = FUN_011ba8e0;
      _DAT_027b4890 = 0;
      uRam00000000027b4898 = 0;
      _DAT_027b48a0 = 0;
      uRam00000000027b48a8 = 0;
      _DAT_027b48b0 = 0;
      uRam00000000027b48b8 = 0;
      _DAT_027b48c0 = 0;
      uRam00000000027b48c8 = 0;
      _DAT_027b48d0 = 0;
      uRam00000000027b48d8 = 0;
      _DAT_027b48e0 = 0;
      uRam00000000027b48e8 = 0;
      _DAT_027b48f0 = 0;
      uRam00000000027b48f8 = 0;
      _DAT_027b4900 = 0;
      uRam00000000027b4908 = 0;
      _DAT_027b4910 = 0;
      uRam00000000027b4918 = 0;
      _DAT_027b4920 = 0;
      uRam00000000027b4928 = 0;
      _DAT_027b4930 = 0;
      ___cxa_guard_release();
    }
    plVar9 = DAT_02802688;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar9 = DAT_02802688;
      if (cVar1 != '\0') {
        plVar9 = local_38;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_018909b0();
      if (cVar1 == '\0') {
        plVar9 = *(longlong **)unaff_RSI;
        if (plVar9 == (longlong *)0x0) goto LAB_018c09b7;
        FUN_00053ac0();
        (**(code **)(*plVar9 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pcVar8 = unaff_RSI;
        if (cVar1 == '\0') {
          pcVar8 = (code *)&DAT_02802688;
        }
        if (((*(longlong *)pcVar8 == 0) || (cVar1 = FUN_00d45ad0(), cVar1 != '\0')) ||
           (*(longlong *)unaff_RSI == 0)) goto LAB_018c09b7;
        *(longlong *)unaff_RSI = 0;
        if (unaff_RSI[8] != (code)0x0) {
          FUN_00d50b20();
        }
        goto LAB_018c09b4;
      }
    }
    if ((DAT_027b5970 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_027d4438 = FUN_011b5ca0();
      _DAT_027d4420 = "MUTagStringAttribute";
      _DAT_027d4428 = 0xa8;
      pcVar8 = FUN_011bef70;
      _DAT_027d4430 = FUN_011bef70;
      _DAT_027d4440 = 0;
      uRam00000000027d4448 = 0;
      _DAT_027d4450 = 0;
      uRam00000000027d4458 = 0;
      _DAT_027d4460 = 0;
      uRam00000000027d4468 = 0;
      _DAT_027d4470 = 0;
      uRam00000000027d4478 = 0;
      _DAT_027d4480 = 0;
      uRam00000000027d4488 = 0;
      _DAT_027d4490 = 0;
      uRam00000000027d4498 = 0;
      _DAT_027d44a0 = 0;
      uRam00000000027d44a8 = 0;
      _DAT_027d44b0 = 0;
      uRam00000000027d44b8 = 0;
      _DAT_027d44c0 = 0;
      uRam00000000027d44c8 = 0;
      _DAT_027d44d0 = 0;
      uRam00000000027d44d8 = 0;
      _DAT_027d44e0 = 0;
      ___cxa_guard_release();
    }
    plVar9 = DAT_02802688;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar9 = DAT_02802688;
      if (cVar1 != '\0') {
        plVar9 = local_38;
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_018c09b7;
    pvVar3 = _pthread_getspecific((pthread_key_t)pcVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_018909b0();
    if ((cVar1 != '\0') || (plVar9 = *(longlong **)unaff_RSI, plVar9 == (longlong *)0x0))
    goto LAB_018c09b7;
    if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    pcVar8 = unaff_RSI;
    if (cVar1 == '\0') {
      pcVar8 = (code *)&DAT_02802688;
    }
    if (((*(longlong *)pcVar8 == 0) || (iVar2 = FUN_00d8c7a0(), iVar2 != 0)) ||
       (*(longlong *)unaff_RSI == 0)) goto LAB_018c09b7;
    *(longlong *)unaff_RSI = 0;
    if (unaff_RSI[8] != (code)0x0) {
      FUN_00d50b20();
    }
  }
LAB_018c09b4:
  unaff_RSI[8] = (code)0x0;
LAB_018c09b7:
  pVar7 = (pthread_key_t)pcVar8;
  plVar9 = *(longlong **)unaff_RSI;
  if (plVar9 == (longlong *)0x0) {
    FUN_018bfed0();
  }
  else {
    pvVar3 = _pthread_getspecific(pVar7);
    plVar10 = local_60;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar10 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x368))();
    local_80 = local_90;
    local_78 = 0;
    if (local_88 == '\0') {
      if (local_90 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_78 = '\x01';
    cVar1 = (**(code **)(*plVar9 + 0x50))();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      pvVar3 = _pthread_getspecific(pVar7);
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        local_60 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*local_60 + 0x370))();
    }
  }
  FUN_01894d60();
  FUN_00d50b20();
  if (local_38 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


