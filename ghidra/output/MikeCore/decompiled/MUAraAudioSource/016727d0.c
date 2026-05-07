// Function: FUN_016727d0
// Address: 016727d0
// Size: 1209 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x01672b05) */
/* WARNING: Removing unreachable block (ram,0x01672b11) */
/* WARNING: Removing unreachable block (ram,0x01672bf3) */
/* WARNING: Removing unreachable block (ram,0x01672bfc) */
/* WARNING: Removing unreachable block (ram,0x01672b1f) */
/* WARNING: Removing unreachable block (ram,0x01672b2f) */

longlong * FUN_016727d0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  longlong local_60;
  char local_58;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025f82c0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_012c8fb0();
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(puVar7 + 7) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[8];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[8];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672932;
      }
      FUN_00d50b00();
      lVar1 = puVar7[8];
      puVar7[8] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01672932:
      puVar7[8] = lVar8;
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
  FUN_012c8fc0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[9];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[9];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672a11;
      }
      FUN_00d50b00();
      lVar1 = puVar7[9];
      puVar7[9] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01672a11:
      puVar7[9] = lVar8;
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
LAB_01672b74:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_01677860();
        goto LAB_01672b74;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_01672e10();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_01677860();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)(int)lVar8 * 8);
        uVar2 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          uVar2 = FUN_00d50b00();
        }
        iVar3 = FUN_01672e10(uVar2,0);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          FUN_01677860();
          goto joined_r0x01672c87;
        }
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_01677860();
    }
  }
joined_r0x01672c87:
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


