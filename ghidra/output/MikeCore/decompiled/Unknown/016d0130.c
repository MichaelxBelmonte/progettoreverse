// Function: FUN_016d0130
// Address: 016d0130
// Size: 871 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016d043e) */
/* WARNING: Removing unreachable block (ram,0x016d0447) */
/* WARNING: Removing unreachable block (ram,0x016d01aa) */
/* WARNING: Removing unreachable block (ram,0x016d01b3) */

undefined8 * FUN_016d0130(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 *unaff_RDI;
  longlong lVar8;
  int iStack_54;
  longlong local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01909dc0();
  FUN_016ebbb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_016d023d;
    }
  }
  else if (local_40 != 0) {
LAB_016d023d:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    bVar2 = false;
    iStack_54 = extraout_var_00;
    goto LAB_016d02ec;
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_40 + 0x10));
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  FUN_00e7c260();
  bVar2 = true;
  iStack_54 = extraout_var_01;
LAB_016d02ec:
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &DAT_02572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar8 = 0;
    do {
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_019079b0();
      if (((uVar6 >> 0x20 != 0) && (iStack_54 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
      break;
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_019079b0();
      if (((uVar6 >> 0x20 != 0) && (extraout_var != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
      {
        lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar8 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_40 + 0xc));
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


