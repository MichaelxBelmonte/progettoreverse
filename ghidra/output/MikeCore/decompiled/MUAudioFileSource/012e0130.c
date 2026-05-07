// Function: FUN_012e0130
// Address: 012e0130
// Size: 1004 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x012e01e6) */
/* WARNING: Removing unreachable block (ram,0x012e01ef) */
/* WARNING: Removing unreachable block (ram,0x012e0248) */
/* WARNING: Removing unreachable block (ram,0x012e0251) */

undefined8 * FUN_012e0130(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  char local_40;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025d6300;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x3c) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270710();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270900();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012e030a;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      bVar1 = false;
      bVar9 = false;
      lVar8 = 0;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar8 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar9 = true;
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar9) goto LAB_012e03a2;
  }
  else {
LAB_012e030a:
    lVar8 = 0;
    bVar1 = false;
  }
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar7[8] = 0;
  FUN_00d64910();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012df4e0(0);
LAB_012e03a2:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


