// Function: FUN_01241e00
// Address: 01241e00
// Size: 2159 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0124263b) */
/* WARNING: Removing unreachable block (ram,0x01242644) */
/* WARNING: Removing unreachable block (ram,0x012423ca) */
/* WARNING: Removing unreachable block (ram,0x012423d6) */
/* WARNING: Removing unreachable block (ram,0x012424b1) */
/* WARNING: Removing unreachable block (ram,0x012424bd) */
/* WARNING: Removing unreachable block (ram,0x0124255e) */
/* WARNING: Removing unreachable block (ram,0x01242567) */

undefined8 * FUN_01241e00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  uint uVar10;
  longlong *local_40;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_010f7230();
  (**(code **)(*plVar1 + 0x18))();
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0079c340();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar2;
  }
  FUN_012401b0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar2;
  }
  FUN_012401f0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  lVar4 = DAT_027be588;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar4 = DAT_027be588, lVar5 != 0)) {
    param_1 = plVar2;
  }
  DAT_027be588 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01240140();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar1;
  }
  FUN_01240950();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    plVar7 = (longlong *)plVar1[10];
    plVar6 = plVar1;
  }
  else {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    plVar7 = (longlong *)plVar6[10];
    param_1 = plVar1;
  }
  if (plVar7 != plVar2) {
    FUN_00d64850();
    plVar7 = (longlong *)plVar6[10];
    if (plVar7 != plVar2) {
      FUN_00d50b00();
      plVar6[10] = (longlong)plVar2;
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[7] = 0;
  *plVar6 = (longlong)&DAT_024cbc70;
  *(undefined4 *)(plVar6 + 8) = 0;
  FUN_00d500e0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar6;
  }
  FUN_0124a800();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  lVar4 = DAT_027be588;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar4 = DAT_027be588, lVar5 != 0)) {
    param_1 = plVar6;
  }
  DAT_027be588 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_012a51c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar1;
  }
  FUN_012407f0();
  local_40 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_40[7] = 0;
  *local_40 = (longlong)&DAT_024cbc70;
  *(undefined4 *)(local_40 + 8) = 0;
  FUN_00d500e0();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar7[7] = 0;
  *plVar7 = (longlong)&DAT_024cbc70;
  *(undefined4 *)(plVar7 + 8) = 0;
  FUN_00d500e0();
  if (local_40 == plVar7) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    local_40 = plVar7;
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = local_40;
  }
  FUN_0124a800();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  lVar4 = DAT_027be590;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar4 = DAT_027be590, lVar5 != 0)) {
    param_1 = local_40;
  }
  DAT_027be590 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_012a51c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar1;
  }
  FUN_01240690();
  if ((unaff_ESI & 0xff) == 0) {
    *unaff_RDI = plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    uVar10 = 0;
    do {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_024cc370;
      puVar8[7] = 0;
      puVar8[8] = 0;
      FUN_00d500e0();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fb40();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
      }
      FUN_01240230();
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_024cc370;
      puVar9[7] = 0;
      puVar9[8] = 0;
      FUN_00d500e0();
      if (puVar8 == puVar9) {
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fb40();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
      }
      FUN_01240230();
      FUN_00d50b20();
      uVar10 = uVar10 + 1;
    } while ((unaff_ESI & 0xff) != uVar10);
    *unaff_RDI = plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_40 == (longlong *)0x0) goto LAB_01242691;
  }
  FUN_00d50b20();
LAB_01242691:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


