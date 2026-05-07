// Function: FUN_01671da0
// Address: 01671da0
// Size: 1176 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x016720b5) */
/* WARNING: Removing unreachable block (ram,0x016720c1) */
/* WARNING: Removing unreachable block (ram,0x016721a3) */
/* WARNING: Removing unreachable block (ram,0x016721ac) */
/* WARNING: Removing unreachable block (ram,0x016720cf) */
/* WARNING: Removing unreachable block (ram,0x016720df) */

longlong * FUN_01671da0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong local_60;
  char local_58;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_01676840();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_0170f680();
  pvVar5 = _pthread_getspecific(param_1);
  plVar7 = plVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(plVar7 + 8) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f570();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = plVar4[9];
    plVar7 = plVar4;
  }
  else {
    plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = plVar7[9];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01671ee1;
      }
      FUN_00d50b00();
      lVar1 = plVar7[9];
      plVar7[9] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01671ee1:
      plVar7[9] = lVar8;
      lVar1 = lVar6;
      lVar6 = lVar8;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f6e0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = plVar4[10];
    plVar7 = plVar4;
  }
  else {
    plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = plVar7[10];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01671fc0;
      }
      FUN_00d50b00();
      lVar1 = plVar7[10];
      plVar7[10] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01671fc0:
      plVar7[10] = lVar8;
      lVar1 = lVar6;
    }
    lVar6 = lVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *unaff_RSI;
  if (lVar6 == 0) {
LAB_01672124:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_016777f0();
        goto LAB_01672124;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_016723c0();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_016777f0();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)(int)lVar8 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        iVar3 = FUN_016723c0();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          FUN_016777f0();
          goto joined_r0x01672237;
        }
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_016777f0();
    }
  }
joined_r0x01672237:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


