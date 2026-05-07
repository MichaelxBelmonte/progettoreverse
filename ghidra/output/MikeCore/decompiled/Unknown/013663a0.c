// Function: FUN_013663a0
// Address: 013663a0
// Size: 1062 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_013663a0(double param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t in_ECX;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar9;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 local_80 [8];
  undefined1 local_78;
  longlong local_70;
  char local_68;
  uint local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  local_48 = *unaff_RSI;
  local_40 = '\0';
  local_31 = FUN_00d23d70();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    plVar8 = *(longlong **)(unaff_RDI + 0x38);
    local_5c = param_2;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x38);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    dVar9 = (double)(**(code **)(*plVar8 + 0x370))();
    auVar10._8_8_ = _UNK_023945b8 & extraout_XMM0_Qb | _UNK_023945c8;
    auVar10._0_8_ =
         (double)(_DAT_023945b0 & (ulonglong)(dVar9 * param_1) | _DAT_023945c0) + dVar9 * param_1;
    auVar10 = roundsd(ZEXT816(0),auVar10,0xb);
    plVar8 = (longlong *)*unaff_RSI;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = (longlong *)*unaff_RSI;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    lVar4 = (**(code **)(*plVar8 + 0x380))();
    plVar8 = (longlong *)*unaff_RSI;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = (longlong *)*unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    lVar5 = (**(code **)(*plVar8 + 0x388))();
    plVar8 = *(longlong **)(unaff_RDI + 0x38);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x38);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    lVar6 = (**(code **)(*plVar8 + 0x378))();
    if (lVar6 <= lVar5 + lVar4 + (longlong)auVar10._0_8_) {
      plVar8 = *(longlong **)(unaff_RDI + 0x38);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        plVar8 = *(longlong **)(unaff_RDI + 0x38);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar8 + 0x378))();
      plVar8 = (longlong *)*unaff_RSI;
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        plVar8 = (longlong *)*unaff_RSI;
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar8 + 0x388))();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bb250();
    local_70 = *unaff_RSI;
    local_68 = '\0';
    FUN_0135dd30();
    lVar4 = local_58;
    uVar2 = local_5c;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_78 = 1;
    FUN_01355320(uVar2 & 0xff,local_80,1);
    lVar5 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*DAT_02572370)();
      puVar1 = *(undefined8 **)(unaff_RDI + 0x1c0);
      if (puVar1 == puVar7) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x1c0) = puVar7;
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = lVar6;
        FUN_00d235a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar5 + 0xc));
    }
    FUN_00d50b20();
  }
  return local_31;
}


