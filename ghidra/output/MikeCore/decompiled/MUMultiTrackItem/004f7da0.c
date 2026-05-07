// Function: FUN_004f7da0
// Address: 004f7da0
// Size: 1253 bytes
// Class: MUMultiTrackItem


/* WARNING: Removing unreachable block (ram,0x004f7e9d) */
/* WARNING: Removing unreachable block (ram,0x004f7ea6) */

void FUN_004f7da0(pthread_key_t param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_024ff098;
  puVar2[7] = 0;
  *(undefined2 *)(puVar2 + 8) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  FUN_00d500e0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f4ba0();
  lVar4 = DAT_02708bf0;
  if (DAT_02708bf0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_40 = lVar4;
  local_38 = '\0';
  FUN_00ca0840(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  puVar5 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f49e0();
  if (*(char *)(puVar5 + 8) != cVar1) {
    if ((*(char *)(puVar5 + 8) == '\0') && (*(char *)((longlong)puVar5 + 0x41) != '\0')) {
      FUN_00d64850();
      *(undefined1 *)((longlong)puVar5 + 0x41) = 0;
      FUN_00d64910();
      FUN_004f7ad0();
    }
    FUN_00d64850();
    *(char *)(puVar5 + 8) = cVar1;
    FUN_00d64910();
    FUN_004f7ad0();
  }
  pvVar3 = _pthread_getspecific(param_1);
  puVar5 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f49f0();
  if (*(char *)((longlong)puVar5 + 0x41) != cVar1) {
    if ((*(char *)((longlong)puVar5 + 0x41) == '\0') && (*(char *)(puVar5 + 8) != '\0')) {
      FUN_00d64850();
      *(undefined1 *)(puVar5 + 8) = 0;
      FUN_00d64910();
      FUN_004f7ad0();
    }
    FUN_00d64850();
    *(char *)((longlong)puVar5 + 0x41) = cVar1;
    FUN_00d64910();
    FUN_004f7ad0();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      puVar5 = puVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_012a46e0();
      if ((*(float *)((longlong)puVar5 + 0x44) != fVar7) ||
         (NAN(*(float *)((longlong)puVar5 + 0x44)) || NAN(fVar7))) {
        FUN_00d64850();
        *(float *)((longlong)puVar5 + 0x44) = fVar7;
        FUN_00d64910();
        FUN_004f7ad0();
      }
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


